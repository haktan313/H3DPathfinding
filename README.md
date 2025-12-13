# H3DPathfinding

UE5 async A* pathfinding on a 3D grid. Handles dynamic obstacles (live occupancy + prediction), start and end relocation, path smoothing, detailed debugging tools, and automatic repathing.

## ✨ Features
- **Async A on a true 3D grid** – Keeps the game thread free while computing paths.
- **Dynamic obstacle handling** – Live occupancy tracking and velocity based prediction with **UHDynamicObject** components.
- **Start & end relocation** – Automatically adjusts blocked or out of volume points.
- **Path smoothing** – Optional corner skipping and removes unnecessary nodes for cleaner movement.
- **Blueprint friendly** – UH3DMoveToAsyncAction lets you request a path without custom C++ code.
- **Debug tools** – In editor and in game grid visualization, player/camera draw distance controls.
- **Destination vector or target actor** – Choose a fixed destination or follow a moving target actor.

## 🚀 Basic Setup

***1.Add the Volume***<img width="111" height="25" alt="Screenshot 2025-09-25 002713" src="https://github.com/user-attachments/assets/205b65b5-cee3-4360-87dc-3239ea284580" />
- **Place an H3DVolume actor in your level**
- **Set Cell Size, Collision Channel, and other grid settings in the Details panel**<img width="808" height="541" alt="Screenshot 2025-09-25 002703" src="https://github.com/user-attachments/assets/2ea739bb-210a-436d-8564-9722e7c420f9" />

- **Click Divide Volume Into Grids to generate the 3D grid**
  
- **Physic Tests Tolerance**: Adds a safety tolerance to collision checks during pathfinding to prevent cells from being unnecessarily marked as blocked, resulting in smoother movement.
  
- **Cell Size Multiplier for Adjustment**: How many extra cell sizes the pathfinder will search if the start or end cell is not usable (default 2).
  
- **Update Grids Rate**: How often (seconds) dynamic-object occupancy is refreshed (default 0.2 s).
  
***2.Mark Dynamic Obstacles (optional)***<img width="223" height="32" alt="Screenshot 2025-09-25 002634" src="https://github.com/user-attachments/assets/a6e5f25a-8f19-4416-aba2-d12b1d149fbc" />
- **Attach the UHDynamicObject component to any actor that should block or update the grid at runtime. The volume will automatically track movement and sets free or not free.**

***3. Request a Path***

<img width="365" height="403" alt="Screenshot 2025-09-25 002628" src="https://github.com/user-attachments/assets/3c52868a-8819-41d8-95d4-fae1373cce4d" />

 **Use the Blueprint node H3DMoveTo** (from UH3DMoveToAsyncAction):

- **World Context:** typically Self.
  
- **Pawn:** the actor you want to move.
  
- **Volume:** the H3DVolume in the level.
  
- **Destination:** a world‐space vector.
  
- **Optional:** tolerance, debug line, and update rate.

The node drives the Pawn along the computed path and broadcasts OnSuccess or OnFailed with an EFailureType reason if it cannot find a valid path.

## 🔍 Debugging & Visualization

- Enable bDrawDebugFromPlayer or bDrawSelectedActorsDebugGrids on the H3DVolume to see occupied/free cells.
- In the editor, enable bDrawCameraDebugGridsOnEditor to preview grids from the viewport camera.

##  Current Limitation
- The target actor tracking function is useful but still in an experimental phase and not as developed as the rest of the system.   I could not yet find enough time to improve it, so future updates will focus on improving it.

Script Example(H3DPathCore)

