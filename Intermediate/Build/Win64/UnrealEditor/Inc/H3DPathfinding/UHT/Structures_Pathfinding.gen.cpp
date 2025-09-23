// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Structures_Pathfinding.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStructures_Pathfinding() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
H3DPATHFINDING_API UClass* Z_Construct_UClass_AH3DVolume_NoRegister();
H3DPATHFINDING_API UEnum* Z_Construct_UEnum_H3DPathfinding_EFailureType();
H3DPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FAStarNode();
H3DPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FPathfindingGrid();
H3DPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FPathRequest();
H3DPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FPathResult();
UPackage* Z_Construct_UPackage__Script_H3DPathfinding();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EFailureType **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFailureType;
static UEnum* EFailureType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFailureType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFailureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_H3DPathfinding_EFailureType, (UObject*)Z_Construct_UPackage__Script_H3DPathfinding(), TEXT("EFailureType"));
	}
	return Z_Registration_Info_UEnum_EFailureType.OuterSingleton;
}
template<> H3DPATHFINDING_API UEnum* StaticEnum<EFailureType>()
{
	return EFailureType_StaticEnum();
}
struct Z_Construct_UEnum_H3DPathfinding_EFailureType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EndLocationNotAvailable.DisplayName", "End Location Not Available" },
		{ "EndLocationNotAvailable.Name", "EFailureType::EndLocationNotAvailable" },
		{ "EndLocationNotInVolume.DisplayName", "End Location Not In Volume" },
		{ "EndLocationNotInVolume.Name", "EFailureType::EndLocationNotInVolume" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EFailureType::None" },
		{ "PathNotFound.DisplayName", "Path Not Found" },
		{ "PathNotFound.Name", "EFailureType::PathNotFound" },
		{ "PawnIsNull.DisplayName", "Pawn Is Null" },
		{ "PawnIsNull.Name", "EFailureType::PawnIsNull" },
		{ "ReturnNull.DisplayName", "Return Null" },
		{ "ReturnNull.Name", "EFailureType::ReturnNull" },
		{ "StartEqualsEnd.DisplayName", "Start Equals End" },
		{ "StartEqualsEnd.Name", "EFailureType::StartEqualsEnd" },
		{ "StartGridIsNotFound.DisplayName", "Start Grid Is Not Found" },
		{ "StartGridIsNotFound.Name", "EFailureType::StartGridIsNotFound" },
		{ "StartLocationNotAvailable.DisplayName", "Start Location Not Available" },
		{ "StartLocationNotAvailable.Name", "EFailureType::StartLocationNotAvailable" },
		{ "StartLocationNotInVolume.DisplayName", "Start Location Not In Volume" },
		{ "StartLocationNotInVolume.Name", "EFailureType::StartLocationNotInVolume" },
		{ "VolumeIsNull.DisplayName", "Volume Is Null" },
		{ "VolumeIsNull.Name", "EFailureType::VolumeIsNull" },
		{ "WorldContextIsNull.DisplayName", "World Context Is Null" },
		{ "WorldContextIsNull.Name", "EFailureType::WorldContextIsNull" },
		{ "WorldIsNull.DisplayName", "World Is Null" },
		{ "WorldIsNull.Name", "EFailureType::WorldIsNull" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFailureType::None", (int64)EFailureType::None },
		{ "EFailureType::WorldContextIsNull", (int64)EFailureType::WorldContextIsNull },
		{ "EFailureType::WorldIsNull", (int64)EFailureType::WorldIsNull },
		{ "EFailureType::PawnIsNull", (int64)EFailureType::PawnIsNull },
		{ "EFailureType::VolumeIsNull", (int64)EFailureType::VolumeIsNull },
		{ "EFailureType::ReturnNull", (int64)EFailureType::ReturnNull },
		{ "EFailureType::EndLocationNotAvailable", (int64)EFailureType::EndLocationNotAvailable },
		{ "EFailureType::StartLocationNotAvailable", (int64)EFailureType::StartLocationNotAvailable },
		{ "EFailureType::StartLocationNotInVolume", (int64)EFailureType::StartLocationNotInVolume },
		{ "EFailureType::EndLocationNotInVolume", (int64)EFailureType::EndLocationNotInVolume },
		{ "EFailureType::StartEqualsEnd", (int64)EFailureType::StartEqualsEnd },
		{ "EFailureType::StartGridIsNotFound", (int64)EFailureType::StartGridIsNotFound },
		{ "EFailureType::PathNotFound", (int64)EFailureType::PathNotFound },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_H3DPathfinding_EFailureType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_H3DPathfinding,
	nullptr,
	"EFailureType",
	"EFailureType",
	Z_Construct_UEnum_H3DPathfinding_EFailureType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathfinding_EFailureType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathfinding_EFailureType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_H3DPathfinding_EFailureType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_H3DPathfinding_EFailureType()
{
	if (!Z_Registration_Info_UEnum_EFailureType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFailureType.InnerSingleton, Z_Construct_UEnum_H3DPathfinding_EFailureType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFailureType.InnerSingleton;
}
// ********** End Enum EFailureType ****************************************************************

// ********** Begin ScriptStruct FPathfindingGrid **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPathfindingGrid;
class UScriptStruct* FPathfindingGrid::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPathfindingGrid.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPathfindingGrid.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathfindingGrid, (UObject*)Z_Construct_UPackage__Script_H3DPathfinding(), TEXT("PathfindingGrid"));
	}
	return Z_Registration_Info_UScriptStruct_FPathfindingGrid.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPathfindingGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridID_MetaData[] = {
		{ "Category", "PathfindingGrid" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPosition_MetaData[] = {
		{ "Category", "PathfindingGrid" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFree_MetaData[] = {
		{ "Category", "PathfindingGrid" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridPosition;
	static void NewProp_bIsFree_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathfindingGrid>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPathfindingGrid_Statics::NewProp_GridID = { "GridID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathfindingGrid, GridID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridID_MetaData), NewProp_GridID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathfindingGrid_Statics::NewProp_GridPosition = { "GridPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathfindingGrid, GridPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPosition_MetaData), NewProp_GridPosition_MetaData) };
void Z_Construct_UScriptStruct_FPathfindingGrid_Statics::NewProp_bIsFree_SetBit(void* Obj)
{
	((FPathfindingGrid*)Obj)->bIsFree = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPathfindingGrid_Statics::NewProp_bIsFree = { "bIsFree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPathfindingGrid), &Z_Construct_UScriptStruct_FPathfindingGrid_Statics::NewProp_bIsFree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFree_MetaData), NewProp_bIsFree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathfindingGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathfindingGrid_Statics::NewProp_GridID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathfindingGrid_Statics::NewProp_GridPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathfindingGrid_Statics::NewProp_bIsFree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathfindingGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathfindingGrid_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
	nullptr,
	&NewStructOps,
	"PathfindingGrid",
	Z_Construct_UScriptStruct_FPathfindingGrid_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathfindingGrid_Statics::PropPointers),
	sizeof(FPathfindingGrid),
	alignof(FPathfindingGrid),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathfindingGrid_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPathfindingGrid_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPathfindingGrid()
{
	if (!Z_Registration_Info_UScriptStruct_FPathfindingGrid.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPathfindingGrid.InnerSingleton, Z_Construct_UScriptStruct_FPathfindingGrid_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPathfindingGrid.InnerSingleton;
}
// ********** End ScriptStruct FPathfindingGrid ****************************************************

// ********** Begin ScriptStruct FAStarNode ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FAStarNode;
class UScriptStruct* FAStarNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FAStarNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FAStarNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAStarNode, (UObject*)Z_Construct_UPackage__Script_H3DPathfinding(), TEXT("AStarNode"));
	}
	return Z_Registration_Info_UScriptStruct_FAStarNode.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FAStarNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridID_MetaData[] = {
		{ "Category", "AStarNode" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "Category", "AStarNode" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GCost_MetaData[] = {
		{ "Category", "AStarNode" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HCost_MetaData[] = {
		{ "Category", "AStarNode" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GCost;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HCost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAStarNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_GridID = { "GridID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAStarNode, GridID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridID_MetaData), NewProp_GridID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAStarNode, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_GCost = { "GCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAStarNode, GCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GCost_MetaData), NewProp_GCost_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_HCost = { "HCost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAStarNode, HCost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HCost_MetaData), NewProp_HCost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAStarNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_GridID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_GCost,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAStarNode_Statics::NewProp_HCost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAStarNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAStarNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
	nullptr,
	&NewStructOps,
	"AStarNode",
	Z_Construct_UScriptStruct_FAStarNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAStarNode_Statics::PropPointers),
	sizeof(FAStarNode),
	alignof(FAStarNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAStarNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAStarNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAStarNode()
{
	if (!Z_Registration_Info_UScriptStruct_FAStarNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FAStarNode.InnerSingleton, Z_Construct_UScriptStruct_FAStarNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FAStarNode.InnerSingleton;
}
// ********** End ScriptStruct FAStarNode **********************************************************

// ********** Begin ScriptStruct FPathResult *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPathResult;
class UScriptStruct* FPathResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPathResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPathResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathResult, (UObject*)Z_Construct_UPackage__Script_H3DPathfinding(), TEXT("PathResult"));
	}
	return Z_Registration_Info_UScriptStruct_FPathResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPathResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[] = {
		{ "Category", "PathResult" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathsGrids_MetaData[] = {
		{ "Category", "PathResult" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "PathResult" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureType_MetaData[] = {
		{ "Category", "PathResult" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathsGrids_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathsGrids_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PathsGrids;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailureType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailureType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathResult, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathPoints_MetaData), NewProp_PathPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_PathsGrids_ValueProp = { "PathsGrids", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPathfindingGrid, METADATA_PARAMS(0, nullptr) }; // 3560903543
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_PathsGrids_Key_KeyProp = { "PathsGrids_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_PathsGrids = { "PathsGrids", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathResult, PathsGrids), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathsGrids_MetaData), NewProp_PathsGrids_MetaData) }; // 3560903543
void Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FPathResult*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPathResult), &Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_FailureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathResult, FailureType), Z_Construct_UEnum_H3DPathfinding_EFailureType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureType_MetaData), NewProp_FailureType_MetaData) }; // 44561120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_PathPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_PathPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_PathsGrids_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_PathsGrids_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_PathsGrids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_bSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_FailureType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathResult_Statics::NewProp_FailureType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
	nullptr,
	&NewStructOps,
	"PathResult",
	Z_Construct_UScriptStruct_FPathResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathResult_Statics::PropPointers),
	sizeof(FPathResult),
	alignof(FPathResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPathResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPathResult()
{
	if (!Z_Registration_Info_UScriptStruct_FPathResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPathResult.InnerSingleton, Z_Construct_UScriptStruct_FPathResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPathResult.InnerSingleton;
}
// ********** End ScriptStruct FPathResult *********************************************************

// ********** Begin ScriptStruct FPathRequest ******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FPathRequest;
class UScriptStruct* FPathRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FPathRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FPathRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPathRequest, (UObject*)Z_Construct_UPackage__Script_H3DPathfinding(), TEXT("PathRequest"));
	}
	return Z_Registration_Info_UScriptStruct_FPathRequest.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FPathRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/Structures_Pathfinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPathRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathRequest_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathRequest, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPathRequest_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathRequest, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPathRequest_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathRequest, Volume), Z_Construct_UClass_AH3DVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPathRequest_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathRequest, Owner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPathRequest_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPathRequest, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPathRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathRequest_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathRequest_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathRequest_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathRequest_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPathRequest_Statics::NewProp_Tolerance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPathRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
	nullptr,
	&NewStructOps,
	"PathRequest",
	Z_Construct_UScriptStruct_FPathRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathRequest_Statics::PropPointers),
	sizeof(FPathRequest),
	alignof(FPathRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPathRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPathRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPathRequest()
{
	if (!Z_Registration_Info_UScriptStruct_FPathRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FPathRequest.InnerSingleton, Z_Construct_UScriptStruct_FPathRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FPathRequest.InnerSingleton;
}
// ********** End ScriptStruct FPathRequest ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_Structures_Pathfinding_h__Script_H3DPathfinding_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFailureType_StaticEnum, TEXT("EFailureType"), &Z_Registration_Info_UEnum_EFailureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 44561120U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPathfindingGrid::StaticStruct, Z_Construct_UScriptStruct_FPathfindingGrid_Statics::NewStructOps, TEXT("PathfindingGrid"), &Z_Registration_Info_UScriptStruct_FPathfindingGrid, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPathfindingGrid), 3560903543U) },
		{ FAStarNode::StaticStruct, Z_Construct_UScriptStruct_FAStarNode_Statics::NewStructOps, TEXT("AStarNode"), &Z_Registration_Info_UScriptStruct_FAStarNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAStarNode), 998989184U) },
		{ FPathResult::StaticStruct, Z_Construct_UScriptStruct_FPathResult_Statics::NewStructOps, TEXT("PathResult"), &Z_Registration_Info_UScriptStruct_FPathResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPathResult), 1811164781U) },
		{ FPathRequest::StaticStruct, Z_Construct_UScriptStruct_FPathRequest_Statics::NewStructOps, TEXT("PathRequest"), &Z_Registration_Info_UScriptStruct_FPathRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPathRequest), 1157951047U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_Structures_Pathfinding_h__Script_H3DPathfinding_492662503(TEXT("/Script/H3DPathfinding"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_Structures_Pathfinding_h__Script_H3DPathfinding_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_Structures_Pathfinding_h__Script_H3DPathfinding_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_Structures_Pathfinding_h__Script_H3DPathfinding_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_Structures_Pathfinding_h__Script_H3DPathfinding_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
