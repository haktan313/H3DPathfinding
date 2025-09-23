


#include "H3DMoveToAsyncAction.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "Async/Async.h"


UH3DMoveToAsyncAction* UH3DMoveToAsyncAction::H3DMoveTo(UObject* WorldContextObject, APawn* Pawn,
		AH3DVolume* Volume, FVector Destination, APawn* TargetActor, TEnumAsByte<ECollisionChannel> PathCheckChannel, float Tolerance, bool DrawDebugLine, float DebugLineTime)
{
	UH3DMoveToAsyncAction* node = NewObject<UH3DMoveToAsyncAction>();
	node->WorldContext = WorldContextObject;
	node->Pawn = Pawn;
	node->Volume = Volume;
	node->TargetActor = TargetActor;
	node->PathCheckChannel = PathCheckChannel;
	node->TargetLocation = Destination;
	node->Tolerance = Tolerance;
	node->bDrawDebugLine = DrawDebugLine;
	node->DebugLineTime = DebugLineTime;
	node->RegisterWithGameInstance(WorldContextObject);
	return node;
}

void UH3DMoveToAsyncAction::ClearTimers()
{
	auto& TimerManager = WorldContext->GetWorld()->GetTimerManager();
	TimerManager.ClearTimer(MoveTickHandle);
	TimerManager.ClearTimer(AvailabilityHandle);
	TimerManager.ClearTimer(CheckTargetActorsLocationTimerHandle);
	TimerManager.ClearTimer(CooldownForFindNewPathHandleCheckAvailability);
	TimerManager.ClearTimer(CooldownForFindNewPathHandleTargetActor);
}

EFailureType UH3DMoveToAsyncAction::CheckFailureConditions()
{
	if (!WorldContext)
		return EFailureType::WorldContextIsNull;
	if (!WorldContext->GetWorld())
		return EFailureType::WorldIsNull;
	if (!Pawn)
		return EFailureType::PawnIsNull;
	if (!Volume)
		return EFailureType::VolumeIsNull;
	return EFailureType::None;
}

void UH3DMoveToAsyncAction::Activate()
{
	EFailureType failure = CheckFailureConditions();
	if (failure != EFailureType::None)
	{
		ClearTimers();
		OnFailed.Broadcast(failure);
		SetReadyToDestroy();
		return;
	}
	
	if (TargetActor)
		TargetLocation = TargetActor->GetActorLocation();
	
	WorldContext->GetWorld()->GetTimerManager().ClearTimer(MoveTickHandle);
	Volume->FindPath(this, FName("OnPathFound"), Pawn, Pawn->GetActorLocation(), TargetLocation, Tolerance);
}

void UH3DMoveToAsyncAction::SetReadyToDestroy()
{
	Super::SetReadyToDestroy();
}

void UH3DMoveToAsyncAction::Tick(float DeltaTime)
{
	if (bPathFound)
		TickMove();
}

TStatId UH3DMoveToAsyncAction::GetStatId() const
{
	return TStatId();
}

void UH3DMoveToAsyncAction::OnPathFound(const FPathResult& Result)
{
	EFailureType failure = CheckFailureConditions();
	if (failure != EFailureType::None)
	{
		ClearTimers();
		OnFailed.Broadcast(failure);
		SetReadyToDestroy();
		return;
	}
	
	if (!Result.bSuccess || Result.PathPoints.Num() == 0)
	{
		bRepathInProgress = false;
		ClearTimers();
		OnFailed.Broadcast(Result.FailureType);
		SetReadyToDestroy();
		return;
	}
	auto& timerManager = WorldContext->GetWorld()->GetTimerManager();
	
	CurrentIndex = 0;
	PathPoints = Result.PathPoints;
	bRepathInProgress = false;
	
	bPathFound = true;
	
	if (!timerManager.IsTimerActive(CooldownForFindNewPathHandleCheckAvailability))
		timerManager.SetTimer(AvailabilityHandle, this, &UH3DMoveToAsyncAction::CheckAvailability, Volume->GetUpdateGridsRate(), true);
	if (TargetActor && !timerManager.IsTimerActive(CooldownForFindNewPathHandleTargetActor))
		timerManager.SetTimer(CheckTargetActorsLocationTimerHandle, this, &UH3DMoveToAsyncAction::CheckTargetActorsLocation, Volume->GetUpdateGridsRate(), true);
	

	if (bDrawDebugLine)
		for (int32 i = 0; i < PathPoints.Num() - 1; ++i)
			DrawDebugLine(WorldContext->GetWorld(), PathPoints[i], PathPoints[i + 1], FColor::Blue, false, DebugLineTime, 0, 2.0f);
}

void UH3DMoveToAsyncAction::TickMove()
{
	EFailureType failure = CheckFailureConditions();
	if (failure != EFailureType::None)
	{
		ClearTimers();
		OnFailed.Broadcast(failure);
		SetReadyToDestroy();
		return;
	}
	if (PathPoints.Num() > 0 && CurrentIndex < PathPoints.Num())
	{
		FVector currentLocation = Pawn->GetActorLocation();
		FVector targetPoint = PathPoints[CurrentIndex];
		FVector direction = (targetPoint - currentLocation).GetSafeNormal();

		Pawn->AddMovementInput(direction, 1.f);

		if (FVector::Dist(currentLocation, targetPoint) <= Tolerance)
		{
			CurrentIndex++;
		}
		
		if (CurrentIndex >= PathPoints.Num())
		{
			OnSuccess.Broadcast(EFailureType::None);
			if (WorldContext)
			{
				bRepathInProgress = false;
				ClearTimers();
			}
			if (Cast<ACharacter>(Pawn) && Cast<ACharacter>(Pawn)->GetCharacterMovement())
				Cast<ACharacter>(Pawn)->GetCharacterMovement()->StopMovementImmediately();
			SetReadyToDestroy();
		}
	}
}

