// HDinamicObjects.h
//It is a component that detects the overlap of the actor with the volume and updates the grids.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HDinamicObjects.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class H3DPATHFINDING_API UHDinamicObjects : public UActorComponent
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION()
	void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
};
