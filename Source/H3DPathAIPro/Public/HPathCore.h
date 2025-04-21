
#pragma once

#include "CoreMinimal.h"
#include "StructuresEnums_H3DPathFinding.h"
#include "GameFramework/Actor.h"
#include "HPathCore.generated.h"

UCLASS()
class H3DPATHAIPRO_API AHPathCore : public AActor
{
    GENERATED_BODY()
    
    static AHPathCore* Instance; //singleton instance of the class

    FVector StartRef;
    FVector EndRef;
    FVector OriginalEnd;
    
    TMap<FS_PathResult*, PathResultDelegate> Output;

    AHPathCore();

    virtual void BeginPlay() override;
    virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
    virtual void Tick(float DeltaTime) override;

public:

    static AHPathCore* GetInstance(UWorld* World); //get the singleton instance

    void AssignRequest(FS_PathRequest& Request);
    void SubmitResult(FS_PathResult* Result, PathResultDelegate Delegate);
    void FindPath(UWorld* WorldRef,AHVolume3D* VolumeRef,FS_PathResult* Result,FVector Start,FVector End,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef, int tryIndex = 0);

private:
    
    float CalculateCost(const FVector& From, const FVector& To) const;
    void GetNeighborNodes(UWorld* WorldRef,const FAStarNode& CurrentNode,TArray<FAStarNode>& OutNeighbors,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef,TMap<int32, FAStarNode*>& OpenMap,TSet<int32>& ClosedSet);
    void GetUpSideNeighbor(UWorld* WorldRef,AHVolume3D* VolumeRef,FVector neighborPosition, const FAStarNode& CurrentNode,TArray<FAStarNode>& OutNeighbors,TMap<int32, FAStarNode*>& OpenMap,TSet<int32>& ClosedSet,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef); // Get the upside neighbor of the current node for the walking characters
    bool IsLocationFree(UWorld* WorldRef,const FVector& Location,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef,bool bCameFromEndAdjustment);//check if the location is free or not
    bool CanSkip(UWorld* WorldRef,FVector Start,FVector End,float CharacterRadius,float CharacterHalfHeight);// Check if the path can skipped or not
    void SmoothenPath(UWorld* WorldRef,TArray<FVector>& PathPoints,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight);//remove unnecessary points
    FVector AdjustEnd(UWorld* WorldRef,const FVector& EndPosition,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef);
    
};
