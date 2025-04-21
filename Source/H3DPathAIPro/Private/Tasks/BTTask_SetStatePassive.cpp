


#include "Tasks/BTTask_SetStatePassive.h"
#include "HAIController.h"
#include "TimerManager.h"
#include "Engine/World.h"

UBTTask_SetStatePassive::UBTTask_SetStatePassive(const FObjectInitializer& ObjectInitializer)
{
	NodeName = "Set State Passive";
	bCreateNodeInstance = true;//for latent task
}

EBTNodeResult::Type UBTTask_SetStatePassive::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AIController = Cast<AHAIController>(OwnerComp.GetAIOwner());
	if (AIController)
	{
		MyOwnerComp = &OwnerComp;
		GetWorld()->GetTimerManager().SetTimer(PassiveTimerHandle, this, &UBTTask_SetStatePassive::SetStateAsPassive, howManySecondsBeforePassive, false);
		return EBTNodeResult::InProgress;
	}
	return EBTNodeResult::Failed;
}


void UBTTask_SetStatePassive::SetStateAsPassive()
{
	if(MyOwnerComp)
	{
		AIController->SetStateAsPassive();
		FinishLatentTask(*MyOwnerComp, EBTNodeResult::Succeeded);
	}
}
