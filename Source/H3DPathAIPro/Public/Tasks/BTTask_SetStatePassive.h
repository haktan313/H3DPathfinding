
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetStatePassive.generated.h"


UCLASS()
class H3DPATHAIPRO_API UBTTask_SetStatePassive : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_SetStatePassive(const FObjectInitializer& ObjectInitializer);

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	FTimerHandle PassiveTimerHandle;
	UFUNCTION()
	void SetStateAsPassive();

	UPROPERTY(EditAnywhere, Category = "Task")
	float howManySecondsBeforePassive = 5.0f;

	UPROPERTY()
	TObjectPtr<UBehaviorTreeComponent> MyOwnerComp;
	UPROPERTY()
	TObjectPtr<class AHAIController> AIController;
};
