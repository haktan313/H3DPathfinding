

#include "H3DVolume.h"
#include "Components/BoxComponent.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/PlayerState.h"
#include "H3DPathCore.h"
#include "HDynamicObject.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "CollisionQueryParams.h"
#include "CollisionShape.h"
#include "Engine/EngineTypes.h"


#if WITH_EDITOR
#include "Editor.h"
#include "EditorViewportClient.h"
#include "LevelEditorViewport.h"
#include "Misc/ScopedSlowTask.h"
#endif

AH3DVolume::AH3DVolume()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	
	VolumeBox = CreateDefaultSubobject<UBoxComponent>(TEXT("H3DVolume"));
	RootComponent = VolumeBox;
	VolumeBox->SetBoxExtent(FVector(CellSize / 2));
	VolumeBox->SetLineThickness(VolumeThickness);
}

void AH3DVolume::BeginPlay()
{
	Super::BeginPlay();
	PathCore = AH3DPathCore::GetInstance(GetWorld());
	if (bDynamicObjectsFound)
		StartUpdateDynamicObjects();
}

void AH3DVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (bDrawSelectedActorsDebugGrids)
		DebugDrawGridsFromSelectedActors();
	if (GetWorld()->IsPlayInEditor() && bDrawDebugFromPlayer)
		DebugDrawGridsFromPlayer();
#if WITH_EDITOR
	if (bDrawCameraDebugGridsOnEditor)
		DebugGridsCameraOnEditor();
#endif
}


//---------------------------------------------------------------- Debug Draw Functions


void AH3DVolume::DebugDrawGridsFromSelectedActors()
{
	if (DebugActors.Num() == 0)
		return;
	for (auto& actor : DebugActors)
	{
		if (actor.Key == nullptr)
			continue;
		DrawBox(false,-1.0f,1.0f,actor.Key->GetActorLocation(),actor.Value,FColor::Green,FColor::Red);
	}
}

void AH3DVolume::DebugDrawGridsFromPlayer()
{
	for (const auto& player: GetWorld()->GetGameState()->PlayerArray)
	{
		if (player->GetPawn() == nullptr)
			continue;
		DrawBox(false,-1.0f,1.0f,player->GetPawn()->GetActorLocation(),PlayersDrawDistance,FColor::Green,FColor::Red);
	}
}

void AH3DVolume::DebugGridsCameraOnEditor()
{
#if WITH_EDITOR
	FVector editorCameraLocation = GCurrentLevelEditingViewportClient->GetViewLocation();
	DrawBox(false,-1.0f,1.0f,editorCameraLocation,CameraDrawDistance,FColor::Green,FColor::Red);
#endif
}

void AH3DVolume::DrawBox(bool bPersistLines, float LifeTime, float Thickness, FVector from, float tolerance, FColor freeColor, FColor occupiedColor)
{
	for (auto& gridID : AllGridsMap)
	{
		if (FVector::Dist(from, gridID.Value.GridPosition) > tolerance)
			continue;
		DrawDebugBox(GetWorld(),
			gridID.Value.GridPosition,FVector(CellSize / 2), gridID.Value.bIsFree ? freeColor : occupiedColor,
			bPersistLines, LifeTime, 0, Thickness);
	}
}


//---------------------------------------------------------------- Grid Functions


void AH3DVolume::PrepareForDividing()
{
	AllGridsMap.Empty();
	AllGridsMapByPosition.Empty();
	predictedGridOfDynamicObjects.Empty();
	DynamicActorsLastBounds.Empty();
	DynamicObjects.Empty();
	DynamicObjectsLastPosition.Empty();
	GetWorld()->GetTimerManager().ClearTimer(DynamicObjectsCheckTimerHandle);
	FlushPersistentDebugLines(GetWorld());

	BoxExtent = VolumeBox->GetScaledBoxExtent();
	OriginOfVolume = GetActorLocation();

	CellsAtX = FMath::FloorToInt(BoxExtent.X * 2 / CellSize);
	CellsAtY = FMath::FloorToInt(BoxExtent.Y * 2 / CellSize);
	CellsAtZ = FMath::FloorToInt(BoxExtent.Z * 2 / CellSize);
	TotalCells = CellsAtX * CellsAtY * CellsAtZ;
	AllGridsMap.Reserve(TotalCells);
}

