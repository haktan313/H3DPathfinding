// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathfinding/Public/StructuresEnums_H3DPathFinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructuresEnums_H3DPathFinding() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	H3DPATHFINDING_API UClass* Z_Construct_UClass_AHVolume3D_NoRegister();
	H3DPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FS_GridCellsID();
	H3DPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FS_PathRequest();
	H3DPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FS_PathResult();
	UPackage* Z_Construct_UPackage__Script_H3DPathfinding();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_GridCellsID;
class UScriptStruct* FS_GridCellsID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_GridCellsID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_GridCellsID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_GridCellsID, (UObject*)Z_Construct_UPackage__Script_H3DPathfinding(), TEXT("S_GridCellsID"));
	}
	return Z_Registration_Info_UScriptStruct_S_GridCellsID.OuterSingleton;
}
template<> H3DPATHFINDING_API UScriptStruct* StaticStruct<FS_GridCellsID>()
{
	return FS_GridCellsID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_GridCellsID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridPersonalID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GridPersonalID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsFree_MetaData[];
#endif
		static void NewProp_IsFree_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDivided_MetaData[];
#endif
		static void NewProp_IsDivided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDivided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentGridID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentGridID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ChildGridIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildGridIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildGridIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_GridCellsID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_GridCellsID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridPersonalID_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridPersonalID = { "GridPersonalID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_GridCellsID, GridPersonalID), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridPersonalID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridPersonalID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridPosition_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridPosition = { "GridPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_GridCellsID, GridPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridSize_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_GridCellsID, GridSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_GridSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsFree_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsFree_SetBit(void* Obj)
	{
		((FS_GridCellsID*)Obj)->IsFree = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsFree = { "IsFree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FS_GridCellsID), &Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsFree_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsFree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsFree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsDivided_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsDivided_SetBit(void* Obj)
	{
		((FS_GridCellsID*)Obj)->IsDivided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsDivided = { "IsDivided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FS_GridCellsID), &Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsDivided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsDivided_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_IsDivided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ParentGridID_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ParentGridID = { "ParentGridID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_GridCellsID, ParentGridID), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ParentGridID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ParentGridID_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ChildGridIDs_Inner = { "ChildGridIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ChildGridIDs_MetaData[] = {
		{ "Category", "GridCellsID" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ChildGridIDs = { "ChildGridIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_GridCellsID, ChildGridIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ChildGridIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewProp_ChildGridIDs_MetaData)) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_GridCellsID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
		nullptr,
		&NewStructOps,
		"S_GridCellsID",
		sizeof(FS_GridCellsID),
		alignof(FS_GridCellsID),
		Z_Construct_UScriptStruct_FS_GridCellsID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_GridCellsID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_GridCellsID()
	{
		if (!Z_Registration_Info_UScriptStruct_S_GridCellsID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_GridCellsID.InnerSingleton, Z_Construct_UScriptStruct_FS_GridCellsID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_GridCellsID.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_PathResult;
class UScriptStruct* FS_PathResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_PathResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_PathResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_PathResult, (UObject*)Z_Construct_UPackage__Script_H3DPathfinding(), TEXT("S_PathResult"));
	}
	return Z_Registration_Info_UScriptStruct_S_PathResult.OuterSingleton;
}
template<> H3DPATHFINDING_API UScriptStruct* StaticStruct<FS_PathResult>()
{
	return FS_PathResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_PathResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccess_MetaData[];
#endif
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PathResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_PathResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_PathResult>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_PathPoints_MetaData[] = {
		{ "Category", "PathResult" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_PathResult, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_PathPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_PathPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_bSuccess_MetaData[] = {
		{ "Category", "PathResult" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((FS_PathResult*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FS_PathResult), &Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_bSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_bSuccess_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_PathResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_PathPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_PathPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathResult_Statics::NewProp_bSuccess,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_PathResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
		nullptr,
		&NewStructOps,
		"S_PathResult",
		sizeof(FS_PathResult),
		alignof(FS_PathResult),
		Z_Construct_UScriptStruct_FS_PathResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PathResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_PathResult()
	{
		if (!Z_Registration_Info_UScriptStruct_S_PathResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_PathResult.InnerSingleton, Z_Construct_UScriptStruct_FS_PathResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_PathResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_PathRequest;
class UScriptStruct* FS_PathRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_PathRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_PathRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_PathRequest, (UObject*)Z_Construct_UPackage__Script_H3DPathfinding(), TEXT("S_PathRequest"));
	}
	return Z_Registration_Info_UScriptStruct_S_PathRequest.OuterSingleton;
}
template<> H3DPATHFINDING_API UScriptStruct* StaticStruct<FS_PathRequest>()
{
	return FS_PathRequest::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_PathRequest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterHalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CharacterHalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWalking_MetaData[];
#endif
		static void NewProp_bIsWalking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWalking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PathRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_PathRequest>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Start_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_PathRequest, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Start_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Start_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_End_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_PathRequest, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_End_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_End_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_VolumeRef_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_VolumeRef = { "VolumeRef", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_PathRequest, VolumeRef), Z_Construct_UClass_AHVolume3D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_VolumeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_VolumeRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterRadius_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "Comment", "//Delegate for when the path is found\n" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
		{ "ToolTip", "Delegate for when the path is found" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterRadius = { "CharacterRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_PathRequest, CharacterRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterHalfHeight_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterHalfHeight = { "CharacterHalfHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_PathRequest, CharacterHalfHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterHalfHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_bIsWalking_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_bIsWalking_SetBit(void* Obj)
	{
		((FS_PathRequest*)Obj)->bIsWalking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_bIsWalking = { "bIsWalking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FS_PathRequest), &Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_bIsWalking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_bIsWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_bIsWalking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "PathRequest" },
		{ "Comment", "//if the character is walking or flying\n" },
		{ "ModuleRelativePath", "Public/StructuresEnums_H3DPathFinding.h" },
		{ "ToolTip", "if the character is walking or flying" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FS_PathRequest, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_PathRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_VolumeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_CharacterHalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_bIsWalking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewProp_Owner,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_PathRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
		nullptr,
		&NewStructOps,
		"S_PathRequest",
		sizeof(FS_PathRequest),
		alignof(FS_PathRequest),
		Z_Construct_UScriptStruct_FS_PathRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS_PathRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PathRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS_PathRequest()
	{
		if (!Z_Registration_Info_UScriptStruct_S_PathRequest.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_PathRequest.InnerSingleton, Z_Construct_UScriptStruct_FS_PathRequest_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_PathRequest.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_StructuresEnums_H3DPathFinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_StructuresEnums_H3DPathFinding_h_Statics::ScriptStructInfo[] = {
		{ FS_GridCellsID::StaticStruct, Z_Construct_UScriptStruct_FS_GridCellsID_Statics::NewStructOps, TEXT("S_GridCellsID"), &Z_Registration_Info_UScriptStruct_S_GridCellsID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_GridCellsID), 1578695585U) },
		{ FS_PathResult::StaticStruct, Z_Construct_UScriptStruct_FS_PathResult_Statics::NewStructOps, TEXT("S_PathResult"), &Z_Registration_Info_UScriptStruct_S_PathResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_PathResult), 596520602U) },
		{ FS_PathRequest::StaticStruct, Z_Construct_UScriptStruct_FS_PathRequest_Statics::NewStructOps, TEXT("S_PathRequest"), &Z_Registration_Info_UScriptStruct_S_PathRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_PathRequest), 4165119142U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_StructuresEnums_H3DPathFinding_h_4148821631(TEXT("/Script/H3DPathfinding"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_StructuresEnums_H3DPathFinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_StructuresEnums_H3DPathFinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
