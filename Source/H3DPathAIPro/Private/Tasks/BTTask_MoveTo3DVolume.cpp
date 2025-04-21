


#include "Tasks/BTTask_MoveTo3DVolume.h"
#include "AIController.h"
#include "HAIBaseComponent.h"
#include "HVolume3D.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "Async/Async.h"
#include "Engine/World.h"

UBTTask_MoveTo3DVolume::UBTTask_MoveTo3DVolume(const FObjectInitializer& ObjectInitializer)
{
	bCreateNodeInstance = true;
	NodeName = TEXT("MoveTo3DVolume");
}

EBTNodeResult::Type UBTTask_MoveTo3DVolume::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	MyOwnerComp = &OwnerComp;
	
	AAIController* AIController = OwnerComp.GetAIOwner();
	UBlackboardComponent* BlackboardComponent = OwnerComp.GetBlackboardComponent();
	if (!AIController || !BlackboardComponent)
	{
		return EBTNodeResult::Failed;
	}
	CharacterRef = Cast<ACharacter>(AIController->GetPawn());
	UHAIBaseComponent* HAIBaseComponent = Cast<UHAIBaseComponent>(AIController->GetPawn()->GetComponentByClass(UHAIBaseComponent::StaticClass()));
	if (!CharacterRef || !HAIBaseComponent)
	{
		return EBTNodeResult::Failed;
	}
	VolumeRef = HAIBaseComponent->VolumeRef;
	if (!VolumeRef)
	{
		return EBTNodeResult::Failed;
	}
	TargetActor = Cast<AActor>(BlackboardComponent->GetValueAsObject(pointVectorKey.SelectedKeyName));
	if (TargetActor)
	{
		targetLocation = TargetActor->GetActorLocation();
	}
	else
	{
		targetLocation = BlackboardComponent->GetValueAsVector(pointVectorKey.SelectedKeyName);
	}
	if (FVector::Dist(CharacterRef->GetActorLocation(), targetLocation) <= Tolerance)
	{
		return EBTNodeResult::Succeeded;
	}
	bIsWalking = CharacterRef->GetCharacterMovement()->DefaultLandMovementMode == EMovementMode::MOVE_Walking;
	VolumeRef->FindPath(this,FName("OnPathFound"),CharacterRef->GetActorLocation(),targetLocation,bIsWalking,CharacterRef->GetSimpleCollisionRadius(),CharacterRef->GetSimpleCollisionHalfHeight(),CharacterRef);
	return EBTNodeResult::InProgress;
}

