// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/Tasks/BTTask_FindRandomPointOn3DVolume.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindRandomPointOn3DVolume() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_NoRegister();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UBTTask_FindRandomPointOn3DVolume
void UBTTask_FindRandomPointOn3DVolume::StaticRegisterNativesUBTTask_FindRandomPointOn3DVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FindRandomPointOn3DVolume);
UClass* Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_NoRegister()
{
	return UBTTask_FindRandomPointOn3DVolume::StaticClass();
}
struct Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_FindRandomPointOn3DVolume.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FindRandomPointOn3DVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FindRandomPointOn3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dimention_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FindRandomPointOn3DVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pointVectorKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FindRandomPointOn3DVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Dimention;
	static const UECodeGen_Private::FStructPropertyParams NewProp_pointVectorKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindRandomPointOn3DVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindRandomPointOn3DVolume, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::NewProp_Dimention = { "Dimention", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindRandomPointOn3DVolume, Dimention), Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dimention_MetaData), NewProp_Dimention_MetaData) }; // 1676900769
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::NewProp_pointVectorKey = { "pointVectorKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindRandomPointOn3DVolume, pointVectorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pointVectorKey_MetaData), NewProp_pointVectorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::NewProp_Dimention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::NewProp_pointVectorKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::ClassParams = {
	&UBTTask_FindRandomPointOn3DVolume::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume()
{
	if (!Z_Registration_Info_UClass_UBTTask_FindRandomPointOn3DVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindRandomPointOn3DVolume.OuterSingleton, Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_FindRandomPointOn3DVolume.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UBTTask_FindRandomPointOn3DVolume>()
{
	return UBTTask_FindRandomPointOn3DVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindRandomPointOn3DVolume);
UBTTask_FindRandomPointOn3DVolume::~UBTTask_FindRandomPointOn3DVolume() {}
// End Class UBTTask_FindRandomPointOn3DVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_FindRandomPointOn3DVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindRandomPointOn3DVolume, UBTTask_FindRandomPointOn3DVolume::StaticClass, TEXT("UBTTask_FindRandomPointOn3DVolume"), &Z_Registration_Info_UClass_UBTTask_FindRandomPointOn3DVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindRandomPointOn3DVolume), 587903317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_FindRandomPointOn3DVolume_h_951314518(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_FindRandomPointOn3DVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_FindRandomPointOn3DVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
