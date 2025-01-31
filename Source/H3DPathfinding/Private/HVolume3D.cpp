

#include "HVolume3D.h"
#include <Kismet/GameplayStatics.h>
#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"
#include "HPathCore.h"
#include "Engine/World.h"
#include "HDynamicObjects.h"
#include "TimerManager.h"
#include "StructuresEnums_H3DPathFinding.h"

AHVolume3D::AHVolume3D()
{
    PrimaryActorTick.bCanEverTick = true;

    VolumeBox = CreateDefaultSubobject<UBoxComponent>(TEXT("VolumeBox"));
    RootComponent = VolumeBox;
    VolumeBox->SetBoxExtent(FVector(CellSize / 4));
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
            float DrawDistance = 200.0f;

            DrawDebugGrid(PlayerLocation, DrawDistance);
        }
    }
}

void AHVolume3D::DrawDebugGrid(const FVector& PlayerLocation, float DrawDistance)
{
    for (const auto& GridPair : AllGridsMap)
    {
        const FS_GridCellsID* Grid = GridPair.Value;
        float DistanceToPlayer = FVector::Dist(PlayerLocation, Grid->GridPosition);

        if (DistanceToPlayer <= DrawDistance)
        {
            FColor GridColor = FColor::Green;

            if (FMath::IsNearlyEqual(Grid->GridSize, 60.0f, 1.0f))
            {
                GridColor = FColor::Green;
            }
            else if (FMath::IsNearlyEqual(Grid->GridSize, 30.0f, 1.0f))
            {
                GridColor = FColor::Blue;
            }
            else if (FMath::IsNearlyEqual(Grid->GridSize, 15.0f, 1.0f))
            {
                GridColor = FColor::Orange;
            }
            else
            {
                GridColor = FColor::Yellow;
            }

            if (!Grid->IsFree)
            {
                GridColor = FColor::Red; 
            }
            
            DrawDebugBox(GetWorld(), Grid->GridPosition, FVector(Grid->GridSize / 2), GridColor, false, -1.0f, 0, 1.0f);
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

    TArray<FVector> HitGridPositions;
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
                    ECC_Visibility,
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
                    bool bDynamicObject = false;
                    for(FHitResult HitResult : HitResults)
                    {
                        if(HitResult.GetActor()->FindComponentByClass<UHDynamicObjects>())
                        {
                            bDynamicObject = true;
                            
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
                    if(!bDynamicObject)
                    {
                        HitGridPositions.Add(CellPosition);
                    }
                }
                else
                {
                    AllGridsMap.Add(CellPosition, NewGrid);
                }
            }
        }
    }

    if (HitGridPositions.Num() > 0)
    {
        DivideGridsIntoSmallerGrids(HitGridPositions, CellSize / 2.0f, AllGridsMapRef);
    }
}