void UH3DMoveToAsyncAction::CheckAvailability()
{
	if (CurrentIndex == 0 || PathPoints.Num() == 0 || WorldContext->GetWorld()->GetTimerManager().IsTimerActive(CooldownForFindNewPathHandleCheckAvailability) || bRepathInProgress)
		return;
	Async(EAsyncExecution::ThreadPool, [this]()
	{
		bool bBlocked = false;
		if (CurrentIndex - 1 < 0 || CurrentIndex >= PathPoints.Num())
			return;
		
		FHitResult hitResult;
		FCollisionQueryParams queryParams;
		queryParams.AddIgnoredActor(Pawn);
		bool bHit = WorldContext->GetWorld()->SweepSingleByChannel(
			hitResult,
			PathPoints[CurrentIndex - 1],
			PathPoints[CurrentIndex],
			FQuat::Identity,
			PathCheckChannel,
			FCollisionShape::MakeCapsule(Pawn->GetSimpleCollisionRadius() / 2, Pawn->GetSimpleCollisionHalfHeight() / 2),
			queryParams
		);
		
		if (bHit)
			bBlocked = true;
		
		if (bBlocked)
			AsyncTask(ENamedThreads::GameThread, [this]()
			{
				auto& timerManager = WorldContext->GetWorld()->GetTimerManager();
				timerManager.ClearTimer(AvailabilityHandle);
				timerManager.ClearTimer(CheckTargetActorsLocationTimerHandle);
				
				bRepathInProgress = true;
				FVector velocityDir = Pawn->GetVelocity().GetSafeNormal();
				Volume->FindPath(this, FName("OnPathFound"), Pawn,
				                    Pawn->GetActorLocation() + (velocityDir * newPathStartPointPredictionTime * Volume->GetGridCellSize()), TargetLocation, Tolerance);
				
				timerManager.SetTimer(CooldownForFindNewPathHandleCheckAvailability, FTimerDelegate::CreateWeakLambda(this,[this]
				{
					if (Volume && WorldContext && WorldContext->GetWorld())
					{
						WorldContext->GetWorld()->GetTimerManager().SetTimer(AvailabilityHandle, this, &UH3DMoveToAsyncAction::CheckAvailability, Volume->GetUpdateGridsRate(), true);
						if (TargetActor && !WorldContext->GetWorld()->GetTimerManager().IsTimerActive(CheckTargetActorsLocationTimerHandle))
							WorldContext->GetWorld()->GetTimerManager().SetTimer(CheckTargetActorsLocationTimerHandle, this, &UH3DMoveToAsyncAction::CheckTargetActorsLocation, Volume->GetUpdateGridsRate(), true);
					}
				}), newPathStartPointPredictionTime, false);
				
			});
	});
}

void UH3DMoveToAsyncAction::CheckTargetActorsLocation()
{
	if (!TargetActor || WorldContext->GetWorld()->GetTimerManager().IsTimerActive(CooldownForFindNewPathHandleTargetActor) || bRepathInProgress)
		return;
	
	FVector targetActorBoundsExtent = TargetActor->GetComponentsBoundingBox(true).GetExtent();
	CellAmountOfTargetActorsBoundOcupied = FMath::Max(FMath::CeilToInt(targetActorBoundsExtent.X * 2 / Volume->GetGridCellSize()),
		FMath::CeilToInt(targetActorBoundsExtent.Y * 2 / Volume->GetGridCellSize()));
	float ThresholdDistance = CellAmountOfTargetActorsBoundOcupied * Volume->GetGridCellSize() * Volume->GetCellAmountOfTargetActorsBoundsOccupied();
	
	if (FVector::Dist(TargetActor->GetActorLocation(), TargetLocation) > ThresholdDistance)
	{
		auto& TimerManager = WorldContext->GetWorld()->GetTimerManager();
		TimerManager.ClearTimer(AvailabilityHandle);
		TimerManager.ClearTimer(CheckTargetActorsLocationTimerHandle);
		
		bRepathInProgress = true;
		TargetLocation = TargetActor->GetActorLocation();
		FVector velocityDir = Pawn->GetVelocity().GetSafeNormal();
		Volume->FindPath(this, FName("OnPathFound"), Pawn, Pawn->GetActorLocation() + (velocityDir * newPathStartPointPredictionTime * Volume->GetGridCellSize()), TargetLocation, Tolerance);
		
		TimerManager.SetTimer(CooldownForFindNewPathHandleTargetActor, FTimerDelegate::CreateWeakLambda(this, [this]
		{
			if (WorldContext && WorldContext->GetWorld() && Volume)
			{
				WorldContext->GetWorld()->GetTimerManager().SetTimer(CheckTargetActorsLocationTimerHandle, this, &UH3DMoveToAsyncAction::CheckTargetActorsLocation, Volume->GetUpdateGridsRate(), true);
				if (!WorldContext->GetWorld()->GetTimerManager().IsTimerActive(AvailabilityHandle))
					WorldContext->GetWorld()->GetTimerManager().SetTimer(AvailabilityHandle, this, &UH3DMoveToAsyncAction::CheckAvailability, Volume->GetUpdateGridsRate(), true);
			}
		}), newPathStartPointPredictionTime, false);
	}
}
