
#include "HPatrolSpline.h"
#include "Components/SplineComponent.h"

AHPatrolSpline::AHPatrolSpline()
{
	SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
	RootComponent = SplineComponent;
}


void AHPatrolSpline::PatrolRouteIndex(AActor* RequestedBy)
{
	if (!RequestedBy){return;}
	
	FS_PatrolData* data = PatrolDataMap.Find(RequestedBy);
	if (!data)
	{
		FS_PatrolData newData;
		newData.currentPointIndex = 0;
		newData.direction = 1;
		PatrolDataMap.Add(RequestedBy, newData);
		data = PatrolDataMap.Find(RequestedBy);
	}
	
	data->currentPointIndex += data->direction;
	if(data->currentPointIndex == SplineComponent->GetNumberOfSplinePoints() -1)
	{
		data->direction = -1;
	}
	else
	{
		if(data->currentPointIndex == 0)
		{
			data->direction = 1;
		}
	}
}

FVector AHPatrolSpline::GetPatrolRouteLocation(AActor* RequestedBy)
{
	if (!RequestedBy){return FVector::ZeroVector;}
	FS_PatrolData* data = PatrolDataMap.Find(RequestedBy);
	int currentPointIndex = 0;
	if (data)
	{
		currentPointIndex = data->currentPointIndex;
	}
	FVector splineLocalPoint = SplineComponent->GetLocationAtSplinePoint(currentPointIndex, ESplineCoordinateSpace::World);
	return splineLocalPoint;
}


