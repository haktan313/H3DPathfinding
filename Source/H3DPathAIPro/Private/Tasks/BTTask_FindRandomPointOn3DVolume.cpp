


#include "Tasks/BTTask_FindRandomPointOn3DVolume.h"

#include "AIController.h"
#include "HAIBaseComponent.h"
#include "HVolume3D.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"

UBTTask_FindRandomPointOn3DVolume::UBTTask_FindRandomPointOn3DVolume(const FObjectInitializer& ObjectInitializer)
{
	bCreateNodeInstance = true;
	NodeName = TEXT("FindRandomPointOn3DVolume");
}

EBTNodeResult::Type UBTTask_FindRandomPointOn3DVolume::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	if (!AIController || !BlackboardComponent)
	{
		return EBTNodeResult::Failed;
	}
	ACharacter* CharacterRef = Cast<ACharacter>(AIController->GetPawn());
	UHAIBaseComponent* HAIBaseComponent = Cast<UHAIBaseComponent>(AIController->GetPawn()->GetComponentByClass(UHAIBaseComponent::StaticClass()));
	if (!CharacterRef || !HAIBaseComponent)
	{
		return EBTNodeResult::Failed;
	}
	AHVolume3D* VolumeRef = HAIBaseComponent->VolumeRef;
	if (!VolumeRef)
	{
		return EBTNodeResult::Failed;
	}
	FVector randomPoint = VolumeRef->GetRandomReachablePointOn3DVolume(CharacterRef->GetActorLocation(),Radius,CharacterRef,Dimention);
	BlackboardComponent->SetValueAsVector(pointVectorKey.SelectedKeyName, randomPoint);
	return EBTNodeResult::Succeeded;
}