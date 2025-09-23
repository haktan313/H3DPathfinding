

#include "H3DPathCore.h"
#include "H3DVolume.h"
#include <queue>
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "Async/Async.h"
#include "Async/TaskGraphInterfaces.h"
#include "Engine/EngineTypes.h"
#include "CollisionQueryParams.h"
#include "CollisionShape.h"


AH3DPathCore* AH3DPathCore::Instance = nullptr;

AH3DPathCore* AH3DPathCore::GetInstance(UWorld* World)
{
	if (!Instance)
		Instance = World->SpawnActor<AH3DPathCore>();
	return Instance;
}

AH3DPathCore::AH3DPathCore()
{
	PrimaryActorTick.bCanEverTick = true;

}

EFailureType AH3DPathCore::CheckFailureConditions(UWorld* World, AH3DVolume* Volume, APawn* OwnerPawn)
{
	if (!World)
		return EFailureType::WorldIsNull;
	if (!Volume)
		return EFailureType::VolumeIsNull;
	if (!OwnerPawn)
		return EFailureType::PawnIsNull;
	return EFailureType::None;
}

void AH3DPathCore::BeginPlay()
{
	Super::BeginPlay();
	
}

void AH3DPathCore::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (Instance && Instance == this)
	{
		Output.Empty();
		Instance = nullptr;;
	}
}

void AH3DPathCore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Output.Num() > 0)
	{
		for (auto& PathResultValue : Output)
		{
			if (PathResultValue.Value.IsBound())
			{
				PathResultValue.Value.Execute(*PathResultValue.Key);
			}
		}
		Output.Empty();
	}
}

void AH3DPathCore::AssignRequest(FPathRequest& Request)
{
	UWorld* world = Request.Owner->GetWorld();
	AH3DVolume* volume = Request.Volume;
	APawn* owner = Request.Owner;
	PathResultDelegate delegate = Request.OnPathFound;
	FVector start = Request.Start;
	FVector end = Request.End;
	float characterRadius = owner->GetSimpleCollisionRadius();
	float characterHalfHeight = owner->GetSimpleCollisionHalfHeight();
	
	Async(EAsyncExecution::ThreadPool, [this, delegate, world, volume, start, end, owner, characterRadius, characterHalfHeight]()
	{
		TSharedPtr<FPathResult> result = MakeShared<FPathResult>();
		FindPath(world, volume, owner, *result, start, end, characterRadius, characterHalfHeight);
		AsyncTask(ENamedThreads::GameThread, [this, result,delegate]
		{
			SubmitResult(result, delegate);
		});
	});
}

void AH3DPathCore::SubmitResult(TSharedPtr<FPathResult> Result, PathResultDelegate Delegate)
{
	if (!Result || !Delegate.IsBound())
		return;
	Output.Add({ Result, Delegate });
}

void AH3DPathCore::FindPath(UWorld* World, AH3DVolume* Volume, APawn* OwnerPawn, FPathResult& Result, FVector Start, FVector End, float CharacterRadius, float CharacterHalfHeight)
{
	EFailureType failure = CheckFailureConditions(World, Volume, OwnerPawn);
	if (failure != EFailureType::None)
	{
		Result.bSuccess = false;
		Result.FailureType = failure;
		return;
	}
	if (!CheckEndLocationAvailability(World, Volume, OwnerPawn, End, CharacterRadius, CharacterHalfHeight))
	{
		Result.bSuccess = false;
		Result.FailureType = EFailureType::EndLocationNotAvailable;
		return;
	}
	if (!CheckStartLocationAvailability(World, Volume, OwnerPawn, Start, CharacterRadius, CharacterHalfHeight))
	{
		Result.bSuccess = false;
		Result.FailureType = EFailureType::StartLocationNotAvailable;
		return;
	}
	
	int startGridID = Volume->GetGridIDFromPosition(Start);
	int endGridID = Volume->GetGridIDFromPosition(End);
	if (startGridID == -1 || endGridID == -1)
	{
		Result.bSuccess = false;
		Result.FailureType = startGridID == -1 ? EFailureType::StartLocationNotInVolume : EFailureType::EndLocationNotInVolume;
		return;
	}
	if (startGridID == endGridID)
	{
		Result.PathPoints.Add(Start);
		Result.PathPoints.Add(End);
		Result.bSuccess = false;
		Result.FailureType = EFailureType::StartEqualsEnd;
		return;
	}
	
	TMap<int, TUniquePtr<FAStarNode>> openMap;
	TSet<int> closedSet;
	std::priority_queue<FAStarNode*, std::vector<FAStarNode*>, FNodeComparator> openQueue;
	
	TUniquePtr<FAStarNode> startGridNode = CreateUniqueNode(Volume->GetGridFromID(startGridID) ? Volume->GetGridFromID(startGridID)->GridPosition : Start,
		startGridID, 0.f, CalculateCost(Start, End), nullptr);
	if (!startGridNode)
	{
		Result.bSuccess = false;
		Result.FailureType = EFailureType::StartGridIsNotFound;
		return;
	}
	openMap.Add(startGridID, MoveTemp(startGridNode));
	openQueue.push(openMap.Find(startGridID)->Get());

	while (!openQueue.empty())
	{
		FAStarNode* currentGrid = openQueue.top();
		openQueue.pop();
		
		if (currentGrid == nullptr)
			break;
		if (closedSet.Contains(currentGrid->GridID))
			continue;
		if (openMap.Contains(currentGrid->GridID))
			closedSet.Add(currentGrid->GridID);
		
		if (currentGrid->GridID == endGridID)
		{
			TArray<FVector> pathPoints;
			for (FAStarNode* grid = currentGrid; grid != nullptr; grid = grid->parentNode)
				pathPoints.Insert(grid->WorldLocation,0);
			
			SmoothenPath(World, Volume, pathPoints, OwnerPawn, CharacterRadius, CharacterHalfHeight);
			
			Result.PathPoints = pathPoints;
			Result.bSuccess = true;
			
			openMap.Empty();
			closedSet.Empty();
			return;
		}

		TArray<int> neighborsIDs;
		GetNeighborNodes(World, *currentGrid, neighborsIDs, *Volume, OwnerPawn, openMap, closedSet, CharacterRadius, CharacterHalfHeight, startGridID, endGridID);
		NeighborAdjustments(*Volume, neighborsIDs, openMap, closedSet, *currentGrid, End, openQueue);
	}
	Result.bSuccess = false;
	Result.FailureType = EFailureType::PathNotFound;
}