void AHVolume3D::DivideGridsIntoSmallerGrids(const TArray<FVector>& CellPositionRefs, float SmallerCellSize, TMap<FVector, FS_GridCellsID*> AllGridsMapRef)
{
    if (SmallerCellSize <= MinCellSize - 1)
    {
        return;
    }
    TArray<FVector> HitGridPositions;
    TMap<FVector, FS_GridCellsID*> ChildGridsMap;
    
    for (const FVector& CellPositionRef : CellPositionRefs)
    {
        FS_GridCellsID* ParentGrid = nullptr;
        FS_GridCellsID* grid = *AllGridsMapRef.Find(CellPositionRef);
        if(grid)
        {
            ParentGrid = grid;
        }
        if (!ParentGrid)
        {
            continue;
        }

        for (int32 X = -1; X <= 1; X += 2)
        {
            for (int32 Y = -1; Y <= 1; Y += 2)
            {
                for (int32 Z = -1; Z <= 1; Z += 2)
                {
                    FVector SmallerCellPosition = CellPositionRef + FVector(
                        X * (SmallerCellSize / 2),
                        Y * (SmallerCellSize / 2),
                        Z * (SmallerCellSize / 2));

                    FHitResult HitResult;
                    FCollisionQueryParams Params;
                    Params.AddIgnoredActor(this);

                    bool bHit = GetWorld()->SweepSingleByChannel(
                        HitResult,
                        SmallerCellPosition,
                        SmallerCellPosition,
                        FQuat::Identity,
                        ECC_Visibility,
                        FCollisionShape::MakeBox(FVector(SmallerCellSize / 2)),
                        Params);

                    FS_GridCellsID* NewChildGrid = new FS_GridCellsID();
                    NewChildGrid->GridPersonalID = ++GridIDCounter;
                    NewChildGrid->GridPosition = SmallerCellPosition;
                    NewChildGrid->GridSize = SmallerCellSize;
                    NewChildGrid->IsFree = !bHit;
                    NewChildGrid->ParentGridID = ParentGrid->GridPersonalID;
                    ParentGrid->ChildGridIDs.Add(NewChildGrid->GridPersonalID);
                    
                    ChildGridsMap.Add(SmallerCellPosition, NewChildGrid);
                    
                    if (bHit)
                    {
                        HitGridPositions.Add(SmallerCellPosition);
                    }
                    else
                    {
                        AllGridsMap.Add(SmallerCellPosition, NewChildGrid);
                    }
                }
            }
        }
    }

    if (HitGridPositions.Num() > 0)
    {
        DivideGridsIntoSmallerGrids(HitGridPositions, SmallerCellSize / 2.0f, ChildGridsMap);
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
        for (AActor* DynamicObject : DynamicObjects)
        {
            FVector ObjectLocation = DynamicObject->GetActorLocation();
            FVector* LastPosition = DynamicObjectsLastPosition.Find(DynamicObject);
        
            if (LastPosition && *LastPosition != ObjectLocation)
            {
                FVector ObjectExtent;
                DynamicObject->GetActorBounds(true, ObjectLocation, ObjectExtent);

                int32 ObjectGridLeftX = FMath::FloorToInt((ObjectLocation.X - ObjectExtent.X - OriginOfVolume.X + BoxExtent.X) / CellSize);//left X
                int32 ObjectGridRightX = FMath::FloorToInt((ObjectLocation.X + ObjectExtent.X - OriginOfVolume.X + BoxExtent.X) / CellSize);//right X

                int32 ObjectGridDownY = FMath::FloorToInt((ObjectLocation.Y - ObjectExtent.Y - OriginOfVolume.Y + BoxExtent.Y) / CellSize);//down Y
                int32 ObjectGridUpY = FMath::FloorToInt((ObjectLocation.Y + ObjectExtent.Y - OriginOfVolume.Y + BoxExtent.Y) / CellSize);//up Y

                int32 ObjectGridBackZ = FMath::FloorToInt((ObjectLocation.Z - ObjectExtent.Z - OriginOfVolume.Z + BoxExtent.Z) / CellSize);//back Z
                int32 ObjectGridFrontZ = FMath::FloorToInt((ObjectLocation.Z + ObjectExtent.Z - OriginOfVolume.Z + BoxExtent.Z) / CellSize);//front Z

                for (int32 X = FMath::Max(0, ObjectGridLeftX); X <= FMath::Min(CellsAtX - 1, ObjectGridRightX); X++)
                {
                    for (int32 Y = FMath::Max(0, ObjectGridDownY); Y <= FMath::Min(CellsAtY - 1, ObjectGridUpY); Y++)
                    {
                        for (int32 Z = FMath::Max(0, ObjectGridBackZ); Z <= FMath::Min(CellsAtZ - 1, ObjectGridFrontZ); Z++)
                        {
                            FVector CellPosition = OriginOfVolume + FVector(
                                (X * CellSize) - BoxExtent.X + CellSize / 2,
                                (Y * CellSize) - BoxExtent.Y + CellSize / 2,
                                (Z * CellSize) - BoxExtent.Z + CellSize / 2);
                            CellPositionsRef.Add(CellPosition);
                        }
                    }
                }
                *LastPosition = ObjectLocation;
            }
        }
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
