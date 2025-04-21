
#include "Services/BTService_CanTookToken.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "HTokenSystemComponent.h"

UBTService_CanTookToken::UBTService_CanTookToken()
{
	NodeName = TEXT("CanTookToken");
}

void UBTService_CanTookToken::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	AAIController* AIController = OwnerComp.GetAIOwner();
	if(AIController)
	{
		APawn* Pawn = AIController->GetPawn();
		if(Pawn)
		{
			AActor* Target = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject(targetKey.SelectedKeyName));
			if(Target)
			{
				UHTokenSystemComponent* TokenSystem = Pawn->FindComponentByClass<UHTokenSystemComponent>();
				if(TokenSystem)
				{
					if(TokenSystem->TookTokenFromTarget(amountOfTokenNedded, Target))
					{
						OwnerComp.GetBlackboardComponent()->SetValueAsBool(DoActionBoolKey.SelectedKeyName, true);//Set the action bool in the blackboard
					}
				}
			}
		}
	}
}
