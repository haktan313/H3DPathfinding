
#include "Tasks/BTTask_SetFocus.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_SetFocus::UBTTask_SetFocus()
{
	NodeName = TEXT("Set Focus");
}

EBTNodeResult::Type UBTTask_SetFocus::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if(AIController)
	{
		UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
		if(BlackboardComp)
		{
			AActor* target = Cast<AActor>(BlackboardComp->GetValueAsObject(targetActorKey.SelectedKeyName));
			if(target)
			{
				AIController->SetFocus(target);
				return EBTNodeResult::Succeeded;
			}
		}
	}
	return EBTNodeResult::Failed;
}
