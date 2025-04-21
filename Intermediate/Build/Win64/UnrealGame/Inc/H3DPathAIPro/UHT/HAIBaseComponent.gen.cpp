// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/HAIBaseComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHAIBaseComponent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHPatrolSpline_NoRegister();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHVolume3D_NoRegister();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_DominantSense();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_MovementState();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_OnPossessState();
H3DPATHAIPRO_API UFunction* Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature();
H3DPATHAIPRO_API UFunction* Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Delegate FOnDoActionDelegate
struct Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics
{
	struct _Script_H3DPathAIPro_eventOnDoActionDelegate_Parms
	{
		int32 ActionID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics::NewProp_ActionID = { "ActionID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_H3DPathAIPro_eventOnDoActionDelegate_Parms, ActionID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics::NewProp_ActionID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_H3DPathAIPro, nullptr, "OnDoActionDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics::_Script_H3DPathAIPro_eventOnDoActionDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics::_Script_H3DPathAIPro_eventOnDoActionDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDoActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDoActionDelegate, int32 ActionID)
{
	struct _Script_H3DPathAIPro_eventOnDoActionDelegate_Parms
	{
		int32 ActionID;
	};
	_Script_H3DPathAIPro_eventOnDoActionDelegate_Parms Parms;
	Parms.ActionID=ActionID;
	OnDoActionDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDoActionDelegate

// Begin Delegate FOnActionEndDelegate
struct Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics
{
	struct _Script_H3DPathAIPro_eventOnActionEndDelegate_Parms
	{
		E_DoActionResult DoActionResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Delegate for starting an action\n" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "ToolTip", "Delegate for starting an action" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DoActionResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DoActionResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::NewProp_DoActionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::NewProp_DoActionResult = { "DoActionResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_H3DPathAIPro_eventOnActionEndDelegate_Parms, DoActionResult), Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult, METADATA_PARAMS(0, nullptr) }; // 2089742983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::NewProp_DoActionResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::NewProp_DoActionResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_H3DPathAIPro, nullptr, "OnActionEndDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::_Script_H3DPathAIPro_eventOnActionEndDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::_Script_H3DPathAIPro_eventOnActionEndDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnActionEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnActionEndDelegate, E_DoActionResult DoActionResult)
{
	struct _Script_H3DPathAIPro_eventOnActionEndDelegate_Parms
	{
		E_DoActionResult DoActionResult;
	};
	_Script_H3DPathAIPro_eventOnActionEndDelegate_Parms Parms;
	Parms.DoActionResult=DoActionResult;
	OnActionEndDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnActionEndDelegate

// Begin Class UHAIBaseComponent Function Dead
struct Z_Construct_UFunction_UHAIBaseComponent_Dead_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_Dead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "Dead", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_Dead_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_Dead_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHAIBaseComponent_Dead()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_Dead_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execDead)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Dead();
	P_NATIVE_END;
}
// End Class UHAIBaseComponent Function Dead

// Begin Class UHAIBaseComponent Function GetPossessState
struct Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics
{
	struct HAIBaseComponent_eventGetPossessState_Parms
	{
		E_OnPossessState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventGetPossessState_Parms, ReturnValue), Z_Construct_UEnum_H3DPathAIPro_E_OnPossessState, METADATA_PARAMS(0, nullptr) }; // 2366824250
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "GetPossessState", nullptr, nullptr, Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::HAIBaseComponent_eventGetPossessState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::HAIBaseComponent_eventGetPossessState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHAIBaseComponent_GetPossessState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_GetPossessState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execGetPossessState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(E_OnPossessState*)Z_Param__Result=P_THIS->GetPossessState();
	P_NATIVE_END;
}
// End Class UHAIBaseComponent Function GetPossessState

// Begin Class UHAIBaseComponent Function SetMovementStateFly
struct Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics
{
	struct HAIBaseComponent_eventSetMovementStateFly_Parms
	{
		E_MovementState movementState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_movementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_movementState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::NewProp_movementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::NewProp_movementState = { "movementState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventSetMovementStateFly_Parms, movementState), Z_Construct_UEnum_H3DPathAIPro_E_MovementState, METADATA_PARAMS(0, nullptr) }; // 1934441174
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::NewProp_movementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::NewProp_movementState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "SetMovementStateFly", nullptr, nullptr, Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::HAIBaseComponent_eventSetMovementStateFly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::HAIBaseComponent_eventSetMovementStateFly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execSetMovementStateFly)
{
	P_GET_ENUM(E_MovementState,Z_Param_movementState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementStateFly(E_MovementState(Z_Param_movementState));
	P_NATIVE_END;
}
// End Class UHAIBaseComponent Function SetMovementStateFly

// Begin Class UHAIBaseComponent Function SetMovementStateWalk
struct Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics
{
	struct HAIBaseComponent_eventSetMovementStateWalk_Parms
	{
		E_MovementState movementState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_movementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_movementState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::NewProp_movementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::NewProp_movementState = { "movementState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIBaseComponent_eventSetMovementStateWalk_Parms, movementState), Z_Construct_UEnum_H3DPathAIPro_E_MovementState, METADATA_PARAMS(0, nullptr) }; // 1934441174
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::NewProp_movementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::NewProp_movementState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "SetMovementStateWalk", nullptr, nullptr, Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::HAIBaseComponent_eventSetMovementStateWalk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::HAIBaseComponent_eventSetMovementStateWalk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execSetMovementStateWalk)
{
	P_GET_ENUM(E_MovementState,Z_Param_movementState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMovementStateWalk(E_MovementState(Z_Param_movementState));
	P_NATIVE_END;
}
// End Class UHAIBaseComponent Function SetMovementStateWalk

// Begin Class UHAIBaseComponent Function SetStateActive
struct Z_Construct_UFunction_UHAIBaseComponent_SetStateActive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_SetStateActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "SetStateActive", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetStateActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_SetStateActive_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHAIBaseComponent_SetStateActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_SetStateActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execSetStateActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStateActive();
	P_NATIVE_END;
}
// End Class UHAIBaseComponent Function SetStateActive

// Begin Class UHAIBaseComponent Function SetStateInvestigate
struct Z_Construct_UFunction_UHAIBaseComponent_SetStateInvestigate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_SetStateInvestigate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "SetStateInvestigate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetStateInvestigate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_SetStateInvestigate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHAIBaseComponent_SetStateInvestigate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_SetStateInvestigate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execSetStateInvestigate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStateInvestigate();
	P_NATIVE_END;
}
// End Class UHAIBaseComponent Function SetStateInvestigate

// Begin Class UHAIBaseComponent Function SetStatePassive
struct Z_Construct_UFunction_UHAIBaseComponent_SetStatePassive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_SetStatePassive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "SetStatePassive", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_SetStatePassive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_SetStatePassive_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHAIBaseComponent_SetStatePassive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_SetStatePassive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execSetStatePassive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStatePassive();
	P_NATIVE_END;
}
// End Class UHAIBaseComponent Function SetStatePassive

// Begin Class UHAIBaseComponent Function StopBehaviorTree
struct Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics
{
	struct HAIBaseComponent_eventStopBehaviorTree_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HAIBaseComponent_eventStopBehaviorTree_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HAIBaseComponent_eventStopBehaviorTree_Parms), &Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHAIBaseComponent, nullptr, "StopBehaviorTree", nullptr, nullptr, Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::HAIBaseComponent_eventStopBehaviorTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::HAIBaseComponent_eventStopBehaviorTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHAIBaseComponent::execStopBehaviorTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StopBehaviorTree();
	P_NATIVE_END;
}
// End Class UHAIBaseComponent Function StopBehaviorTree

// Begin Class UHAIBaseComponent
void UHAIBaseComponent::StaticRegisterNativesUHAIBaseComponent()
{
	UClass* Class = UHAIBaseComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Dead", &UHAIBaseComponent::execDead },
		{ "GetPossessState", &UHAIBaseComponent::execGetPossessState },
		{ "SetMovementStateFly", &UHAIBaseComponent::execSetMovementStateFly },
		{ "SetMovementStateWalk", &UHAIBaseComponent::execSetMovementStateWalk },
		{ "SetStateActive", &UHAIBaseComponent::execSetStateActive },
		{ "SetStateInvestigate", &UHAIBaseComponent::execSetStateInvestigate },
		{ "SetStatePassive", &UHAIBaseComponent::execSetStatePassive },
		{ "StopBehaviorTree", &UHAIBaseComponent::execStopBehaviorTree },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHAIBaseComponent);
UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister()
{
	return UHAIBaseComponent::StaticClass();
}
struct Z_Construct_UClass_UHAIBaseComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "//Delegate for ending an action\n" },
		{ "IncludePath", "HAIBaseComponent.h" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
		{ "ToolTip", "Delegate for ending an action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeRef_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorKeyName_MetaData[] = {
		{ "Category", "HAI|BlackboardKeyValuesName" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationVectorKeyName_MetaData[] = {
		{ "Category", "HAI|BlackboardKeyValuesName" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnumOnPossessStateKeyName_MetaData[] = {
		{ "Category", "HAI|BlackboardKeyValuesName" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolCanDoActionKeyName_MetaData[] = {
		{ "Category", "HAI|BlackboardKeyValuesName" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetsTag_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalFlySpeed_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FastFlySpeed_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolSpline_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDoAction_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnActionEnd_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenSight_MetaData[] = {
		{ "Category", "HAI|Sense" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[] = {
		{ "Category", "HAI|Sense|Sight" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "HAI|Sense|Sight" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngleDegrees_MetaData[] = {
		{ "Category", "HAI|Sense|Sight" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAgeForSight_MetaData[] = {
		{ "Category", "HAI|Sense|Sight" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenHear_MetaData[] = {
		{ "Category", "HAI|Sense" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingRange_MetaData[] = {
		{ "Category", "HAI|Sense|Hear" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAgeHear_MetaData[] = {
		{ "Category", "HAI|Sense|Hear" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpenDamage_MetaData[] = {
		{ "Category", "HAI|Sense" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAgeDamage_MetaData[] = {
		{ "Category", "HAI|Sense|Damage" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DominantSense_MetaData[] = {
		{ "Category", "HAI|Sense" },
		{ "ModuleRelativePath", "Public/HAIBaseComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeRef;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TargetActorKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LocationVectorKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EnumOnPossessStateKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoolCanDoActionKeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_targetsTag_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_targetsTag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalFlySpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FastFlySpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolSpline;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoAction;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnActionEnd;
	static void NewProp_OpenSight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OpenSight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngleDegrees;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAgeForSight;
	static void NewProp_OpenHear_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OpenHear;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAgeHear;
	static void NewProp_OpenDamage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OpenDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAgeDamage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DominantSense_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DominantSense;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHAIBaseComponent_Dead, "Dead" }, // 2955087056
		{ &Z_Construct_UFunction_UHAIBaseComponent_GetPossessState, "GetPossessState" }, // 2697233513
		{ &Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateFly, "SetMovementStateFly" }, // 1364062140
		{ &Z_Construct_UFunction_UHAIBaseComponent_SetMovementStateWalk, "SetMovementStateWalk" }, // 1096859742
		{ &Z_Construct_UFunction_UHAIBaseComponent_SetStateActive, "SetStateActive" }, // 3340474218
		{ &Z_Construct_UFunction_UHAIBaseComponent_SetStateInvestigate, "SetStateInvestigate" }, // 2154358180
		{ &Z_Construct_UFunction_UHAIBaseComponent_SetStatePassive, "SetStatePassive" }, // 1298208937
		{ &Z_Construct_UFunction_UHAIBaseComponent_StopBehaviorTree, "StopBehaviorTree" }, // 3119541090
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHAIBaseComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OwnerCharacter = { "OwnerCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, OwnerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCharacter_MetaData), NewProp_OwnerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_VolumeRef = { "VolumeRef", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, VolumeRef), Z_Construct_UClass_AHVolume3D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeRef_MetaData), NewProp_VolumeRef_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_TargetActorKeyName = { "TargetActorKeyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, TargetActorKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActorKeyName_MetaData), NewProp_TargetActorKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_LocationVectorKeyName = { "LocationVectorKeyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, LocationVectorKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationVectorKeyName_MetaData), NewProp_LocationVectorKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_EnumOnPossessStateKeyName = { "EnumOnPossessStateKeyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, EnumOnPossessStateKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnumOnPossessStateKeyName_MetaData), NewProp_EnumOnPossessStateKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_BoolCanDoActionKeyName = { "BoolCanDoActionKeyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, BoolCanDoActionKeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolCanDoActionKeyName_MetaData), NewProp_BoolCanDoActionKeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_targetsTag_Inner = { "targetsTag", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_targetsTag = { "targetsTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, targetsTag), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetsTag_MetaData), NewProp_targetsTag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_NormalFlySpeed = { "NormalFlySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, NormalFlySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalFlySpeed_MetaData), NewProp_NormalFlySpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_FastFlySpeed = { "FastFlySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, FastFlySpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FastFlySpeed_MetaData), NewProp_FastFlySpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_PatrolSpline = { "PatrolSpline", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, PatrolSpline), Z_Construct_UClass_AHPatrolSpline_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolSpline_MetaData), NewProp_PatrolSpline_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnDoAction = { "OnDoAction", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, OnDoAction), Z_Construct_UDelegateFunction_H3DPathAIPro_OnDoActionDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDoAction_MetaData), NewProp_OnDoAction_MetaData) }; // 1842572322
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnActionEnd = { "OnActionEnd", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, OnActionEnd), Z_Construct_UDelegateFunction_H3DPathAIPro_OnActionEndDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnActionEnd_MetaData), NewProp_OnActionEnd_MetaData) }; // 1406764376
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OpenSight_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->OpenSight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OpenSight = { "OpenSight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OpenSight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenSight_MetaData), NewProp_OpenSight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, SightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRadius_MetaData), NewProp_SightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, LoseSightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoseSightRadius_MetaData), NewProp_LoseSightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_PeripheralVisionAngleDegrees = { "PeripheralVisionAngleDegrees", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, PeripheralVisionAngleDegrees), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeripheralVisionAngleDegrees_MetaData), NewProp_PeripheralVisionAngleDegrees_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_MaxAgeForSight = { "MaxAgeForSight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, MaxAgeForSight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAgeForSight_MetaData), NewProp_MaxAgeForSight_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OpenHear_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->OpenHear = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OpenHear = { "OpenHear", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OpenHear_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenHear_MetaData), NewProp_OpenHear_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_HearingRange = { "HearingRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, HearingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingRange_MetaData), NewProp_HearingRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_MaxAgeHear = { "MaxAgeHear", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, MaxAgeHear), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAgeHear_MetaData), NewProp_MaxAgeHear_MetaData) };
void Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OpenDamage_SetBit(void* Obj)
{
	((UHAIBaseComponent*)Obj)->OpenDamage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OpenDamage = { "OpenDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UHAIBaseComponent), &Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OpenDamage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpenDamage_MetaData), NewProp_OpenDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_MaxAgeDamage = { "MaxAgeDamage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, MaxAgeDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAgeDamage_MetaData), NewProp_MaxAgeDamage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_DominantSense_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_DominantSense = { "DominantSense", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHAIBaseComponent, DominantSense), Z_Construct_UEnum_H3DPathAIPro_E_DominantSense, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DominantSense_MetaData), NewProp_DominantSense_MetaData) }; // 2523168760
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHAIBaseComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OwnerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_BehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_VolumeRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_TargetActorKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_LocationVectorKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_EnumOnPossessStateKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_BoolCanDoActionKeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_targetsTag_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_targetsTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_NormalFlySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_FastFlySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_PatrolSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnDoAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OnActionEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OpenSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_SightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_LoseSightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_PeripheralVisionAngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_MaxAgeForSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OpenHear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_HearingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_MaxAgeHear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_OpenDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_MaxAgeDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_DominantSense_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHAIBaseComponent_Statics::NewProp_DominantSense,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHAIBaseComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHAIBaseComponent_Statics::ClassParams = {
	&UHAIBaseComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHAIBaseComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHAIBaseComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHAIBaseComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHAIBaseComponent()
{
	if (!Z_Registration_Info_UClass_UHAIBaseComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHAIBaseComponent.OuterSingleton, Z_Construct_UClass_UHAIBaseComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHAIBaseComponent.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UHAIBaseComponent>()
{
	return UHAIBaseComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHAIBaseComponent);
UHAIBaseComponent::~UHAIBaseComponent() {}
// End Class UHAIBaseComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHAIBaseComponent, UHAIBaseComponent::StaticClass, TEXT("UHAIBaseComponent"), &Z_Registration_Info_UClass_UHAIBaseComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHAIBaseComponent), 2064867550U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_2944885851(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
