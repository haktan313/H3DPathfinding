
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
	FVector TargetLocation;
	UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category = "MoveToComponent")
	bool bDrawDebugLine = true;//debug line
	UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category = "MoveToComponent")
	float DebugLineDuration = -1.0f;//duration of the debug line. -1 means infinite duration
private:	
	TArray<FVector> PathPoints;//array of the path points
	
	int32 CurrentPathIndex = 0;

	UPROPERTY()
	class AActor* Actor;
	UPROPERTY()
	class ACharacter* CharacterRef;
	UPROPERTY()
	class AHVolume3D* Volume;
	
	bool bIsWalking = true;
	float Tolerance = 100.0f;
	
public:

	UFUNCTION(BlueprintCallable, Category = "MoveToComponent")
	void HMoveTo(AActor* ActorRef, AHVolume3D* VolumeRef, float ToleranceRef);
	

private:
	bool bCanFindPath = true;
	FTimerHandle CooldownForFindPathTimerHandle;
	void CooldownForFindPath();
	
	UFUNCTION()
	void OnPathFound(const FS_PathResult& Result);
	UFUNCTION()
	void CheckAvailability();//check if the path is available or not when dinamic obstacles are moving

	bool bCanCheckAvailability = true;//availability of the path can be checked or not
	bool bIsCheckAvailabiliyCalled = false;//CheckAvailability function is called or not.
	FTimerHandle CooldownForCheckAvailabilityTimerHandle;
	void CooldownForCheckAvailability();

	FTimerHandle MoveToTimerHandle;
	void MoveToTick();
		
};
