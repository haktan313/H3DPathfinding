// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/HAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Damage_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UCrowdFollowingComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHAIController();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHAIController_NoRegister();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UHAIBaseComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class AHAIController Function OnPerceptionUpdated
struct Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics
{
	struct HAIController_eventOnPerceptionUpdated_Parms
	{
		TArray<AActor*> UpdatedActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UpdatedActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_Inner = { "UpdatedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors = { "UpdatedActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HAIController_eventOnPerceptionUpdated_Parms, UpdatedActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedActors_MetaData), NewProp_UpdatedActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::NewProp_UpdatedActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHAIController, nullptr, "OnPerceptionUpdated", nullptr, nullptr, Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::HAIController_eventOnPerceptionUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::HAIController_eventOnPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHAIController_OnPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHAIController_OnPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHAIController::execOnPerceptionUpdated)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_UpdatedActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPerceptionUpdated(Z_Param_Out_UpdatedActors);
	P_NATIVE_END;
}
// End Class AHAIController Function OnPerceptionUpdated

// Begin Class AHAIController
void AHAIController::StaticRegisterNativesAHAIController()
{
	UClass* Class = AHAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPerceptionUpdated", &AHAIController::execOnPerceptionUpdated },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHAIController);
UClass* Z_Construct_UClass_AHAIController_NoRegister()
{
	return AHAIController::StaticClass();
}
struct Z_Construct_UClass_AHAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "HAIController.h" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrowdFollowingComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HAIBaseComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/HAIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrowdFollowingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HAIBaseComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SightConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HearingConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageConfig;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHAIController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 2338746113
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_CrowdFollowingComponent = { "CrowdFollowingComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, CrowdFollowingComponent), Z_Construct_UClass_UCrowdFollowingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrowdFollowingComponent_MetaData), NewProp_CrowdFollowingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_HAIBaseComponent = { "HAIBaseComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, HAIBaseComponent), Z_Construct_UClass_UHAIBaseComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HAIBaseComponent_MetaData), NewProp_HAIBaseComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_AIPerceptionComponent = { "AIPerceptionComponent", nullptr, (EPropertyFlags)0x0114000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, AIPerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerceptionComponent_MetaData), NewProp_AIPerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_SightConfig = { "SightConfig", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, SightConfig), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightConfig_MetaData), NewProp_SightConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_HearingConfig = { "HearingConfig", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, HearingConfig), Z_Construct_UClass_UAISenseConfig_Hearing_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingConfig_MetaData), NewProp_HearingConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_DamageConfig = { "DamageConfig", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, DamageConfig), Z_Construct_UClass_UAISenseConfig_Damage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageConfig_MetaData), NewProp_DamageConfig_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHAIController_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHAIController, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetActor_MetaData), NewProp_targetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_CrowdFollowingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_HAIBaseComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_AIPerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_SightConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_HearingConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_DamageConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHAIController_Statics::NewProp_targetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHAIController_Statics::ClassParams = {
	&AHAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHAIController()
{
	if (!Z_Registration_Info_UClass_AHAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHAIController.OuterSingleton, Z_Construct_UClass_AHAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHAIController.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<AHAIController>()
{
	return AHAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHAIController);
AHAIController::~AHAIController() {}
// End Class AHAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHAIController, AHAIController::StaticClass, TEXT("AHAIController"), &Z_Registration_Info_UClass_AHAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHAIController), 1602598428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h_2449454169(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
