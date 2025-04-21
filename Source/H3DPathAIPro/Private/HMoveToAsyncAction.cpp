

#include "HMoveToAsyncAction.h"
#include "DrawDebugHelpers.h"
#include "Async/Async.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UHMoveToAsyncAction* UHMoveToAsyncAction::HMoveTo(UObject* WorldContextObject, ACharacter* Character, AHVolume3D* Volume, FVector Destination, AActor* TargetActor, float Tolerance, bool DrawDebug, float DebugTime)
{
	UHMoveToAsyncAction* Node = NewObject<UHMoveToAsyncAction>();
	Node->WorldContext = WorldContextObject;
	Node->CharacterRef = Character;
	Node->VolumeRef = Volume;
	Node->TargetActor = TargetActor;
	Node->TargetLocation = Destination;
	Node->Tolerance = Tolerance;
	Node->bDrawDebugLine = DrawDebug;
	Node->DebugLineTime = DebugTime;
	return Node;
}

void UHMoveToAsyncAction::Activate()
{
	if (!WorldContext || !CharacterRef || !VolumeRef)
	{
		OnFailed.Broadcast();
		return;
	}

	if (TargetActor)
	{
		TargetLocation = TargetActor->GetActorLocation();
	}

	bIsWalking = CharacterRef->GetCharacterMovement()->MovementMode == MOVE_Walking;

	VolumeRef->FindPath(this, FName("OnPathFound"), CharacterRef->GetActorLocation(), TargetLocation, bIsWalking,CharacterRef->GetSimpleCollisionRadius(), CharacterRef->GetSimpleCollisionHalfHeight(), CharacterRef);
}

void UHMoveToAsyncAction::OnPathFound(const FS_PathResult& Result)
{
	if (!Result.bSuccess || Result.PathPoints.Num() == 0)
	{
		OnFailed.Broadcast();
		return;
	}

	WorldContext->GetWorld()->GetTimerManager().SetTimer(MoveTickHandle, this, &UHMoveToAsyncAction::TickMove, 0.001f, true);
	WorldContext->GetWorld()->GetTimerManager().SetTimer(AvailabilityHandle, this, &UHMoveToAsyncAction::CheckAvailability, 0.3f, true);
	if (TargetActor)
	{
		WorldContext->GetWorld()->GetTimerManager().SetTimer(CheckTargetActorsLocationTimerHandle, this, &UHMoveToAsyncAction::CheckTargetActorsLocation, 0.1f, true);
	}

	PathPoints = Result.PathPoints;
	CurrentIndex = 0;

	if (bDrawDebugLine)
	{
		for (int32 i = 0; i < PathPoints.Num() - 1; ++i)
		{
			DrawDebugLine(WorldContext->GetWorld(), PathPoints[i], PathPoints[i + 1], FColor::Blue, false, DebugLineTime, 0, 2.0f);
		}
	}
	
}

void UHMoveToAsyncAction::TickMove()
{
	if (PathPoints.Num() > 0 && CurrentIndex < PathPoints.Num())
	{
		FVector CurrentLocation = CharacterRef->GetActorLocation();
		FVector TargetPoint = PathPoints[CurrentIndex];
		FVector Direction = (TargetPoint - CurrentLocation).GetSafeNormal();

		CharacterRef->AddMovementInput(Direction, 1.f);

		if (FVector::Dist(CurrentLocation, TargetPoint) <= Tolerance)
		{
			CurrentIndex++;
		}
		
		if (CurrentIndex >= PathPoints.Num())
		{
			OnSuccess.Broadcast();
			CharacterRef->GetCharacterMovement()->StopMovementImmediately();
			WorldContext->GetWorld()->GetTimerManager().ClearTimer(MoveTickHandle);
			WorldContext->GetWorld()->GetTimerManager().ClearTimer(AvailabilityHandle);
			WorldContext->GetWorld()->GetTimerManager().ClearTimer(CheckTargetActorsLocationTimerHandle);
		}
	}
}

void UHMoveToAsyncAction::CheckAvailability()
{
	if (CurrentIndex == 0 || PathPoints.Num() == 0) return;

	Async(EAsyncExecution::ThreadPool, [this]()
	{
		bool bBlocked = false;
		for (int32 i = CurrentIndex - 1; i < PathPoints.Num() - 1; ++i)
		{
			FHitResult HitResult;
			FCollisionQueryParams Params;
			Params.AddIgnoredActor(CharacterRef);

			bool bHit = WorldContext->GetWorld()->SweepSingleByChannel(
				HitResult,
				PathPoints[i],
				PathPoints[i + 1],
				FQuat::Identity,
				ECC_GameTraceChannel1,
				FCollisionShape::MakeCapsule(CharacterRef->GetSimpleCollisionRadius(), CharacterRef->GetSimpleCollisionHalfHeight()),
				Params
			);

			if (bHit)
			{
				bBlocked = true;
				break;
			}
		}

		if (bBlocked)
		{
			AsyncTask(ENamedThreads::GameThread, [this]()
			{
				WorldContext->GetWorld()->GetTimerManager().ClearTimer(MoveTickHandle);
				WorldContext->GetWorld()->GetTimerManager().ClearTimer(AvailabilityHandle);

				VolumeRef->FindPath(this, FName("OnPathFound"), CharacterRef->GetActorLocation(), TargetLocation,bIsWalking, CharacterRef->GetSimpleCollisionRadius(), CharacterRef->GetSimpleCollisionHalfHeight(), CharacterRef);
			});
		}
	});
}

void UHMoveToAsyncAction::CheckTargetActorsLocation()
{
	if(FVector::Dist(TargetActor->GetActorLocation(), TargetLocation) > 100.f)
	{
		TargetLocation = TargetActor->GetActorLocation();
		WorldContext->GetWorld()->GetTimerManager().ClearTimer(CheckTargetActorsLocationTimerHandle);
		WorldContext->GetWorld()->GetTimerManager().ClearTimer(MoveTickHandle);
		WorldContext->GetWorld()->GetTimerManager().ClearTimer(AvailabilityHandle);
		VolumeRef->FindPath(this, FName("OnPathFound"), CharacterRef->GetActorLocation(), TargetLocation, bIsWalking, CharacterRef->GetSimpleCollisionRadius(), CharacterRef->GetSimpleCollisionHalfHeight(), CharacterRef);
	}
}