void AH3DVolume::DivideVolumeIntoGrids()
{
	PrepareForDividing();
	bDynamicObjectsFound = false;

#if WITH_EDITOR
	FScopedSlowTask slowTask(TotalCells, FText::FromString("Generating Grids..."));
	slowTask.MakeDialog();
#endif
	
	for (int X = 0; X < CellsAtX; X++)
	{
		for (int Y = 0; Y < CellsAtY; Y++)
		{
			for (int Z = 0; Z < CellsAtZ; Z++)
			{
#if WITH_EDITOR
				if (slowTask.ShouldCancel())
					return;
#endif
				FVector cellPosition = GetActorLocation() + FVector(
					(X * CellSize) - BoxExtent.X + CellSize / 2,
					(Y * CellSize) - BoxExtent.Y + CellSize / 2,
					(Z * CellSize) - BoxExtent.Z + CellSize / 2);
				
				FHitResult hitResult;
				FCollisionQueryParams collisionQueryParams;
				collisionQueryParams.AddIgnoredActor(this);
				bool bHit = GetWorld()->SweepSingleByChannel(
					hitResult,
					cellPosition,
					cellPosition,
					FQuat::Identity,
					GetCollisionChannel(),
					FCollisionShape::MakeBox(FVector(CellSize / 2)),
					collisionQueryParams
				);
				SetNewGrid(cellPosition, bHit);
#if WITH_EDITOR
				slowTask.EnterProgressFrame(1);
#endif
				if (bHit && hitResult.GetActor()->FindComponentByClass<UHDynamicObject>() && !DynamicObjects.Contains(hitResult.GetActor()))
				{
					SaveDynamicObjectsData(hitResult.GetActor());
					if (!GetWorld()->GetTimerManager().IsTimerActive(DynamicObjectsCheckTimerHandle))
						bDynamicObjectsFound = true;
				}
			}
		}
	}
	if (bDynamicObjectsFound)
		StartUpdateDynamicObjects();
}

//---------------------------------------------------------------- Helpers

FPathfindingGrid* AH3DVolume::GetGridFromID(const int gridID)
{
	return AllGridsMap.Find(gridID);
}

int AH3DVolume::GetGridIDFromPosition(const FVector& Position) const
{
	int xIndex = FMath::FloorToInt((Position.X - OriginOfVolume.X + BoxExtent.X) / CellSize);
	int yIndex = FMath::FloorToInt((Position.Y - OriginOfVolume.Y + BoxExtent.Y) / CellSize);
	int zIndex = FMath::FloorToInt((Position.Z - OriginOfVolume.Z + BoxExtent.Z) / CellSize);
    
	if (xIndex < 0 || xIndex >= CellsAtX ||
		yIndex < 0 || yIndex >= CellsAtY ||
		zIndex < 0 || zIndex >= CellsAtZ)
	{
		return -1;
	}

	FVector cellLeftBottomCorner = OriginOfVolume + FVector(
	   (xIndex * CellSize) - BoxExtent.X,
	   (yIndex * CellSize) - BoxExtent.Y,
	   (zIndex * CellSize) - BoxExtent.Z);
    
	FVector cellRightTopCorner = cellLeftBottomCorner + FVector(CellSize, CellSize, CellSize);

	if (Position.X >= cellLeftBottomCorner.X && Position.X <= cellRightTopCorner.X &&
	Position.Y >= cellLeftBottomCorner.Y && Position.Y <= cellRightTopCorner.Y &&
	Position.Z >= cellLeftBottomCorner.Z && Position.Z <= cellRightTopCorner.Z)
	{
		FVector cellPosition = OriginOfVolume + FVector(
			(xIndex * CellSize) - BoxExtent.X + CellSize / 2,
			(yIndex * CellSize) - BoxExtent.Y + CellSize / 2,
			(zIndex * CellSize) - BoxExtent.Z + CellSize / 2);
		if (const int* GridPtr = AllGridsMapByPosition.Find(cellPosition))
			return *GridPtr;
	}
	return -1;
}

