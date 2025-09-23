

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
	
};
