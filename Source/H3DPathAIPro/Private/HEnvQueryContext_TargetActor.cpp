


#include "HEnvQueryContext_TargetActor.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"
#include "HAIController.h"

void UHEnvQueryContext_TargetActor::ProvideContext(FEnvQueryInstance& QueryInstance,FEnvQueryContextData& ContextData) const
{
	UObject* querierObject = QueryInstance.Owner.Get();
	if(!querierObject)
	{
		return;
	}
	AActor* querierActor = Cast<AActor>(querierObject);
	if(!querierActor)
	{
		return;
	}
	AAIController* aiController = UAIBlueprintHelperLibrary::GetAIController(querierActor);
	if(!aiController)
	{
		return;
	}
	AHAIController* hAIController = Cast<AHAIController>(aiController);
	if(!hAIController)
	{
		return;
	}
	AActor* targetActor = hAIController->targetActor;
	if(targetActor)
	{
		UEnvQueryItemType_Actor::SetContextHelper(ContextData,targetActor);
	}
}
