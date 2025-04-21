

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "HVolume3D.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "HPathCore.h"
#include "Engine/World.h"
#include "HMoveToAsyncAction.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHMoveToOutput);

UCLASS()
class H3DPATHAIPRO_API UHMoveToAsyncAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
	FHMoveToOutput OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FHMoveToOutput OnFailed;

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", AdvancedDisplay = "Tolerance,DrawDebugLine,DebugLineTime"), Category = "HaktanAI")
	static UHMoveToAsyncAction* HMoveTo(UObject* WorldContextObject, ACharacter* Character, AHVolume3D* Volume, FVector Destination, AActor* TargetActor = nullptr, float Tolerance = 100.f, bool DrawDebugLine = false, float DebugLineTime = 5.f);

	virtual void Activate() override;

private:
	UPROPERTY()
	UObject* WorldContext;
	
	UPROPERTY()
	TObjectPtr<ACharacter> CharacterRef;
	UPROPERTY()
	TObjectPtr<AHVolume3D> VolumeRef;
	UPROPERTY()
	TObjectPtr<AActor> TargetActor;

	FVector TargetLocation;
	float Tolerance;
	bool bDrawDebugLine;
	float DebugLineTime;
	bool bIsWalking;

	TArray<FVector> PathPoints;
	int32 CurrentIndex = 0;

	FTimerHandle MoveTickHandle;
	FTimerHandle AvailabilityHandle;
	FTimerHandle CheckTargetActorsLocationTimerHandle;
	UFUNCTION()
	void OnPathFound(const FS_PathResult& Result);
	void TickMove();
	void CheckAvailability();
	void CheckTargetActorsLocation();
	
};
