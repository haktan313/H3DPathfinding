
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Enums_HAISystem.h"
#include "BTTask_SetMovementState.generated.h"

UCLASS()
class H3DPATHAIPRO_API UBTTask_SetMovementState : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_SetMovementState();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

public:
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	E_MovementType MovementType;
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	E_MovementState MovementState;
};
