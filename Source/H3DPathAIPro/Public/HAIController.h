
#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Enums_HAISystem.h"
#include "HAIController.generated.h"


UCLASS()
class H3DPATHAIPRO_API AHAIController : public AAIController
{
	GENERATED_BODY()

public:

	AHAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

protected:

	virtual void OnPossess(APawn* InPawn) override;
private:
	void CreateOnSightSense();
	void CreateOnHearSense();
	void CreateOnDamageSense();

	UFUNCTION()
	void OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors);

	bool PlayerSensed(AActor* sensedActor, E_SenseType senseType);

	void HandleSense(AActor* sensedTargetActor);

	UPROPERTY()
	TObjectPtr<class UCrowdFollowingComponent> CrowdFollowingComponent;

	UPROPERTY()
	TObjectPtr<class UHAIBaseComponent> HAIBaseComponent;

public:

	UPROPERTY()
	TObjectPtr<UAIPerceptionComponent> AIPerceptionComponent;

	UPROPERTY()
	TObjectPtr<class UAISenseConfig_Sight> SightConfig;
	UPROPERTY()
	TObjectPtr<class UAISenseConfig_Hearing> HearingConfig;
	UPROPERTY()
	TObjectPtr<class UAISenseConfig_Damage> DamageConfig;
	
	E_OnPossessState GetCurrentState();

	FVector pointOfInterest;
	UPROPERTY()
	TObjectPtr<AActor> targetActor;

	void SetStateAsPassive();
	void SetStateAsInvestigate();
	void SetStateAsActive();

	void StopBehaviorTree();
	
	TArray<FName> targetsTag;
	
};