void AH3DVolume::SetCellsDepandsOnDynamicObjectMovement(const FVector& ObjectBoxExtent, const FVector& CurrentLocation, bool bSetFree, UWorld* World, AActor* IgnoreActor)
{
	TArray<FVector> hitLocations;
	SetCellsFromNewPositionOfDynamicObject(CurrentLocation, ObjectBoxExtent, hitLocations);
	if (hitLocations.Num() <= 0)
		return;
	for (const FVector& hitLocation : hitLocations)
	{
		int gridID = GetGridIDFromPosition(hitLocation);
		if (gridID <= 0)
			continue;
		FPathfindingGrid* grid = AllGridsMap.Find(gridID);
		if (grid == nullptr)
			continue;

		//Ensure the cell is still occupied by a dynamic object before marking it as free
		FHitResult hitResult;
		FCollisionQueryParams collisionQueryParams;
		collisionQueryParams.AddIgnoredActor(this);
		if (IgnoreActor)
			collisionQueryParams.AddIgnoredActor(IgnoreActor);
		bool bHit = World->SweepSingleByChannel(
			hitResult,
			hitLocation,
			hitLocation,
			FQuat::Identity,
			GetCollisionChannel(),
			FCollisionShape::MakeBox(FVector(CellSize / 2)),
			collisionQueryParams
		);
		if (!bSetFree)
		{
			if (bHit && hitResult.GetActor()->FindComponentByClass<UHDynamicObject>())
			{
				grid->bIsFree = bSetFree;
			}
		}
		else
		{
			if (!bHit)
			{
				grid->bIsFree = bSetFree;
			}
		}
	}
}

void AH3DVolume::SetCellsDepandsOnVelocityOfDynamicObject(const FVector& ObjectBoxExtent,
	const FVector& CurrentLocation, const FVector& Velocity, AActor* DynamicObject)
{
	if (Velocity.Size() <= 0.f)
		return;
	TArray<FVector> hitLocations;
	FVector direction = Velocity.GetSafeNormal();
	FVector newPosition = CurrentLocation + direction * Velocity.Size() * 0.1f;
	SetCellsFromNewPositionOfDynamicObject(newPosition, ObjectBoxExtent, hitLocations);
	if (hitLocations.Num() <= 0)
		return;
	TArray<int32>& idList = predictedGridOfDynamicObjects.FindOrAdd(DynamicObject);
	for (const FVector& hitLocation : hitLocations)
	{
		int gridID = GetGridIDFromPosition(hitLocation);
		if (gridID <= 0)
			continue;
		FPathfindingGrid* grid = AllGridsMap.Find(gridID);
		if (grid == nullptr)
			continue;
		grid->bIsFree = false;
		idList.AddUnique(gridID);
	}
}

void AH3DVolume::SetNewGrid(const FVector& Position, bool bIsFree)
{
	FPathfindingGrid newGrid;
	newGrid.GridID = GenerateGridID();
	newGrid.GridPosition = Position;
	newGrid.bIsFree = !bIsFree;
	AllGridsMap.Add(newGrid.GridID, newGrid);
	AllGridsMapByPosition.Add(Position, newGrid.GridID);
}

void AH3DVolume::SaveDynamicObjectsData(AActor* DynamicObject)
{
	DynamicObjects.Add(DynamicObject);
	FTransform transform = DynamicObject->GetActorTransform();
	DynamicObjectsLastPosition.Add(DynamicObject, transform);
	FVector objectLocation = DynamicObject->GetActorLocation();
	FVector objectExtent;
	DynamicObject->GetActorBounds(false, objectLocation, objectExtent);
	DynamicActorsLastBounds.Add(DynamicObject, objectExtent);
	if (UHDynamicObject* dynamicComponent = DynamicObject->FindComponentByClass<UHDynamicObject>())
		dynamicComponent->SetVolume(this);
}

//---------------------------------------------------------------- Dynamic Objects Functions

