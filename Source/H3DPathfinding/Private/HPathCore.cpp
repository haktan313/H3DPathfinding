// HPathCore.cpp

#include "HPathCore.h"
#include "HVolume3D.h"
#include <queue>
#include "StructuresEnums_H3DPathFinding.h"
#include "Kismet/KismetMathLibrary.h"
#include "Async/Async.h"

AHPathCore* AHPathCore::Instance = nullptr; // Singleton instance of the class.

AHPathCore::AHPathCore()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AHPathCore::BeginPlay()
{
    Super::BeginPlay();
}

//When the game ends, this function is called.
void AHPathCore::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    if (Instance && Instance == this)//If the instance is valid and equal to this.
    {
        Output.Empty();//Empty the output map.
        Instance = nullptr;;//Set the instance to nullptr.
    }
}

//Get the singleton instance of the class.
AHPathCore* AHPathCore::GetInstance(UWorld* World)
{
    if (!Instance)//If the instance is not valid.
    {
        Instance = World->SpawnActor<AHPathCore>();//Spawn the Instance.
    }
    return Instance;
}

void AHPathCore::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    
    if (Output.Num() > 0)//If the output map is not empty.
    {
        for (auto& PathResultValue : Output)//For each path result in the output map.
        {
            if (PathResultValue.Value.IsBound())//If the delegate is bound.
            {
                PathResultValue.Value.Execute(*PathResultValue.Key);//Execute the delegate.
            }
        }
        Output.Empty();//Empty the output map.
    }
}

void AHPathCore::AssignRequest(FS_PathRequest& Request)
{
    if (!Request.VolumeRef)//If the volume is not valid, return.
    {
        return;
    }

    // Get the references from the request for the async task
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
        FS_PathResult* Result = new FS_PathResult();//Create a new path result.
        
        FindPath(WorldRef, VolumeRef, Result, Start, End, Delegate, bIsWalking, CharacterRadius, CharacterHalfHeight, OwnerRef, false);
        
        AsyncTask(ENamedThreads::GameThread, [this, Result, Delegate]()
        {
            SubmitResult(Result, Delegate);
        });
    });
}