void UBTTask_MoveTo3DVolume::OnPathFound(const FS_PathResult& ResultRef)
{
	if (!ResultRef.bSuccess || ResultRef.PathPoints.Num() == 0)
	{
		GetWorld()->GetTimerManager().ClearTimer(CheckTargetActorsLocationTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(MoveToTickTimerHandle);
		GetWorld()->GetTimerManager().ClearTimer(CheckPathsAvailabilityTimerHandle);
		FinishLatentTask(*MyOwnerComp,EBTNodeResult::Failed);
		return;
	}
	GetWorld()->GetTimerManager().SetTimer(MoveToTickTimerHandle,this,&UBTTask_MoveTo3DVolume::MoveToTick,0.001f,true);
	VolumeRef->OnGridsUpdated.AddDynamic(this, &UBTTask_MoveTo3DVolume::CheckPathsAvailability);
	if (TargetActor)
	{
		GetWorld()->GetTimerManager().SetTimer(CheckTargetActorsLocationTimerHandle,this,&UBTTask_MoveTo3DVolume::CheckTargetActorsLocation,0.1f,true);
	}
	PathPoints = ResultRef.PathPoints;
	CurrentPathIndex = 0;

	if(bDrawDebugLine)
	{
		for (int32 i = 0; i < PathPoints.Num() - 1; ++i)
		{
			DrawDebugLine(GetWorld(), PathPoints[i], PathPoints[i + 1], FColor::Blue, false, DebugLineDuration, 0, 2.0f);
		}
	}
}

void UBTTask_MoveTo3DVolume::CheckTargetActorsLocation()
{
	if(FVector::Dist(TargetActor->GetActorLocation(), targetLocation) > 100.f)
	{
		targetLocation = TargetActor->GetActorLocation();
		GetWorld()->GetTimerManager().ClearTimer(CheckTargetActorsLocationTimerHandle);
		VolumeRef->FindPath(this, FName("OnPathFound"), CharacterRef->GetActorLocation(), targetLocation, bIsWalking, CharacterRef->GetSimpleCollisionRadius(), CharacterRef->GetSimpleCollisionHalfHeight(), CharacterRef);
	}
}

void UBTTask_MoveTo3DVolume::CheckPathsAvailability()
{
	if(CurrentPathIndex == 0)
	{
		return;
	}
	Async(EAsyncExecution::ThreadPool,[this]()
	{
		bool bIsHit = false;
		for(int32 i = CurrentPathIndex - 1; i < PathPoints.Num() -1; i++)
		{
			FVector Start = PathPoints[i];
			FVector End = PathPoints[i + 1];

			FHitResult HitResult;
			FCollisionQueryParams CollisionParams;
			CollisionParams.AddIgnoredActor(CharacterRef);

			bool bHit = GetWorld()->SweepSingleByChannel
			(
				HitResult,
				Start,
				End,
				FQuat::Identity,
				ECC_GameTraceChannel1,
				FCollisionShape::MakeCapsule(CharacterRef->GetSimpleCollisionRadius(),CharacterRef->GetSimpleCollisionHalfHeight()),
				CollisionParams
			);
			if(bHit)
			{
				bIsHit = true;
				break;
			}
		}
		AsyncTask(ENamedThreads::GameThread,[this,bIsHit]()
		{
			if(bIsHit)
			{
				VolumeRef->OnGridsUpdated.RemoveDynamic(this, &UBTTask_MoveTo3DVolume::CheckPathsAvailability);
				VolumeRef->FindPath(this, FName("OnPathFound"), CharacterRef->GetActorLocation(), targetLocation, bIsWalking, CharacterRef->GetSimpleCollisionRadius(), CharacterRef->GetSimpleCollisionHalfHeight(), CharacterRef);
			}
		});
	});
}

void UBTTask_MoveTo3DVolume::MoveToTick()
{
	if (PathPoints.Num() > 0 && CurrentPathIndex < PathPoints.Num())
	{
		FVector CurrentLocation = CharacterRef->GetActorLocation();
		FVector TargetPoint = PathPoints[CurrentPathIndex];
		FVector Direction = (TargetPoint - CurrentLocation).GetSafeNormal();
		
		CharacterRef->AddMovementInput(Direction,1.f);
        
		if (FVector::Dist(CurrentLocation, TargetPoint) <= Tolerance)
		{
			CurrentPathIndex++;
		}
		if (CurrentPathIndex >= PathPoints.Num() && !bIsWalking)
		{
			CharacterRef->GetCharacterMovement()->StopMovementImmediately();
			GetWorld()->GetTimerManager().ClearTimer(CheckTargetActorsLocationTimerHandle);
			GetWorld()->GetTimerManager().ClearTimer(MoveToTickTimerHandle);
			GetWorld()->GetTimerManager().ClearTimer(CheckPathsAvailabilityTimerHandle);
			FinishLatentTask(*MyOwnerComp, EBTNodeResult::Succeeded);
		}
		if(CurrentPathIndex >= PathPoints.Num() && bIsWalking)
		{
			GetWorld()->GetTimerManager().ClearTimer(CheckTargetActorsLocationTimerHandle);
			GetWorld()->GetTimerManager().ClearTimer(MoveToTickTimerHandle);
			GetWorld()->GetTimerManager().ClearTimer(CheckPathsAvailabilityTimerHandle);
			FinishLatentTask(*MyOwnerComp, EBTNodeResult::Succeeded);
		}
	}
}
