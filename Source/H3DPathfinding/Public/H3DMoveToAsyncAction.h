
#pragma once

#include "CoreMinimal.h"
#include "H3DVolume.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Tickable.h"
#include "Structures_Pathfinding.h"
#include "H3DMoveToAsyncAction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHMoveToOutput, EFailureType, FailureType);//Output delegate for Blueprint

UCLASS()
class H3DPATHFINDING_API UH3DMoveToAsyncAction : public UBlueprintAsyncActionBase, public FTickableGameObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", AdvancedDisplay = "Tolerance,DrawDebugLine,DebugLineTime"), Category = "HaktanAI")
	static UH3DMoveToAsyncAction* H3DMoveTo(UObject* WorldContextObject, APawn* Pawn, AH3DVolume* Volume, FVector Destination, APawn* TargetActor = nullptr, TEnumAsByte
	                                        <ECollisionChannel> PathCheckChannel = ECollisionChannel::ECC_WorldStatic, float Tolerance = 10.f, bool DrawDebugLine = false, float DebugLineTime = 5.f);
	void ClearTimers();

private:
	EFailureType CheckFailureConditions();
	
	virtual void Activate() override;
	virtual void SetReadyToDestroy() override;

	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	
	UFUNCTION()
	void OnPathFound(const FPathResult& Result);
	void TickMove();
	UFUNCTION()
	void CheckAvailability();
	UFUNCTION()
	void CheckTargetActorsLocation();
	
	UPROPERTY(BlueprintAssignable)
	FHMoveToOutput OnSuccess;
	UPROPERTY(BlueprintAssignable)
	FHMoveToOutput OnFailed;

	UPROPERTY()
	FTimerHandle MoveTickHandle;
	UPROPERTY()
	FTimerHandle AvailabilityHandle;
	UPROPERTY()
	FTimerHandle CheckTargetActorsLocationTimerHandle;
	UPROPERTY()
	FTimerHandle CooldownForFindNewPathHandleTargetActor;
	UPROPERTY()
	FTimerHandle CooldownForFindNewPathHandleCheckAvailability;
	
	UPROPERTY()
	TObjectPtr<UObject> WorldContext;
	UPROPERTY()
	TEnumAsByte<ECollisionChannel> PathCheckChannel;

	
	UPROPERTY()
	TObjectPtr<APawn> Pawn;
	UPROPERTY()
	TObjectPtr<AH3DVolume> Volume;
	UPROPERTY()
	TObjectPtr<APawn> TargetActor;
	
	FVector TargetLocation;
	TArray<FVector> PathPoints;
	
	uint8 CellAmountOfTargetActorsBoundOcupied = 0;
	int CurrentIndex = 0;

	bool bPathFound = false;
	bool bDrawDebugLine;
	bool bRepathInProgress = false;
	
	float Tolerance;
	float DebugLineTime;
	float NewPathStartPointPredictionTime = 0.5f;

};