```cpp
#pragma once

#include <queue>
#include "CoreMinimal.h"
#include "Structures_Pathfinding.h"
#include "Templates/UniquePtr.h"
#include "GameFramework/Actor.h"
#include "H3DPathCore.generated.h"

UCLASS()
class H3DPATHFINDING_API AH3DPathCore : public AActor
{
	GENERATED_BODY()
public:
	static AH3DPathCore* GetInstance(UWorld* World);
private:
	static AH3DPathCore* Instance;
	
	TArray<TPair<TSharedPtr<FPathResult>, PathResultDelegate>> Output;
	
	AH3DPathCore();
	EFailureType CheckFailureConditions(UWorld* World, AH3DVolume* Volume, APawn* OwnerPawn);

	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;
public:
	void AssignRequest(FPathRequest& Request);
private:
	void SubmitResult(TSharedPtr<FPathResult> Result, PathResultDelegate Delegate);
	void FindPath(UWorld* World, AH3DVolume* Volume, APawn* OwnerPawn, FPathResult& Result, FVector Start, FVector End,
	              float CharacterRadius, float CharacterHalfHeight);
	
	void GetNeighborNodes(UWorld* World, const FAStarNode& CurrentNode, TArray<int>& Neighbors, AH3DVolume& Volume, APawn* OwnerPawn,
		TMap<int, TUniquePtr<FAStarNode>>& OpenMap, TSet<int>& ClosedSet, float CharacterRadius, float CharacterHalfHeight, int StartGridID, int EndGridID);
	void NeighborAdjustments(AH3DVolume& Volume, TArray<int>& NeighborsIDs, TMap<int, TUniquePtr<FAStarNode>>& OpenMap, TSet<int>& ClosedSet,
		FAStarNode& CurrentGrid, const FVector& End, std::priority_queue<FAStarNode*, std::vector<FAStarNode*>, FNodeComparator>& OpenQueue);
	void SmoothenPath(UWorld* World, const AH3DVolume* Volume, TArray<FVector>& PathPoints, APawn* OwnerPawn, float CharacterRadius, float CharacterHalfHeight);
	
	FORCEINLINE float CalculateCost(const FVector& From, const FVector& To) const { return FVector::Dist(From, To); }
	TUniquePtr<FAStarNode> CreateUniqueNode(FVector& WorldLocation, int GridID, float GCost, float HCost, FAStarNode* Parent);
	bool CheckEndLocationAvailability(UWorld* World, AH3DVolume* Volume, APawn* OwnerPawn, FVector& End, float CharacterRadius, float CharacterHalfHeight);
	bool CheckStartLocationAvailability(UWorld* World, AH3DVolume* Volume, APawn* OwnerPawn, FVector& Start, float CharacterRadius, float CharacterHalfHeight);
	bool IsLocationAvailable(UWorld* World, const AH3DVolume* Volume, const FVector& Location, APawn* OwnerPawn, float CharacterRadius, float CharacterHalfHeight);
	bool CanSkip(UWorld* World, const AH3DVolume* Volume, const FVector& Start, const FVector& End, APawn* OwnerPawn,
		float CharacterRadius, float CharacterHalfHeight);
	bool TryRelocateAround(UWorld* World, AH3DVolume* Volume, FVector& InOutLocation,
	                       int32 ExtraSteps);
}
```