//Submit the pathfinding result.
void AHPathCore::SubmitResult(FS_PathResult* Result, PathResultDelegate Delegate)
{
    if (!Result || !Delegate.IsBound())//If the result or the delegate is not valid, return.
    {
        return;
    }
    Output.Add(Result, Delegate);//Add the result and the delegate to the output map.
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
    
    TMap<int32, FAStarNode*> OpenMap; // Open list of nodes whcih are not yet processed
    TSet<int32> ClosedSet;//Already processed nodes are stored here

    FAStarNode* StartNode = new FAStarNode();
    StartNode->GridID = StartGridID;
    StartNode->WorldLocation = Start;
    StartNode->GCost = 0.0f;
    StartNode->HCost = CalculateCost(Start, End);
    StartNode->Parent = nullptr;
    
    OpenMap.Add(StartGridID, StartNode);
    
    std::priority_queue<FAStarNode*, std::vector<FAStarNode*>, FNodeComparator> OpenQueue;//priority queue is used to list the nodes with the lowest FCost to the highest FCost value with the help of the FNodeComparator struct
    OpenQueue.push(StartNode);//Push the start node to the queue

    TArray<FAStarNode*> AllNodes; // For memory cleanup
    AllNodes.Add(StartNode);

    while (!OpenQueue.empty())//While the open queue is not empty
    {
        FAStarNode* CurrentNode = OpenQueue.top();//Get the top node from the queue
        OpenQueue.pop();//Remove the top node from the queue

        if (!CurrentNode)
        {
            break;
        }

        OpenMap.Remove(CurrentNode->GridID);//Remove the current node from the open map
        ClosedSet.Add(CurrentNode->GridID);//Add the current node to the closed set

        // Check if reached the end node
        if (CurrentNode->GridID == EndGridID)
        {
            TArray<FVector> Path;
            for (FAStarNode* Node = CurrentNode; Node != nullptr; Node = Node->Parent)
            {
                Path.Insert(Node->WorldLocation, 0);
            }

            SmoothenPath(WorldRef, Path, VolumeRef, bIsWalking, CharacterRadius, CharacterHalfHeight);//Smoothen the path

            Result->PathPoints = Path;
            Result->bSuccess = true;

            // Memory cleanup
            for (FAStarNode* Node : AllNodes) delete Node;

            return;
        }

        // Get neighbors and process them
        TArray<FAStarNode> Neighbors;
        GetNeighborNodes(WorldRef, *CurrentNode, Neighbors, VolumeRef, bIsWalking, CharacterRadius, CharacterHalfHeight, OwnerRef, OpenMap, ClosedSet);

        for (FAStarNode& Neighbor : Neighbors)
        {
            if (ClosedSet.Contains(Neighbor.GridID))//If the closed set contains the neighbor grid ID, continue because the neighbor is already processed.
            {
                continue;
            }

            float NewGCost = CurrentNode->GCost + FVector::Dist(CurrentNode->WorldLocation, Neighbor.WorldLocation);//Calculate the new GCost

            //Find the neighbor in the open map
            FAStarNode** OpenNeighborPtr = OpenMap.Find(Neighbor.GridID);
            if (OpenNeighborPtr)
            {
                FAStarNode* OpenNeighbor = *OpenNeighborPtr;
                if (NewGCost < OpenNeighbor->GCost)//If the new GCost is less than the open neighbor's GCost, update the open neighbor's GCost and parent node.
                {
                    OpenNeighbor->GCost = NewGCost;
                    OpenNeighbor->Parent = CurrentNode;
                    OpenQueue.push(OpenNeighbor); // Push the open neighbor to the queue
                }
            }
            else//If the open neighbor is not found in the open map
            {
                // Add new neighbor node
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
    
    if (!bPathAdjusted && IsLocationFree(WorldRef, End, CharacterRadius, CharacterHalfHeight, OwnerRef))//If path is not found and the end location is free
    {
        End = AdjustPath(WorldRef, End, VolumeRef, bIsWalking, CharacterRadius, CharacterHalfHeight, OwnerRef);//Adjust the end location
        // Memory cleanup
        for (FAStarNode* NodeToDelete : AllNodes)
        {
            delete NodeToDelete;
        }
        // Find the path again with the adjusted end location
        FindPath(WorldRef, VolumeRef, Result, Start, End, Delegate, bIsWalking, CharacterRadius, CharacterHalfHeight, OwnerRef, true);
        return;
    }

    // Path not found
    Result->bSuccess = false;

    // Memory cleanup
    for (FAStarNode* NodeToDelete : AllNodes)
    {
        delete NodeToDelete;
    }
}

//Calculate the cost between two points.
float AHPathCore::CalculateCost(const FVector& From, const FVector& To) const
{
    return FVector::Dist(From, To);
}

// Determine valid and accessible neighbor nodes for a given CurrentNode
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
    };//Array of the search directions.

    if (bIsWalking)
    {
        for (int32 i = 0; i < 4; i++)
        {
            FVector NeighborPosition = CurrentNode.WorldLocation + Directions[i] * GridSize;//Calculate the neighbor position.
            int32 NeighborGridID = VolumeRef->GetGridIDFromPosition(NeighborPosition);//Get the grid ID of the neighbor position.

            if (NeighborGridID != -1)//If the neighbor grid ID is not -1
            {
                if (ClosedSet.Contains(NeighborGridID) || OpenMap.Contains(NeighborGridID))//If the closed set contains the neighbor grid ID or the open map contains the neighbor grid ID, continue because the neighbor is already processed.
                {
                    continue;
                }
                if (IsLocationFree(WorldRef, NeighborPosition, CharacterRadius, CharacterHalfHeight, OwnerRef))//If the location is free, add the neighbor to the out neighbors array.
                {
                    FVector downPosition = NeighborPosition;//Create a down position vector for the checking.
                    int32 downGridID;//Create a down grid ID.
                    bool foundAvailableGrid = false;//If the available grid is found or not.

                    while (!foundAvailableGrid)//While the available grid is not found, do the following.
                    {
                        downPosition += FVector(0, 0, -1) * 30.0f;//Decrease the down position by the grid size.
                        downGridID = VolumeRef->GetGridIDFromPosition(downPosition);//Get the grid ID of the down position.

                        if (downGridID == -1 || !IsLocationFree(WorldRef, downPosition, CharacterRadius, CharacterHalfHeight, OwnerRef))//If the down grid ID is -1 or the location is not free, do the following.
                        {
                            FVector upPosition = downPosition + FVector(0, 0, 1) * 30.0f;//Create an up position vector for adding the up position to the out neighbors array.
                            int32 upGridID = VolumeRef->GetGridIDFromPosition(upPosition);//Get the grid ID of the up position.
                            if (upGridID != -1)
                            {
                                if (upPosition == NeighborPosition)//If the up position is equal to the neighbor position, add the up position to the out neighbors array.
                                {
                                    FAStarNode NeighborNode;
                                    NeighborNode.GridID = upGridID;
                                    NeighborNode.WorldLocation = upPosition;
                                    OutNeighbors.Add(NeighborNode);
                                }
                                else if (IsLocationFree(WorldRef, upPosition, CharacterRadius, CharacterHalfHeight, OwnerRef))//If the up position is free and not equal to the neighbor position, add the up position to the out neighbors array.
                                {
                                    FAStarNode NeighborNode;
                                    NeighborNode.GridID = upGridID;
                                    NeighborNode.WorldLocation = upPosition;
                                    OutNeighbors.Add(NeighborNode);
                                }
                            }
                            foundAvailableGrid = true;//Set the found available grid to true.
                        }
                    }
                }
                else //If the location is not frees
                {
                    GetUpSideNeighbor(WorldRef, VolumeRef, NeighborPosition, CurrentNode, OutNeighbors, OpenMap, ClosedSet, CharacterRadius, CharacterHalfHeight, OwnerRef);
                }
            }
            else // If the neighbor grid ID is -1
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

// Get the upside neighbor of the current node for walking characters
void AHPathCore::GetUpSideNeighbor(UWorld* WorldRef,AHVolume3D* VolumeRef,FVector neighborPosition,const FAStarNode& CurrentNode,TArray<FAStarNode>& OutNeighbors,TMap<int32, FAStarNode*>& OpenMap,TSet<int32>& ClosedSet,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef)
{
    float GridSize = VolumeRef->CellSize;

    FVector NeighborPositionUpDown = neighborPosition + FVector(0, 0, 1) * 45;//Calculate the neighbor position.
    int32 NeighborGridIDUpDown = VolumeRef->GetGridIDFromPosition(NeighborPositionUpDown);//Get the grid ID of the neighbor position.
    if (NeighborGridIDUpDown != -1)
    {
        if (ClosedSet.Contains(NeighborGridIDUpDown) || OpenMap.Contains(NeighborGridIDUpDown))//If the closed set contains the neighbor grid ID or the open map contains the neighbor grid ID, return.
        {
            return;
        }
        if (IsLocationFree(WorldRef, NeighborPositionUpDown, CharacterRadius, CharacterHalfHeight, OwnerRef))
        {
            FVector a = (neighborPosition - CurrentNode.WorldLocation);//Find the direction vector between the neighbor and the current node.
            a = UKismetMathLibrary::Normal(a);//Normalize the direction vector.
            FVector b = (NeighborPositionUpDown - CurrentNode.WorldLocation);//Find the direction vector between the neighbor and the current node.
            b = UKismetMathLibrary::Normal(b);//Normalize the direction vector.
            float dot = FVector::DotProduct(a, b);//Calculate the dot product of the two direction vectors.
            if (dot > 0.5f)
            {
                FVector right = OwnerRef->GetActorRightVector();//Get the right vector of the owner for checking the right and left positions.
                FVector neighborRight = neighborPosition + right * GridSize * 2;//Calculate the right neighbor position.
                FVector neighborLeft = neighborPosition - right * GridSize * 2;//Calculate the left neighbor position.

                bool bLeft = !IsLocationFree(WorldRef, neighborLeft, CharacterRadius, CharacterHalfHeight, OwnerRef);//If the location is not free, set bLeft to true.
                bool bRight = !IsLocationFree(WorldRef, neighborRight, CharacterRadius, CharacterHalfHeight, OwnerRef);//If the location is not free, set bRight to true.
                if (bLeft && bRight)//If both left and right are not free, add the default NeighborPositionUpDown to the out neighbors array.
                {
                    FAStarNode NeighborNode;
                    NeighborNode.GridID = NeighborGridIDUpDown;
                    NeighborNode.WorldLocation = NeighborPositionUpDown;
                    OutNeighbors.Add(NeighborNode);
                }
                else if (!bLeft && !bRight)//If both left and right are free, add the default NeighborPositionUpDown to the out neighbors array.
                {
                    FAStarNode NeighborNode;
                    NeighborNode.GridID = NeighborGridIDUpDown;
                    NeighborNode.WorldLocation = NeighborPositionUpDown;
                    OutNeighbors.Add(NeighborNode);
                }
                else if (bLeft)//If the left is not free, move the neighbor to the left and forward.
                {
                    neighborLeft = NeighborPositionUpDown - right * GridSize * 2;
                    FAStarNode NeighborNode;
                    NeighborNode.GridID = VolumeRef->GetGridIDFromPosition(neighborLeft);
                    NeighborNode.WorldLocation = neighborLeft;
                    OutNeighbors.Add(NeighborNode);
                }
                else if (bRight)//If the right is not free, move the neighbor to the right and forward.
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

// Check if the location is free (thread-safe)
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

// Check if the path can be skipped or not
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

// Smoothen the path by removing unnecessary points
void AHPathCore::SmoothenPath(UWorld* WorldRef,TArray<FVector>& PathPoints,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight)
{
    int32 PathSize = PathPoints.Num();
    if (PathSize < 3)//If the path size is less than 3, return.
    {
        return;
    }
    int32 CurrentIndex = 0;
    while (CurrentIndex < PathSize - 2) //While the current index is less than the path size - 2, do the following.
    {
        FVector& StartNode = PathPoints[CurrentIndex];//Get the start node.
        FVector& NextNextNode = PathPoints[CurrentIndex + 2];//Get the next next node.
        
        float heightDistance = FMath::Abs(StartNode.Z - NextNextNode.Z);//Calculate the height distance between the start node and the next next node.
        if(bIsWalking && heightDistance > VolumeRef->CellSize)//If the height distance is greater than the cell size, increase the current index and continue.
        {
            CurrentIndex++;
            continue;
        }
        
        if (CanSkip(WorldRef,StartNode, NextNextNode, CharacterRadius, CharacterHalfHeight)) //If the path can be skipped, remove the next node.
        {
            PathPoints.RemoveAt(CurrentIndex + 1);//Remove the next node.
            PathSize--;//Decrease the path size.
        }
        else
        {
            CurrentIndex++;//Increase the current index.
        }
    }
}

// Adjust the end position of the path to avoid obstacles
FVector AHPathCore::AdjustEnd(UWorld* WorldRef,const FVector& EndPosition,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef)
{
    float gridSize = VolumeRef->CellSize;
    
    TArray<FVector> SearchDirections;//Array of the search directions.
    SearchDirections.Add(FVector(1, 0, 0));
    SearchDirections.Add(FVector(-1, 0, 0));
    SearchDirections.Add(FVector(0, 1, 0));
    SearchDirections.Add(FVector(0, -1, 0));
    
    if(!bIsWalking)
    {
        SearchDirections.Add(FVector(0, 0, 1));
        SearchDirections.Add(FVector(0, 0, -1));
    }

    for(int a = 1; a < 5; a++)//For each a from 1 to 10, do the following.
    {
        for(int i = 0; i < SearchDirections.Num(); i++)//For each search direction in the search directions array, do the following.
        {
            FVector PotentialPosition = EndPosition + SearchDirections[i] * gridSize * a;//Calculate the potential position.
            if(IsLocationFree(WorldRef,PotentialPosition, CharacterRadius, CharacterHalfHeight, OwnerRef))//If the potential position is free, return the potential position.
            {
                return PotentialPosition;
            }
        }
    }
    return EndPosition;//If the potential positions are not free, return the end position.
}

// Adjust the path to avoid obstacles
FVector AHPathCore::AdjustPath(UWorld* WorldRef,const FVector& EndPosition,AHVolume3D* VolumeRef,bool bIsWalking,float CharacterRadius,float CharacterHalfHeight,AActor* OwnerRef)
{
    float gridSize = VolumeRef->CellSize;
    
    TArray<FVector> SearchDirections;//Array of the search directions.
    SearchDirections.Add(FVector(0, 0, 1));
    SearchDirections.Add(FVector(0, 0, -1));

    for(int i = 0; i < SearchDirections.Num(); i++)//For each search direction in the search directions array, do the following.
    {
        FVector PotentialPosition = EndPosition + SearchDirections[i] * gridSize;//Calculate the potential position.
        if(IsLocationFree(WorldRef,PotentialPosition, CharacterRadius, CharacterHalfHeight, OwnerRef))//If the potential position is free, return the potential position.
        {
            if(PotentialPosition != EndPosition)
            {
                return PotentialPosition;
            }
        }
    }
    return EndPosition;//If the potential positions are not free, return the end position.
}
