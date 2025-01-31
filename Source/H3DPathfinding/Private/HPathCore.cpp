

#include "HPathCore.h"
#include "HVolume3D.h"
#include <queue>
#include "StructuresEnums_H3DPathFinding.h"
#include "Kismet/KismetMathLibrary.h"
#include "Async/Async.h"

AHPathCore* AHPathCore::Instance = nullptr; //singleton instance

AHPathCore::AHPathCore()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AHPathCore::BeginPlay()
{
    Super::BeginPlay();
}

void AHPathCore::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    if (Instance && Instance == this)
    {
        Output.Empty();
        Instance = nullptr;;
    }
}

AHPathCore* AHPathCore::GetInstance(UWorld* World)
{
    if (!Instance)
    {
        Instance = World->SpawnActor<AHPathCore>();
    }
    return Instance;
}

void AHPathCore::Tick(float DeltaTime)
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

void AHPathCore::AssignRequest(FS_PathRequest& Request)
{
    if (!Request.VolumeRef)
    {
        return;
    }
    
    AActor* OwnerRef = Request.Owner;
    UWorld* WorldRef = GetWorld();
    AHVolume3D* VolumeRef = Request.VolumeRef;
    PathResultDelegate Delegate = Request.OnPathFound;
    
    FVector Start = Request.Start;
    FVector End = Request.End;
    
    bool bIsWalking = Request.bIsWalking;
    
    float CharacterRadius = Request.CharacterRadius;
    float CharacterHalfHeight = Request.CharacterHalfHeight;

    Async(EAsyncExecution::ThreadPool, [this, WorldRef, VolumeRef, Start, End, Delegate, bIsWalking, CharacterRadius, CharacterHalfHeight, OwnerRef]()
    {
        FS_PathResult* Result = new FS_PathResult();
        
        FindPath(WorldRef, VolumeRef, Result, Start, End, Delegate, bIsWalking, CharacterRadius, CharacterHalfHeight, OwnerRef, false);
        
        AsyncTask(ENamedThreads::GameThread, [this, Result, Delegate]()
        {
            SubmitResult(Result, Delegate);
        });
    });
}

void AHPathCore::SubmitResult(FS_PathResult* Result, PathResultDelegate Delegate)
{
    if (!Result || !Delegate.IsBound())
    {
        return;
    }
    Output.Add(Result, Delegate);
}