void AH3DVolume::StartUpdateDynamicObjects()
{
	if (!GetWorld()->GetTimerManager().IsTimerActive(DynamicObjectsCheckTimerHandle))
		GetWorld()->GetTimerManager().SetTimer(DynamicObjectsCheckTimerHandle, this, &AH3DVolume::UpdateDynamicObjects, UpdateGridsRate, true);
}

void AH3DVolume::SetNewDynamicObject(AActor* DynamicObject)
{
	if (!DynamicObject || DynamicObjects.Contains(DynamicObject) || !DynamicObject->FindComponentByClass<UHDynamicObject>())
		return;
	SaveDynamicObjectsData(DynamicObject);
	if (!GetWorld()->GetTimerManager().IsTimerActive(DynamicObjectsCheckTimerHandle))
		StartUpdateDynamicObjects();
}

void AH3DVolume::UnSetNewDynamicObject(AActor* DynamicObject, bool bIsItDestroyed)
{
	if (!DynamicObject || !DynamicObjects.Contains(DynamicObject))
		return;
	
	if (FTransform* lastTr = DynamicObjectsLastPosition.Find(DynamicObject))
		if (FVector* lastExtent = DynamicActorsLastBounds.Find(DynamicObject))
			SetCellsDepandsOnDynamicObjectMovement(*lastExtent, lastTr->GetLocation(), true, GetWorld(), bIsItDestroyed ? DynamicObject : nullptr);
	
	if (TArray<int>* pred = predictedGridOfDynamicObjects.Find(DynamicObject))
	{
		for (int gridID : *pred)
			if (FPathfindingGrid* realGrid = AllGridsMap.Find(gridID))
				realGrid->bIsFree = true;
		predictedGridOfDynamicObjects.Remove(DynamicObject);
	}
	
	DynamicObjects.Remove(DynamicObject);
	DynamicObjectsLastPosition.Remove(DynamicObject);
	DynamicActorsLastBounds.Remove(DynamicObject);

	if (DynamicObjects.IsEmpty())
	{
		GetWorld()->GetTimerManager().ClearTimer(DynamicObjectsCheckTimerHandle);
		bDynamicObjectsFound = false;
	}
}

void AH3DVolume::UpdateDynamicObjects()
{
	if (DynamicObjects.IsEmpty() || DynamicObjectsLastPosition.IsEmpty())
	{
		predictedGridOfDynamicObjects.Empty();
		bDynamicObjectsFound = false;
		GetWorld()->GetTimerManager().ClearTimer(DynamicObjectsCheckTimerHandle);
		return;
	}
	UWorld* world = GetWorld();
	if (!world)
		return;
	Async(EAsyncExecution::ThreadPool, [this, world]()
	{
			for (const auto& dynamiObject : DynamicObjects)
			{
				if (!dynamiObject || DynamicObjectsLastPosition.Find(dynamiObject) == nullptr)
					continue;
				
				FVector currentLocation = dynamiObject->GetActorLocation();
				FRotator currentRotation = dynamiObject->GetActorRotation();
				FVector currentScale = dynamiObject->GetActorScale3D();
				
				FTransform* lastKnownTransform = DynamicObjectsLastPosition.Find(dynamiObject);
				FVector lastKnownLocation = lastKnownTransform->GetLocation();
				FRotator lastKnownRotation = lastKnownTransform->GetRotation().Rotator();
				FVector lastKnownScale = lastKnownTransform->GetScale3D();
				
				if ((lastKnownLocation == FVector::ZeroVector && lastKnownScale == FVector::ZeroVector) || (lastKnownLocation.Equals(currentLocation, KINDA_SMALL_NUMBER) &&
					 lastKnownRotation.Equals(currentRotation, KINDA_SMALL_NUMBER) && lastKnownScale.Equals(currentScale, KINDA_SMALL_NUMBER)))
					continue;
				
				if (predictedGridOfDynamicObjects.Contains(dynamiObject) && dynamiObject->GetVelocity().Size() <= 0.f)
				{
					if (TArray<int>* x = predictedGridOfDynamicObjects.Find(dynamiObject))
						for (int gridID : *x)
							if (FPathfindingGrid* RealGrid = AllGridsMap.Find(gridID))
								RealGrid->bIsFree = true; 
					predictedGridOfDynamicObjects.Remove(dynamiObject);
				}
				
				FVector* oldObjectBounds = DynamicActorsLastBounds.Find(dynamiObject);
				SetCellsDepandsOnDynamicObjectMovement(*oldObjectBounds, lastKnownLocation, true, world);
				
				FVector CurrentObjectBoxExtent;
				dynamiObject->GetActorBounds(false, currentLocation, CurrentObjectBoxExtent);
				SetCellsDepandsOnDynamicObjectMovement(CurrentObjectBoxExtent, currentLocation, false, world);
				
				SetCellsDepandsOnVelocityOfDynamicObject(CurrentObjectBoxExtent, currentLocation, dynamiObject->GetVelocity(), dynamiObject);
				
				lastKnownLocation = currentLocation;
				lastKnownRotation = currentRotation;
				lastKnownScale = currentScale;
				*lastKnownTransform = FTransform(lastKnownRotation, lastKnownLocation, lastKnownScale);
				
				*oldObjectBounds = CurrentObjectBoxExtent;
			}
	});
}

