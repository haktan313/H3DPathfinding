
#pragma once

#include "CoreMinimal.h"
#include "StructuresEnums_H3DPathFinding.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "HPathCore.h"
#include "HVolume3D.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGridsUpdated);//delegate for when the grids are updated by DinamicObjects

UCLASS()
class H3DPATHFINDING_API AHVolume3D : public AActor
{
    GENERATED_BODY()

    UPROPERTY()
    class UBoxComponent* VolumeBox;

    FVector OriginOfVolume;
    FVector BoxExtent;
    
    int32 CellsAtX;
    int32 CellsAtY;
    int32 CellsAtZ;

    TMap<FVector, FS_GridCellsID*> AllGridsMap;
    TArray<FVector> CellsPosition;
    TArray<FVector> UpdateCellsPosition;
    
    int32 GridIDCounter = 0;

    UPROPERTY()
    AHPathCore* PathCore = nullptr;

    FCriticalSection AllGridsMapRefMutex;

public:

    float CellSize = 60.0f;
    float MinCellSize = 30.f;
    float MaxDebugDrawDistance = 500.0f;

    UPROPERTY()
    TArray<AActor*> DynamicObjects;
    UPROPERTY()
    TMap<AActor*, FVector> DynamicObjectsLastPosition;

    FOnGridsUpdated OnGridsUpdated;

    UPROPERTY(EditAnywhere, Category = "Shape")
    bool bDrawDebugGridsFromPlayer = false;

private:
    
    AHVolume3D();
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    void DrawDebugGrid(const FVector& PlayerLocation, float DrawDistance);
    
    void DivideVolumeIntoGrids();
    void DivideGridsIntoSmallerGrids(const TArray<FVector>& CellPositionRefs, float SmallerCellSize, TMap<FVector, FS_GridCellsID*>AllGridsMapRef);

public:

    void StartUpdateGrids();

private:
    
    FTimerHandle UpdateGridTimerHandle;
    bool bCanUpdateGrids = true;
    void UpdateGrids();
    void TestGrids(TArray<FVector> gridsPositions);
    void UpdateGridsStatus(TArray<FVector> cellsPositions);

public:
    
    void FindPath(UObject* CallingObject, const FName& FunctionName, FVector Start, FVector End, bool bIsWalking, float CharacterRadius, float CharacterHalfHeight, AActor* OwnerRef);
    int32 GetGridIDFromPosition(const FVector& Position) const;
};
