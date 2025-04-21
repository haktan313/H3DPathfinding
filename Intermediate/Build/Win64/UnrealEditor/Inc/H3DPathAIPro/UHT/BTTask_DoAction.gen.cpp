// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/Tasks/BTTask_DoAction.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_DoAction() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_DoAction();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_DoAction_NoRegister();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UBTTask_DoAction Function ActionEnd
struct Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics
{
	struct BTTask_DoAction_eventActionEnd_Parms
	{
		E_DoActionResult DoActionResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DoActionResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DoActionResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::NewProp_DoActionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::NewProp_DoActionResult = { "DoActionResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_DoAction_eventActionEnd_Parms, DoActionResult), Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult, METADATA_PARAMS(0, nullptr) }; // 2089742983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::NewProp_DoActionResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::NewProp_DoActionResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_DoAction, nullptr, "ActionEnd", nullptr, nullptr, Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::BTTask_DoAction_eventActionEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::BTTask_DoAction_eventActionEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTTask_DoAction_ActionEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_DoAction_ActionEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_DoAction::execActionEnd)
{
	P_GET_ENUM(E_DoActionResult,Z_Param_DoActionResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActionEnd(E_DoActionResult(Z_Param_DoActionResult));
	P_NATIVE_END;
}
// End Class UBTTask_DoAction Function ActionEnd

// Begin Class UBTTask_DoAction
void UBTTask_DoAction::StaticRegisterNativesUBTTask_DoAction()
{
	UClass* Class = UBTTask_DoAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActionEnd", &UBTTask_DoAction::execActionEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_DoAction);
UClass* Z_Construct_UClass_UBTTask_DoAction_NoRegister()
{
	return UBTTask_DoAction::StaticClass();
}
struct Z_Construct_UClass_UBTTask_DoAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_DoAction.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionID_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanDoActionBoolKey_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyOwnerComp_MetaData[] = {
		{ "Comment", "//Blackboard key for checking if the AI character can do the action\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
		{ "ToolTip", "Blackboard key for checking if the AI character can do the action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HAIBaseComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenTooked_MetaData[] = {
		{ "Category", "Token" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetKey_MetaData[] = {
		{ "Category", "Token" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_DoAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActionID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanDoActionBoolKey;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyOwnerComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HAIBaseComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static void NewProp_TokenTooked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TokenTooked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_DoAction_ActionEnd, "ActionEnd" }, // 2406941312
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_DoAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_ActionID = { "ActionID", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_DoAction, ActionID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionID_MetaData), NewProp_ActionID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_CanDoActionBoolKey = { "CanDoActionBoolKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_DoAction, CanDoActionBoolKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanDoActionBoolKey_MetaData), NewProp_CanDoActionBoolKey_MetaData) }; // 3940742986
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_MyOwnerComp = { "MyOwnerComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_DoAction, MyOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyOwnerComp_MetaData), NewProp_MyOwnerComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_HAIBaseComponent = { "HAIBaseComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_DoAction, HAIBaseComponent), Z_Construct_UClass_UHAIBaseComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HAIBaseComponent_MetaData), NewProp_HAIBaseComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_DoAction, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pawn_MetaData), NewProp_Pawn_MetaData) };
void Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TokenTooked_SetBit(void* Obj)
{
	((UBTTask_DoAction*)Obj)->TokenTooked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TokenTooked = { "TokenTooked", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_DoAction), &Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TokenTooked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenTooked_MetaData), NewProp_TokenTooked_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TargetKey = { "TargetKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_DoAction, TargetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetKey_MetaData), NewProp_TargetKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_DoAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_ActionID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_CanDoActionBoolKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_MyOwnerComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_HAIBaseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TokenTooked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_DoAction_Statics::NewProp_TargetKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_DoAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_DoAction_Statics::ClassParams = {
	&UBTTask_DoAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_DoAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_DoAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_DoAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_DoAction()
{
	if (!Z_Registration_Info_UClass_UBTTask_DoAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_DoAction.OuterSingleton, Z_Construct_UClass_UBTTask_DoAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_DoAction.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UBTTask_DoAction>()
{
	return UBTTask_DoAction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_DoAction);
UBTTask_DoAction::~UBTTask_DoAction() {}
// End Class UBTTask_DoAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_DoAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_DoAction, UBTTask_DoAction::StaticClass, TEXT("UBTTask_DoAction"), &Z_Registration_Info_UClass_UBTTask_DoAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_DoAction), 3737997854U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_DoAction_h_883864463(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_DoAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_DoAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