void AH3DPathCore::GetNeighborNodes(UWorld* World, const FAStarNode& CurrentNode, TArray<int>& Neighbors, AH3DVolume& Volume,
		APawn* OwnerPawn, TMap<int, TUniquePtr<FAStarNode>>& OpenMap, TSet<int>& ClosedSet, float CharacterRadius, float CharacterHalfHeight, int StartGridID, int EndGridID)
{
	float gridSize = Volume.GetGridCellSize();
	TArray directions =
	{
		FVector::ForwardVector, FVector::BackwardVector,
		FVector::RightVector, FVector::LeftVector,
		FVector::UpVector, FVector::DownVector
	};

	for (uint8 i = 0; i < directions.Num(); i++)
	{
		FVector neighborPosition = CurrentNode.WorldLocation + directions[i] * gridSize;
		int neighborGridID = Volume.GetGridIDFromPosition(neighborPosition);
		if (neighborGridID != -1)
		{
			if (ClosedSet.Contains(neighborGridID) || OpenMap.Contains(neighborGridID))
				continue;
			if (neighborGridID == StartGridID || neighborGridID == EndGridID || IsLocationAvailable(World, &Volume, neighborPosition, OwnerPawn, CharacterRadius, CharacterHalfHeight))
			{
				Neighbors.Add(neighborGridID);
			}
		}
	}
}

void AH3DPathCore::NeighborAdjustments(AH3DVolume& Volume, TArray<int>& NeighborsIDs, TMap<int, TUniquePtr<FAStarNode>>& OpenMap, TSet<int>& ClosedSet,
		FAStarNode& CurrentGrid, const FVector& End, std::priority_queue<FAStarNode*, std::vector<FAStarNode*>, FNodeComparator>& OpenQueue)
{
	for (int neighborID : NeighborsIDs)
	{
		if (ClosedSet.Contains(neighborID))
			continue;

		FPathfindingGrid* neighborGrid = Volume.GetGridFromID(neighborID);
		if (!neighborGrid)
			continue;
		float newGCost = CurrentGrid.GCost + CalculateCost(CurrentGrid.WorldLocation, neighborGrid->GridPosition);
			
		if (OpenMap.Contains(neighborID))
		{
			FAStarNode* neighborGridNode = OpenMap.Find(neighborID)->Get();
			if (newGCost < neighborGridNode->GCost)
			{
				neighborGridNode->GCost = newGCost;
				neighborGridNode->parentNode = &CurrentGrid;
				OpenQueue.push(neighborGridNode); 
			}
		}
		else
		{
			TUniquePtr<FAStarNode> neighborGridNode = CreateUniqueNode(neighborGrid->GridPosition, neighborGrid->GridID, newGCost,
				CalculateCost(neighborGrid->GridPosition, End), &CurrentGrid);

			OpenMap.Add(neighborID, MoveTemp(neighborGridNode));
			OpenQueue.push(OpenMap.Find(neighborID)->Get());
		}
	}
}

void AH3DPathCore::SmoothenPath(UWorld* World, const AH3DVolume* Volume, TArray<FVector>& PathPoints, APawn* OwnerPawn, float CharacterRadius, float CharacterHalfHeight)
{
	int pathSize = PathPoints.Num();
	if (pathSize < 3)
		return;
	int currentIndex = 0;
	while (currentIndex < pathSize - 2)
	{
		if (CanSkip(World, Volume, PathPoints[currentIndex], PathPoints[currentIndex + 2], OwnerPawn, CharacterRadius, CharacterHalfHeight))
		{
			PathPoints.RemoveAt(currentIndex + 1);
			pathSize--;
		}
		else
			currentIndex++;
		
	}
}


