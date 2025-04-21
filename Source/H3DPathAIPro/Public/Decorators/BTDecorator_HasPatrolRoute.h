
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_HasPatrolRoute.generated.h"


UCLASS()
class H3DPATHAIPRO_API UBTDecorator_HasPatrolRoute : public UBTDecorator
{
	GENERATED_BODY()

	UBTDecorator_HasPatrolRoute();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	
};
