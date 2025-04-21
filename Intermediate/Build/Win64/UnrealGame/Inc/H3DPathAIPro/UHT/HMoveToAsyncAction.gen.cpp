// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/HMoveToAsyncAction.h"
#include "H3DPathAIPro/Public/StructuresEnums_H3DPathFinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHMoveToAsyncAction() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHVolume3D_NoRegister();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UHMoveToAsyncAction();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UHMoveToAsyncAction_NoRegister();
H3DPATHAIPRO_API UFunction* Z_Construct_UDelegateFunction_H3DPathAIPro_HMoveToOutput__DelegateSignature();
H3DPATHAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FS_PathResult();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Delegate FHMoveToOutput
struct Z_Construct_UDelegateFunction_H3DPathAIPro_HMoveToOutput__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HMoveToAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_H3DPathAIPro_HMoveToOutput__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_H3DPathAIPro, nullptr, "HMoveToOutput__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_H3DPathAIPro_HMoveToOutput__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_H3DPathAIPro_HMoveToOutput__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_H3DPathAIPro_HMoveToOutput__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_H3DPathAIPro_HMoveToOutput__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FHMoveToOutput_DelegateWrapper(const FMulticastScriptDelegate& HMoveToOutput)
{
	HMoveToOutput.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FHMoveToOutput

// Begin Class UHMoveToAsyncAction Function HMoveTo
struct Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics
{
	struct HMoveToAsyncAction_eventHMoveTo_Parms
	{
		UObject* WorldContextObject;
		ACharacter* Character;
		AHVolume3D* Volume;
		FVector Destination;
		AActor* TargetActor;
		float Tolerance;
		bool DrawDebugLine;
		float DebugLineTime;
		UHMoveToAsyncAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Tolerance,DrawDebugLine,DebugLineTime" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "HaktanAI" },
		{ "CPP_Default_DebugLineTime", "5.000000" },
		{ "CPP_Default_DrawDebugLine", "false" },
		{ "CPP_Default_TargetActor", "None" },
		{ "CPP_Default_Tolerance", "100.000000" },
		{ "ModuleRelativePath", "Public/HMoveToAsyncAction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static void NewProp_DrawDebugLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebugLine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLineTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HMoveToAsyncAction_eventHMoveTo_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HMoveToAsyncAction_eventHMoveTo_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HMoveToAsyncAction_eventHMoveTo_Parms, Volume), Z_Construct_UClass_AHVolume3D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HMoveToAsyncAction_eventHMoveTo_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HMoveToAsyncAction_eventHMoveTo_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HMoveToAsyncAction_eventHMoveTo_Parms, Tolerance), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_DrawDebugLine_SetBit(void* Obj)
{
	((HMoveToAsyncAction_eventHMoveTo_Parms*)Obj)->DrawDebugLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_DrawDebugLine = { "DrawDebugLine", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HMoveToAsyncAction_eventHMoveTo_Parms), &Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_DrawDebugLine_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_DebugLineTime = { "DebugLineTime", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HMoveToAsyncAction_eventHMoveTo_Parms, DebugLineTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HMoveToAsyncAction_eventHMoveTo_Parms, ReturnValue), Z_Construct_UClass_UHMoveToAsyncAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_Destination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_DrawDebugLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_DebugLineTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHMoveToAsyncAction, nullptr, "HMoveTo", nullptr, nullptr, Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::HMoveToAsyncAction_eventHMoveTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::HMoveToAsyncAction_eventHMoveTo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHMoveToAsyncAction::execHMoveTo)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(ACharacter,Z_Param_Character);
	P_GET_OBJECT(AHVolume3D,Z_Param_Volume);
	P_GET_STRUCT(FVector,Z_Param_Destination);
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Tolerance);
	P_GET_UBOOL(Z_Param_DrawDebugLine);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DebugLineTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UHMoveToAsyncAction**)Z_Param__Result=UHMoveToAsyncAction::HMoveTo(Z_Param_WorldContextObject,Z_Param_Character,Z_Param_Volume,Z_Param_Destination,Z_Param_TargetActor,Z_Param_Tolerance,Z_Param_DrawDebugLine,Z_Param_DebugLineTime);
	P_NATIVE_END;
}
// End Class UHMoveToAsyncAction Function HMoveTo

// Begin Class UHMoveToAsyncAction Function OnPathFound
struct Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics
{
	struct HMoveToAsyncAction_eventOnPathFound_Parms
	{
		FS_PathResult Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HMoveToAsyncAction_eventOnPathFound_Parms, Result), Z_Construct_UScriptStruct_FS_PathResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1644255724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHMoveToAsyncAction, nullptr, "OnPathFound", nullptr, nullptr, Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics::HMoveToAsyncAction_eventOnPathFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics::HMoveToAsyncAction_eventOnPathFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHMoveToAsyncAction::execOnPathFound)
{
	P_GET_STRUCT_REF(FS_PathResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPathFound(Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UHMoveToAsyncAction Function OnPathFound

// Begin Class UHMoveToAsyncAction
void UHMoveToAsyncAction::StaticRegisterNativesUHMoveToAsyncAction()
{
	UClass* Class = UHMoveToAsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HMoveTo", &UHMoveToAsyncAction::execHMoveTo },
		{ "OnPathFound", &UHMoveToAsyncAction::execOnPathFound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHMoveToAsyncAction);
UClass* Z_Construct_UClass_UHMoveToAsyncAction_NoRegister()
{
	return UHMoveToAsyncAction::StaticClass();
}
struct Z_Construct_UClass_UHMoveToAsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HMoveToAsyncAction.h" },
		{ "ModuleRelativePath", "Public/HMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMoveToAsyncAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/HMoveToAsyncAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHMoveToAsyncAction_HMoveTo, "HMoveTo" }, // 1197097367
		{ &Z_Construct_UFunction_UHMoveToAsyncAction_OnPathFound, "OnPathFound" }, // 112823122
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHMoveToAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHMoveToAsyncAction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHMoveToAsyncAction, OnSuccess), Z_Construct_UDelegateFunction_H3DPathAIPro_HMoveToOutput__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2471799066
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHMoveToAsyncAction_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHMoveToAsyncAction, OnFailed), Z_Construct_UDelegateFunction_H3DPathAIPro_HMoveToOutput__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailed_MetaData), NewProp_OnFailed_MetaData) }; // 2471799066
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHMoveToAsyncAction_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHMoveToAsyncAction, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContext_MetaData), NewProp_WorldContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHMoveToAsyncAction_Statics::NewProp_CharacterRef = { "CharacterRef", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHMoveToAsyncAction, CharacterRef), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterRef_MetaData), NewProp_CharacterRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHMoveToAsyncAction_Statics::NewProp_VolumeRef = { "VolumeRef", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHMoveToAsyncAction, VolumeRef), Z_Construct_UClass_AHVolume3D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeRef_MetaData), NewProp_VolumeRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHMoveToAsyncAction_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHMoveToAsyncAction, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHMoveToAsyncAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHMoveToAsyncAction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHMoveToAsyncAction_Statics::NewProp_OnFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHMoveToAsyncAction_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHMoveToAsyncAction_Statics::NewProp_CharacterRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHMoveToAsyncAction_Statics::NewProp_VolumeRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHMoveToAsyncAction_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHMoveToAsyncAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHMoveToAsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHMoveToAsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHMoveToAsyncAction_Statics::ClassParams = {
	&UHMoveToAsyncAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHMoveToAsyncAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHMoveToAsyncAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHMoveToAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UHMoveToAsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHMoveToAsyncAction()
{
	if (!Z_Registration_Info_UClass_UHMoveToAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHMoveToAsyncAction.OuterSingleton, Z_Construct_UClass_UHMoveToAsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHMoveToAsyncAction.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UHMoveToAsyncAction>()
{
	return UHMoveToAsyncAction::StaticClass();
}
UHMoveToAsyncAction::UHMoveToAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHMoveToAsyncAction);
UHMoveToAsyncAction::~UHMoveToAsyncAction() {}
// End Class UHMoveToAsyncAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHMoveToAsyncAction, UHMoveToAsyncAction::StaticClass, TEXT("UHMoveToAsyncAction"), &Z_Registration_Info_UClass_UHMoveToAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHMoveToAsyncAction), 738769060U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_1245298771(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
