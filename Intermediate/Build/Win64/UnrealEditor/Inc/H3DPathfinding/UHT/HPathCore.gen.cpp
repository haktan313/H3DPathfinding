// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathfinding/Public/HPathCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPathCore() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	H3DPATHFINDING_API UClass* Z_Construct_UClass_AHPathCore();
	H3DPATHFINDING_API UClass* Z_Construct_UClass_AHPathCore_NoRegister();
	UPackage* Z_Construct_UPackage__Script_H3DPathfinding();
// End Cross Module References
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHPathCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHPathCore_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HPathCore.h" },
		{ "ModuleRelativePath", "Public/HPathCore.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHPathCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHPathCore>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_AHPathCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHPathCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHPathCore()
	{
		if (!Z_Registration_Info_UClass_AHPathCore.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHPathCore.OuterSingleton, Z_Construct_UClass_AHPathCore_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHPathCore.OuterSingleton;
	}
	template<> H3DPATHFINDING_API UClass* StaticClass<AHPathCore>()
	{
		return AHPathCore::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHPathCore);
	AHPathCore::~AHPathCore() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HPathCore_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HPathCore_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHPathCore, AHPathCore::StaticClass, TEXT("AHPathCore"), &Z_Registration_Info_UClass_AHPathCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHPathCore), 3992841265U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HPathCore_h_657276727(TEXT("/Script/H3DPathfinding"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HPathCore_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HPathCore_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
