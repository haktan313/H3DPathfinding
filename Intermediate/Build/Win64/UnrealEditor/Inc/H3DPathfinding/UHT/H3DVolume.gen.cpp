// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DVolume.h"
#include "Engine/TimerHandle.h"
#include "Structures_Pathfinding.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeH3DVolume() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
H3DPATHFINDING_API UClass* Z_Construct_UClass_AH3DPathCore_NoRegister();
H3DPATHFINDING_API UClass* Z_Construct_UClass_AH3DVolume();
H3DPATHFINDING_API UClass* Z_Construct_UClass_AH3DVolume_NoRegister();
H3DPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FPathfindingGrid();
UPackage* Z_Construct_UPackage__Script_H3DPathfinding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AH3DVolume Function DivideVolumeIntoGrids ********************************
struct Z_Construct_UFunction_AH3DVolume_DivideVolumeIntoGrids_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Grid Settings" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AH3DVolume_DivideVolumeIntoGrids_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AH3DVolume, nullptr, "DivideVolumeIntoGrids", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_DivideVolumeIntoGrids_Statics::Function_MetaDataParams), Z_Construct_UFunction_AH3DVolume_DivideVolumeIntoGrids_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AH3DVolume_DivideVolumeIntoGrids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AH3DVolume_DivideVolumeIntoGrids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AH3DVolume::execDivideVolumeIntoGrids)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DivideVolumeIntoGrids();
	P_NATIVE_END;
}
// ********** End Class AH3DVolume Function DivideVolumeIntoGrids **********************************

// ********** Begin Class AH3DVolume Function GenerateGridID ***************************************
struct Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics
{
	struct H3DVolume_eventGenerateGridID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DVolume_eventGenerateGridID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AH3DVolume, nullptr, "GenerateGridID", Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics::H3DVolume_eventGenerateGridID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics::H3DVolume_eventGenerateGridID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AH3DVolume_GenerateGridID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AH3DVolume_GenerateGridID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AH3DVolume::execGenerateGridID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GenerateGridID();
	P_NATIVE_END;
}
// ********** End Class AH3DVolume Function GenerateGridID *****************************************

// ********** Begin Class AH3DVolume Function GetCellAmountOfTargetActorsBoundsOccupied ************
struct Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics
{
	struct H3DVolume_eventGetCellAmountOfTargetActorsBoundsOccupied_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DVolume_eventGetCellAmountOfTargetActorsBoundsOccupied_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AH3DVolume, nullptr, "GetCellAmountOfTargetActorsBoundsOccupied", Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics::PropPointers), sizeof(Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics::H3DVolume_eventGetCellAmountOfTargetActorsBoundsOccupied_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics::Function_MetaDataParams), Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics::H3DVolume_eventGetCellAmountOfTargetActorsBoundsOccupied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AH3DVolume::execGetCellAmountOfTargetActorsBoundsOccupied)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetCellAmountOfTargetActorsBoundsOccupied();
	P_NATIVE_END;
}
// ********** End Class AH3DVolume Function GetCellAmountOfTargetActorsBoundsOccupied **************

// ********** Begin Class AH3DVolume Function GetCellSizeMultiplierForAdjustment *******************
struct Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics
{
	struct H3DVolume_eventGetCellSizeMultiplierForAdjustment_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DVolume_eventGetCellSizeMultiplierForAdjustment_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AH3DVolume, nullptr, "GetCellSizeMultiplierForAdjustment", Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics::PropPointers), sizeof(Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics::H3DVolume_eventGetCellSizeMultiplierForAdjustment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics::Function_MetaDataParams), Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics::H3DVolume_eventGetCellSizeMultiplierForAdjustment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AH3DVolume::execGetCellSizeMultiplierForAdjustment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetCellSizeMultiplierForAdjustment();
	P_NATIVE_END;
}
// ********** End Class AH3DVolume Function GetCellSizeMultiplierForAdjustment *********************