void AHPathCore::FindPath(UWorld* WorldRef,AHVolume3D* VolumeRef,FS_PathResult* Result,FVector Start,FVector End,PathResultDelegate Delegate,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef, bool bPathAdjusted)
{
    if (!VolumeRef || !Result || !WorldRef)
    {
        return;
    }

    // Adjust the end position if needed
    if (!IsLocationFree(WorldRef, End, CharacterRadius, CharacterHalfHeight, OwnerRef))
    {
        End = AdjustEnd(WorldRef, End, VolumeRef, bIsWalking, CharacterRadius, CharacterHalfHeight, OwnerRef);
    }

    int32 StartGridID = VolumeRef->GetGridIDFromPosition(Start);
    int32 EndGridID = VolumeRef->GetGridIDFromPosition(End);
    
    TMap<int32, FAStarNode*> OpenMap;
    TSet<int32> ClosedSet;

    FAStarNode* StartNode = new FAStarNode();
    StartNode->GridID = StartGridID;
    StartNode->WorldLocation = Start;
    StartNode->GCost = 0.0f;
    StartNode->HCost = CalculateCost(Start, End);
    StartNode->Parent = nullptr;
    
    OpenMap.Add(StartGridID, StartNode);
    
    std::priority_queue<FAStarNode*, std::vector<FAStarNode*>, FNodeComparator> OpenQueue;//list the nodes with the lowest FCost to the highest FCost value
    OpenQueue.push(StartNode);

    TArray<FAStarNode*> AllNodes;
    AllNodes.Add(StartNode);

    while (!OpenQueue.empty())
    {
        FAStarNode* CurrentNode = OpenQueue.top();
        OpenQueue.pop();

        if (!CurrentNode)
        {
            break;
        }

        OpenMap.Remove(CurrentNode->GridID);
        ClosedSet.Add(CurrentNode->GridID);
        
        if (CurrentNode->GridID == EndGridID)
        {
            TArray<FVector> Path;
            for (FAStarNode* Node = CurrentNode; Node != nullptr; Node = Node->Parent)
            {
                Path.Insert(Node->WorldLocation, 0);
            }

            SmoothenPath(WorldRef, Path, VolumeRef, bIsWalking, CharacterRadius, CharacterHalfHeight);

            Result->PathPoints = Path;
            Result->bSuccess = true;
            
            for (FAStarNode* Node : AllNodes) delete Node;

            return;
        }
        
        TArray<FAStarNode> Neighbors;
        GetNeighborNodes(WorldRef, *CurrentNode, Neighbors, VolumeRef, bIsWalking, CharacterRadius, CharacterHalfHeight, OwnerRef, OpenMap, ClosedSet);

        for (FAStarNode& Neighbor : Neighbors)
        {
            if (ClosedSet.Contains(Neighbor.GridID))
            {
                continue;
            }

            float NewGCost = CurrentNode->GCost + FVector::Dist(CurrentNode->WorldLocation, Neighbor.WorldLocation);
            
            FAStarNode** OpenNeighborPtr = OpenMap.Find(Neighbor.GridID);
            if (OpenNeighborPtr)
            {
                FAStarNode* OpenNeighbor = *OpenNeighborPtr;
                if (NewGCost < OpenNeighbor->GCost)
                {
                    OpenNeighbor->GCost = NewGCost;
                    OpenNeighbor->Parent = CurrentNode;
                    OpenQueue.push(OpenNeighbor);
                }
            }
            else
            {
                FAStarNode* NewNeighbor = new FAStarNode();
                NewNeighbor->GridID = Neighbor.GridID;
                NewNeighbor->WorldLocation = Neighbor.WorldLocation;
                NewNeighbor->GCost = NewGCost;
                NewNeighbor->HCost = CalculateCost(Neighbor.WorldLocation, End);
                NewNeighbor->Parent = CurrentNode;

                OpenMap.Add(NewNeighbor->GridID, NewNeighbor);
                AllNodes.Add(NewNeighbor);
                OpenQueue.push(NewNeighbor);
            }
        }
    }
    
    if (!bPathAdjusted && IsLocationFree(WorldRef, End, CharacterRadius, CharacterHalfHeight, OwnerRef))
    {
        End = AdjustPath(WorldRef, End, VolumeRef, bIsWalking, CharacterRadius, CharacterHalfHeight, OwnerRef);

        for (FAStarNode* NodeToDelete : AllNodes)
        {
            delete NodeToDelete;
        }
        FindPath(WorldRef, VolumeRef, Result, Start, End, Delegate, bIsWalking, CharacterRadius, CharacterHalfHeight, OwnerRef, true);
        return;
    }
    
    Result->bSuccess = false;
    
    for (FAStarNode* NodeToDelete : AllNodes)
    {
        delete NodeToDelete;
    }
}

float AHPathCore::CalculateCost(const FVector& From, const FVector& To) const
{
    return FVector::Dist(From, To);
}

void AHPathCore::GetNeighborNodes(UWorld* WorldRef,const FAStarNode& CurrentNode,TArray<FAStarNode>& OutNeighbors,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef,TMap<int32, FAStarNode*>& OpenMap,TSet<int32>& ClosedSet)
{
    float GridSize = VolumeRef->CellSize;

    const FVector Directions[] = {
        FVector(1, 0, 0),
        FVector(-1, 0, 0),
        FVector(0, 1, 0),
        FVector(0, -1, 0),
        FVector(0, 0, 1),
        FVector(0, 0, -1),
    };

    if (bIsWalking)
    {
        for (int32 i = 0; i < 4; i++)
        {
            FVector NeighborPosition = CurrentNode.WorldLocation + Directions[i] * GridSize;
            int32 NeighborGridID = VolumeRef->GetGridIDFromPosition(NeighborPosition);

            if (NeighborGridID != -1)
            {
                if (ClosedSet.Contains(NeighborGridID) || OpenMap.Contains(NeighborGridID))
                {
                    continue;
                }
                if (IsLocationFree(WorldRef, NeighborPosition, CharacterRadius, CharacterHalfHeight, OwnerRef))
                {
                    FVector downPosition = NeighborPosition;
                    int32 downGridID;
                    bool foundAvailableGrid = false;
                    
                    while (!foundAvailableGrid)
                    {
                        downPosition += FVector(0, 0, -1) * 30.0f;//go down
                        downGridID = VolumeRef->GetGridIDFromPosition(downPosition);

                        if (downGridID == -1 || !IsLocationFree(WorldRef, downPosition, CharacterRadius, CharacterHalfHeight, OwnerRef))//try to find unavailable grid because we are trying to find ground
                        {
                            FVector upPosition = downPosition + FVector(0, 0, 1) * 30.0f;//go up mean normal grid
                            int32 upGridID = VolumeRef->GetGridIDFromPosition(upPosition);
                            if (upGridID != -1)
                            {
                                if (upPosition == NeighborPosition)
                                {
                                    FAStarNode NeighborNode;
                                    NeighborNode.GridID = upGridID;
                                    NeighborNode.WorldLocation = upPosition;
                                    OutNeighbors.Add(NeighborNode);
                                }
                                else if (IsLocationFree(WorldRef, upPosition, CharacterRadius, CharacterHalfHeight, OwnerRef))
                                {
                                    FAStarNode NeighborNode;
                                    NeighborNode.GridID = upGridID;
                                    NeighborNode.WorldLocation = upPosition;
                                    OutNeighbors.Add(NeighborNode);
                                }
                            }
                            foundAvailableGrid = true;
                        }
                    }
                }
                else //if the location is not frees
                {
                    GetUpSideNeighbor(WorldRef, VolumeRef, NeighborPosition, CurrentNode, OutNeighbors, OpenMap, ClosedSet, CharacterRadius, CharacterHalfHeight, OwnerRef);
                }
            }
            else //if the neighbor grid ID is -1
            {
                GetUpSideNeighbor(WorldRef, VolumeRef, NeighborPosition, CurrentNode, OutNeighbors, OpenMap, ClosedSet, CharacterRadius, CharacterHalfHeight, OwnerRef);
            }
        }
    }
    else
    {
        for (int32 i = 0; i < 6; i++)
        {
            FVector NeighborPosition = CurrentNode.WorldLocation + Directions[i] * GridSize;
            int32 NeighborGridID = VolumeRef->GetGridIDFromPosition(NeighborPosition);
            if (NeighborGridID != -1)
            {
                if (ClosedSet.Contains(NeighborGridID) || OpenMap.Contains(NeighborGridID))
                {
                    continue;
                }
                if (IsLocationFree(WorldRef, NeighborPosition, CharacterRadius, CharacterHalfHeight, OwnerRef))
                {
                    FAStarNode NeighborNode;
                    NeighborNode.GridID = NeighborGridID;
                    NeighborNode.WorldLocation = NeighborPosition;
                    OutNeighbors.Add(NeighborNode);
                }
            }
        }
    }
}

