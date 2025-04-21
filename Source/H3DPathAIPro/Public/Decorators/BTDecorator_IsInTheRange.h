
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsInTheRange.generated.h"


UCLASS()
class H3DPATHAIPRO_API UBTDecorator_IsInTheRange : public UBTDecorator
{
	GENERATED_BODY()

	UBTDecorator_IsInTheRange();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "HAI")
	float idealRangeValue;
	UPROPERTY(EditAnywhere, Category = "HAI")
	float AcceptableErorRadius;
	UPROPERTY(EditAnywhere, Category = "HAI")
	FBlackboardKeySelector targetActorKey;
	
};
