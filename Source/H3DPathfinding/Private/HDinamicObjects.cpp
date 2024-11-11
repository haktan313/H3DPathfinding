//HDinamicObjects.cpp

#include "HDinamicObjects.h"
#include "HVolume3D.h"
#include "Engine/Engine.h"

void UHDinamicObjects::BeginPlay()
{
	Super::BeginPlay();
	AActor* Owner = GetOwner();//Get the owner of the component.
	if (Owner)
	{
		Owner->OnActorBeginOverlap.AddDynamic(this, &UHDinamicObjects::OnBeginOverlap);//Bind the OnBeginOverlap function to the OnActorBeginOverlap event.
		Owner->OnActorEndOverlap.AddDynamic(this, &UHDinamicObjects::OnEndOverlap);//Bind the OnEndOverlap function to the OnActorEndOverlap event.
	}
}

void UHDinamicObjects::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	AHVolume3D* Volume = Cast<AHVolume3D>(OtherActor);//Cast the other actor to AHaktan3DVolume.
	if (Volume)//If the cast is successful.
	{
		Volume->DinamicObjects.Add(OverlappedActor);//Add the overlapped actor to the dinamic objects array.
		Volume->DinamicObjectsLastPosition.Add(OverlappedActor, OverlappedActor->GetActorLocation());//Add the overlapped actor and its location to the dinamic objects last position map.
		Volume->StartUpdateGrids();//Start updating the grids.
	}
}

void UHDinamicObjects::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	AHVolume3D* Volume = Cast<AHVolume3D>(OtherActor);//Cast the other actor to AHaktan3DVolume.
	if (Volume)//If the cast is successful.
	{
		Volume->DinamicObjects.Remove(OverlappedActor);//Remove the overlapped actor from the dinamic objects array.
		Volume->DinamicObjectsLastPosition.Remove(OverlappedActor);//Remove the overlapped actor from the dinamic objects last position map.
	}
}


