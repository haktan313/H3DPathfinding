// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/HPathCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPathCore() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHPathCore();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHPathCore_NoRegister();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class AHPathCore
void AHPathCore::StaticRegisterNativesAHPathCore()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHPathCore);
UClass* Z_Construct_UClass_AHPathCore_NoRegister()
{
	return AHPathCore::StaticClass();
}
struct Z_Construct_UClass_AHPathCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HPathCore.h" },
		{ "ModuleRelativePath", "Public/HPathCore.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHPathCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHPathCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHPathCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHPathCore_Statics::ClassParams = {
	&AHPathCore::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHPathCore_Statics::Class_MetaDataParams), Z_Construct_UClass_AHPathCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHPathCore()
{
	if (!Z_Registration_Info_UClass_AHPathCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHPathCore.OuterSingleton, Z_Construct_UClass_AHPathCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHPathCore.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<AHPathCore>()
{
	return AHPathCore::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHPathCore);
AHPathCore::~AHPathCore() {}
// End Class AHPathCore

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPathCore_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHPathCore, AHPathCore::StaticClass, TEXT("AHPathCore"), &Z_Registration_Info_UClass_AHPathCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHPathCore), 3990331934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPathCore_h_1446787756(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPathCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPathCore_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
