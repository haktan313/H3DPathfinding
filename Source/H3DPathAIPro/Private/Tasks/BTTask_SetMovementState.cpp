
#include "Tasks/BTTask_SetMovementState.h"
#include "AIController.h"
#include "HAIBaseComponent.h"
#include "Enums_HAISystem.h"

UBTTask_SetMovementState::UBTTask_SetMovementState()
{
	NodeName = TEXT("Set Movement State");
}

EBTNodeResult::Type UBTTask_SetMovementState::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if(AIController)
	{
		APawn* pawn = AIController->GetPawn();
		if(pawn)
		{
			UHAIBaseComponent* HAIBaseComponent = Cast<UHAIBaseComponent>(pawn->GetComponentByClass(UHAIBaseComponent::StaticClass()));
			if(HAIBaseComponent)
			{
				switch (MovementType)
				{
				case E_MovementType::walk:
					HAIBaseComponent->SetMovementStateWalk(MovementState);
					break;
				case E_MovementType::fly:
					HAIBaseComponent->SetMovementStateFly(MovementState);
					break;
				default:
					HAIBaseComponent->SetMovementStateWalk(MovementState);
					break;
				}
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}