```cpp

#include "H3DPathCore.h"
#include "H3DVolume.h"
#include <queue>
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "Async/Async.h"
#include "Async/TaskGraphInterfaces.h"
#include "Engine/EngineTypes.h"
#include "CollisionQueryParams.h"
#include "CollisionShape.h"

AH3DPathCore* AH3DPathCore::Instance = nullptr;

AH3DPathCore* AH3DPathCore::GetInstance(UWorld* World)
{
	if (!World)
		return nullptr;
	
	if (!IsValid(Instance) || Instance->GetWorld() != World || Instance->IsPendingKillPending() || Instance->IsActorBeingDestroyed())
	{
		if (IsValid(Instance))
			Instance->Destroy();
		Instance = nullptr;
	}

	if (!Instance)
	{
		FActorSpawnParameters Params;
		Params.ObjectFlags |= RF_Transient;
		Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		Instance = World->SpawnActor<AH3DPathCore>(Params);
	}
	return Instance;
}

AH3DPathCore::AH3DPathCore()
{
	PrimaryActorTick.bCanEverTick = true;

}

EFailureType AH3DPathCore::CheckFailureConditions(UWorld* World, AH3DVolume* Volume, APawn* OwnerPawn)
{
	if (!World)
		return EFailureType::WorldIsNull;
	if (!Volume)
		return EFailureType::VolumeIsNull;
	if (!OwnerPawn)
		return EFailureType::PawnIsNull;
	return EFailureType::None;
}

void AH3DPathCore::BeginPlay()
{
	Super::BeginPlay();
	
}

void AH3DPathCore::EndPlay(EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (Instance && Instance == this)
	{
		Output.Empty();
		Instance = nullptr;;
	}
}

void AH3DPathCore::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (Output.Num() > 0)
	{
		for (auto& PathResultValue : Output)
		{
			if (PathResultValue.Value.IsBound())
			{
				PathResultValue.Value.Execute(*PathResultValue.Key);
			}
		}
		Output.Empty();
	}
}

void AH3DPathCore::AssignRequest(FPathRequest& Request)
{
	UWorld* world = Request.Owner->GetWorld();
	AH3DVolume* volume = Request.Volume;
	APawn* owner = Request.Owner;
	PathResultDelegate delegate = Request.OnPathFound;
	FVector start = Request.Start;
	FVector end = Request.End;
	float characterRadius = owner->GetSimpleCollisionRadius();
	float characterHalfHeight = owner->GetSimpleCollisionHalfHeight();
	
	Async(EAsyncExecution::ThreadPool, [this, delegate, world, volume, start, end, owner, characterRadius, characterHalfHeight]()
	{
		TSharedPtr<FPathResult> result = MakeShared<FPathResult>();
		FindPath(world, volume, owner, *result, start, end, characterRadius, characterHalfHeight);
		AsyncTask(ENamedThreads::GameThread, [this, result,delegate]
		{
			SubmitResult(result, delegate);
		});
	});
}

void AH3DPathCore::SubmitResult(TSharedPtr<FPathResult> Result, PathResultDelegate Delegate)
{
	if (!Result || !Delegate.IsBound())
		return;
	Output.Add({ Result, Delegate });
}

void AH3DPathCore::FindPath(UWorld* World, AH3DVolume* Volume, APawn* OwnerPawn, FPathResult& Result, FVector Start, FVector End, float CharacterRadius, float CharacterHalfHeight)
{
	EFailureType failure = CheckFailureConditions(World, Volume, OwnerPawn);
	if (failure != EFailureType::None)
	{
		Result.bSuccess = false;
		Result.FailureType = failure;
		return;
	}
	if (!CheckEndLocationAvailability(World, Volume, OwnerPawn, End, CharacterRadius, CharacterHalfHeight))
	{
		Result.bSuccess = false;
		Result.FailureType = EFailureType::EndLocationNotAvailable;
		return;
	}
	if (!CheckStartLocationAvailability(World, Volume, OwnerPawn, Start, CharacterRadius, CharacterHalfHeight))
	{
		Result.bSuccess = false;
		Result.FailureType = EFailureType::StartLocationNotAvailable;
		return;
	}
	
	int startGridID = Volume->GetGridIDFromPosition(Start);
	int endGridID = Volume->GetGridIDFromPosition(End);
	if (startGridID == -1 || endGridID == -1)
	{
		Result.bSuccess = false;
		Result.FailureType = startGridID == -1 ? EFailureType::StartLocationNotInVolume : EFailureType::EndLocationNotInVolume;
		return;
	}
	if (startGridID == endGridID)
	{
		Result.PathPoints.Add(Start);
		Result.PathPoints.Add(End);
		Result.bSuccess = false;
		Result.FailureType = EFailureType::StartEqualsEnd;
		return;
	}
	
	TMap<int, TUniquePtr<FAStarNode>> openMap;
	TSet<int> closedSet;
	std::priority_queue<FAStarNode*, std::vector<FAStarNode*>, FNodeComparator> openQueue;
	
	TUniquePtr<FAStarNode> startGridNode = CreateUniqueNode(Volume->GetGridFromID(startGridID) ? Volume->GetGridFromID(startGridID)->GridPosition : Start,
		startGridID, 0.f, CalculateCost(Start, End), nullptr);
	if (!startGridNode)
	{
		Result.bSuccess = false;
		Result.FailureType = EFailureType::StartGridIsNotFound;
		return;
	}
	openMap.Add(startGridID, MoveTemp(startGridNode));
	openQueue.push(openMap.Find(startGridID)->Get());

	while (!openQueue.empty())
	{
		FAStarNode* currentGrid = openQueue.top();
		openQueue.pop();
		
		if (currentGrid == nullptr)
			break;
		if (closedSet.Contains(currentGrid->GridID))
			continue;
		if (openMap.Contains(currentGrid->GridID))
			closedSet.Add(currentGrid->GridID);
		
		if (currentGrid->GridID == endGridID)
		{
			TArray<FVector> pathPoints;
			for (FAStarNode* grid = currentGrid; grid != nullptr; grid = grid->parentNode)
				pathPoints.Insert(grid->WorldLocation,0);
			
			SmoothenPath(World, Volume, pathPoints, OwnerPawn, CharacterRadius, CharacterHalfHeight);
			
			Result.PathPoints = pathPoints;
			Result.bSuccess = true;
			
			openMap.Empty();
			closedSet.Empty();
			return;
		}

		TArray<int> neighborsIDs;
		GetNeighborNodes(World, *currentGrid, neighborsIDs, *Volume, OwnerPawn, openMap, closedSet, CharacterRadius, CharacterHalfHeight, startGridID, endGridID);
		NeighborAdjustments(*Volume, neighborsIDs, openMap, closedSet, *currentGrid, End, openQueue);
	}
	const int32 extraSteps = (int32)Volume->GetCellSizeMultiplierForAdjustment() + 2;
	
	FVector adjustedEnd = End;
	if (TryRelocateAround(World, Volume, adjustedEnd, extraSteps))
	{
		if (IsLocationAvailable(World, Volume, adjustedEnd, OwnerPawn, CharacterRadius, CharacterHalfHeight))
		{
			FindPath(World, Volume, OwnerPawn, Result, Start, adjustedEnd, CharacterRadius, CharacterHalfHeight);
			if (Result.bSuccess) return;
		}
	}
	
	FVector adjustedStart = Start;
	if (TryRelocateAround(World, Volume, adjustedStart, extraSteps))
	{
		if (IsLocationAvailable(World, Volume, adjustedStart, OwnerPawn, CharacterRadius, CharacterHalfHeight))
		{
			FindPath(World, Volume, OwnerPawn, Result, adjustedStart, End, CharacterRadius, CharacterHalfHeight);
			if (Result.bSuccess) return;
		}
	}
	
	FVector adjustedStart2 = Start, adjustedEnd2 = End;
	if (TryRelocateAround(World, Volume, adjustedStart2, extraSteps) &&
		TryRelocateAround(World, Volume, adjustedEnd2, extraSteps))
	{
		if (IsLocationAvailable(World, Volume, adjustedStart2, OwnerPawn, CharacterRadius, CharacterHalfHeight) &&
			IsLocationAvailable(World, Volume, adjustedEnd2,   OwnerPawn, CharacterRadius, CharacterHalfHeight))
		{
			FindPath(World, Volume, OwnerPawn, Result, adjustedStart2, adjustedEnd2, CharacterRadius, CharacterHalfHeight);
			if (Result.bSuccess) return;
		}
	}
	
	Result.bSuccess = false;
	Result.FailureType = EFailureType::PathNotFound;
}

void AH3DPathCore::GetNeighborNodes(UWorld* World, const FAStarNode& CurrentNode, TArray<int>& Neighbors, AH3DVolume& Volume,
		APawn* OwnerPawn, TMap<int, TUniquePtr<FAStarNode>>& OpenMap, TSet<int>& ClosedSet, float CharacterRadius, float CharacterHalfHeight, int StartGridID, int EndGridID)
{
	float gridSize = Volume.GetGridCellSize();
	TArray directions =
	{
		FVector::ForwardVector, FVector::BackwardVector,
		FVector::RightVector, FVector::LeftVector,
		FVector::UpVector, FVector::DownVector
	};

	for (uint8 i = 0; i < directions.Num(); i++)
	{
		FVector neighborPosition = CurrentNode.WorldLocation + directions[i] * gridSize;
		int neighborGridID = Volume.GetGridIDFromPosition(neighborPosition);
		if (neighborGridID != -1)
		{
			if (ClosedSet.Contains(neighborGridID) || OpenMap.Contains(neighborGridID))
				continue;
			if (neighborGridID == StartGridID || neighborGridID == EndGridID || IsLocationAvailable(World, &Volume, neighborPosition, OwnerPawn, CharacterRadius, CharacterHalfHeight))
			{
				Neighbors.Add(neighborGridID);
			}
		}
	}
}

void AH3DPathCore::NeighborAdjustments(AH3DVolume& Volume, TArray<int>& NeighborsIDs, TMap<int, TUniquePtr<FAStarNode>>& OpenMap, TSet<int>& ClosedSet,
		FAStarNode& CurrentGrid, const FVector& End, std::priority_queue<FAStarNode*, std::vector<FAStarNode*>, FNodeComparator>& OpenQueue)
{
	for (int neighborID : NeighborsIDs)
	{
		if (ClosedSet.Contains(neighborID))
			continue;

		FPathfindingGrid* neighborGrid = Volume.GetGridFromID(neighborID);
		if (!neighborGrid)
			continue;
		float newGCost = CurrentGrid.GCost + CalculateCost(CurrentGrid.WorldLocation, neighborGrid->GridPosition);
			
		if (OpenMap.Contains(neighborID))
		{
			FAStarNode* neighborGridNode = OpenMap.Find(neighborID)->Get();
			if (newGCost < neighborGridNode->GCost)
			{
				neighborGridNode->GCost = newGCost;
				neighborGridNode->parentNode = &CurrentGrid;
				OpenQueue.push(neighborGridNode); 
			}
		}
		else
		{
			TUniquePtr<FAStarNode> neighborGridNode = CreateUniqueNode(neighborGrid->GridPosition, neighborGrid->GridID, newGCost,
				CalculateCost(neighborGrid->GridPosition, End), &CurrentGrid);

			OpenMap.Add(neighborID, MoveTemp(neighborGridNode));
			OpenQueue.push(OpenMap.Find(neighborID)->Get());
		}
	}
}

void AH3DPathCore::SmoothenPath(UWorld* World, const AH3DVolume* Volume, TArray<FVector>& PathPoints, APawn* OwnerPawn, float CharacterRadius, float CharacterHalfHeight)
{
	int pathSize = PathPoints.Num();
	if (pathSize < 3)
		return;
	int currentIndex = 0;
	while (currentIndex < pathSize - 2)
	{
		if (CanSkip(World, Volume, PathPoints[currentIndex], PathPoints[currentIndex + 2], OwnerPawn, CharacterRadius, CharacterHalfHeight))
		{
			PathPoints.RemoveAt(currentIndex + 1);
			pathSize--;
		}
		else
			currentIndex++;
		
	}
}
```

