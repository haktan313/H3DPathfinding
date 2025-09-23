

#pragma once

#include "CoreMinimal.h"
#include "H3DVolume.h"
#include "Components/ActorComponent.h"
#include "HDynamicObject.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class H3DPATHFINDING_API UHDynamicObject : public UActorComponent
{
	GENERATED_BODY()
	
	UHDynamicObject();

	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY()
	TObjectPtr<AH3DVolume> CurrentVolume;

public:
	FORCEINLINE void SetVolume(AH3DVolume* NewVolume) { CurrentVolume = NewVolume; }
};
