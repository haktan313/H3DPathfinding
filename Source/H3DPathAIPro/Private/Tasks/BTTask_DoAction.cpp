

#include "Tasks/BTTask_DoAction.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "HAIBaseComponent.h"
#include "HTokenSystemComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Bool.h"

UBTTask_DoAction::UBTTask_DoAction(const FObjectInitializer& ObjectInitializer)
{
	NodeName = TEXT("DoAction");
	bCreateNodeInstance = true;//for latent task
	CanDoActionBoolKey.AddBoolFilter(this, CanDoActionBoolKey.SelectedKeyName);
	TargetKey.AddObjectFilter(this,TargetKey.SelectedKeyName, AActor::StaticClass());
}

EBTNodeResult::Type UBTTask_DoAction::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if(AIController)
	{
		Pawn = AIController->GetPawn();
		if(Pawn)
		{
			HAIBaseComponent = Cast<UHAIBaseComponent>(Pawn->GetComponentByClass(UHAIBaseComponent::StaticClass()));
			if(HAIBaseComponent)
			{
				HAIBaseComponent->OnDoAction.Broadcast(ActionID);
				HAIBaseComponent->OnActionEnd.AddDynamic(this, &UBTTask_DoAction::ActionEnd);
				MyOwnerComp = &OwnerComp;
				return EBTNodeResult::InProgress;
			}
		}
	}
	return EBTNodeResult::Failed;
}

EBTNodeResult::Type UBTTask_DoAction::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if(TokenTooked)
	{
		AActor* Target = Cast<AActor>(MyOwnerComp->GetBlackboardComponent()->GetValueAsObject(TargetKey.SelectedKeyName));
		UHTokenSystemComponent* TokenSystem = Pawn->FindComponentByClass<UHTokenSystemComponent>();
		if(TokenSystem && Target && TokenSystem->TokenMap.Contains(Target))
		{
			TokenAmount = Pawn->FindComponentByClass<UHTokenSystemComponent>()->TokenMap[Target];
			TokenSystem->GiveTokenToTarget(TokenAmount, Target);
			MyOwnerComp->GetBlackboardComponent()->SetValueAsBool(CanDoActionBoolKey.SelectedKeyName, false);
		}
	}
	HAIBaseComponent->OnActionEnd.RemoveDynamic(this, &UBTTask_DoAction::ActionEnd);
	HAIBaseComponent->OnActionEnd.Broadcast(E_DoActionResult::aborted);
	return EBTNodeResult::Aborted;
}

void UBTTask_DoAction::ActionEnd(E_DoActionResult DoActionResult)
{
	HAIBaseComponent->OnActionEnd.RemoveDynamic(this, &UBTTask_DoAction::ActionEnd);
	if(MyOwnerComp)
	{
		if(TokenTooked)
		{
			AActor* Target = Cast<AActor>(MyOwnerComp->GetBlackboardComponent()->GetValueAsObject(TargetKey.SelectedKeyName));
			UHTokenSystemComponent* TokenSystem = Pawn->FindComponentByClass<UHTokenSystemComponent>();
			if(TokenSystem && Target && TokenSystem->TokenMap.Contains(Target))
			{
				TokenAmount = Pawn->FindComponentByClass<UHTokenSystemComponent>()->TokenMap[Target];
				TokenSystem->GiveTokenToTarget(TokenAmount, Target);
			}
		}
		if (MyOwnerComp->GetBlackboardComponent()->GetValueAsBool(CanDoActionBoolKey.SelectedKeyName))
		{
			MyOwnerComp->GetBlackboardComponent()->SetValueAsBool(CanDoActionBoolKey.SelectedKeyName, false);
		}
		switch (DoActionResult)
		{
			case E_DoActionResult::success:
				FinishLatentTask(*MyOwnerComp, EBTNodeResult::Succeeded);
				break;
			case E_DoActionResult::failed:
				FinishLatentTask(*MyOwnerComp, EBTNodeResult::Failed);
				break;
			case E_DoActionResult::aborted:
				FinishLatentTask(*MyOwnerComp, EBTNodeResult::Aborted);
				break;
		}
	}
}
