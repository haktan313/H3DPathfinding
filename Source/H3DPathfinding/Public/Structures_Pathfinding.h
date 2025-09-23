#pragma once
#include "CoreMinimal.h"
#include "Structures_Pathfinding.generated.h"

DECLARE_DELEGATE_OneParam(PathResultDelegate, const FPathResult&);


UENUM(BlueprintType)
enum class EFailureType : uint8
{
	None UMETA(DisplayName = "None"),
	WorldContextIsNull	UMETA(DisplayName = "World Context Is Null"),
	WorldIsNull	UMETA(DisplayName = "World Is Null"),
	PawnIsNull	UMETA(DisplayName = "Pawn Is Null"),
	VolumeIsNull	UMETA(DisplayName = "Volume Is Null"),
	ReturnNull	UMETA(DisplayName = "Return Null"),
	
	EndLocationNotAvailable	UMETA(DisplayName = "End Location Not Available"),
	StartLocationNotAvailable	UMETA(DisplayName = "Start Location Not Available"),
	StartLocationNotInVolume	UMETA(DisplayName = "Start Location Not In Volume"),
	EndLocationNotInVolume	UMETA(DisplayName = "End Location Not In Volume"),
	StartEqualsEnd	UMETA(DisplayName = "Start Equals End"),
	StartGridIsNotFound	UMETA(DisplayName = "Start Grid Is Not Found"),
	PathNotFound	UMETA(DisplayName = "Path Not Found")
};

USTRUCT(BlueprintType)
struct FPathfindingGrid
{
	GENERATED_BODY()
	FPathfindingGrid()
		: GridID(0), GridPosition(FVector::ZeroVector), bIsFree(true) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathfindingGrid")
	int GridID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathfindingGrid")
	FVector GridPosition = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathfindingGrid")
	bool bIsFree;
};

USTRUCT(BlueprintType)
struct FAStarNode
{
	GENERATED_BODY()

	FAStarNode()
		: GridID(0), WorldLocation(FVector::ZeroVector), GCost(0.f), HCost(0.f), parentNode(nullptr) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AStarNode")
	int GridID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AStarNode")
	FVector WorldLocation = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AStarNode")
	float GCost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AStarNode")
	float HCost;
	FAStarNode* parentNode;
	float TotalCost() const { return GCost + HCost; }
};

struct FNodeComparator
{
	bool operator()(const FAStarNode* A, const FAStarNode* B) const
	{
		return (A->GCost + A->HCost) > (B->GCost + B->HCost);
	}
};

USTRUCT(BlueprintType)
struct FPathResult
{
	GENERATED_BODY()
	FPathResult() : bSuccess(false) {}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathResult")
	TArray<FVector> PathPoints;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathResult")
	TMap<FVector, FPathfindingGrid> PathsGrids;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathResult")
	bool bSuccess;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathResult")
	EFailureType FailureType = EFailureType::None;
	
};

USTRUCT(BlueprintType)
struct FPathRequest
{
	GENERATED_BODY()
	FPathRequest()
		: Start(FVector::ZeroVector), End(FVector::ZeroVector), Volume(nullptr), OnPathFound(), Owner(nullptr), Tolerance(50.f) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
	FVector Start;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
	FVector End;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
	TObjectPtr<class AH3DVolume> Volume;
	PathResultDelegate OnPathFound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
	TObjectPtr<APawn> Owner;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
	float Tolerance;

};
