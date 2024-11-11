// HPathCore.h
// It is responsible for managing pathfinding requests and results.
// It is a singleton class that can be accessed from anywhere in the game.

#pragma once

#include "CoreMinimal.h"
#include "StructuresEnums_H3DPathFinding.h"
#include "GameFramework/Actor.h"
#include "HPathCore.generated.h"

UCLASS()
class H3DPATHFINDING_API AHPathCore : public AActor
{
    GENERATED_BODY()
    
    static AHPathCore* Instance; // Singleton instance of the class.

    TMap<FS_PathResult*, PathResultDelegate> Output; // Map of the path results.

    AHPathCore();

    virtual void BeginPlay() override;
    virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
    virtual void Tick(float DeltaTime) override;

public:

    static AHPathCore* GetInstance(UWorld* World); // Get the singleton instance of the class.

    void AssignRequest(FS_PathRequest& Request); // Assign the pathfinding request.
    void SubmitResult(FS_PathResult* Result, PathResultDelegate Delegate); // Submit the pathfinding result.
    void FindPath(UWorld* WorldRef,AHVolume3D* VolumeRef,FS_PathResult* Result,FVector Start,FVector End,PathResultDelegate Delegate,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef, bool bPathAdjusted); // Find the path between two points.

private:
    
    float CalculateCost(const FVector& From, const FVector& To) const; // Calculate the cost between two points.
    void GetNeighborNodes(UWorld* WorldRef,const FAStarNode& CurrentNode,TArray<FAStarNode>& OutNeighbors,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef,TMap<int32, FAStarNode*>& OpenMap,TSet<int32>& ClosedSet); // Get the neighbor nodes of the current node.
    void GetUpSideNeighbor(UWorld* WorldRef,AHVolume3D* VolumeRef,FVector neighborPosition, const FAStarNode& CurrentNode,TArray<FAStarNode>& OutNeighbors,TMap<int32, FAStarNode*>& OpenMap,TSet<int32>& ClosedSet,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef); // Get the upside neighbor of the current node for the walking characters.
    bool IsLocationFree(UWorld* WorldRef,const FVector& Location,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef); // Check if the location is free or not.
    bool CanSkip(UWorld* WorldRef,FVector Start,FVector End,float CharacterRadius,float CharacterHalfHeight); // Check if the path can be skipped or not.
    void SmoothenPath(UWorld* WorldRef,TArray<FVector>& PathPoints,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight); // Smoothen the path.
    FVector AdjustEnd(UWorld* WorldRef,const FVector& EndPosition,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef); // Adjust the end position of the path.
    FVector AdjustPath(UWorld* WorldRef,const FVector& EndPosition,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef); // Adjust the end position of the path.
};
