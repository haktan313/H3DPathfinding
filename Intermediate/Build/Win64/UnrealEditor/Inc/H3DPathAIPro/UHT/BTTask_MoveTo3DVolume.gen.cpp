// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/Tasks/BTTask_MoveTo3DVolume.h"
#include "H3DPathAIPro/Public/StructuresEnums_H3DPathFinding.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MoveTo3DVolume() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_MoveTo3DVolume();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_MoveTo3DVolume_NoRegister();
H3DPATHAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FS_PathResult();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UBTTask_MoveTo3DVolume Function CheckPathsAvailability
struct Z_Construct_UFunction_UBTTask_MoveTo3DVolume_CheckPathsAvailability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MoveTo3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_MoveTo3DVolume_CheckPathsAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_MoveTo3DVolume, nullptr, "CheckPathsAvailability", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_MoveTo3DVolume_CheckPathsAvailability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_MoveTo3DVolume_CheckPathsAvailability_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTTask_MoveTo3DVolume_CheckPathsAvailability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_MoveTo3DVolume_CheckPathsAvailability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_MoveTo3DVolume::execCheckPathsAvailability)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckPathsAvailability();
	P_NATIVE_END;
}
// End Class UBTTask_MoveTo3DVolume Function CheckPathsAvailability

// Begin Class UBTTask_MoveTo3DVolume Function OnPathFound
struct Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics
{
	struct BTTask_MoveTo3DVolume_eventOnPathFound_Parms
	{
		FS_PathResult ResultRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MoveTo3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics::NewProp_ResultRef = { "ResultRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BTTask_MoveTo3DVolume_eventOnPathFound_Parms, ResultRef), Z_Construct_UScriptStruct_FS_PathResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultRef_MetaData), NewProp_ResultRef_MetaData) }; // 1644255724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics::NewProp_ResultRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_MoveTo3DVolume, nullptr, "OnPathFound", nullptr, nullptr, Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics::BTTask_MoveTo3DVolume_eventOnPathFound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics::BTTask_MoveTo3DVolume_eventOnPathFound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_MoveTo3DVolume::execOnPathFound)
{
	P_GET_STRUCT_REF(FS_PathResult,Z_Param_Out_ResultRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPathFound(Z_Param_Out_ResultRef);
	P_NATIVE_END;
}
// End Class UBTTask_MoveTo3DVolume Function OnPathFound

// Begin Class UBTTask_MoveTo3DVolume
void UBTTask_MoveTo3DVolume::StaticRegisterNativesUBTTask_MoveTo3DVolume()
{
	UClass* Class = UBTTask_MoveTo3DVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckPathsAvailability", &UBTTask_MoveTo3DVolume::execCheckPathsAvailability },
		{ "OnPathFound", &UBTTask_MoveTo3DVolume::execOnPathFound },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_MoveTo3DVolume);
UClass* Z_Construct_UClass_UBTTask_MoveTo3DVolume_NoRegister()
{
	return UBTTask_MoveTo3DVolume::StaticClass();
}
struct Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_MoveTo3DVolume.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MoveTo3DVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pointVectorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MoveTo3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MoveTo3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyOwnerComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MoveTo3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLine_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MoveTo3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLineDuration_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_MoveTo3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_pointVectorKey;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyOwnerComp;
	static void NewProp_bDrawDebugLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLine;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLineDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_MoveTo3DVolume_CheckPathsAvailability, "CheckPathsAvailability" }, // 718615795
		{ &Z_Construct_UFunction_UBTTask_MoveTo3DVolume_OnPathFound, "OnPathFound" }, // 458487057
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MoveTo3DVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::NewProp_pointVectorKey = { "pointVectorKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo3DVolume, pointVectorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pointVectorKey_MetaData), NewProp_pointVectorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo3DVolume, Tolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tolerance_MetaData), NewProp_Tolerance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::NewProp_MyOwnerComp = { "MyOwnerComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo3DVolume, MyOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyOwnerComp_MetaData), NewProp_MyOwnerComp_MetaData) };
void Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::NewProp_bDrawDebugLine_SetBit(void* Obj)
{
	((UBTTask_MoveTo3DVolume*)Obj)->bDrawDebugLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::NewProp_bDrawDebugLine = { "bDrawDebugLine", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTTask_MoveTo3DVolume), &Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::NewProp_bDrawDebugLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugLine_MetaData), NewProp_bDrawDebugLine_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::NewProp_DebugLineDuration = { "DebugLineDuration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_MoveTo3DVolume, DebugLineDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLineDuration_MetaData), NewProp_DebugLineDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::NewProp_pointVectorKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::NewProp_Tolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::NewProp_MyOwnerComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::NewProp_bDrawDebugLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::NewProp_DebugLineDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::ClassParams = {
	&UBTTask_MoveTo3DVolume::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_MoveTo3DVolume()
{
	if (!Z_Registration_Info_UClass_UBTTask_MoveTo3DVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_MoveTo3DVolume.OuterSingleton, Z_Construct_UClass_UBTTask_MoveTo3DVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_MoveTo3DVolume.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UBTTask_MoveTo3DVolume>()
{
	return UBTTask_MoveTo3DVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveTo3DVolume);
UBTTask_MoveTo3DVolume::~UBTTask_MoveTo3DVolume() {}
// End Class UBTTask_MoveTo3DVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_MoveTo3DVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_MoveTo3DVolume, UBTTask_MoveTo3DVolume::StaticClass, TEXT("UBTTask_MoveTo3DVolume"), &Z_Registration_Info_UClass_UBTTask_MoveTo3DVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_MoveTo3DVolume), 252366734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_MoveTo3DVolume_h_2534516272(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_MoveTo3DVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_MoveTo3DVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
