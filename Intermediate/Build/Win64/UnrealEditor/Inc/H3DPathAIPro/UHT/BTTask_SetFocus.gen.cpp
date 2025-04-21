// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/Tasks/BTTask_SetFocus.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetFocus() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_SetFocus();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_SetFocus_NoRegister();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UBTTask_SetFocus
void UBTTask_SetFocus::StaticRegisterNativesUBTTask_SetFocus()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SetFocus);
UClass* Z_Construct_UClass_UBTTask_SetFocus_NoRegister()
{
	return UBTTask_SetFocus::StaticClass();
}
struct Z_Construct_UClass_UBTTask_SetFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_SetFocus.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetFocus.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetActorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetFocus.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetActorKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetFocus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_SetFocus_Statics::NewProp_targetActorKey = { "targetActorKey", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetFocus, targetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetActorKey_MetaData), NewProp_targetActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetFocus_Statics::NewProp_targetActorKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocus_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_SetFocus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetFocus_Statics::ClassParams = {
	&UBTTask_SetFocus::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_SetFocus_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocus_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetFocus_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetFocus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_SetFocus()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetFocus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetFocus.OuterSingleton, Z_Construct_UClass_UBTTask_SetFocus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetFocus.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UBTTask_SetFocus>()
{
	return UBTTask_SetFocus::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetFocus);
UBTTask_SetFocus::~UBTTask_SetFocus() {}
// End Class UBTTask_SetFocus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_SetFocus_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetFocus, UBTTask_SetFocus::StaticClass, TEXT("UBTTask_SetFocus"), &Z_Registration_Info_UClass_UBTTask_SetFocus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetFocus), 785671558U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_SetFocus_h_2535402601(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_SetFocus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_SetFocus_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