```cpp
//------------------------------------------------------------------- Utility Functions

TUniquePtr<FAStarNode> AH3DPathCore::CreateUniqueNode(FVector& WorldLocation, int GridID, float GCost, float HCost, FAStarNode* Parent)
{
	TUniquePtr<FAStarNode> startGridNode = MakeUnique<FAStarNode>();
	startGridNode->WorldLocation = WorldLocation;
	startGridNode->GridID = GridID;
	startGridNode->GCost = GCost;
	startGridNode->HCost = HCost;
	startGridNode->parentNode = Parent;
	return startGridNode;
}

bool AH3DPathCore::CheckEndLocationAvailability(UWorld* World, AH3DVolume* Volume, APawn* OwnerPawn, FVector& End,
		float CharacterRadius, float CharacterHalfHeight)
{
	if (Volume->GetGridFromID(Volume->GetGridIDFromPosition(End)) && Volume->GetGridFromID(Volume->GetGridIDFromPosition(End))->bIsFree)
	{
		if (IsLocationAvailable(World, Volume, End, OwnerPawn, CharacterRadius, CharacterHalfHeight))
			return true;	
	}

	TArray searchDirections =
	{
		FVector::ForwardVector, FVector::BackwardVector,
		FVector::RightVector, FVector::LeftVector,
		FVector::UpVector, FVector::DownVector
	};
	uint8 multiplier = Volume->GetCellSizeMultiplierForAdjustment();
	for (uint8 a = 1; a <= multiplier; a++)
	{
		for (uint8 i = 0; i < searchDirections.Num(); i++)
		{
			FVector checkPosition = End + searchDirections[i] * Volume->GetGridCellSize() * a;
			if (Volume->GetGridFromID(Volume->GetGridIDFromPosition(checkPosition)) &&
					Volume->GetGridFromID(Volume->GetGridIDFromPosition(checkPosition))->bIsFree)
			{
				End = checkPosition;
				return true;	
			}
		}
	}
	return false;
}

bool AH3DPathCore::CheckStartLocationAvailability(UWorld* World, AH3DVolume* Volume, APawn* OwnerPawn,FVector& Start,
		float CharacterRadius, float CharacterHalfHeight)
{
	if (Volume->GetGridFromID(Volume->GetGridIDFromPosition(Start)))
	{
		if (IsLocationAvailable(World, Volume, Start, OwnerPawn, CharacterRadius, CharacterHalfHeight))
			return true;	
	}

	TArray searchDirections =
	{
		FVector::ForwardVector, FVector::BackwardVector,
		FVector::RightVector, FVector::LeftVector,
		FVector::UpVector, FVector::DownVector
	};
	uint8 multiplier = Volume->GetCellSizeMultiplierForAdjustment();
	for (uint8 a = 1; a <= multiplier; a++)
	{
		for (uint8 i = 0; i < searchDirections.Num(); i++)
		{
			FVector checkPosition = Start + searchDirections[i] * Volume->GetGridCellSize() * a;
			if (Volume->GetGridFromID(Volume->GetGridIDFromPosition(checkPosition)) &&
					Volume->GetGridFromID(Volume->GetGridIDFromPosition(checkPosition))->bIsFree)
			{
				Start = checkPosition;
				return true;
			}
		}
	}
	return false;
}

bool AH3DPathCore::IsLocationAvailable(UWorld* World, const AH3DVolume* Volume, const FVector& Location, APawn* OwnerPawn, float CharacterRadius, float CharacterHalfHeight)
{
	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(OwnerPawn);
	queryParams.bTraceComplex = false;
	FCollisionShape collisionShape = FCollisionShape::MakeCapsule(CharacterRadius / Volume->GetPhysicTestTolerance(), CharacterHalfHeight); //There is a little tolerance to avoid getting stuck on small obstacles

	bool bHit = World->OverlapBlockingTestByChannel(
		Location,
		FQuat::Identity,
		Volume->GetCollisionChannel(),
		collisionShape,
		queryParams
	);
	return !bHit;
}

bool AH3DPathCore::CanSkip(UWorld* World, const AH3DVolume* Volume, const FVector& Start, const FVector& End, APawn* OwnerPawn, float CharacterRadius, float CharacterHalfHeight)
{
	FHitResult hitResult;
	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(OwnerPawn);
	queryParams.bTraceComplex = false;
	FCollisionShape collisionShape = FCollisionShape::MakeCapsule(CharacterRadius / Volume->GetPhysicTestTolerance(), CharacterHalfHeight); //There is a little tolerance to avoid getting stuck on small obstacles
	
	bool bHit = World->SweepSingleByChannel(
		hitResult,
		Start,
		End,
		FQuat::Identity,
		Volume->GetCollisionChannel(),
		collisionShape,
		queryParams
	);
	return !bHit;
}

bool AH3DPathCore::TryRelocateAround(UWorld* World, AH3DVolume* Volume,
	FVector& InOutLocation, int32 ExtraSteps)
{
	if (!World || !Volume) return false;
	
	 TArray dirs = {
		FVector::ForwardVector, FVector::BackwardVector,
		FVector::RightVector,   FVector::LeftVector,
		FVector::UpVector,      FVector::DownVector
	};

	for (int step = 1; step <= ExtraSteps; ++step)
	{
		for (int i = 0; i < 6; ++i)
		{
			FVector candidate = InOutLocation + dirs[i] * (Volume->GetGridCellSize() * step);
			int gridID = Volume->GetGridIDFromPosition(candidate);
			if (gridID == -1)
				continue;
			
			FPathfindingGrid* grid = Volume->GetGridFromID(gridID);
			if (!grid || !grid->bIsFree)
				continue;

			InOutLocation = candidate;
			return true;
		}
	}
	return false;
}
```