void AH3DVolume::SetCellsFromNewPositionOfDynamicObject(const FVector& PositionOfDynamicObject, const FVector& ObjectBoxExtent, TArray<FVector>& CellPositionsRef)
{
	int gridsFromObjectsBackDirection = FMath::FloorToInt((PositionOfDynamicObject.X - ObjectBoxExtent.X - OriginOfVolume.X + BoxExtent.X) / CellSize);
	int gridsFromObjectsFrontDirection = FMath::FloorToInt((PositionOfDynamicObject.X + ObjectBoxExtent.X - OriginOfVolume.X + BoxExtent.X) / CellSize);
	
	int gridsFromObjectsLeftDirection = FMath::FloorToInt((PositionOfDynamicObject.Y - ObjectBoxExtent.Y - OriginOfVolume.Y + BoxExtent.Y) / CellSize);
	int gridsFromObjectsRightDirection = FMath::FloorToInt((PositionOfDynamicObject.Y + ObjectBoxExtent.Y - OriginOfVolume.Y + BoxExtent.Y) / CellSize);
	
	int gridsFromObjectsDownDirection = FMath::FloorToInt((PositionOfDynamicObject.Z - ObjectBoxExtent.Z - OriginOfVolume.Z + BoxExtent.Z) / CellSize);
	int gridsFromObjectsUpDirection = FMath::FloorToInt((PositionOfDynamicObject.Z + ObjectBoxExtent.Z - OriginOfVolume.Z + BoxExtent.Z) / CellSize);

	for (int x = FMath::Max(0, gridsFromObjectsBackDirection); x <= FMath::Min(CellsAtX - 1, gridsFromObjectsFrontDirection); x++)
	{
		for (int y = FMath::Max(0, gridsFromObjectsLeftDirection); y <= FMath::Min(CellsAtY - 1, gridsFromObjectsRightDirection); y++)
		{
			for (int z = FMath::Max(0, gridsFromObjectsDownDirection); z <= FMath::Min(CellsAtZ - 1, gridsFromObjectsUpDirection); z++)
			{
				FVector cellPosition = GetActorLocation() + FVector(
					(x * CellSize) - BoxExtent.X + CellSize / 2,
					(y * CellSize) - BoxExtent.Y + CellSize / 2,
					(z * CellSize) - BoxExtent.Z + CellSize / 2);
				CellPositionsRef.Add(cellPosition);
			}
		}
	}
}


//---------------------------------------------------------------- Pathfinding


void AH3DVolume::FindPath(UObject* CallingObject, const FName& FunctionName, APawn* Pawn, FVector Start, FVector End, float Tolerance)
{
	FPathRequest pathRequest;
	pathRequest.Start = Start;
	pathRequest.End = End;
	pathRequest.Volume = this;
	pathRequest.OnPathFound.BindUFunction(CallingObject, FunctionName);
	pathRequest.Owner = Pawn;
	pathRequest.Tolerance = Tolerance;
	PathCore->AssignRequest(pathRequest);
}

