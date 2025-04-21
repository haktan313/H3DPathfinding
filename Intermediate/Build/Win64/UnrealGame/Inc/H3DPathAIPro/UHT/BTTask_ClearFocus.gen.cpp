// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/Tasks/BTTask_ClearFocus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_ClearFocus() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_ClearFocus();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_ClearFocus_NoRegister();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UBTTask_ClearFocus
void UBTTask_ClearFocus::StaticRegisterNativesUBTTask_ClearFocus()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_ClearFocus);
UClass* Z_Construct_UClass_UBTTask_ClearFocus_NoRegister()
{
	return UBTTask_ClearFocus::StaticClass();
}
struct Z_Construct_UClass_UBTTask_ClearFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_ClearFocus.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_ClearFocus.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_ClearFocus>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTTask_ClearFocus_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ClearFocus_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_ClearFocus_Statics::ClassParams = {
	&UBTTask_ClearFocus::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_ClearFocus_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_ClearFocus_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_ClearFocus()
{
	if (!Z_Registration_Info_UClass_UBTTask_ClearFocus.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_ClearFocus.OuterSingleton, Z_Construct_UClass_UBTTask_ClearFocus_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_ClearFocus.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UBTTask_ClearFocus>()
{
	return UBTTask_ClearFocus::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_ClearFocus);
UBTTask_ClearFocus::~UBTTask_ClearFocus() {}
// End Class UBTTask_ClearFocus

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_ClearFocus_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_ClearFocus, UBTTask_ClearFocus::StaticClass, TEXT("UBTTask_ClearFocus"), &Z_Registration_Info_UClass_UBTTask_ClearFocus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_ClearFocus), 3202957786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_ClearFocus_h_1256379084(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_ClearFocus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_ClearFocus_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