// ********** Begin Class AH3DVolume Function GetCollisionChannel **********************************
struct Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics
{
	struct H3DVolume_eventGetCollisionChannel_Parms
	{
		TEnumAsByte<ECollisionChannel> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DVolume_eventGetCollisionChannel_Parms, ReturnValue), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AH3DVolume, nullptr, "GetCollisionChannel", Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics::H3DVolume_eventGetCollisionChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics::H3DVolume_eventGetCollisionChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AH3DVolume_GetCollisionChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AH3DVolume_GetCollisionChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AH3DVolume::execGetCollisionChannel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ECollisionChannel>*)Z_Param__Result=P_THIS->GetCollisionChannel();
	P_NATIVE_END;
}
// ********** End Class AH3DVolume Function GetCollisionChannel ************************************

// ********** Begin Class AH3DVolume Function GetGridCellSize **************************************
struct Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics
{
	struct H3DVolume_eventGetGridCellSize_Parms
	{
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DVolume_eventGetGridCellSize_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AH3DVolume, nullptr, "GetGridCellSize", Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics::H3DVolume_eventGetGridCellSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics::H3DVolume_eventGetGridCellSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AH3DVolume_GetGridCellSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AH3DVolume_GetGridCellSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AH3DVolume::execGetGridCellSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetGridCellSize();
	P_NATIVE_END;
}
// ********** End Class AH3DVolume Function GetGridCellSize ****************************************

// ********** Begin Class AH3DVolume Function GetGridIDFromPosition ********************************
struct Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics
{
	struct H3DVolume_eventGetGridIDFromPosition_Parms
	{
		FVector Position;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DVolume_eventGetGridIDFromPosition_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DVolume_eventGetGridIDFromPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AH3DVolume, nullptr, "GetGridIDFromPosition", Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::H3DVolume_eventGetGridIDFromPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::H3DVolume_eventGetGridIDFromPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AH3DVolume::execGetGridIDFromPosition)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetGridIDFromPosition(Z_Param_Out_Position);
	P_NATIVE_END;
}
// ********** End Class AH3DVolume Function GetGridIDFromPosition **********************************

// ********** Begin Class AH3DVolume Function GetUpdateGridsRate ***********************************
struct Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics
{
	struct H3DVolume_eventGetUpdateGridsRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pathfinding" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DVolume_eventGetUpdateGridsRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AH3DVolume, nullptr, "GetUpdateGridsRate", Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics::H3DVolume_eventGetUpdateGridsRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics::H3DVolume_eventGetUpdateGridsRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AH3DVolume::execGetUpdateGridsRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetUpdateGridsRate();
	P_NATIVE_END;
}
// ********** End Class AH3DVolume Function GetUpdateGridsRate *************************************

// ********** Begin Class AH3DVolume ***************************************************************
void AH3DVolume::StaticRegisterNativesAH3DVolume()
{
	UClass* Class = AH3DVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DivideVolumeIntoGrids", &AH3DVolume::execDivideVolumeIntoGrids },
		{ "GenerateGridID", &AH3DVolume::execGenerateGridID },
		{ "GetCellAmountOfTargetActorsBoundsOccupied", &AH3DVolume::execGetCellAmountOfTargetActorsBoundsOccupied },
		{ "GetCellSizeMultiplierForAdjustment", &AH3DVolume::execGetCellSizeMultiplierForAdjustment },
		{ "GetCollisionChannel", &AH3DVolume::execGetCollisionChannel },
		{ "GetGridCellSize", &AH3DVolume::execGetGridCellSize },
		{ "GetGridIDFromPosition", &AH3DVolume::execGetGridIDFromPosition },
		{ "GetUpdateGridsRate", &AH3DVolume::execGetUpdateGridsRate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AH3DVolume;
UClass* AH3DVolume::GetPrivateStaticClass()
{
	using TClass = AH3DVolume;
	if (!Z_Registration_Info_UClass_AH3DVolume.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("H3DVolume"),
			Z_Registration_Info_UClass_AH3DVolume.InnerSingleton,
			StaticRegisterNativesAH3DVolume,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AH3DVolume.InnerSingleton;
}
UClass* Z_Construct_UClass_AH3DVolume_NoRegister()
{
	return AH3DVolume::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AH3DVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "H3DVolume.h" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeThickness_MetaData[] = {
		{ "Category", "Grid Settings|Volume" },
		{ "Comment", "//------------------------------- Grid Settings\n" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
		{ "ToolTip", "------------------------------- Grid Settings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Grid Settings|Cells" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
		{ "UIMax", "120" },
		{ "UIMin", "40" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSizeMultiplierForAdjustment_MetaData[] = {
		{ "Category", "Grid Settings|Cells" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
		{ "UIMax", "6" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellAmountOfTargetActorsBoundsOccupied_MetaData[] = {
		{ "Category", "Grid Settings|Cells" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
		{ "UIMax", "256" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Grid Settings|Cells" },
		{ "Comment", "//Trace channel for creating grids\n" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
		{ "ToolTip", "Trace channel for creating grids" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugFromPlayer_MetaData[] = {
		{ "Category", "Grid Settings|Debug" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayersDrawDistance_MetaData[] = {
		{ "Category", "Grid Settings|Debug" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "100.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugActors_MetaData[] = {
		{ "Category", "Grid Settings|Debug" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSelectedActorsDebugGrids_MetaData[] = {
		{ "Category", "Grid Settings|Debug" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawCameraDebugGridsOnEditor_MetaData[] = {
		{ "Category", "Grid Settings|Debug" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraDrawDistance_MetaData[] = {
		{ "Category", "Grid Settings|Debug" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "100.0" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateGridsRate_MetaData[] = {
		{ "Category", "Grid Settings|Dynamic Objects" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathCore_MetaData[] = {
		{ "Comment", "//------------------------------- Variables\n" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
		{ "ToolTip", "------------------------------- Variables" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllGridsMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllGridsMapByPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicObjectsLastPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicActorsLastBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicObjectsCheckTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OriginOfVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellsAtX_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellsAtY_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellsAtZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TotalCells_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicObjectsFound_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeThickness;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CellSizeMultiplierForAdjustment;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CellAmountOfTargetActorsBoundsOccupied;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
	static void NewProp_bDrawDebugFromPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugFromPlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayersDrawDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugActors_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugActors_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DebugActors;
	static void NewProp_bDrawSelectedActorsDebugGrids_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSelectedActorsDebugGrids;
#if WITH_EDITORONLY_DATA
	static void NewProp_bDrawCameraDebugGridsOnEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawCameraDebugGridsOnEditor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraDrawDistance;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateGridsRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathCore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeBox;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllGridsMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllGridsMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllGridsMap;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AllGridsMapByPosition_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllGridsMapByPosition_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllGridsMapByPosition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicObjectsLastPosition_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicObjectsLastPosition_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DynamicObjectsLastPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicActorsLastBounds_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicActorsLastBounds_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DynamicActorsLastBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicObjectsCheckTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OriginOfVolume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellsAtX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellsAtY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellsAtZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalCells;
	static void NewProp_bDynamicObjectsFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicObjectsFound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AH3DVolume_DivideVolumeIntoGrids, "DivideVolumeIntoGrids" }, // 2595673948
		{ &Z_Construct_UFunction_AH3DVolume_GenerateGridID, "GenerateGridID" }, // 4086803352
		{ &Z_Construct_UFunction_AH3DVolume_GetCellAmountOfTargetActorsBoundsOccupied, "GetCellAmountOfTargetActorsBoundsOccupied" }, // 1449422292
		{ &Z_Construct_UFunction_AH3DVolume_GetCellSizeMultiplierForAdjustment, "GetCellSizeMultiplierForAdjustment" }, // 1262130272
		{ &Z_Construct_UFunction_AH3DVolume_GetCollisionChannel, "GetCollisionChannel" }, // 2233715587
		{ &Z_Construct_UFunction_AH3DVolume_GetGridCellSize, "GetGridCellSize" }, // 3483914687
		{ &Z_Construct_UFunction_AH3DVolume_GetGridIDFromPosition, "GetGridIDFromPosition" }, // 3856593079
		{ &Z_Construct_UFunction_AH3DVolume_GetUpdateGridsRate, "GetUpdateGridsRate" }, // 4186288778
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AH3DVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_VolumeThickness = { "VolumeThickness", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, VolumeThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeThickness_MetaData), NewProp_VolumeThickness_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, CellSize), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_CellSizeMultiplierForAdjustment = { "CellSizeMultiplierForAdjustment", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, CellSizeMultiplierForAdjustment), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSizeMultiplierForAdjustment_MetaData), NewProp_CellSizeMultiplierForAdjustment_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_CellAmountOfTargetActorsBoundsOccupied = { "CellAmountOfTargetActorsBoundsOccupied", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, CellAmountOfTargetActorsBoundsOccupied), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellAmountOfTargetActorsBoundsOccupied_MetaData), NewProp_CellAmountOfTargetActorsBoundsOccupied_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionChannel_MetaData), NewProp_CollisionChannel_MetaData) }; // 756624936
void Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDrawDebugFromPlayer_SetBit(void* Obj)
{
	((AH3DVolume*)Obj)->bDrawDebugFromPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDrawDebugFromPlayer = { "bDrawDebugFromPlayer", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AH3DVolume), &Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDrawDebugFromPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugFromPlayer_MetaData), NewProp_bDrawDebugFromPlayer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_PlayersDrawDistance = { "PlayersDrawDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, PlayersDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayersDrawDistance_MetaData), NewProp_PlayersDrawDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_DebugActors_ValueProp = { "DebugActors", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_DebugActors_Key_KeyProp = { "DebugActors_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_DebugActors = { "DebugActors", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, DebugActors), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugActors_MetaData), NewProp_DebugActors_MetaData) };
void Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDrawSelectedActorsDebugGrids_SetBit(void* Obj)
{
	((AH3DVolume*)Obj)->bDrawSelectedActorsDebugGrids = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDrawSelectedActorsDebugGrids = { "bDrawSelectedActorsDebugGrids", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AH3DVolume), &Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDrawSelectedActorsDebugGrids_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawSelectedActorsDebugGrids_MetaData), NewProp_bDrawSelectedActorsDebugGrids_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDrawCameraDebugGridsOnEditor_SetBit(void* Obj)
{
	((AH3DVolume*)Obj)->bDrawCameraDebugGridsOnEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDrawCameraDebugGridsOnEditor = { "bDrawCameraDebugGridsOnEditor", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AH3DVolume), &Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDrawCameraDebugGridsOnEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawCameraDebugGridsOnEditor_MetaData), NewProp_bDrawCameraDebugGridsOnEditor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_CameraDrawDistance = { "CameraDrawDistance", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, CameraDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraDrawDistance_MetaData), NewProp_CameraDrawDistance_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_UpdateGridsRate = { "UpdateGridsRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, UpdateGridsRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateGridsRate_MetaData), NewProp_UpdateGridsRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_PathCore = { "PathCore", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, PathCore), Z_Construct_UClass_AH3DPathCore_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathCore_MetaData), NewProp_PathCore_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_VolumeBox = { "VolumeBox", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, VolumeBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeBox_MetaData), NewProp_VolumeBox_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_AllGridsMap_ValueProp = { "AllGridsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPathfindingGrid, METADATA_PARAMS(0, nullptr) }; // 3560903543
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_AllGridsMap_Key_KeyProp = { "AllGridsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_AllGridsMap = { "AllGridsMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, AllGridsMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllGridsMap_MetaData), NewProp_AllGridsMap_MetaData) }; // 3560903543
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_AllGridsMapByPosition_ValueProp = { "AllGridsMapByPosition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_AllGridsMapByPosition_Key_KeyProp = { "AllGridsMapByPosition_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_AllGridsMapByPosition = { "AllGridsMapByPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, AllGridsMapByPosition), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllGridsMapByPosition_MetaData), NewProp_AllGridsMapByPosition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicObjects_Inner = { "DynamicObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicObjects = { "DynamicObjects", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, DynamicObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicObjects_MetaData), NewProp_DynamicObjects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicObjectsLastPosition_ValueProp = { "DynamicObjectsLastPosition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicObjectsLastPosition_Key_KeyProp = { "DynamicObjectsLastPosition_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicObjectsLastPosition = { "DynamicObjectsLastPosition", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, DynamicObjectsLastPosition), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicObjectsLastPosition_MetaData), NewProp_DynamicObjectsLastPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicActorsLastBounds_ValueProp = { "DynamicActorsLastBounds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicActorsLastBounds_Key_KeyProp = { "DynamicActorsLastBounds_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicActorsLastBounds = { "DynamicActorsLastBounds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, DynamicActorsLastBounds), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicActorsLastBounds_MetaData), NewProp_DynamicActorsLastBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicObjectsCheckTimerHandle = { "DynamicObjectsCheckTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, DynamicObjectsCheckTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicObjectsCheckTimerHandle_MetaData), NewProp_DynamicObjectsCheckTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxExtent_MetaData), NewProp_BoxExtent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_OriginOfVolume = { "OriginOfVolume", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, OriginOfVolume), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OriginOfVolume_MetaData), NewProp_OriginOfVolume_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_CellsAtX = { "CellsAtX", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, CellsAtX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellsAtX_MetaData), NewProp_CellsAtX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_CellsAtY = { "CellsAtY", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, CellsAtY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellsAtY_MetaData), NewProp_CellsAtY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_CellsAtZ = { "CellsAtZ", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, CellsAtZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellsAtZ_MetaData), NewProp_CellsAtZ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_TotalCells = { "TotalCells", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AH3DVolume, TotalCells), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TotalCells_MetaData), NewProp_TotalCells_MetaData) };
void Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDynamicObjectsFound_SetBit(void* Obj)
{
	((AH3DVolume*)Obj)->bDynamicObjectsFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDynamicObjectsFound = { "bDynamicObjectsFound", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AH3DVolume), &Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDynamicObjectsFound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamicObjectsFound_MetaData), NewProp_bDynamicObjectsFound_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AH3DVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_VolumeThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_CellSizeMultiplierForAdjustment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_CellAmountOfTargetActorsBoundsOccupied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_CollisionChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDrawDebugFromPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_PlayersDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_DebugActors_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_DebugActors_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_DebugActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDrawSelectedActorsDebugGrids,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDrawCameraDebugGridsOnEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_CameraDrawDistance,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_UpdateGridsRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_PathCore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_VolumeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_AllGridsMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_AllGridsMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_AllGridsMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_AllGridsMapByPosition_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_AllGridsMapByPosition_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_AllGridsMapByPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicObjectsLastPosition_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicObjectsLastPosition_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicObjectsLastPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicActorsLastBounds_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicActorsLastBounds_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicActorsLastBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_DynamicObjectsCheckTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_BoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_OriginOfVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_CellsAtX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_CellsAtY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_CellsAtZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_TotalCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AH3DVolume_Statics::NewProp_bDynamicObjectsFound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AH3DVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AH3DVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AH3DVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AH3DVolume_Statics::ClassParams = {
	&AH3DVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AH3DVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AH3DVolume_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AH3DVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AH3DVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AH3DVolume()
{
	if (!Z_Registration_Info_UClass_AH3DVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AH3DVolume.OuterSingleton, Z_Construct_UClass_AH3DVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AH3DVolume.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AH3DVolume);
AH3DVolume::~AH3DVolume() {}
// ********** End Class AH3DVolume *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h__Script_H3DPathfinding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AH3DVolume, AH3DVolume::StaticClass, TEXT("AH3DVolume"), &Z_Registration_Info_UClass_AH3DVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AH3DVolume), 2445461907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h__Script_H3DPathfinding_222538821(TEXT("/Script/H3DPathfinding"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h__Script_H3DPathfinding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h__Script_H3DPathfinding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
