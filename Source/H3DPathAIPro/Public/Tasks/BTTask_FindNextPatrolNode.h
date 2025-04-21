
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FindNextPatrolNode.generated.h"


UCLASS()
class H3DPATHAIPRO_API UBTTask_FindNextPatrolNode : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_FindNextPatrolNode();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere,Category="Blackboard")
	FBlackboardKeySelector pointVector;
	
};
