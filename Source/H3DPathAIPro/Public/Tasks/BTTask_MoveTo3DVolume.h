
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BTTask_MoveTo3DVolume.generated.h"


UCLASS()
class H3DPATHAIPRO_API UBTTask_MoveTo3DVolume : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_MoveTo3DVolume(const FObjectInitializer& ObjectInitializer);

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	UFUNCTION()
	void OnPathFound(const FS_PathResult& ResultRef);
	FTimerHandle CheckTargetActorsLocationTimerHandle;
	void CheckTargetActorsLocation();
	FTimerHandle CheckPathsAvailabilityTimerHandle;
	UFUNCTION()
	void CheckPathsAvailability();
	FTimerHandle MoveToTickTimerHandle;
	void MoveToTick();

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector pointVectorKey;
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	float Tolerance = 100.f;

	UPROPERTY()
	TObjectPtr<UBehaviorTreeComponent> MyOwnerComp;

	TObjectPtr<class AHVolume3D> VolumeRef;
	
	TObjectPtr<AActor> TargetActor;
	TObjectPtr<ACharacter> CharacterRef;
	
	FVector targetLocation;
	TArray<FVector> PathPoints;
	int32 CurrentPathIndex = 0;

	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDrawDebugLine = true;
	bool bIsWalking = true;

	UPROPERTY(EditAnywhere, Category = "Debug")
	float DebugLineDuration = 5.0f;
	
};
