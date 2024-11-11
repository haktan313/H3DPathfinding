// HVolume3D.h
// It is a volume that divides the world into grids and finds the path between two points.

#pragma once

#include "CoreMinimal.h"
#include "HPathCore.h"
#include "StructuresEnums_H3DPathFinding.h"
#include "GameFramework/Actor.h"
#include "HVolume3D.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGridsUpdated);//Delegate for when the grids are updated by DinamicObjects.

UCLASS()
class H3DPATHFINDING_API AHVolume3D : public AActor
{
    GENERATED_BODY()
    
    class UBoxComponent* VolumeBox;//Box component for the volume.

    FVector OriginOfVolume; //Origin of the volume.
    FVector BoxExtent; //Extent of the volume.
    
    int32 CellsAtX;//Number of cells at X axis.
    int32 CellsAtY;//Number of cells at Y axis.
    int32 CellsAtZ;//Number of cells at Z axis.

    TMap<FVector, FS_GridCellsID*> AllGridsMap;//Map of all the grids.
    TArray<FVector> CellsPosition;//Array of the positions of the cells.
    TArray<FVector> UpdateCellsPosition;//Array of the positions of the cells that updated and coming from CellsPosition.
    
    int32 GridIDCounter = 0;//Counter for the grid IDs.
    
    AHPathCore* PathCore = nullptr;//Reference to the path core.

    FCriticalSection AllGridsMapRefMutex;

public:

    float CellSize = 60.0f;//Size of the cell.
    float MinCellSize = 30.f;//Minimum size of the cell.
    float MaxDebugDrawDistance = 500.0f;//Maximum distance for drawing debug grid.
    
    TArray<AActor*> DinamicObjects;//Array of the dinamic objects.
    TMap<AActor*, FVector> DinamicObjectsLastPosition;//Map of the last positions of the dinamic objects.

    FOnGridsUpdated OnGridsUpdated;//Delegate for when the grids are updated by DinamicObjects.

    UPROPERTY(EditAnywhere, Category = "Shape")
    bool bDrawDebugGridsFromPlayer = false;//Draw debug grids from player.

private:
    
    AHVolume3D();
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    void DrawDebugGrid(const FVector& PlayerLocation, float DrawDistance);
    
    void DivideVolumeIntoGrids();//Divide the volume into grids.
    void DivideGridsIntoSmallerGrids(const TArray<FVector>& CellPositionRefs, float SmallerCellSize, TMap<FVector, FS_GridCellsID*>AllGridsMapRef);//Divide the grids into smaller grids.

public:

    void StartUpdateGrids();//Start updating the grids.

private:
    
    FTimerHandle UpdateGridTimerHandle;
    bool bCanUpdateGrids = true;
    void UpdateGrids();//Update the grids.
    void TestGrids(TArray<FVector> gridsPositions);//Test the grids.
    void UpdateGridsStatus(TArray<FVector> cellsPositions);//Update the status of the grids.

public:
    
    void FindPath(UObject* CallingObject, const FName& FunctionName, FVector Start, FVector End, bool bIsWalking, float CharacterRadius, float CharacterHalfHeight, AActor* OwnerRef);//Find the path between two points.
    int32 GetGridIDFromPosition(const FVector& Position) const;//Get the grid ID from the position.
};
