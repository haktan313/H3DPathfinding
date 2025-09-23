

#include "HDynamicObject.h"
#include "H3DVolume.h"
#include "Components/PrimitiveComponent.h" 

UHDynamicObject::UHDynamicObject()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UHDynamicObject::BeginPlay()
{
	Super::BeginPlay();
	if (AActor* owner = GetOwner())
		if (UPrimitiveComponent* primitiveComponent = Cast<UPrimitiveComponent>(owner->GetRootComponent()))
		{
			primitiveComponent->OnComponentBeginOverlap.AddDynamic(this, &UHDynamicObject::OnComponentBeginOverlap);
			primitiveComponent->OnComponentEndOverlap.AddDynamic(this, &UHDynamicObject::OnComponentEndOverlap);
		}
}

void UHDynamicObject::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (CurrentVolume && GetOwner())
	{
		CurrentVolume->UnSetNewDynamicObject(GetOwner(), true);
		CurrentVolume = nullptr;
	}
}

void UHDynamicObject::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != GetOwner())
		if (AH3DVolume* volume = Cast<AH3DVolume>(OtherActor))
		{
			CurrentVolume = volume;
			volume->SetNewDynamicObject(GetOwner());
		}
}

void UHDynamicObject::OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && OtherActor != GetOwner())
		if (AH3DVolume* volume = Cast<AH3DVolume>(OtherActor))
		{
			CurrentVolume = nullptr;
			volume->UnSetNewDynamicObject(GetOwner(), false);
		}
}