//get the upside neighbor of the current node for walking characters
void AHPathCore::GetUpSideNeighbor(UWorld* WorldRef,AHVolume3D* VolumeRef,FVector neighborPosition,const FAStarNode& CurrentNode,TArray<FAStarNode>& OutNeighbors,TMap<int32, FAStarNode*>& OpenMap,TSet<int32>& ClosedSet,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef)
{
    float GridSize = VolumeRef->CellSize;

    FVector NeighborPositionUpDown = neighborPosition + FVector(0, 0, 1) * 45;
    int32 NeighborGridIDUpDown = VolumeRef->GetGridIDFromPosition(NeighborPositionUpDown);
    if (NeighborGridIDUpDown != -1)
    {
        if (ClosedSet.Contains(NeighborGridIDUpDown) || OpenMap.Contains(NeighborGridIDUpDown))//if the closed set contains the neighbor grid ID or the open map contains the neighbor grid ID, return
        {
            return;
        }
        if (IsLocationFree(WorldRef, NeighborPositionUpDown, CharacterRadius, CharacterHalfHeight, OwnerRef))
        {
            FVector a = (neighborPosition - CurrentNode.WorldLocation);
            a = UKismetMathLibrary::Normal(a);
            FVector b = (NeighborPositionUpDown - CurrentNode.WorldLocation);
            b = UKismetMathLibrary::Normal(b);
            float dot = FVector::DotProduct(a, b);
            if (dot > 0.5f)
            {
                FVector right = OwnerRef->GetActorRightVector();
                FVector neighborRight = neighborPosition + right * GridSize * 2;
                FVector neighborLeft = neighborPosition - right * GridSize * 2;

                bool bLeft = !IsLocationFree(WorldRef, neighborLeft, CharacterRadius, CharacterHalfHeight, OwnerRef);
                bool bRight = !IsLocationFree(WorldRef, neighborRight, CharacterRadius, CharacterHalfHeight, OwnerRef);
                if (bLeft && bRight)
                {
                    FAStarNode NeighborNode;
                    NeighborNode.GridID = NeighborGridIDUpDown;
                    NeighborNode.WorldLocation = NeighborPositionUpDown;
                    OutNeighbors.Add(NeighborNode);
                }
                else if (!bLeft && !bRight)
                {
                    FAStarNode NeighborNode;
                    NeighborNode.GridID = NeighborGridIDUpDown;
                    NeighborNode.WorldLocation = NeighborPositionUpDown;
                    OutNeighbors.Add(NeighborNode);
                }
                else if (bLeft)
                {
                    neighborLeft = NeighborPositionUpDown - right * GridSize * 2;
                    FAStarNode NeighborNode;
                    NeighborNode.GridID = VolumeRef->GetGridIDFromPosition(neighborLeft);
                    NeighborNode.WorldLocation = neighborLeft;
                    OutNeighbors.Add(NeighborNode);
                }
                else if (bRight)
                {
                    neighborRight = NeighborPositionUpDown + right * GridSize * 2;
                    FAStarNode NeighborNode;
                    NeighborNode.GridID = VolumeRef->GetGridIDFromPosition(neighborRight);
                    NeighborNode.WorldLocation = neighborRight;
                    OutNeighbors.Add(NeighborNode);
                }
            }
        }
    }
}

