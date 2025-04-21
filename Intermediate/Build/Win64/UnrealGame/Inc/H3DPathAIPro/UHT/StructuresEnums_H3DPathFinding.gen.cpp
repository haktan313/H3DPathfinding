// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/StructuresEnums_H3DPathFinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructuresEnums_H3DPathFinding() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHVolume3D_NoRegister();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention();
H3DPATHAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FS_GridCellsID();
H3DPATHAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FS_PathRequest();
H3DPATHAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FS_PathResult();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin ScriptStruct FS_GridCellsID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_GridCellsID;
class UScriptStruct* FS_GridCellsID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_GridCellsID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_GridCellsID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_GridCellsID, (UObject*)Z_Construct_UPackage__Script_H3DPathAIPro(), TEXT("S_GridCellsID"));
	}
	return Z_Registration_Info_UScriptStruct_S_GridCellsID.OuterSingleton;
}
template<> H3DPATHAIPRO_API UScriptStruct* StaticStruct<FS_GridCellsID>()
{
	return FS_GridCellsID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FS_GridCellsID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPersonalID_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridPosition_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFree_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDivided_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentGridID_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildGridIDs_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridPersonalID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridPosition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSize;
	static void NewProp_IsFree_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFree;
	static void NewProp_IsDivided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDivided;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentGridID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChildGridIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildGridIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_GridCellsID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridPersonalID = { "GridPersonalID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_GridCellsID, GridPersonalID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPersonalID_MetaData), NewProp_GridPersonalID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridPosition = { "GridPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_GridCellsID, GridPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridPosition_MetaData), NewProp_GridPosition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_GridCellsID, GridSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
void Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsFree_SetBit(void* Obj)
{
	((FS_GridCellsID*)Obj)->IsFree = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsFree = { "IsFree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FS_GridCellsID), &Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsFree_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFree_MetaData), NewProp_IsFree_MetaData) };
void Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsDivided_SetBit(void* Obj)
{
	((FS_GridCellsID*)Obj)->IsDivided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsDivided = { "IsDivided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FS_GridCellsID), &Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsDivided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDivided_MetaData), NewProp_IsDivided_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ParentGridID = { "ParentGridID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_GridCellsID, ParentGridID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentGridID_MetaData), NewProp_ParentGridID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ChildGridIDs_Inner = { "ChildGridIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ChildGridIDs = { "ChildGridIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_GridCellsID, ChildGridIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildGridIDs_MetaData), NewProp_ChildGridIDs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_GridCellsID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridPersonalID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsFree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsDivided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ParentGridID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ChildGridIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ChildGridIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
	nullptr,
	&NewStructOps,
	"S_GridCellsID",
	Z_Construct_UScriptStruct_FS_GridCellsID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::PropPointers),
	sizeof(FS_GridCellsID),
	alignof(FS_GridCellsID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FS_GridCellsID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FS_GridCellsID()
{
	if (!Z_Registration_Info_UScriptStruct_S_GridCellsID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_GridCellsID.InnerSingleton, Z_Construct_UScriptStruct_FS_GridCellsID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_S_GridCellsID.InnerSingleton;
}
// End ScriptStruct FS_GridCellsID

// Begin ScriptStruct FS_PathResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_PathResult;
class UScriptStruct* FS_PathResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_PathResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_PathResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_PathResult, (UObject*)Z_Construct_UPackage__Script_H3DPathAIPro(), TEXT("S_PathResult"));
	}
	return Z_Registration_Info_UScriptStruct_S_PathResult.OuterSingleton;
}
template<> H3DPATHAIPRO_API UScriptStruct* StaticStruct<FS_PathResult>()
{
	return FS_PathResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FS_PathResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[] = {
		{ "Category", "PathResult" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[] = {
		{ "Category", "PathResult" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_PathResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_PathResult, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathPoints_MetaData), NewProp_PathPoints_MetaData) };
void Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((FS_PathResult*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FS_PathResult), &Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSuccess_MetaData), NewProp_bSuccess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_PathResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_PathPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_PathPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_PathResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
	nullptr,
	&NewStructOps,
	"S_PathResult",
	Z_Construct_UScriptStruct_FS_PathResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathResult_Statics::PropPointers),
	sizeof(FS_PathResult),
	alignof(FS_PathResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FS_PathResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FS_PathResult()
{
	if (!Z_Registration_Info_UScriptStruct_S_PathResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_PathResult.InnerSingleton, Z_Construct_UScriptStruct_FS_PathResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_S_PathResult.InnerSingleton;
}
// End ScriptStruct FS_PathResult

// Begin ScriptStruct FS_PathRequest
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_PathRequest;
class UScriptStruct* FS_PathRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_PathRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_PathRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_PathRequest, (UObject*)Z_Construct_UPackage__Script_H3DPathAIPro(), TEXT("S_PathRequest"));
	}
	return Z_Registration_Info_UScriptStruct_S_PathRequest.OuterSingleton;
}
template<> H3DPATHAIPRO_API UScriptStruct* StaticStruct<FS_PathRequest>()
{
	return FS_PathRequest::StaticStruct();
}
struct Z_Construct_UScriptStruct_FS_PathRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRef_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRadius_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "Comment", "//Delegate for when the path is found\n" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
		{ "ToolTip", "Delegate for when the path is found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterHalfHeight_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWalking_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "Comment", "//if the character is walking or flying\n" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
		{ "ToolTip", "if the character is walking or flying" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeRef;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterHalfHeight;
	static void NewProp_bIsWalking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWalking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_PathRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_PathRequest, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_PathRequest, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_VolumeRef = { "VolumeRef", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_PathRequest, VolumeRef), Z_Construct_UClass_AHVolume3D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeRef_MetaData), NewProp_VolumeRef_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterRadius = { "CharacterRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_PathRequest, CharacterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterRadius_MetaData), NewProp_CharacterRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterHalfHeight = { "CharacterHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_PathRequest, CharacterHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterHalfHeight_MetaData), NewProp_CharacterHalfHeight_MetaData) };
void Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_bIsWalking_SetBit(void* Obj)
{
	((FS_PathRequest*)Obj)->bIsWalking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_bIsWalking = { "bIsWalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FS_PathRequest), &Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_bIsWalking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWalking_MetaData), NewProp_bIsWalking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_PathRequest, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_PathRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_VolumeRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_bIsWalking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
	nullptr,
	&NewStructOps,
	"S_PathRequest",
	Z_Construct_UScriptStruct_FS_PathRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathRequest_Statics::PropPointers),
	sizeof(FS_PathRequest),
	alignof(FS_PathRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FS_PathRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FS_PathRequest()
{
	if (!Z_Registration_Info_UScriptStruct_S_PathRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_PathRequest.InnerSingleton, Z_Construct_UScriptStruct_FS_PathRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_S_PathRequest.InnerSingleton;
}
// End ScriptStruct FS_PathRequest

// Begin Enum E_RandomPointsDimention
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_RandomPointsDimention;
static UEnum* E_RandomPointsDimention_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_RandomPointsDimention.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_RandomPointsDimention.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention, (UObject*)Z_Construct_UPackage__Script_H3DPathAIPro(), TEXT("E_RandomPointsDimention"));
	}
	return Z_Registration_Info_UEnum_E_RandomPointsDimention.OuterSingleton;
}
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_RandomPointsDimention>()
{
	return E_RandomPointsDimention_StaticEnum();
}
struct Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
		{ "TreeD.DisplayName", "3D" },
		{ "TreeD.Name", "TreeD" },
		{ "TwoD.DisplayName", "2D" },
		{ "TwoD.Name", "TwoD" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TwoD", (int64)TwoD },
		{ "TreeD", (int64)TreeD },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_H3DPathAIPro,
	nullptr,
	"E_RandomPointsDimention",
	"E_RandomPointsDimention",
	Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention_Statics::Enum_MetaDataParams), Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention()
{
	if (!Z_Registration_Info_UEnum_E_RandomPointsDimention.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_RandomPointsDimention.InnerSingleton, Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_RandomPointsDimention.InnerSingleton;
}
// End Enum E_RandomPointsDimention

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_StructuresEnums_H3DPathFinding_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E_RandomPointsDimention_StaticEnum, TEXT("E_RandomPointsDimention"), &Z_Registration_Info_UEnum_E_RandomPointsDimention, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1676900769U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FS_GridCellsID::StaticStruct, Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewStructOps, TEXT("S_GridCellsID"), &Z_Registration_Info_UScriptStruct_S_GridCellsID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_GridCellsID), 3936398103U) },
		{ FS_PathResult::StaticStruct, Z_Construct_UScriptStruct_FS_PathResult_Statics::NewStructOps, TEXT("S_PathResult"), &Z_Registration_Info_UScriptStruct_S_PathResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_PathResult), 1644255724U) },
		{ FS_PathRequest::StaticStruct, Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewStructOps, TEXT("S_PathRequest"), &Z_Registration_Info_UScriptStruct_S_PathRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_PathRequest), 3039767065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_StructuresEnums_H3DPathFinding_h_2375001543(TEXT("/Script/H3DPathAIPro"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_StructuresEnums_H3DPathFinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_StructuresEnums_H3DPathFinding_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_StructuresEnums_H3DPathFinding_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_StructuresEnums_H3DPathFinding_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
