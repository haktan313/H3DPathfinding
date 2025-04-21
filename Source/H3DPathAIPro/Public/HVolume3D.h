
#pragma once

#include "CoreMinimal.h"
#include "StructuresEnums_H3DPathFinding.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "HPathCore.h"
#include "HVolume3D.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGridsUpdated);//delegate for when the grids are updated by DinamicObjects

UCLASS()
class H3DPATHAIPRO_API AHVolume3D : public AActor
{
    GENERATED_BODY()

    UPROPERTY()
    TObjectPtr<class UBoxComponent> VolumeBox;

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
    TObjectPtr<AHPathCore> PathCore = nullptr;

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
    UPROPERTY(EditAnywhere, Category = "Shape")
    float DrawDistance = 200.f;
    UPROPERTY(EditAnywhere, Category = "Shape")
    TArray<TObjectPtr<AActor>> targetObjects;
    TArray<FVector> CellsPositions2;

private:
    
    AHVolume3D();
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;
    void DrawDebugGrid(const FVector& PlayerLocation, bool bPlayerTicked);
    
    void DivideVolumeIntoGrids();

public:

    void StartUpdateGrids();

private:
    
    FTimerHandle UpdateGridTimerHandle;
    bool bCanUpdateGrids = true;
    void UpdateGrids();
    void DynamicObjectLastPositionCheck(TArray<FVector>& CellPositionsRef);
    void SetCellsPositionsFromPosition(const FVector Position, const FVector ObjectExtent, TArray<FVector>& CellsPositions);
    void TestGrids(TArray<FVector> gridsPositions);
    void UpdateGridsStatus(TArray<FVector> cellsPositions);

public:
    
    void FindPath(UObject* CallingObject, const FName& FunctionName, FVector Start, FVector End, bool bIsWalking, float CharacterRadius, float CharacterHalfHeight, AActor* OwnerRef);
    int32 GetGridIDFromPosition(const FVector& Position) const;
    UFUNCTION(BlueprintPure, Category = "Haktan|Pathfinding")
    FVector GetRandomPointOn3DVolume(const FVector& Origin, float Radius,E_RandomPointsDimention Dimention);
    UFUNCTION(BlueprintPure, Category = "Haktan|Pathfinding")
    FVector GetRandomReachablePointOn3DVolume(const FVector& Origin, float Radius, AActor* ActorRef,E_RandomPointsDimention Dimention);
};
