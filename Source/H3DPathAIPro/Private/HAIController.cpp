


#include "HAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "HAIBaseComponent.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Damage.h"
#include "Perception/AISenseConfig_Hearing.h"
#include "Perception/AISenseConfig_Sight.h"

AHAIController::AHAIController(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))//Setting CrowdFollowingComponent as the default path following component
{
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
	SetPerceptionComponent(*AIPerceptionComponent);
	
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	SightConfig->SightRadius = 0.f;
	SightConfig->LoseSightRadius = 0.f;
	SightConfig->PeripheralVisionAngleDegrees = 0.f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = false;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = false;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = false;
	SightConfig->SetMaxAge(0.f);
	
	HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("HearingConfig"));
	HearingConfig->HearingRange = 0.f;
	HearingConfig->DetectionByAffiliation.bDetectEnemies = false;
	HearingConfig->DetectionByAffiliation.bDetectNeutrals = false;
	HearingConfig->DetectionByAffiliation.bDetectFriendlies = false;
	HearingConfig->SetMaxAge(0.f);
	
	DamageConfig = CreateDefaultSubobject<UAISenseConfig_Damage>(TEXT("DamageConfig"));
	DamageConfig->SetMaxAge(0.f);
	
	AIPerceptionComponent->ConfigureSense(*SightConfig);
	AIPerceptionComponent->ConfigureSense(*HearingConfig);
	AIPerceptionComponent->ConfigureSense(*DamageConfig);

	AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
	
	AIPerceptionComponent->OnPerceptionUpdated.AddDynamic(this, &AHAIController::OnPerceptionUpdated);

	CrowdFollowingComponent = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent());//Casting the path following component to the CrowdFollowingComponent
	CrowdFollowingComponent->SetCrowdAnticipateTurns(true); //default false
	CrowdFollowingComponent->SetCrowdObstacleAvoidance(true);
	CrowdFollowingComponent->SetCrowdSeparation(true); //default false
	CrowdFollowingComponent->SetCrowdOptimizeVisibility(true);
	CrowdFollowingComponent->SetCrowdOptimizeTopology(true);
	CrowdFollowingComponent->SetCrowdPathOffset(true);
	CrowdFollowingComponent->SetCrowdSlowdownAtGoal(false); //default true
	CrowdFollowingComponent->SetCrowdSeparationWeight(2.0f);
	CrowdFollowingComponent->SetCrowdCollisionQueryRange(400.0f);
	CrowdFollowingComponent->SetCrowdPathOptimizationRange(2000.0f);
	CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::High);
	CrowdFollowingComponent->SetCrowdAvoidanceRangeMultiplier(1.0f);
	CrowdFollowingComponent->SetCrowdAffectFallingVelocity(false);
	CrowdFollowingComponent->SetCrowdRotateToVelocity(true);
}


void AHAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);
	HAIBaseComponent = Cast<UHAIBaseComponent>(InPawn->GetComponentByClass(UHAIBaseComponent::StaticClass()));
	if(HAIBaseComponent)
	{
		if (HAIBaseComponent->BehaviorTree == nullptr){return;}
		RunBehaviorTree(HAIBaseComponent->BehaviorTree);
		targetsTag = HAIBaseComponent->targetsTag;
		SetStateAsPassive();
		
		CreateOnSightSense();
		CreateOnHearSense();
		CreateOnDamageSense();
		switch (HAIBaseComponent->DominantSense)
		{
			case E_DominantSense::Sight:
				AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
				break;
			case E_DominantSense::Hearing:
				AIPerceptionComponent->SetDominantSense(HearingConfig->GetSenseImplementation());
				break;
			case E_DominantSense::Damage:
				AIPerceptionComponent->SetDominantSense(DamageConfig->GetSenseImplementation());
				break;
		}
	}
}

void AHAIController::CreateOnSightSense()
{
	bool bCreateSense = HAIBaseComponent->OpenSight;
	float maxAge = bCreateSense ? HAIBaseComponent->MaxAgeForSight : 0.f;
	
	SightConfig->SightRadius = bCreateSense ? HAIBaseComponent->SightRadius : 0.f;
	SightConfig->LoseSightRadius = bCreateSense ? HAIBaseComponent->LoseSightRadius : 0.f;
	SightConfig->PeripheralVisionAngleDegrees = bCreateSense ? HAIBaseComponent->PeripheralVisionAngleDegrees : 0.f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = bCreateSense;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = bCreateSense;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = bCreateSense;
	SightConfig->SetMaxAge(HAIBaseComponent->MaxAgeForSight);
	SightConfig->SetMaxAge(maxAge);
	AIPerceptionComponent->ConfigureSense(*SightConfig);
}

