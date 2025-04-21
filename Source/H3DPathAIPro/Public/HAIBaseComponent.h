
#pragma once

#include "CoreMinimal.h"
#include "Enums_HAISystem.h"
#include "HPatrolSpline.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Character.h"
#include "HAIBaseComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoActionDelegate, int , ActionID);//Delegate for starting an action
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionEndDelegate, E_DoActionResult, DoActionResult);//Delegate for ending an action

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class H3DPATHAIPRO_API UHAIBaseComponent : public UActorComponent
{
	GENERATED_BODY()

	UPROPERTY()
	ACharacter* OwnerCharacter;

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI")
	TObjectPtr<class UBehaviorTree>BehaviorTree;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI")
	TObjectPtr<class AHVolume3D> VolumeRef;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI|BlackboardKeyValuesName")
	FName TargetActorKeyName;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI|BlackboardKeyValuesName")
	FName LocationVectorKeyName;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI|BlackboardKeyValuesName")
	FName EnumOnPossessStateKeyName;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI|BlackboardKeyValuesName")
	FName BoolCanDoActionKeyName;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "HAI")
	TArray<FName> targetsTag;
	UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category="HAI")
	float WalkSpeed;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI")
	float RunSpeed;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI")
	float NormalFlySpeed;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI")
	float FastFlySpeed;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="HAI")
	TObjectPtr<AHPatrolSpline> PatrolSpline;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category="HAI")
	FOnDoActionDelegate OnDoAction; 
	UPROPERTY(BlueprintAssignable,BlueprintCallable, Category="HAI")
	FOnActionEndDelegate OnActionEnd;

	UPROPERTY(EditAnywhere, Category="HAI|Sense")
	bool OpenSight;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Sight")
	float SightRadius = 1200.0f;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Sight")
	float LoseSightRadius = 1500.0f;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Sight")
	float PeripheralVisionAngleDegrees = 90.0f;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Sight")
	float MaxAgeForSight = 3.0f;
	UPROPERTY(EditAnywhere, Category="HAI|Sense")
	bool OpenHear;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Hear")
	float HearingRange = 1000.0f;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Hear")
	float MaxAgeHear = 2.0f;
	UPROPERTY(EditAnywhere, Category="HAI|Sense")
	bool OpenDamage;
	UPROPERTY(EditAnywhere, Category="HAI|Sense|Damage")
	float MaxAgeDamage = 2.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HAI|Sense")
	E_DominantSense DominantSense = E_DominantSense::Sight; //The dominant sense of the AI character (Sight, Hear, Damage) default is Sight

private:

	UHAIBaseComponent();
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, Category = "HAI")
	void SetMovementStateWalk(E_MovementState movementState);
	UFUNCTION(BlueprintCallable, Category = "HAI")
	void SetMovementStateFly(E_MovementState movementState);
	UFUNCTION(BlueprintCallable, Category = "HAI")
	void Dead();
	UFUNCTION(BlueprintCallable, Category = "HAI")
	bool StopBehaviorTree();
	UFUNCTION(BlueprintCallable, Category = "HAI")
	void SetStatePassive();
	UFUNCTION(BlueprintCallable, Category = "HAI")
	void SetStateInvestigate();
	UFUNCTION(BlueprintCallable, Category = "HAI")
	void SetStateActive();
	UFUNCTION(BlueprintCallable, Category = "HAI")
	E_OnPossessState GetPossessState();
	
	AHPatrolSpline* GetPatrolSpline();
		
};
