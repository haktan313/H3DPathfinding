
#include "HDynamicObjects.h"
#include "HVolume3D.h"
#include "Engine/Engine.h"

void UHDynamicObjects::BeginPlay()
{
	Super::BeginPlay();
	AActor* Owner = GetOwner();
	if (Owner)
	{
		Owner->OnActorBeginOverlap.AddDynamic(this, &UHDynamicObjects::OnBeginOverlap);
		Owner->OnActorEndOverlap.AddDynamic(this, &UHDynamicObjects::OnEndOverlap);
	}
}

void UHDynamicObjects::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	AHVolume3D* Volume = Cast<AHVolume3D>(OtherActor);
	if (Volume)
	{
		Volume->DynamicObjects.Add(OverlappedActor);
		Volume->DynamicObjectsLastPosition.Add(OverlappedActor, OverlappedActor->GetActorLocation());
		Volume->StartUpdateGrids();
	}
}

void UHDynamicObjects::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	AHVolume3D* Volume = Cast<AHVolume3D>(OtherActor);
	if (Volume)
	{
		Volume->DynamicObjects.Remove(OverlappedActor);
		Volume->DynamicObjectsLastPosition.Remove(OverlappedActor);
	}
}


