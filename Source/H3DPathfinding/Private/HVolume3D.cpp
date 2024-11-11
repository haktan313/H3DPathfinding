//HVolume3D.cpp

#include "HVolume3D.h"
#include "HPathCore.h"
#include "HDinamicObjects.h"
#include "StructuresEnums_H3DPathFinding.h"
#include "Async/Async.h"
#include "TimerManager.h"
#include "Engine/Engine.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"


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
    PathCore = AHPathCore::GetInstance(GetWorld());//Get the singleton instance of the path core.
    if(!PathCore)
    {
        UE_LOG(LogTemp, Error, TEXT("PathCore is null."));
        return;
    }
    DivideVolumeIntoGrids();//Divide the volume into grids.
}

void AHVolume3D::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if(bDrawDebugGridsFromPlayer)
    {
        // Optional: Draw grid for debugging purposes
        APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
        APawn* PlayerPawn = PlayerController ? PlayerController->GetPawn() : nullptr;

        if (PlayerPawn)
        {
            FVector PlayerLocation = PlayerPawn->GetActorLocation();
            float DrawDistance = 200.0f; // Distance within which grids will be drawn

            DrawDebugGrid(PlayerLocation, DrawDistance);
        }
    }
}

//Draw the debug grid
void AHVolume3D::DrawDebugGrid(const FVector& PlayerLocation, float DrawDistance)
{
    for (const auto& GridPair : AllGridsMap) // Iterating all grid cells in AllGridsMap
    {
        const FS_GridCellsID* Grid = GridPair.Value; // Retrieving each grid cell from the map
        float DistanceToPlayer = FVector::Dist(PlayerLocation, Grid->GridPosition);

        if (DistanceToPlayer <= DrawDistance)
        {
            // Setting color based on grid size
            FColor GridColor = FColor::Green; // Default color

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
                // Different colors for other sizes or the default color
                GridColor = FColor::Yellow;
            }

            // Using a different color if the grid is not free
            if (!Grid->IsFree)
            {
                GridColor = FColor::Red; // Red for blocked grids
            }

            // Drawing the grid as a debug box
            DrawDebugBox(GetWorld(), Grid->GridPosition, FVector(Grid->GridSize / 2), GridColor, false, -1.0f, 0, 1.0f);
        }
    }
}

// Divide the volume into grids
void AHVolume3D::DivideVolumeIntoGrids()  
{
    BoxExtent = VolumeBox->GetScaledBoxExtent();//Get the extent of the box.
    OriginOfVolume = VolumeBox->GetComponentLocation();//Get the origin of the volume.

    CellsAtX = FMath::CeilToInt((BoxExtent.X * 2) / CellSize);//Calculate the number of cells at X axis.
    CellsAtY = FMath::CeilToInt((BoxExtent.Y * 2) / CellSize);//Calculate the number of cells at Y axis.
    CellsAtZ = FMath::CeilToInt((BoxExtent.Z * 2) / CellSize);//Calculate the number of cells at Z axis.

    TArray<FVector> HitGridPositions;//Array of the hit grid positions.
    TMap<FVector, FS_GridCellsID*> AllGridsMapRef;//Map of all the grids.
    
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

                FS_GridCellsID* NewGrid = new FS_GridCellsID();//Create a new grid.
                NewGrid->GridPersonalID = ++GridIDCounter;
                NewGrid->GridPosition = CellPosition;
                NewGrid->GridSize = CellSize;
                NewGrid->IsFree = !bHit;
                
                AllGridsMapRef.Add(CellPosition, NewGrid);//Add the grid to the map for dividing into smaller grids.

                if (bHit)
                {
                    bool bDynamicObject = false;
                    for(FHitResult HitResult : HitResults)//Check if the hit actor has DinamicObjects component.
                    {
                        if(HitResult.GetActor()->FindComponentByClass<UHDinamicObjects>())//If the hit actor has DinamicObjects component.
                        {
                            bDynamicObject = true;
                            
                            AllGridsMap.Add(CellPosition, NewGrid);//Add the grid to the map.
                            DinamicObjects.Add(HitResult.GetActor());//Add the hit actor to the dinamic objects.
                            DinamicObjectsLastPosition.Add(HitResult.GetActor(), HitResult.GetActor()->GetActorLocation());//Add the last position of the hit actor to the dinamic objects last position.
                            CellsPosition.Add(CellPosition);//Add the cell position to the cells position for updating the grids.
                            
                            if(!GetWorld()->GetTimerManager().IsTimerActive(UpdateGridTimerHandle))//If the timer is not active.
                            {
                                StartUpdateGrids();//Start updating the grids.
                            }
                        }
                    }
                    if(!bDynamicObject)
                    {
                        HitGridPositions.Add(CellPosition);//Add the hit grid position to the hit grid positions for dividing into smaller grids.
                    }
                }
                else
                {
                    AllGridsMap.Add(CellPosition, NewGrid);//Add the grid to the map if it is free.
                }
            }
        }
    }

    if (HitGridPositions.Num() > 0)//If there are hit grid positions.
    {
        DivideGridsIntoSmallerGrids(HitGridPositions, CellSize / 2.0f, AllGridsMapRef);//Divide the grids into smaller grids.
    }
}