bool AHPathCore::IsLocationFree(UWorld* WorldRef,const FVector& Location,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef)
{
    if (!WorldRef)
    {
        return false;
    }

    FCollisionShape CollisionShape = FCollisionShape::MakeBox(FVector(CharacterRadius, CharacterRadius, CharacterHalfHeight));
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(OwnerRef);
    QueryParams.bTraceComplex = false;

    FHitResult HitResult;
    bool bHit = WorldRef->SweepSingleByChannel(
        HitResult,
        Location,
        Location,
        FQuat::Identity,
        ECC_Visibility,
        CollisionShape,
        QueryParams
    );

    return !bHit;
}

// Check if the path can skipped or not
bool AHPathCore::CanSkip(UWorld* WorldRef,FVector Start,FVector End,float CharacterRadius,float CharacterHalfHeight)
{
    if (!WorldRef)
    {
        return false;
    }

    FCollisionShape CollisionShape = FCollisionShape::MakeCapsule(CharacterRadius, CharacterHalfHeight);
    FCollisionQueryParams QueryParams;
    QueryParams.bTraceComplex = false;

    FHitResult HitResult;
    bool bHit = WorldRef->SweepSingleByChannel(
        HitResult,
        Start,
        End,
        FQuat::Identity,
        ECC_Visibility,
        CollisionShape,
        QueryParams
    );

    return !bHit;
}

//remove unnecessary points
void AHPathCore::SmoothenPath(UWorld* WorldRef,TArray<FVector>& PathPoints,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight)
{
    int32 PathSize = PathPoints.Num();
    if (PathSize < 3)//If the path size is less than 3, return
    {
        return;
    }
    int32 CurrentIndex = 0;
    while (CurrentIndex < PathSize - 2)
    {
        FVector& StartNode = PathPoints[CurrentIndex];
        FVector& NextNextNode = PathPoints[CurrentIndex + 2];
        
        float heightDistance = FMath::Abs(StartNode.Z - NextNextNode.Z);
        if(bIsWalking && heightDistance > VolumeRef->CellSize)
        {
            CurrentIndex++;
            continue;
        }
        
        if (CanSkip(WorldRef,StartNode, NextNextNode, CharacterRadius, CharacterHalfHeight)) //If the path can be skipped, remove the next node
        {
            PathPoints.RemoveAt(CurrentIndex + 1);
            PathSize--;
        }
        else
        {
            CurrentIndex++;
        }
    }
}

FVector AHPathCore::AdjustEnd(UWorld* WorldRef,const FVector& EndPosition,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef)
{
    float gridSize = VolumeRef->CellSize;
    
    TArray<FVector> SearchDirections;
    SearchDirections.Add(FVector(1, 0, 0));
    SearchDirections.Add(FVector(-1, 0, 0));
    SearchDirections.Add(FVector(0, 1, 0));
    SearchDirections.Add(FVector(0, -1, 0));
    
    if(!bIsWalking)
    {
        SearchDirections.Add(FVector(0, 0, 1));
        SearchDirections.Add(FVector(0, 0, -1));
    }

    for(int a = 1; a < 5; a++)
    {
        for(int i = 0; i < SearchDirections.Num(); i++)
        {
            FVector PotentialPosition = EndPosition + SearchDirections[i] * gridSize * a;
            if(IsLocationFree(WorldRef,PotentialPosition, CharacterRadius, CharacterHalfHeight, OwnerRef))
            {
                return PotentialPosition;
            }
        }
    }
    return EndPosition;
}

FVector AHPathCore::AdjustPath(UWorld* WorldRef,const FVector& EndPosition,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef)
{
    float gridSize = VolumeRef->CellSize;
    
    TArray<FVector> SearchDirections;//Array of the search directions
    SearchDirections.Add(FVector(0, 0, 1));
    SearchDirections.Add(FVector(0, 0, -1));

    for(int i = 0; i < SearchDirections.Num(); i++)
    {
        FVector PotentialPosition = EndPosition + SearchDirections[i] * gridSize;
        if(IsLocationFree(WorldRef,PotentialPosition, CharacterRadius, CharacterHalfHeight, OwnerRef))
        {
            if(PotentialPosition != EndPosition)
            {
                return PotentialPosition;
            }
        }
    }
    return EndPosition;
}
