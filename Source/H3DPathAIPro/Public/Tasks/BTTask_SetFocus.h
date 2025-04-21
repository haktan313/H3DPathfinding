
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetFocus.generated.h"


UCLASS()
class H3DPATHAIPRO_API UBTTask_SetFocus : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_SetFocus();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector targetActorKey;
	
};
