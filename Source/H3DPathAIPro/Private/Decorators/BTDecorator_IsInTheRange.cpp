

#include "Decorators/BTDecorator_IsInTheRange.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTDecorator_IsInTheRange::UBTDecorator_IsInTheRange()
{
	NodeName = "Is In The Range";
	bNotifyTick = true;
}

bool UBTDecorator_IsInTheRange::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	AAIController* AIController = OwnerComp.GetAIOwner();//
	if(AIController)
	{
		APawn* pawn = AIController->GetPawn();
		if(pawn)
		{
			UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComponent();
			if(BlackboardComp)
			{
				AActor* targetActor = Cast<AActor>(BlackboardComp->GetValueAsObject(targetActorKey.SelectedKeyName));
				if(targetActor)
				{
					float distance = FVector::Dist(targetActor->GetActorLocation(), pawn->GetActorLocation());
					distance = distance - AcceptableErorRadius;
					return distance <= idealRangeValue;
				}
			}
		}
	}
	return false;
}

void UBTDecorator_IsInTheRange::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	bool bIsInRange = CalculateRawConditionValue(OwnerComp, NodeMemory);
	if (bIsInRange)
	{
		ConditionalFlowAbort(OwnerComp, EBTDecoratorAbortRequest::ConditionPassing);
	}
	else
	{
		ConditionalFlowAbort(OwnerComp, EBTDecoratorAbortRequest::ConditionResultChanged);
	}
}


