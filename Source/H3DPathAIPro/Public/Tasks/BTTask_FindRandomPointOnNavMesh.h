
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FindRandomPointOnNavMesh.generated.h"


UCLASS()
class H3DPATHAIPRO_API UBTTask_FindRandomPointOnNavMesh : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_FindRandomPointOnNavMesh();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, Category = "Radius")
	float Radius = 500.0f;
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector pointVector;
	
};
