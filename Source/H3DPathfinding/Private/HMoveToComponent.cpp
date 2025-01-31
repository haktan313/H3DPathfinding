
#include "HMoveToComponent.h"
#include "GameFramework/Character.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "HVolume3D.h"
#include "HPathCore.h"
#include "Async/Async.h"
#include "GameFramework/CharacterMovementComponent.h"


void UHMoveToComponent::HMoveTo(AActor* ActorRef, AHVolume3D* VolumeRef, float ToleranceRef)
{
	if(!bCanFindPath)
	{
		return;
	}
	if(!VolumeRef)
	{
		return;
	}
	Actor = ActorRef;
	Volume = VolumeRef;
	Tolerance = ToleranceRef;
	CharacterRef = Cast<ACharacter>(ActorRef);
	bIsWalking = CharacterRef->GetCharacterMovement()->MovementMode == MOVE_Walking;
	
	VolumeRef->FindPath(this,FName("OnPathFound"),ActorRef->GetActorLocation(),TargetLocation,bIsWalking,ActorRef->GetSimpleCollisionRadius(),ActorRef->GetSimpleCollisionHalfHeight(),ActorRef);//Find the path from the actor's location to the target location.
}

void UHMoveToComponent::CooldownForFindPath()
{
	bCanFindPath = true;
}

void UHMoveToComponent::OnPathFound(const FS_PathResult& Result)
{
	if (Result.bSuccess)
	{
		Volume->OnGridsUpdated.AddDynamic(this, &UHMoveToComponent::CheckAvailability);
		
		GetWorld()->GetTimerManager().SetTimer(MoveToTimerHandle, this, &UHMoveToComponent::MoveToTick, 0.001f, true);
		GetWorld()->GetTimerManager().SetTimer(CooldownForFindPathTimerHandle, this, &UHMoveToComponent::CooldownForFindPath, 0.5f, false);
		
		PathPoints = Result.PathPoints;
		CurrentPathIndex = 0;

		if(bDrawDebugLine)
		{
			for (int32 i = 0; i < PathPoints.Num() - 1; ++i)
			{
				DrawDebugLine(GetWorld(), PathPoints[i], PathPoints[i + 1], FColor::Blue, true, DebugLineDuration, 0, 2.0f);
			}
		}
	}
}

void UHMoveToComponent::CheckAvailability()
{
	if(CurrentPathIndex == 0)
	{
		return;
	}
	if(!bCanCheckAvailability)
	{
		if(!bIsCheckAvailabiliyCalled)
		{
			bIsCheckAvailabiliyCalled = true;
		}
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
			CollisionParams.AddIgnoredActor(Actor);

			bool bHit = GetWorld()->SweepSingleByChannel
			(
				HitResult,
				Start,
				End,
				FQuat::Identity,
				ECC_GameTraceChannel1,
				FCollisionShape::MakeCapsule(Actor->GetSimpleCollisionRadius(),Actor->GetSimpleCollisionHalfHeight()),
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
				CharacterRef->GetCharacterMovement()->StopMovementImmediately();
				Volume->OnGridsUpdated.RemoveDynamic(this, &UHMoveToComponent::CheckAvailability);
				bCanCheckAvailability = false;
				HMoveTo(Actor,Volume, Tolerance);
				GetWorld()->GetTimerManager().SetTimer(CooldownForCheckAvailabilityTimerHandle, this, &UHMoveToComponent::CooldownForCheckAvailability, 0.1f, false);
			}
		});
	});
}

void UHMoveToComponent::CooldownForCheckAvailability()
{
	bCanCheckAvailability = true;
	if(bIsCheckAvailabiliyCalled)
	{
		bIsCheckAvailabiliyCalled = false;
		bCanFindPath = true;
		CheckAvailability();
	}
}

void UHMoveToComponent::MoveToTick()
{
	if (PathPoints.Num() > 0 && CurrentPathIndex < PathPoints.Num())
	{
		FVector CurrentLocation = Actor->GetActorLocation();
		FVector TargetPoint = PathPoints[CurrentPathIndex];
		FVector Direction = (TargetPoint - CurrentLocation).GetSafeNormal();
		
		CharacterRef->AddMovementInput(Direction,1.f);
        
		if (FVector::Dist(CurrentLocation, TargetPoint) <= Tolerance)
		{
			CurrentPathIndex++;
		}
	}
	if (CurrentPathIndex >= PathPoints.Num() && !bIsWalking)
	{
		CharacterRef->GetCharacterMovement()->StopMovementImmediately();
	}
}

