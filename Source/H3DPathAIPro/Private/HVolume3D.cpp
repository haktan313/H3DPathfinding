

#include "HVolume3D.h"
#include <Kismet/GameplayStatics.h>
#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"
#include "HPathCore.h"
#include "Engine/World.h"
#include "HDynamicObjects.h"
#include "TimerManager.h"
#include "Async/Async.h"
#include "StructuresEnums_H3DPathFinding.h"
#include "GameFramework/Pawn.h"

AHVolume3D::AHVolume3D()
{
    PrimaryActorTick.bCanEverTick = true;

    VolumeBox = CreateDefaultSubobject<UBoxComponent>(TEXT("VolumeBox"));
    RootComponent = VolumeBox;
    VolumeBox->SetBoxExtent(FVector(CellSize / 4));
    VolumeBox->SetLineThickness(5);
}

void AHVolume3D::BeginPlay()
{
    Super::BeginPlay();
    PathCore = AHPathCore::GetInstance(GetWorld());
    DivideVolumeIntoGrids();
}

void AHVolume3D::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if(bDrawDebugGridsFromPlayer)
    {
        APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
        APawn* PlayerPawn = PlayerController ? PlayerController->GetPawn() : nullptr;

        if (PlayerPawn)
        {
            FVector PlayerLocation = PlayerPawn->GetActorLocation();

            DrawDebugGrid(PlayerLocation, true);
        }
    }else if (targetObjects.Num() > 0)
    {
        DrawDebugGrid(FVector(0, 0, 0), false);
    }
}

void AHVolume3D::DrawDebugGrid(const FVector& PlayerLocation, bool bPlayerTicked)
{
    if (bPlayerTicked && targetObjects.Num() > 0)
    {
        for (const auto& Grid : AllGridsMap)
        {
            const FS_GridCellsID* gridID = Grid.Value;
            float DistanceToPlayer = FVector::Dist(PlayerLocation, gridID->GridPosition);
            if (DistanceToPlayer <= DrawDistance)
            {
                FColor GridColor = gridID->IsFree ? FColor::Green : FColor::Red;
                DrawDebugBox(GetWorld(), gridID->GridPosition, FVector(gridID->GridSize / 2), GridColor, false, -1.0f, 0, 1.0f);
            }
            for (AActor* targetObject : targetObjects)
            {
                if (!targetObject) {continue;}
                float DistanceToTarget = FVector::Dist(targetObject->GetActorLocation(), gridID->GridPosition);
                if (DistanceToTarget <= DrawDistance)
                {
                    FColor GridColor = gridID->IsFree ? FColor::Green : FColor::Red;
                    DrawDebugBox(GetWorld(), gridID->GridPosition, FVector(gridID->GridSize / 2), GridColor, false, -1.0f, 0, 1.0f);
                }
            }
        }
    }else if (bPlayerTicked && targetObjects.Num() == 0)
    {
        for (const auto& Grid : AllGridsMap)
        {
            const FS_GridCellsID* gridID = Grid.Value;
            float DistanceToPlayer = FVector::Dist(PlayerLocation, gridID->GridPosition);
            if (DistanceToPlayer <= DrawDistance)
            {
                FColor GridColor = gridID->IsFree ? FColor::Green : FColor::Red;
                DrawDebugBox(GetWorld(), gridID->GridPosition, FVector(gridID->GridSize / 2), GridColor, false, -1.0f, 0, 1.0f);
            }
        }
    }
    else if (!bPlayerTicked && targetObjects.Num() > 0)
    {
        for (const auto& Grid : AllGridsMap)
        {
            const FS_GridCellsID* gridID = Grid.Value;
            for (AActor* targetObject : targetObjects)
            {
                if (!targetObject) {continue;}
                float DistanceToTarget = FVector::Dist(targetObject->GetActorLocation(), gridID->GridPosition);
                if (DistanceToTarget <= DrawDistance)
                {
                    FColor GridColor = gridID->IsFree ? FColor::Green : FColor::Red;
                    DrawDebugBox(GetWorld(), gridID->GridPosition, FVector(gridID->GridSize / 2), GridColor, false, -1.0f, 0, 1.0f);
                }
            }
        }
    }
}

