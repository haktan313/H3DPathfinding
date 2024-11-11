//MoveToComponent.cpp

#include "HMoveToComponent.h"
#include "GameFramework/Character.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "HVolume3D.h"
#include "HPathCore.h"
#include "Async/Async.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties and starts the pathfinding process.
void UHMoveToComponent::HMoveTo(AActor* ActorRef, AHVolume3D* VolumeRef, float ToleranceRef)
{
	if(!bCanFindPath)
	{
		return;
	}
	if(!VolumeRef)//If the volume is not valid, return.
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

//When path is found, this function is called by OnPathFound delegate.
void UHMoveToComponent::OnPathFound(const FS_PathResult& Result)
{
	if (Result.bSuccess)//If the path is found.
	{
		Volume->OnGridsUpdated.AddDynamic(this, &UHMoveToComponent::CheckAvailability);//Bind the CheckAvailability function to OnGridsUpdated delegate.
		
		GetWorld()->GetTimerManager().SetTimer(MoveToTimerHandle, this, &UHMoveToComponent::MoveToTick, 0.001f, true);//Start the timer to move the actor to the target location.
		GetWorld()->GetTimerManager().SetTimer(CooldownForFindPathTimerHandle, this, &UHMoveToComponent::CooldownForFindPath, 0.5f, false);//Start the cooldown for finding the path.
		
		PathPoints = Result.PathPoints;//Set the path points.
		CurrentPathIndex = 0;//Set the current path index to 0.

		if(bDrawDebugLine)
		{
			for (int32 i = 0; i < PathPoints.Num() - 1; ++i)//Draw the path points.
			{
				DrawDebugLine(GetWorld(), PathPoints[i], PathPoints[i + 1], FColor::Blue, true, DebugLineDuration, 0, 2.0f);
			}
		}
	}
}

//Check if the path is available or not when dinamic obstacles are moving. Called by OnGridsUpdated delegate.
void UHMoveToComponent::CheckAvailability()
{
	if(CurrentPathIndex == 0)//If the actor is not moving, return.
	{
		return;
	}
	if(!bCanCheckAvailability)//If the availability of the path cannot be checked, return.
	{
		if(!bIsCheckAvailabiliyCalled)//If the CheckAvailability function is not called while the availability of the path cannot be checked, set the bIsCheckAvailabiliyCalled to true.
		{
			bIsCheckAvailabiliyCalled = true;
		}
		return;
	}
	Async(EAsyncExecution::ThreadPool,[this]()
	{
		bool bIsHit = false;
		for(int32 i = CurrentPathIndex - 1; i < PathPoints.Num() -1; i++)//Check the path points from the current path index to the end.
		{
			FVector Start = PathPoints[i];//Start point of the path.
			FVector End = PathPoints[i + 1];//End point of

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
				CharacterRef->GetCharacterMovement()->StopMovementImmediately();//Stop the actor's movement.
				Volume->OnGridsUpdated.RemoveDynamic(this, &UHMoveToComponent::CheckAvailability);//Unbind the CheckAvailability function from OnGridsUpdated delegate.
				bCanCheckAvailability = false;
				HMoveTo(Actor,Volume, Tolerance);//Find the path again.
				GetWorld()->GetTimerManager().SetTimer(CooldownForCheckAvailabilityTimerHandle, this, &UHMoveToComponent::CooldownForCheckAvailability, 0.1f, false);//Start the cooldown for checking the availability of the path.
			}
		});
	});
}

void UHMoveToComponent::CooldownForCheckAvailability()
{
	bCanCheckAvailability = true;
	if(bIsCheckAvailabiliyCalled)//If the CheckAvailability function is called.
	{
		bIsCheckAvailabiliyCalled = false;
		bCanFindPath = true;
		CheckAvailability();//Check the availability of the path.
	}
}

//Move the actor to the target location.
void UHMoveToComponent::MoveToTick()
{
	if (PathPoints.Num() > 0 && CurrentPathIndex < PathPoints.Num())//If the path is valid and the current path index is less than the path points.
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
	if (CurrentPathIndex >= PathPoints.Num() && !bIsWalking)//If the actor is flying and reached the target location.
	{
		CharacterRef->GetCharacterMovement()->StopMovementImmediately();//Stop the actor's movement.
	}
}

