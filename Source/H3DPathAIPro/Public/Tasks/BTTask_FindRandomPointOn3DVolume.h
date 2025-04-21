

#pragma once

#include "CoreMinimal.h"
#include "StructuresEnums_H3DPathFinding.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_FindRandomPointOn3DVolume.generated.h"


UCLASS()
class H3DPATHAIPRO_API UBTTask_FindRandomPointOn3DVolume : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_FindRandomPointOn3DVolume(const FObjectInitializer& ObjectInitializer);

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, Category = "Blackboard")
	float Radius = 1000.f;
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	TEnumAsByte<E_RandomPointsDimention> Dimention = E_RandomPointsDimention::TwoD;
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector pointVectorKey;
	
};