// Divide the grids into smaller grids
void AHVolume3D::DivideGridsIntoSmallerGrids(const TArray<FVector>& CellPositionRefs, float SmallerCellSize, TMap<FVector, FS_GridCellsID*> AllGridsMapRef)
{
    if (SmallerCellSize <= MinCellSize - 1)//If the cell size is smaller than the minimum cell size.
    {
        return;
    }
    TArray<FVector> HitGridPositions;//Array of the hit grid positions.
    TMap<FVector, FS_GridCellsID*> ChildGridsMap;//Map of the child grids.
    
    for (const FVector& CellPositionRef : CellPositionRefs)//For each cell position.
    {
        FS_GridCellsID* ParentGrid = nullptr;//Parent grid.
        FS_GridCellsID* grid = *AllGridsMapRef.Find(CellPositionRef);//Get the grid from the map.
        if(grid)
        {
            ParentGrid = grid;//Set the parent grid.
        }
        if (!ParentGrid)//If the parent grid is not valid continue.
        {
            continue;
        }

        for (int32 X = -1; X <= 1; X += 2)//For each X.
        {
            for (int32 Y = -1; Y <= 1; Y += 2)//For each Y.
            {
                for (int32 Z = -1; Z <= 1; Z += 2)//For each Z. 
                {
                    FVector SmallerCellPosition = CellPositionRef + FVector(
                        X * (SmallerCellSize / 2),
                        Y * (SmallerCellSize / 2),
                        Z * (SmallerCellSize / 2));//Calculate the smaller cell position.

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

                    FS_GridCellsID* NewChildGrid = new FS_GridCellsID();//Create a new child grid.
                    NewChildGrid->GridPersonalID = ++GridIDCounter;
                    NewChildGrid->GridPosition = SmallerCellPosition;
                    NewChildGrid->GridSize = SmallerCellSize;
                    NewChildGrid->IsFree = !bHit;
                    NewChildGrid->ParentGridID = ParentGrid->GridPersonalID;
                    ParentGrid->ChildGridIDs.Add(NewChildGrid->GridPersonalID);
                    
                    ChildGridsMap.Add(SmallerCellPosition, NewChildGrid);
                    
                    if (bHit)
                    {
                        HitGridPositions.Add(SmallerCellPosition);//Add the hit grid position to the hit grid positions for dividing into smaller grids again.
                    }
                    else
                    {
                        AllGridsMap.Add(SmallerCellPosition, NewChildGrid);//Add the grid to the map if it is free that means it is not hit by anything.
                    }
                }
            }
        }
    }

    if (HitGridPositions.Num() > 0)//If there are hit grid positions.
    {
        DivideGridsIntoSmallerGrids(HitGridPositions, SmallerCellSize / 2.0f,ChildGridsMap);//Divide the grids into smaller grids again.
    }
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

// Start updating the grids
void AHVolume3D::StartUpdateGrids()
{
    if(!GetWorld()->GetTimerManager().IsTimerActive(UpdateGridTimerHandle))//If the timer is not active.
    {
        GetWorld()->GetTimerManager().SetTimer(UpdateGridTimerHandle, this, &AHVolume3D::UpdateGrids, 1/3.f, true);//Start the timer for updating the grids.
    }
}

void AHVolume3D::UpdateGrids()
{
    if (DinamicObjects.Num() == 0)//If there are no dinamic objects.
    {
        CellsPosition.Empty();//Empty the cells position.
        UpdateCellsPosition.Empty();//Empty the update cells position.
        GetWorld()->GetTimerManager().ClearTimer(UpdateGridTimerHandle);//Clear the timer.
    }
    
    if (!bCanUpdateGrids)//If the grids cannot be updated.
    {
        return;
    }
    CellsPosition.Empty();//Empty the cells position.
    Async(EAsyncExecution::ThreadPool,[this]()
    {
        bCanUpdateGrids = false;//Set the grids can be updated to false.
        TArray<FVector> CellPositionsRef;//Array of the cell positions reference.
        for (AActor* DinamicObject : DinamicObjects)//For each dinamic object.
        {
            FVector ObjectLocation = DinamicObject->GetActorLocation();//Get the location of the dinamic object.
            FVector* LastPosition = DinamicObjectsLastPosition.Find(DinamicObject);//Get the last position of the dinamic object.
        
            if (LastPosition && *LastPosition != ObjectLocation)//If the last position is valid and the last position is not equal to the object location.
            {
                FVector ObjectExtent;
                DinamicObject->GetActorBounds(true, ObjectLocation, ObjectExtent);//Get the extent of the dinamic object.

                int32 ObjectGridLeftX = FMath::FloorToInt((ObjectLocation.X - ObjectExtent.X - OriginOfVolume.X + BoxExtent.X) / CellSize);//Calculate the left X.
                int32 ObjectGridRightX = FMath::FloorToInt((ObjectLocation.X + ObjectExtent.X - OriginOfVolume.X + BoxExtent.X) / CellSize);//Calculate the right X.

                int32 ObjectGridDownY = FMath::FloorToInt((ObjectLocation.Y - ObjectExtent.Y - OriginOfVolume.Y + BoxExtent.Y) / CellSize);//Calculate the down Y.
                int32 ObjectGridUpY = FMath::FloorToInt((ObjectLocation.Y + ObjectExtent.Y - OriginOfVolume.Y + BoxExtent.Y) / CellSize);//Calculate the up Y.

                int32 ObjectGridBackZ = FMath::FloorToInt((ObjectLocation.Z - ObjectExtent.Z - OriginOfVolume.Z + BoxExtent.Z) / CellSize);//Calculate the back Z.
                int32 ObjectGridFrontZ = FMath::FloorToInt((ObjectLocation.Z + ObjectExtent.Z - OriginOfVolume.Z + BoxExtent.Z) / CellSize);//Calculate the front Z.

                for (int32 X = FMath::Max(0, ObjectGridLeftX); X <= FMath::Min(CellsAtX - 1, ObjectGridRightX); X++)//For each X.
                {
                    for (int32 Y = FMath::Max(0, ObjectGridDownY); Y <= FMath::Min(CellsAtY - 1, ObjectGridUpY); Y++)//For each Y.
                    {
                        for (int32 Z = FMath::Max(0, ObjectGridBackZ); Z <= FMath::Min(CellsAtZ - 1, ObjectGridFrontZ); Z++)//For each Z.
                        {
                            FVector CellPosition = OriginOfVolume + FVector(
                                (X * CellSize) - BoxExtent.X + CellSize / 2,
                                (Y * CellSize) - BoxExtent.Y + CellSize / 2,
                                (Z * CellSize) - BoxExtent.Z + CellSize / 2);
                            CellPositionsRef.Add(CellPosition);//Add the cell position to the cell positions reference for testing the grids.
                        }
                    }
                }
                *LastPosition = ObjectLocation; // Update the last position of the dinamic object.
            }
        }
        AsyncTask(ENamedThreads::GameThread, [this,CellPositionsRef]()
        {
            if(CellPositionsRef.Num() > 0)//If there are cell positions reference.
            {
                TestGrids(CellPositionsRef);//Test the grids.
            }
            else
            {
                bCanUpdateGrids = true;//Set the grids can be updated to true.
            }
        });
    });
}

// Test the grids
void AHVolume3D::TestGrids(TArray<FVector> gridsPositions)
{
    UWorld* WorldRef = GetWorld();
    Async(EAsyncExecution::ThreadPool, [this,gridsPositions, WorldRef]()
    {
        TArray<FVector> CellsPositionLocal;//Array of the cells position.
        for(FVector gridPosition : gridsPositions)//For each grid position.
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
                CellsPosition.Add(gridPosition);//Add the grid position to the cells position for updating the grids.
            }
        }
        CellsPositionLocal = CellsPosition;//Set the cells position local to the cells position.
        AsyncTask(ENamedThreads::GameThread, [this,CellsPositionLocal]()
        {
            UpdateGridsStatus(CellsPositionLocal);//Update the status of the grids.
        });
    });
}

