//HDinamicObjects.cpp

#include "HDynamicObjects.h"
#include "HVolume3D.h"
#include "Engine/Engine.h"

void UHDynamicObjects::BeginPlay()
{
	Super::BeginPlay();
	AActor* Owner = GetOwner();//Get the owner of the component.
	if (Owner)
	{
		Owner->OnActorBeginOverlap.AddDynamic(this, &UHDynamicObjects::OnBeginOverlap);//Bind the OnBeginOverlap function to the OnActorBeginOverlap event.
		Owner->OnActorEndOverlap.AddDynamic(this, &UHDynamicObjects::OnEndOverlap);//Bind the OnEndOverlap function to the OnActorEndOverlap event.
	}
}

void UHDynamicObjects::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	AHVolume3D* Volume = Cast<AHVolume3D>(OtherActor);//Cast the other actor to AHaktan3DVolume.
	if (Volume)//If the cast is successful.
	{
		Volume->DynamicObjects.Add(OverlappedActor);//Add the overlapped actor to the dinamic objects array.
		Volume->DynamicObjectsLastPosition.Add(OverlappedActor, OverlappedActor->GetActorLocation());//Add the overlapped actor and its location to the dinamic objects last position map.
		Volume->StartUpdateGrids();//Start updating the grids.
	}
}

void UHDynamicObjects::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	AHVolume3D* Volume = Cast<AHVolume3D>(OtherActor);//Cast the other actor to AHaktan3DVolume.
	if (Volume)//If the cast is successful.
	{
		Volume->DynamicObjects.Remove(OverlappedActor);//Remove the overlapped actor from the dinamic objects array.
		Volume->DynamicObjectsLastPosition.Remove(OverlappedActor);//Remove the overlapped actor from the dinamic objects last position map.
	}
}


