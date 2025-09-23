

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Structures_Pathfinding.h"
#include "H3DVolume.generated.h"

UCLASS()
class H3DPATHFINDING_API AH3DVolume : public AActor
{
	GENERATED_BODY()

	//------------------------------- Grid Settings

	UPROPERTY(EditAnywhere, Category="Grid Settings|Volume")
	float VolumeThickness = 5.f;
	
	UPROPERTY(EditAnywhere, Category="Grid Settings|Cells", meta=(UIMin="40", UIMax="120"))
	uint8 CellSize = 60;
	UPROPERTY(EditAnywhere, Category="Grid Settings|Cells", meta=(UIMin="0", UIMax="6"))
	uint8 CellSizeMultiplierForAdjustment = 2;
	UPROPERTY(EditAnywhere, Category="Grid Settings|Cells", meta=(UIMin="1", UIMax="256"))
	uint8 CellAmountOfTargetActorsBoundsOccupied = 1;
	UPROPERTY(EditAnywhere, Category="Grid Settings|Cells")//Trace channel for creating grids
	TEnumAsByte<ECollisionChannel> CollisionChannel = ECC_WorldStatic;
	
	UPROPERTY(EditAnywhere, Category="Grid Settings|Debug")
	bool bDrawDebugFromPlayer;
	UPROPERTY(EditAnywhere, Category="Grid Settings|Debug", meta=(UIMin="100.0", UIMax="1000.0"))
	float PlayersDrawDistance = 200.f;
	UPROPERTY(EditAnywhere, Category="Grid Settings|Debug")
	TMap<TObjectPtr<AActor>, float> DebugActors;
	UPROPERTY(EditAnywhere, Category="Grid Settings|Debug")
	bool bDrawSelectedActorsDebugGrids;
	
#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category="Grid Settings|Debug")
	bool bDrawCameraDebugGridsOnEditor;
	UPROPERTY(EditAnywhere, Category="Grid Settings|Debug", meta=(UIMin="100.0", UIMax="1000.0"))
	float CameraDrawDistance = 200.f;
#endif
	
	UPROPERTY(EditAnywhere, Category="Grid Settings|Dynamic Objects", meta=(UIMin="0.1", UIMax="5.0"))
	float UpdateGridsRate = .2f;

	//------------------------------- Variables
	UPROPERTY()
	TObjectPtr<class AH3DPathCore> PathCore = nullptr;
	UPROPERTY()
	TObjectPtr<class UBoxComponent> VolumeBox;
	UPROPERTY()
	TMap<int, FPathfindingGrid> AllGridsMap;
	UPROPERTY()
	TMap<FVector, int> AllGridsMapByPosition;
	UPROPERTY()
	TArray<TObjectPtr<AActor>> DynamicObjects;
	UPROPERTY()
	TMap<TObjectPtr<AActor>, FTransform> DynamicObjectsLastPosition;
	UPROPERTY()
	TMap<TObjectPtr<AActor>, FVector> DynamicActorsLastBounds;
	TMap<TObjectPtr<AActor>, TArray<int>> predictedGridOfDynamicObjects;
 

	UPROPERTY()
	FTimerHandle DynamicObjectsCheckTimerHandle;

	UPROPERTY()
	FVector BoxExtent;
	UPROPERTY()
	FVector OriginOfVolume;

	UPROPERTY()
	int CellsAtX;
	UPROPERTY()
	int CellsAtY;
	UPROPERTY()
	int CellsAtZ;
	UPROPERTY()
	int TotalCells;

	UPROPERTY()
	bool bDynamicObjectsFound;

	//------------------------------- Functions
	
	AH3DVolume();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
#if WITH_EDITOR
	virtual bool ShouldTickIfViewportsOnly() const override { return true; } 
#endif

	//------------------------------- Debug Draw Functions
	void DebugDrawGridsFromSelectedActors();
	void DebugDrawGridsFromPlayer();
	void DebugGridsCameraOnEditor();
	void DrawBox(bool bPersistLines, float LifeTime, float Thickness, FVector from, float tolerance, FColor freeColor, FColor occupiedColor);

	//------------------------------- Grid Functions
	void PrepareForDividing();
	UFUNCTION(CallInEditor, Category = "Grid Settings")
	void DivideVolumeIntoGrids();

	//------------------------------------------------ Helpers
public:
	FPathfindingGrid* GetGridFromID(const int gridID);
	
	UFUNCTION(BlueprintPure, Category = "Pathfinding")
	int GetGridIDFromPosition(const FVector& Position) const;
	
	UFUNCTION(BlueprintPure, Category = "Pathfinding")
	FORCEINLINE uint8 GetGridCellSize() const { return CellSize; }
	
	UFUNCTION(BlueprintPure, Category = "Pathfinding")
	FORCEINLINE uint8 GetCellSizeMultiplierForAdjustment() const { return CellSizeMultiplierForAdjustment; }
	
	UFUNCTION(BlueprintPure, Category = "Pathfinding")
	FORCEINLINE float GetUpdateGridsRate() const { return UpdateGridsRate; }
	
	UFUNCTION(BlueprintPure, Category = "Pathfinding")
	FORCEINLINE ECollisionChannel GetCollisionChannel() const { return CollisionChannel; }
	
	UFUNCTION(BlueprintPure, Category = "Pathfinding")
	FORCEINLINE uint8 GetCellAmountOfTargetActorsBoundsOccupied() const { return CellAmountOfTargetActorsBoundsOccupied; }
	
private:
	UFUNCTION(BlueprintPure, Category = "Pathfinding")
	FORCEINLINE int GenerateGridID() { return AllGridsMap.Num() + 1;}
	
	void SetCellsDepandsOnDynamicObjectMovement(const FVector& ObjectBoxExtent, const FVector& CurrentLocation, bool bSetFree, UWorld* World, AActor* IgnoreActor = nullptr);
	void SetCellsDepandsOnVelocityOfDynamicObject(const FVector& ObjectBoxExtent, const FVector& CurrentLocation, const FVector& Velocity, AActor* DynamicObject);
	void SetNewGrid(const FVector& Position, bool bIsFree);
	void SaveDynamicObjectsData(AActor* DynamicObject);
	
	//------------------------------- Dynamic Objects Functions
	void StartUpdateDynamicObjects();
public:
	void SetNewDynamicObject(AActor* DynamicObject);
	void UnSetNewDynamicObject(AActor* DynamicObject, bool bIsItDestroyed);
private:
	void UpdateDynamicObjects();
	void SetCellsFromNewPositionOfDynamicObject(const FVector& PositionOfDynamicObject, const FVector& ObjectBoxExtent, TArray<FVector>& CellPositions);

	//---------------------------------------------------------------- Pathfinding
public:
	void FindPath(UObject* CallingObject, const FName& FunctionName, APawn* Pawn, FVector Start, FVector End, float Tolerance);

};