// Update the status of the grids
void AHVolume3D::UpdateGridsStatus(TArray<FVector> cellsPositions)
{
    for (int32 i = UpdateCellsPosition.Num() - 1; i >= 0; --i)//For each update cell position member.
    {
        const FVector& updateCell = UpdateCellsPosition[i];//Get the update cell.
        if (!cellsPositions.Contains(updateCell))//If the cells positions do not contain the update cell.
        {
            FS_GridCellsID** gridPtr = AllGridsMap.Find(updateCell);//Find the grid.
            if (gridPtr && *gridPtr)//If the grid is valid.
            {
                UpdateCellsPosition.RemoveAt(i); // Remove the update cell from the update cells position.
                (*gridPtr)->IsFree = true; // Set the grid is free.
            }
        }
    }
    for (const FVector& cellPosition : cellsPositions)//For each cell position.
    {
        FS_GridCellsID** gridPtr = AllGridsMap.Find(cellPosition);//Find the grid.
        if (gridPtr && *gridPtr) // If the grid is valid.
        {
            if (!UpdateCellsPosition.Contains(cellPosition))//If the update cells position do not contain the cell position.
            {
                UpdateCellsPosition.Add(cellPosition);//Add the cell position to the update cells position.
            }
            if((*gridPtr)->IsFree)//If the grid is free.
            {
                (*gridPtr)->IsFree = false; // Set the grid is not free.
            }
        }
    }
    OnGridsUpdated.Broadcast(); // Broadcast the OnGridsUpdated delegate.
    bCanUpdateGrids = true;//Set the grids can be updated to true.
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

// Find the path between two points
void AHVolume3D::FindPath(UObject* CallingObject, const FName& FunctionName, FVector Start, FVector End, bool bIsWalking, float CharacterRadius, float CharacterHalfHeight, AActor* OwnerRef)
{
    FS_PathRequest PathRequest;
    PathRequest.Start = Start;
    PathRequest.End = End;
    PathRequest.VolumeRef = this;
    PathRequest.OnPathFound.BindUFunction(CallingObject, FunctionName);//Bind the function to the OnPathFound delegate.
    PathRequest.CharacterRadius = CharacterRadius;
    PathRequest.CharacterHalfHeight = CharacterHalfHeight;
    PathRequest.bIsWalking = bIsWalking;
    PathRequest.Owner = OwnerRef;
    
    PathCore->AssignRequest(PathRequest);//Assign the pathfinding request.
}

// Get the grid ID from the position
int32 AHVolume3D::GetGridIDFromPosition(const FVector& Position) const
{
    int32 XIndex = FMath::FloorToInt((Position.X - OriginOfVolume.X + BoxExtent.X) / CellSize);//Calculate the X index.
    int32 YIndex = FMath::FloorToInt((Position.Y - OriginOfVolume.Y + BoxExtent.Y) / CellSize);//Calculate the Y index.
    int32 ZIndex = FMath::FloorToInt((Position.Z - OriginOfVolume.Z + BoxExtent.Z) / CellSize);//Calculate the Z index.
    
    if (XIndex < 0 || XIndex >= CellsAtX ||
        YIndex < 0 || YIndex >= CellsAtY ||
        ZIndex < 0 || ZIndex >= CellsAtZ)//If the indexes are out of bounds.
    {
        return -1;
    }
    
    FVector CellLeftBottomCorner = OriginOfVolume + FVector(
        (XIndex * CellSize) - BoxExtent.X,
        (YIndex * CellSize) - BoxExtent.Y,
        (ZIndex * CellSize) - BoxExtent.Z); // Calculate the left bottom corner of the cell
    
    FVector CellRightTopCorner = CellLeftBottomCorner + FVector(CellSize, CellSize, CellSize); // Calculate the right top corner of the cell
    
    if (Position.X >= CellLeftBottomCorner.X && Position.X <= CellRightTopCorner.X &&
        Position.Y >= CellLeftBottomCorner.Y && Position.Y <= CellRightTopCorner.Y &&
        Position.Z >= CellLeftBottomCorner.Z && Position.Z <= CellRightTopCorner.Z) // Check if the position is inside the cell
    {
        FVector CellPosition = OriginOfVolume + FVector(
            (XIndex * CellSize) - BoxExtent.X + CellSize / 2,
            (YIndex * CellSize) - BoxExtent.Y + CellSize / 2,
            (ZIndex * CellSize) - BoxExtent.Z + CellSize / 2);

        const FS_GridCellsID* const* GridPtr = AllGridsMap.Find(CellPosition);//Find the grid.
        
        if (!GridPtr || !(*GridPtr))//If the grid is not valid.
        {
            return -1;
        }

        const FS_GridCellsID* Grid = *GridPtr;//Get the grid.
        return Grid->GridPersonalID;//Return the grid personal ID.
    }

    return -1;
}
