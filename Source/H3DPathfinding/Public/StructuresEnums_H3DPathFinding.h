//StructuresEnums_H3DPathFinding.h

#pragma once

#include "CoreMinimal.h"
#include "StructuresEnums_H3DPathFinding.generated.h"


DECLARE_DELEGATE_OneParam(PathResultDelegate, const FS_PathResult&);//Delegate for when the path is found.


struct FAStarNode//Node for A* algorithm.
{
    int32 GridID; //Unique ID for the grid.
    FVector WorldLocation;  //World location of the grid.
    float GCost = 0.0f;  //Cost from the start node to the current node.
    float HCost = 0.0f;  //Cost from the current node to the end node.
    float FCost() const { return GCost + HCost; } //Total cost of the node.
    FAStarNode* Parent = nullptr; //Parent node of the current node.


    bool operator==(const FAStarNode& Other) const //Operator for checking if two nodes are equal.
    {
        return GridID == Other.GridID;
    }
};

FORCEINLINE uint32 GetTypeHash(const FAStarNode& Node)
{
    return GetTypeHash(Node.GridID);
}

struct FNodeComparator //FindPath function uses a priority queue to sort the nodes with the lowest FCost value at the top of the queue.
{
    bool operator()(const FAStarNode* A, const FAStarNode* B) const
    {
        return A->FCost() > B->FCost();//FCost is coming from the FAStarNode struct.
    }
};

USTRUCT(BlueprintType)
struct FS_GridCellsID//Structure for the grid cells.
{
    GENERATED_BODY()

    FS_GridCellsID()
        : GridPersonalID(0), GridPosition(FVector::ZeroVector), GridSize(0.0f), IsFree(true), IsDivided(false), ParentGridID(-1), ChildGridIDs() {}

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    int32 GridPersonalID; //Unique ID for the grid.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    FVector GridPosition; //World position of the grid.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    float GridSize; //Size of the grid.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    bool IsFree; //If the grid is free or not.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    bool IsDivided; //If the grid is divided into smaller grids or not.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    int32 ParentGridID; //Parent grid ID.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GridCellsID")
    TArray<int32> ChildGridIDs; //Child grid IDs.
};


USTRUCT(BlueprintType)
struct FS_PathResult //Structure for the path result.
{
    GENERATED_BODY()

    FS_PathResult() : PathPoints(), bSuccess(false) {}


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathResult")
    TArray<FVector> PathPoints; //Array of the points in the path.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathResult")
    bool bSuccess;  //If the path is found or not.

    bool operator==(const FS_PathResult& Other) const //Operator for checking if two path results are equal.
    {
        return this == &Other;
    }
};

FORCEINLINE uint32 GetTypeHash(const FS_PathResult& PathResult)
{
    return ::PointerHash(&PathResult);
}


USTRUCT(BlueprintType)
struct FS_PathRequest //Structure for the path request.
{
    GENERATED_BODY()

    FS_PathRequest()
        : Start(FVector::ZeroVector), End(FVector::ZeroVector), VolumeRef(nullptr), CharacterRadius(0.0f), CharacterHalfHeight(0.0f), bIsWalking(false), Owner(nullptr) {}

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    FVector Start; //Start location of the path.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    FVector End; //End location of the path.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    class AHVolume3D* VolumeRef; //Reference to the volume.

    PathResultDelegate OnPathFound; //Delegate for when the path is found.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    float CharacterRadius; //Radius of the character.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    float CharacterHalfHeight; //Half height of the character.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    bool bIsWalking; //If the character is walking or flying.

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PathRequest")
    AActor* Owner; //Owner of the path request.
};