//------------------------------------------------------------------- Utility Functions


TUniquePtr<FAStarNode> AH3DPathCore::CreateUniqueNode(FVector& WorldLocation, int GridID, float GCost, float HCost, FAStarNode* Parent)
{
	TUniquePtr<FAStarNode> startGridNode = MakeUnique<FAStarNode>();
	startGridNode->WorldLocation = WorldLocation;
	startGridNode->GridID = GridID;
	startGridNode->GCost = GCost;
	startGridNode->HCost = HCost;
	startGridNode->parentNode = Parent;
	return startGridNode;
}

bool AH3DPathCore::CheckEndLocationAvailability(UWorld* World, AH3DVolume* Volume, APawn* OwnerPawn, FVector& End,
		float CharacterRadius, float CharacterHalfHeight)
{
	if (Volume->GetGridFromID(Volume->GetGridIDFromPosition(End)) && Volume->GetGridFromID(Volume->GetGridIDFromPosition(End))->bIsFree)
	{
		if (IsLocationAvailable(World, Volume, End, OwnerPawn, CharacterRadius, CharacterHalfHeight))
			return true;	
	}

	TArray searchDirections =
	{
		FVector::ForwardVector, FVector::BackwardVector,
		FVector::RightVector, FVector::LeftVector,
		FVector::UpVector, FVector::DownVector
	};
	uint8 multiplier = Volume->GetCellSizeMultiplierForAdjustment();
	for (uint8 a = 1; a <= multiplier; a++)
	{
		for (uint8 i = 0; i < searchDirections.Num(); i++)
		{
			FVector checkPosition = End + searchDirections[i] * Volume->GetGridCellSize() * a;
			if (Volume->GetGridFromID(Volume->GetGridIDFromPosition(checkPosition)) &&
					Volume->GetGridFromID(Volume->GetGridIDFromPosition(checkPosition))->bIsFree)
			{
				if (IsLocationAvailable(World, Volume, checkPosition, OwnerPawn, CharacterRadius, CharacterHalfHeight))
				{
					End = checkPosition;
					return true;	
				}
			}
		}
	}
	return false;
}

bool AH3DPathCore::CheckStartLocationAvailability(UWorld* World, AH3DVolume* Volume, APawn* OwnerPawn,FVector& Start,
		float CharacterRadius, float CharacterHalfHeight)
{
	if (Volume->GetGridFromID(Volume->GetGridIDFromPosition(Start)))
	{
		if (IsLocationAvailable(World, Volume, Start, OwnerPawn, CharacterRadius, CharacterHalfHeight))
			return true;	
	}

	TArray searchDirections =
	{
		FVector::ForwardVector, FVector::BackwardVector,
		FVector::RightVector, FVector::LeftVector,
		FVector::UpVector, FVector::DownVector
	};
	uint8 multiplier = Volume->GetCellSizeMultiplierForAdjustment();
	for (uint8 a = 1; a <= multiplier; a++)
	{
		for (uint8 i = 0; i < searchDirections.Num(); i++)
		{
			FVector checkPosition = Start + searchDirections[i] * Volume->GetGridCellSize() * a;
			if (Volume->GetGridFromID(Volume->GetGridIDFromPosition(checkPosition)) &&
					Volume->GetGridFromID(Volume->GetGridIDFromPosition(checkPosition))->bIsFree)
			{
				if (IsLocationAvailable(World, Volume, checkPosition, OwnerPawn, CharacterRadius, CharacterHalfHeight))
				{
					Start = checkPosition;
					return true;
				}
			}
		}
	}
	return false;
}

bool AH3DPathCore::IsLocationAvailable(UWorld* World, const AH3DVolume* Volume, const FVector& Location, APawn* OwnerPawn, float CharacterRadius, float CharacterHalfHeight)
{
	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(OwnerPawn);
	queryParams.bTraceComplex = false;
	FCollisionShape collisionShape = FCollisionShape::MakeCapsule(CharacterRadius / 1.25, CharacterHalfHeight); //There is a little tolerance to avoid getting stuck on small obstacles

	bool bHit = World->OverlapBlockingTestByChannel(
		Location,
		FQuat::Identity,
		Volume->GetCollisionChannel(),
		collisionShape,
		queryParams
	);
	return !bHit;
}

bool AH3DPathCore::CanSkip(UWorld* World, const AH3DVolume* Volume, const FVector& Start, const FVector& End, APawn* OwnerPawn, float CharacterRadius, float CharacterHalfHeight)
{
	FHitResult hitResult;
	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(OwnerPawn);
	queryParams.bTraceComplex = false;
	FCollisionShape collisionShape = FCollisionShape::MakeCapsule(CharacterRadius / 1.25, CharacterHalfHeight); //There is a little tolerance to avoid getting stuck on small obstacles
	
	bool bHit = World->SweepSingleByChannel(
		hitResult,
		Start,
		End,
		FQuat::Identity,
		Volume->GetCollisionChannel(),
		collisionShape,
		queryParams
	);
	return !bHit;
}

