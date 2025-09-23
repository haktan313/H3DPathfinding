// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DMoveToAsyncAction.h"
#include "Engine/TimerHandle.h"
#include "Structures_Pathfinding.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeH3DMoveToAsyncAction() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
H3DPATHFINDING_API UClass* Z_Construct_UClass_AH3DVolume_NoRegister();
H3DPATHFINDING_API UClass* Z_Construct_UClass_UH3DMoveToAsyncAction();
H3DPATHFINDING_API UClass* Z_Construct_UClass_UH3DMoveToAsyncAction_NoRegister();
H3DPATHFINDING_API UEnum* Z_Construct_UEnum_H3DPathfinding_EFailureType();
H3DPATHFINDING_API UFunction* Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature();
H3DPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FPathResult();
UPackage* Z_Construct_UPackage__Script_H3DPathfinding();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FHMoveToOutput ********************************************************
struct Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics
{
	struct _Script_H3DPathfinding_eventHMoveToOutput_Parms
	{
		EFailureType FailureType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailureType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailureType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::NewProp_FailureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_H3DPathfinding_eventHMoveToOutput_Parms, FailureType), Z_Construct_UEnum_H3DPathfinding_EFailureType, METADATA_PARAMS(0, nullptr) }; // 44561120
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::NewProp_FailureType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::NewProp_FailureType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_H3DPathfinding, nullptr, "HMoveToOutput__DelegateSignature", Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::_Script_H3DPathfinding_eventHMoveToOutput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::_Script_H3DPathfinding_eventHMoveToOutput_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHMoveToOutput_DelegateWrapper(const FMulticastScriptDelegate& HMoveToOutput, EFailureType FailureType)
{
	struct _Script_H3DPathfinding_eventHMoveToOutput_Parms
	{
		EFailureType FailureType;
	};
	_Script_H3DPathfinding_eventHMoveToOutput_Parms Parms;
	Parms.FailureType=FailureType;
	HMoveToOutput.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FHMoveToOutput **********************************************************

// ********** Begin Class UH3DMoveToAsyncAction Function CheckAvailability *************************
struct Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckAvailability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckAvailability_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UH3DMoveToAsyncAction, nullptr, "CheckAvailability", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckAvailability_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UH3DMoveToAsyncAction::execCheckAvailability)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckAvailability();
	P_NATIVE_END;
}
// ********** End Class UH3DMoveToAsyncAction Function CheckAvailability ***************************

// ********** Begin Class UH3DMoveToAsyncAction Function CheckTargetActorsLocation *****************
struct Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckTargetActorsLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckTargetActorsLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UH3DMoveToAsyncAction, nullptr, "CheckTargetActorsLocation", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckTargetActorsLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckTargetActorsLocation_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckTargetActorsLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckTargetActorsLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UH3DMoveToAsyncAction::execCheckTargetActorsLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckTargetActorsLocation();
	P_NATIVE_END;
}
// ********** End Class UH3DMoveToAsyncAction Function CheckTargetActorsLocation *******************