void AHAIController::CreateOnHearSense()
{
	bool bCreateSense = HAIBaseComponent->OpenHear;
	float maxAge = bCreateSense ? HAIBaseComponent->MaxAgeHear : 0.f;
	
	HearingConfig->HearingRange = bCreateSense ? HAIBaseComponent->HearingRange : 0.f;
	HearingConfig->SetMaxAge(maxAge);
	HearingConfig->DetectionByAffiliation.bDetectEnemies = bCreateSense;
	HearingConfig->DetectionByAffiliation.bDetectNeutrals = bCreateSense;
	HearingConfig->DetectionByAffiliation.bDetectFriendlies = bCreateSense;
	AIPerceptionComponent->ConfigureSense(*HearingConfig);
}

void AHAIController::CreateOnDamageSense()
{
	bool bCreateSense = HAIBaseComponent->OpenDamage;
	float maxAge = bCreateSense ? HAIBaseComponent->MaxAgeDamage : 0.f;
	
	DamageConfig->SetMaxAge(maxAge);
	AIPerceptionComponent->ConfigureSense(*DamageConfig);
}

void AHAIController::OnPerceptionUpdated(const TArray<AActor*>& UpdatedActors)
{
	for(AActor* sensedActor : UpdatedActors)
	{
		if(targetsTag.Num() == 0)
		{
			HandleSense(sensedActor);
			targetActor = sensedActor;
		}
		for(FName tag : targetsTag)
		{
			if(sensedActor->ActorHasTag(tag))
			{
				HandleSense(sensedActor);
				targetActor = sensedActor;
			}
		}
	}
}

bool AHAIController::PlayerSensed(AActor* sensedActor, E_SenseType senseType)
{
	FActorPerceptionBlueprintInfo perceptionInfo;
	AIPerceptionComponent->GetActorsPerception(sensedActor, perceptionInfo);
	FAISenseID senseID;

	switch (senseType)
	{
		case E_SenseType::see:senseID = UAISense::GetSenseID<UAISenseConfig_Sight>(); break;
		case E_SenseType::hear:senseID = UAISense::GetSenseID<UAISenseConfig_Hearing>(); break;
		case E_SenseType::damage:senseID = UAISense::GetSenseID<UAISenseConfig_Damage>(); break;
	}

	for(const auto& stimulus : perceptionInfo.LastSensedStimuli)//Loop for each stimulus sensed by the AI character
	{
		if(stimulus.Type == senseID)//Check if the AI character sensed the player
		{
			pointOfInterest = stimulus.StimulusLocation;
			return stimulus.WasSuccessfullySensed();
		}
	}
	return false;
}

void AHAIController::HandleSense(AActor* sensedTargetActor)
{
	E_OnPossessState currentState = GetCurrentState();
	
	if(PlayerSensed(sensedTargetActor,E_SenseType::see))
	{
		if(currentState != E_OnPossessState::active)
		{
			targetActor = sensedTargetActor;
			SetStateAsActive();
		}
	}
	else if(PlayerSensed(sensedTargetActor,E_SenseType::hear) || PlayerSensed(sensedTargetActor,E_SenseType::damage))
	{
		if(currentState != E_OnPossessState::active)
		{
			SetStateAsInvestigate();
		}
	}
	else
	{
		SetStateAsInvestigate();
	}
}

E_OnPossessState AHAIController::GetCurrentState()
{
	return (E_OnPossessState)GetBlackboardComponent()->GetValueAsEnum(HAIBaseComponent->EnumOnPossessStateKeyName);
}


void AHAIController::SetStateAsPassive()
{
	GetBlackboardComponent()->SetValueAsEnum(HAIBaseComponent->EnumOnPossessStateKeyName,(uint8)E_OnPossessState::passive);
	targetActor = nullptr;
	pointOfInterest = FVector::ZeroVector;
}


void AHAIController::SetStateAsInvestigate()
{
	GetBlackboardComponent()->SetValueAsEnum(HAIBaseComponent->EnumOnPossessStateKeyName,(uint8)E_OnPossessState::investigate);
	GetBlackboardComponent()->SetValueAsVector(HAIBaseComponent->LocationVectorKeyName,pointOfInterest);
}


void AHAIController::SetStateAsActive()
{
	GetBlackboardComponent()->SetValueAsEnum(HAIBaseComponent->EnumOnPossessStateKeyName,(uint8)E_OnPossessState::active);
	GetBlackboardComponent()->SetValueAsObject(HAIBaseComponent->TargetActorKeyName,targetActor);
}



void AHAIController::StopBehaviorTree()
{
	CleanupBrainComponent();
}
