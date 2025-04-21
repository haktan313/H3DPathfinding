
#include "Tasks/BTTask_FindRandomPointOnNavMesh.h"
#include "AIController.h"
#include "NavigationSystem.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTask_FindRandomPointOnNavMesh::UBTTask_FindRandomPointOnNavMesh()
{
	NodeName = TEXT("FindRandomPointOnNavMesh");
}

EBTNodeResult::Type UBTTask_FindRandomPointOnNavMesh::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if(AIController)
	{
		APawn* ControlledPawn = AIController->GetPawn();
		if(ControlledPawn)
		{
			FVector origin = ControlledPawn->GetActorLocation();
			FNavLocation location;
			UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld());
			if(NavSys && NavSys->GetRandomPointInNavigableRadius(origin, Radius, location))
			{
				UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
				if(BlackboardComp)
				{
					BlackboardComp->SetValueAsVector(pointVector.SelectedKeyName, location.Location);
					return EBTNodeResult::Succeeded;
				}
			}
		}
	}
	return EBTNodeResult::Failed;
}
