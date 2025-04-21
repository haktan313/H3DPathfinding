
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BTService_CanTookToken.generated.h"


UCLASS()
class H3DPATHAIPRO_API UBTService_CanTookToken : public UBTService
{
	GENERATED_BODY()

	UBTService_CanTookToken();

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	int amountOfTokenNedded;
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector targetKey;
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector DoActionBoolKey;//If the AI can take the token from the target Action can start
	
};
