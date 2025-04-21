

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HDynamicObjects.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class H3DPATHAIPRO_API UHDynamicObjects : public UActorComponent
{
	GENERATED_BODY()
	
	virtual void BeginPlay() override;
	
	UFUNCTION()
	void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION()
	void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
};