// ********** Begin Class UH3DMoveToAsyncAction Function H3DMoveTo *********************************
struct Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics
{
	struct H3DMoveToAsyncAction_eventH3DMoveTo_Parms
	{
		UObject* WorldContextObject;
		APawn* Pawn;
		AH3DVolume* Volume;
		FVector Destination;
		APawn* TargetActor;
		TEnumAsByte<ECollisionChannel> PathCheckChannel;
		float Tolerance;
		bool DrawDebugLine;
		float DebugLineTime;
		UH3DMoveToAsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Tolerance,DrawDebugLine,DebugLineTime" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HaktanAI" },
		{ "CPP_Default_DebugLineTime", "5.000000" },
		{ "CPP_Default_DrawDebugLine", "false" },
		{ "CPP_Default_PathCheckChannel", "ECC_WorldStatic" },
		{ "CPP_Default_TargetActor", "None" },
		{ "CPP_Default_Tolerance", "10.000000" },
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathCheckChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static void NewProp_DrawDebugLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebugLine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLineTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DMoveToAsyncAction_eventH3DMoveTo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DMoveToAsyncAction_eventH3DMoveTo_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DMoveToAsyncAction_eventH3DMoveTo_Parms, Volume), Z_Construct_UClass_AH3DVolume_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DMoveToAsyncAction_eventH3DMoveTo_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DMoveToAsyncAction_eventH3DMoveTo_Parms, TargetActor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_PathCheckChannel = { "PathCheckChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DMoveToAsyncAction_eventH3DMoveTo_Parms, PathCheckChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DMoveToAsyncAction_eventH3DMoveTo_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_DrawDebugLine_SetBit(void* Obj)
{
	((H3DMoveToAsyncAction_eventH3DMoveTo_Parms*)Obj)->DrawDebugLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_DrawDebugLine = { "DrawDebugLine", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(H3DMoveToAsyncAction_eventH3DMoveTo_Parms), &Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_DrawDebugLine_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_DebugLineTime = { "DebugLineTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DMoveToAsyncAction_eventH3DMoveTo_Parms, DebugLineTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DMoveToAsyncAction_eventH3DMoveTo_Parms, ReturnValue), Z_Construct_UClass_UH3DMoveToAsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_PathCheckChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_DrawDebugLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_DebugLineTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UH3DMoveToAsyncAction, nullptr, "H3DMoveTo", Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::H3DMoveToAsyncAction_eventH3DMoveTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::H3DMoveToAsyncAction_eventH3DMoveTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UH3DMoveToAsyncAction::execH3DMoveTo)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_OBJECT(AH3DVolume,Z_Param_Volume);
	P_GET_STRUCT(FVector,Z_Param_Destination);
	P_GET_OBJECT(APawn,Z_Param_TargetActor);
	P_GET_PROPERTY(FByteProperty,Z_Param_PathCheckChannel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_UBOOL(Z_Param_DrawDebugLine);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DebugLineTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UH3DMoveToAsyncAction**)Z_Param__Result=UH3DMoveToAsyncAction::H3DMoveTo(Z_Param_WorldContextObject,Z_Param_Pawn,Z_Param_Volume,Z_Param_Destination,Z_Param_TargetActor,ECollisionChannel(Z_Param_PathCheckChannel),Z_Param_Tolerance,Z_Param_DrawDebugLine,Z_Param_DebugLineTime);
	P_NATIVE_END;
}
// ********** End Class UH3DMoveToAsyncAction Function H3DMoveTo ***********************************

// ********** Begin Class UH3DMoveToAsyncAction Function OnPathFound *******************************
struct Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics
{
	struct H3DMoveToAsyncAction_eventOnPathFound_Parms
	{
		FPathResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(H3DMoveToAsyncAction_eventOnPathFound_Parms, Result), Z_Construct_UScriptStruct_FPathResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1811164781
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UH3DMoveToAsyncAction, nullptr, "OnPathFound", Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics::H3DMoveToAsyncAction_eventOnPathFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics::H3DMoveToAsyncAction_eventOnPathFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UH3DMoveToAsyncAction::execOnPathFound)
{
	P_GET_STRUCT_REF(FPathResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPathFound(Z_Param_Out_Result);
	P_NATIVE_END;
}
// ********** End Class UH3DMoveToAsyncAction Function OnPathFound *********************************

// ********** Begin Class UH3DMoveToAsyncAction ****************************************************
void UH3DMoveToAsyncAction::StaticRegisterNativesUH3DMoveToAsyncAction()
{
	UClass* Class = UH3DMoveToAsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckAvailability", &UH3DMoveToAsyncAction::execCheckAvailability },
		{ "CheckTargetActorsLocation", &UH3DMoveToAsyncAction::execCheckTargetActorsLocation },
		{ "H3DMoveTo", &UH3DMoveToAsyncAction::execH3DMoveTo },
		{ "OnPathFound", &UH3DMoveToAsyncAction::execOnPathFound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UH3DMoveToAsyncAction;
UClass* UH3DMoveToAsyncAction::GetPrivateStaticClass()
{
	using TClass = UH3DMoveToAsyncAction;
	if (!Z_Registration_Info_UClass_UH3DMoveToAsyncAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("H3DMoveToAsyncAction"),
			Z_Registration_Info_UClass_UH3DMoveToAsyncAction.InnerSingleton,
			StaticRegisterNativesUH3DMoveToAsyncAction,
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
	return Z_Registration_Info_UClass_UH3DMoveToAsyncAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UH3DMoveToAsyncAction_NoRegister()
{
	return UH3DMoveToAsyncAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UH3DMoveToAsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//Output delegate for Blueprint\n" },
		{ "IncludePath", "H3DMoveToAsyncAction.h" },
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
		{ "ToolTip", "Output delegate for Blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveTickHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvailabilityHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckTargetActorsLocationTimerHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownForFindNewPathHandleTargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CooldownForFindNewPathHandleCheckAvailability_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathCheckChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/H3DMoveToAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MoveTickHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AvailabilityHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckTargetActorsLocationTimerHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownForFindNewPathHandleTargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CooldownForFindNewPathHandleCheckAvailability;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathCheckChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckAvailability, "CheckAvailability" }, // 683234523
		{ &Z_Construct_UFunction_UH3DMoveToAsyncAction_CheckTargetActorsLocation, "CheckTargetActorsLocation" }, // 2676034494
		{ &Z_Construct_UFunction_UH3DMoveToAsyncAction_H3DMoveTo, "H3DMoveTo" }, // 879239688
		{ &Z_Construct_UFunction_UH3DMoveToAsyncAction_OnPathFound, "OnPathFound" }, // 3345419374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UH3DMoveToAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UH3DMoveToAsyncAction, OnSuccess), Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3861605336
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UH3DMoveToAsyncAction, OnFailed), Z_Construct_UDelegateFunction_H3DPathfinding_HMoveToOutput__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailed_MetaData), NewProp_OnFailed_MetaData) }; // 3861605336
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_MoveTickHandle = { "MoveTickHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UH3DMoveToAsyncAction, MoveTickHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveTickHandle_MetaData), NewProp_MoveTickHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_AvailabilityHandle = { "AvailabilityHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UH3DMoveToAsyncAction, AvailabilityHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvailabilityHandle_MetaData), NewProp_AvailabilityHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_CheckTargetActorsLocationTimerHandle = { "CheckTargetActorsLocationTimerHandle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UH3DMoveToAsyncAction, CheckTargetActorsLocationTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckTargetActorsLocationTimerHandle_MetaData), NewProp_CheckTargetActorsLocationTimerHandle_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_CooldownForFindNewPathHandleTargetActor = { "CooldownForFindNewPathHandleTargetActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UH3DMoveToAsyncAction, CooldownForFindNewPathHandleTargetActor), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownForFindNewPathHandleTargetActor_MetaData), NewProp_CooldownForFindNewPathHandleTargetActor_MetaData) }; // 3834150579
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_CooldownForFindNewPathHandleCheckAvailability = { "CooldownForFindNewPathHandleCheckAvailability", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UH3DMoveToAsyncAction, CooldownForFindNewPathHandleCheckAvailability), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CooldownForFindNewPathHandleCheckAvailability_MetaData), NewProp_CooldownForFindNewPathHandleCheckAvailability_MetaData) }; // 3834150579
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UH3DMoveToAsyncAction, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_PathCheckChannel = { "PathCheckChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UH3DMoveToAsyncAction, PathCheckChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathCheckChannel_MetaData), NewProp_PathCheckChannel_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UH3DMoveToAsyncAction, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pawn_MetaData), NewProp_Pawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UH3DMoveToAsyncAction, Volume), Z_Construct_UClass_AH3DVolume_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UH3DMoveToAsyncAction, TargetActor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_OnFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_MoveTickHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_AvailabilityHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_CheckTargetActorsLocationTimerHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_CooldownForFindNewPathHandleTargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_CooldownForFindNewPathHandleCheckAvailability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_PathCheckChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::ClassParams = {
	&UH3DMoveToAsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UH3DMoveToAsyncAction()
{
	if (!Z_Registration_Info_UClass_UH3DMoveToAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UH3DMoveToAsyncAction.OuterSingleton, Z_Construct_UClass_UH3DMoveToAsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UH3DMoveToAsyncAction.OuterSingleton;
}
UH3DMoveToAsyncAction::UH3DMoveToAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UH3DMoveToAsyncAction);
UH3DMoveToAsyncAction::~UH3DMoveToAsyncAction() {}
// ********** End Class UH3DMoveToAsyncAction ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h__Script_H3DPathfinding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UH3DMoveToAsyncAction, UH3DMoveToAsyncAction::StaticClass, TEXT("UH3DMoveToAsyncAction"), &Z_Registration_Info_UClass_UH3DMoveToAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UH3DMoveToAsyncAction), 2928870080U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h__Script_H3DPathfinding_1417247042(TEXT("/Script/H3DPathfinding"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h__Script_H3DPathfinding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h__Script_H3DPathfinding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