void AHVolume3D::DivideVolumeIntoGrids()  
{
    BoxExtent = VolumeBox->GetScaledBoxExtent();
    OriginOfVolume = VolumeBox->GetComponentLocation();

    CellsAtX = FMath::CeilToInt((BoxExtent.X * 2) / CellSize);//number of cells at X axis.
    CellsAtY = FMath::CeilToInt((BoxExtent.Y * 2) / CellSize);//number of cells at Y axis.
    CellsAtZ = FMath::CeilToInt((BoxExtent.Z * 2) / CellSize);//number of cells at Z axis.
    
    TMap<FVector, FS_GridCellsID*> AllGridsMapRef;

    for (int32 X = 0; X < CellsAtX; X++)
    {
        for (int32 Y = 0; Y < CellsAtY; Y++)
        {
            for (int32 Z = 0; Z < CellsAtZ; Z++)
            {
                FVector CellPosition = OriginOfVolume + FVector(
                    (X * CellSize) - BoxExtent.X + CellSize / 2,
                    (Y * CellSize) - BoxExtent.Y + CellSize / 2,
                    (Z * CellSize) - BoxExtent.Z + CellSize / 2);

                FVector CellExtent = FVector(CellSize / 2);

                TArray<FHitResult> HitResults;
                FCollisionQueryParams CollisionQueryParams;
                CollisionQueryParams.AddIgnoredActor(this);

                bool bHit = GetWorld()->SweepMultiByChannel(
                    HitResults,
                    CellPosition,
                    CellPosition,
                    FQuat::Identity,
                    ECC_WorldStatic,
                    FCollisionShape::MakeBox(CellExtent),
                    CollisionQueryParams);

                FS_GridCellsID* NewGrid = new FS_GridCellsID();
                NewGrid->GridPersonalID = ++GridIDCounter;
                NewGrid->GridPosition = CellPosition;
                NewGrid->GridSize = CellSize;
                NewGrid->IsFree = !bHit;
                
                AllGridsMapRef.Add(CellPosition, NewGrid);

                if (bHit)
                {
                    for(FHitResult HitResult : HitResults)
                    {
                        if(HitResult.GetActor()->FindComponentByClass<UHDynamicObjects>())
                        {
                            NewGrid->IsFree = true;
                            AllGridsMap.Add(CellPosition, NewGrid);
                            DynamicObjects.Add(HitResult.GetActor());
                            DynamicObjectsLastPosition.Add(HitResult.GetActor(), HitResult.GetActor()->GetActorLocation());
                            CellsPosition.Add(CellPosition);
                            
                            if(!GetWorld()->GetTimerManager().IsTimerActive(UpdateGridTimerHandle))
                            {
                                StartUpdateGrids();
                            }
                        }
                    }
                }
                else
                {
                    AllGridsMap.Add(CellPosition, NewGrid);
                }
            }
        }
    }
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------

void AHVolume3D::StartUpdateGrids()
{
    if(!GetWorld()->GetTimerManager().IsTimerActive(UpdateGridTimerHandle))
    {
        GetWorld()->GetTimerManager().SetTimer(UpdateGridTimerHandle, this, &AHVolume3D::UpdateGrids, 1/3.f, true);
    }
}

void AHVolume3D::UpdateGrids()
{
    if (DynamicObjects.Num() == 0)
    { 
        CellsPosition.Empty();
        UpdateCellsPosition.Empty();
        GetWorld()->GetTimerManager().ClearTimer(UpdateGridTimerHandle);
    }
    
    if (!bCanUpdateGrids)
    {
        return;
    }
    CellsPosition.Empty();
    Async(EAsyncExecution::ThreadPool,[this]()
    {
        bCanUpdateGrids = false;
        TArray<FVector> CellPositionsRef;
        
        DynamicObjectLastPositionCheck(CellPositionsRef);
        
        AsyncTask(ENamedThreads::GameThread, [this,CellPositionsRef]()
        {
            if(CellPositionsRef.Num() > 0)
            {
                TestGrids(CellPositionsRef);
            }
            else
            {
                bCanUpdateGrids = true;
            }
        });
    });
}

void AHVolume3D::DynamicObjectLastPositionCheck(TArray<FVector>& CellPositionsRef)
{
    for (AActor* DynamicObject : DynamicObjects)
        {
            FVector ObjectLocation = DynamicObject->GetActorLocation();
            FVector* LastPosition = DynamicObjectsLastPosition.Find(DynamicObject);
            FVector ObjectExtent;
            DynamicObject->GetActorBounds(true, ObjectLocation, ObjectExtent);
        
            if (LastPosition && *LastPosition != ObjectLocation)
            {
                SetCellsPositionsFromPosition(ObjectLocation, ObjectExtent, CellPositionsRef);
                
                *LastPosition = ObjectLocation;
                
                if (DynamicObject->GetVelocity().Size() > 100.f)
                {
                    FVector direction = DynamicObject->GetVelocity().GetSafeNormal();
                    FVector newPosition = ObjectLocation + DynamicObject->GetVelocity().Size() * direction * 1.f;

                    SetCellsPositionsFromPosition(newPosition, ObjectExtent, CellsPositions2);
                    
                    for (const FVector & cellPosition : CellsPositions2)
                    {
                        FS_GridCellsID** gridPtr = AllGridsMap.Find(cellPosition);
                        if (gridPtr && *gridPtr)
                        {
                            (*gridPtr)->IsFree = false;
                        }
                    }
                }
                if (DynamicObject->GetVelocity().Size() < 100.f && CellsPositions2.Num() > 0)
                {
                    for (FVector cellPosition : CellsPositions2)
                    {
                        FS_GridCellsID** gridPtr = AllGridsMap.Find(cellPosition);
                        if (gridPtr && *gridPtr)
                        {
                            (*gridPtr)->IsFree = true;
                            CellsPositions2.Remove(cellPosition);
                        }
                    }
                }
            }
        }
}

void AHVolume3D::SetCellsPositionsFromPosition(const FVector Position, const FVector ObjectExtent, TArray<FVector>& CellsPositions)
{
    int32 ObjectGridBack = FMath::FloorToInt((Position.X - ObjectExtent.X - OriginOfVolume.X + BoxExtent.X) / CellSize);
    int32 ObjectGridForward = FMath::FloorToInt((Position.X + ObjectExtent.X - OriginOfVolume.X + BoxExtent.X) / CellSize);
                    
    int32 ObjectGridLeft = FMath::FloorToInt((Position.Y - ObjectExtent.Y - OriginOfVolume.Y + BoxExtent.Y) / CellSize);
    int32 ObjectGridRight = FMath::FloorToInt((Position.Y + ObjectExtent.Y - OriginOfVolume.Y + BoxExtent.Y) / CellSize);
                    
    int32 ObjectGridDown = FMath::FloorToInt((Position.Z - ObjectExtent.Z - OriginOfVolume.Z + BoxExtent.Z) / CellSize);
    int32 ObjectGridUp = FMath::FloorToInt((Position.Z + ObjectExtent.Z - OriginOfVolume.Z + BoxExtent.Z) / CellSize);

    for (int x = FMath::Max(0, ObjectGridBack); x <= FMath::Min(CellsAtX - 1, ObjectGridForward); x++)
    {
        for (int y = FMath::Max(0, ObjectGridLeft); y <= FMath::Min(CellsAtY - 1, ObjectGridRight); y++)
        {
            for (int z = FMath::Max(0, ObjectGridDown); z <= FMath::Min(CellsAtZ - 1, ObjectGridUp); z++)
            {
                FVector CellPosition = OriginOfVolume + FVector(
                    (x * CellSize) - BoxExtent.X + CellSize / 2,
                    (y * CellSize) - BoxExtent.Y + CellSize / 2,
                    (z * CellSize) - BoxExtent.Z + CellSize / 2);
                CellsPositions.Add(CellPosition);
            }
        }
    }
}

void AHVolume3D::TestGrids(TArray<FVector> gridsPositions)
{
    UWorld* WorldRef = GetWorld();
    Async(EAsyncExecution::ThreadPool, [this,gridsPositions, WorldRef]()
    {
        TArray<FVector> CellsPositionLocal;
        for(FVector gridPosition : gridsPositions)
        {
            FHitResult HitResult;
            FCollisionQueryParams Params;
            Params.AddIgnoredActor(this);
        
            bool bHit = WorldRef->SweepSingleByChannel(
                HitResult,
                gridPosition,
                gridPosition,
                FQuat::Identity,
                ECC_GameTraceChannel1
                ,FCollisionShape::MakeBox(FVector(CellSize / 2)),
                Params
                );
            if(bHit)
            { 
                CellsPosition.Add(gridPosition);
            }
        }
        CellsPositionLocal = CellsPosition;
        AsyncTask(ENamedThreads::GameThread, [this,CellsPositionLocal]()
        {
            UpdateGridsStatus(CellsPositionLocal);
        });
    });
}

void AHVolume3D::UpdateGridsStatus(TArray<FVector> cellsPositions)
{
    for (int32 i = UpdateCellsPosition.Num() - 1; i >= 0; --i)
    {
        const FVector& updateCell = UpdateCellsPosition[i];
        if (!cellsPositions.Contains(updateCell))
        {
            FS_GridCellsID** gridPtr = AllGridsMap.Find(updateCell);
            if (gridPtr && *gridPtr)
            {
                UpdateCellsPosition.RemoveAt(i);
                (*gridPtr)->IsFree = true;
            }
        }
    }
    for (const FVector& cellPosition : cellsPositions)
    {
        FS_GridCellsID** gridPtr = AllGridsMap.Find(cellPosition);
        if (gridPtr && *gridPtr)
        {
            if (!UpdateCellsPosition.Contains(cellPosition))
            {
                UpdateCellsPosition.Add(cellPosition);
            }
            if((*gridPtr)->IsFree)
            {
                (*gridPtr)->IsFree = false;
            }
        }
    }
    OnGridsUpdated.Broadcast();
    bCanUpdateGrids = true;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------


void AHVolume3D::FindPath(UObject* CallingObject, const FName& FunctionName, FVector Start, FVector End, bool bIsWalking, float CharacterRadius, float CharacterHalfHeight, AActor* OwnerRef)
{
    FS_PathRequest PathRequest;
    PathRequest.Start = Start;
    PathRequest.End = End;
    PathRequest.VolumeRef = this;
    PathRequest.OnPathFound.BindUFunction(CallingObject, FunctionName);//bind the function to the OnPathFound delegate
    PathRequest.CharacterRadius = CharacterRadius;
    PathRequest.CharacterHalfHeight = CharacterHalfHeight;
    PathRequest.bIsWalking = bIsWalking;
    PathRequest.Owner = OwnerRef;
    
    PathCore->AssignRequest(PathRequest);
}

int32 AHVolume3D::GetGridIDFromPosition(const FVector& Position) const
{
    int32 XIndex = FMath::FloorToInt((Position.X - OriginOfVolume.X + BoxExtent.X) / CellSize);
    int32 YIndex = FMath::FloorToInt((Position.Y - OriginOfVolume.Y + BoxExtent.Y) / CellSize);
    int32 ZIndex = FMath::FloorToInt((Position.Z - OriginOfVolume.Z + BoxExtent.Z) / CellSize);
    
    if (XIndex < 0 || XIndex >= CellsAtX ||
        YIndex < 0 || YIndex >= CellsAtY ||
        ZIndex < 0 || ZIndex >= CellsAtZ)
    {
        return -1;
    }
    
    FVector CellLeftBottomCorner = OriginOfVolume + FVector(
        (XIndex * CellSize) - BoxExtent.X,
        (YIndex * CellSize) - BoxExtent.Y,
        (ZIndex * CellSize) - BoxExtent.Z);
    
    FVector CellRightTopCorner = CellLeftBottomCorner + FVector(CellSize, CellSize, CellSize); 
    
    if (Position.X >= CellLeftBottomCorner.X && Position.X <= CellRightTopCorner.X &&
        Position.Y >= CellLeftBottomCorner.Y && Position.Y <= CellRightTopCorner.Y &&
        Position.Z >= CellLeftBottomCorner.Z && Position.Z <= CellRightTopCorner.Z)
    {
        FVector CellPosition = OriginOfVolume + FVector(
            (XIndex * CellSize) - BoxExtent.X + CellSize / 2,
            (YIndex * CellSize) - BoxExtent.Y + CellSize / 2,
            (ZIndex * CellSize) - BoxExtent.Z + CellSize / 2);

        const FS_GridCellsID* const* GridPtr = AllGridsMap.Find(CellPosition);
        
        if (!GridPtr || !(*GridPtr))
        {
            return -1;
        }
        
        const FS_GridCellsID* Grid = *GridPtr;

        return Grid->GridPersonalID;
    }

    return -1;
}

FVector AHVolume3D::GetRandomPointOn3DVolume(const FVector& Origin, float Radius, E_RandomPointsDimention Dimention)
{
    // Check if the Origin and Radius are within the VolumeBox
    FVector BoxOrigin = VolumeBox->GetComponentLocation();

    // Ensure the search area is within the bounds of the VolumeBox
    FVector SearchBoxMin = Origin - FVector(Radius, Radius, Radius);
    FVector SearchBoxMax = Origin + FVector(Radius, Radius, Radius);

    SearchBoxMin = SearchBoxMin.ComponentMax(BoxOrigin - BoxExtent); // Clamp to VolumeBox min bounds
    SearchBoxMax = SearchBoxMax.ComponentMin(BoxOrigin + BoxExtent); // Clamp to VolumeBox max bounds

    for (int32 Attempts = 0; Attempts < 100; Attempts++)
    {
        float RandX = FMath::FRandRange(SearchBoxMin.X, SearchBoxMax.X);
        float RandY = FMath::FRandRange(SearchBoxMin.Y, SearchBoxMax.Y);
        float RandZ;
        if (Dimention == E_RandomPointsDimention::TwoD)
        {
            RandZ = Origin.Z;
        }
        else
        {
            RandZ = FMath::FRandRange(SearchBoxMin.Z, SearchBoxMax.Z);
        }
        FVector RandomPoint(RandX, RandY, RandZ);
        
        int32 GridID = GetGridIDFromPosition(RandomPoint);
        if (GridID != -1)
        {
            return RandomPoint;
        }
    }
    return Origin;
    
}

//NOT FINISHED YET
FVector AHVolume3D::GetRandomReachablePointOn3DVolume(const FVector& Origin, float Radius, AActor* ActorRef,E_RandomPointsDimention Dimention)
{
    // Check if the Origin and Radius are within the VolumeBox
    FVector BoxOrigin = VolumeBox->GetComponentLocation();

    // Ensure the search area is within the bounds of the VolumeBox
    FVector SearchBoxMin = Origin - FVector(Radius, Radius, Radius);
    FVector SearchBoxMax = Origin + FVector(Radius, Radius, Radius);

    SearchBoxMin = SearchBoxMin.ComponentMax(BoxOrigin - BoxExtent); // Clamp to VolumeBox min bounds
    SearchBoxMax = SearchBoxMax.ComponentMin(BoxOrigin + BoxExtent); // Clamp to VolumeBox max bounds

    for (int32 Attempts = 0; Attempts < 100; Attempts++)
    {
        float RandX = FMath::FRandRange(SearchBoxMin.X, SearchBoxMax.X);
        float RandY = FMath::FRandRange(SearchBoxMin.Y, SearchBoxMax.Y);
        float RandZ;
        if (Dimention == E_RandomPointsDimention::TwoD)
        {
            RandZ = ActorRef ? ActorRef->GetActorLocation().Z : Origin.Z;
        }
        else
        {
            RandZ = FMath::FRandRange(SearchBoxMin.Z, SearchBoxMax.Z);
        }
        FVector RandomPoint(RandX, RandY, RandZ);
        
        int32 GridID = GetGridIDFromPosition(RandomPoint);
        if (GridID != -1)
        {
            if (ActorRef != nullptr)
            {
                return RandomPoint;
            }
            else
            {
                return RandomPoint;
            }
        }
    }

    return Origin;
}