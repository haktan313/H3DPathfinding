//UHMoveToComponent.h
//It is a component that moves the actor to the target location.

#pragma once

#include "CoreMinimal.h"
#include "HVolume3D.h"
#include "Components/ActorComponent.h"
#include "TimerManager.h"
#include "HMoveToComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class H3DPATHFINDING_API UHMoveToComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "MoveToComponent")
	FVector TargetLocation;//Target location of the actor.
	UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category = "MoveToComponent")
	bool bDrawDebugLine = true;//If the debug line should be drawn or not.
	UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category = "MoveToComponent")
	float DebugLineDuration = -1.0f;//Duration of the debug line. -1 means infinite duration.
private:	
	TArray<FVector> PathPoints;//Array of the points in the path.
	
	int32 CurrentPathIndex = 0;//Index of the current point in the path.
	
	class AActor* Actor;//Reference to the actor.
	class ACharacter* CharacterRef;//Reference to the character.
	class AHVolume3D* Volume;//Reference to the volume.
	
	bool bIsWalking = true;//If the actor is walking or flying.
	float Tolerance = 100.0f;//Tolerance value for the distance between the actor and next point in the path.
	
public:

	UFUNCTION(BlueprintCallable, Category = "MoveToComponent")
	void HMoveTo(AActor* ActorRef, AHVolume3D* VolumeRef, float ToleranceRef);//Starts the pathfinding process.
	

private:
	bool bCanFindPath = true;//If the path can be found or not.
	FTimerHandle CooldownForFindPathTimerHandle;
	void CooldownForFindPath();//Cooldown for finding the path.
	
	UFUNCTION()
	void OnPathFound(const FS_PathResult& Result);//When path is found, this function is called by OnPathFound delegate.
	UFUNCTION()
	void CheckAvailability();//Check if the path is available or not when dinamic obstacles are moving. Called by OnGridsUpdated delegate.

	bool bCanCheckAvailability = true;//If the availability of the path can be checked or not.
	bool bIsCheckAvailabiliyCalled = false;//If the CheckAvailability function is called or not.
	FTimerHandle CooldownForCheckAvailabilityTimerHandle;
	void CooldownForCheckAvailability();//Cooldown for checking the availability of the path.

	FTimerHandle MoveToTimerHandle;
	void MoveToTick();//Move the actor to the target location.
		
};
