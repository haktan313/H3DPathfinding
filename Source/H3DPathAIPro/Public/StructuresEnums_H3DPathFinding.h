

#pragma once

#include "CoreMinimal.h"
#include "StructuresEnums_H3DPathFinding.generated.h"


DECLARE_DELEGATE_OneParam(PathResultDelegate, const FS_PathResult&);//delegate for when the path is found


struct FAStarNode//Node for A* algorithm
{
    int32 GridID;
    FVector WorldLocation;
    float GCost = 0.0f; //cost start node to the current node
    float HCost = 0.0f; //cost current node to the end node
    float FCost() const { return GCost + HCost; } //total cost
    FAStarNode* Parent = nullptr;


    bool operator==(const FAStarNode& Other) const //Operator for two nodes equal or not
    {
        return GridID == Other.GridID;
    }
};

FORCEINLINE uint32 GetTypeHash(const FAStarNode& Node)
{
    return GetTypeHash(Node.GridID);
}

struct FNodeComparator //queue to sort the nodes lowest FCost value to top
{
    bool operator()(const FAStarNode* A, const FAStarNode* B) const
    {
        return A->FCost() > B->FCost();
    }
};

USTRUCT(BlueprintType)
struct FS_GridCellsID
{
    GENERATED_BODY()

    FS_GridCellsID()
        : GridPersonalID(0), GridPosition(FVector::ZeroVector), GridSize(0.0f), IsFree(true), IsDivided(false), ParentGridID(-1), ChildGridIDs() {}

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    int32 GridPersonalID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    FVector GridPosition;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    float GridSize;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    bool IsFree;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    bool IsDivided;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    int32 ParentGridID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    TArray<int32> ChildGridIDs;
};


USTRUCT(BlueprintType)
struct FS_PathResult
{
    GENERATED_BODY()

    FS_PathResult() : PathPoints(), bSuccess(false) {}


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathResult")
    TArray<FVector> PathPoints;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathResult")
    bool bSuccess;

    bool operator==(const FS_PathResult& Other) const //operator for checking if two path results are equal
    {
        return this == &Other;
    }
};

FORCEINLINE uint32 GetTypeHash(const FS_PathResult& PathResult)
{
    return ::PointerHash(&PathResult);
}


USTRUCT(BlueprintType)
struct FS_PathRequest
{
    GENERATED_BODY()

    FS_PathRequest()
        : Start(FVector::ZeroVector), End(FVector::ZeroVector), VolumeRef(nullptr), CharacterRadius(0.0f), CharacterHalfHeight(0.0f), bIsWalking(false), Owner(nullptr) {}

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    FVector Start;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    FVector End;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    TObjectPtr<class AHVolume3D> VolumeRef;

    PathResultDelegate OnPathFound; //Delegate for when the path is found

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    float CharacterRadius;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    float CharacterHalfHeight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    bool bIsWalking;//if the character is walking or flying

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    TObjectPtr<AActor> Owner;//owner of the path request
};

UENUM(BlueprintType)
enum E_RandomPointsDimention : uint8
{
    TwoD UMETA(DisplayName = "2D"),
    TreeD UMETA(DisplayName = "3D")
};
