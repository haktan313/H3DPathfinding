// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/Tasks/BTTask_SetStatePassive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetStatePassive() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHAIController_NoRegister();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_SetStatePassive();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_SetStatePassive_NoRegister();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UBTTask_SetStatePassive Function SetStateAsPassive
struct Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetStatePassive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBTTask_SetStatePassive, nullptr, "SetStateAsPassive", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBTTask_SetStatePassive::execSetStateAsPassive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStateAsPassive();
	P_NATIVE_END;
}
// End Class UBTTask_SetStatePassive Function SetStateAsPassive

// Begin Class UBTTask_SetStatePassive
void UBTTask_SetStatePassive::StaticRegisterNativesUBTTask_SetStatePassive()
{
	UClass* Class = UBTTask_SetStatePassive::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetStateAsPassive", &UBTTask_SetStatePassive::execSetStateAsPassive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SetStatePassive);
UClass* Z_Construct_UClass_UBTTask_SetStatePassive_NoRegister()
{
	return UBTTask_SetStatePassive::StaticClass();
}
struct Z_Construct_UClass_UBTTask_SetStatePassive_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_SetStatePassive.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetStatePassive.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_howManySecondsBeforePassive_MetaData[] = {
		{ "Category", "Task" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetStatePassive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyOwnerComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetStatePassive.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetStatePassive.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_howManySecondsBeforePassive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyOwnerComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBTTask_SetStatePassive_SetStateAsPassive, "SetStateAsPassive" }, // 1848423677
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetStatePassive>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_howManySecondsBeforePassive = { "howManySecondsBeforePassive", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetStatePassive, howManySecondsBeforePassive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_howManySecondsBeforePassive_MetaData), NewProp_howManySecondsBeforePassive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_MyOwnerComp = { "MyOwnerComp", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetStatePassive, MyOwnerComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyOwnerComp_MetaData), NewProp_MyOwnerComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetStatePassive, AIController), Z_Construct_UClass_AHAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIController_MetaData), NewProp_AIController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetStatePassive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_howManySecondsBeforePassive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_MyOwnerComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetStatePassive_Statics::NewProp_AIController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_SetStatePassive_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetStatePassive_Statics::ClassParams = {
	&UBTTask_SetStatePassive::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBTTask_SetStatePassive_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetStatePassive_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetStatePassive_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_SetStatePassive()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetStatePassive.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetStatePassive.OuterSingleton, Z_Construct_UClass_UBTTask_SetStatePassive_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetStatePassive.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UBTTask_SetStatePassive>()
{
	return UBTTask_SetStatePassive::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetStatePassive);
UBTTask_SetStatePassive::~UBTTask_SetStatePassive() {}
// End Class UBTTask_SetStatePassive

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_SetStatePassive_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetStatePassive, UBTTask_SetStatePassive::StaticClass, TEXT("UBTTask_SetStatePassive"), &Z_Registration_Info_UClass_UBTTask_SetStatePassive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetStatePassive), 2428260629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_SetStatePassive_h_3447485123(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_SetStatePassive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_SetStatePassive_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
