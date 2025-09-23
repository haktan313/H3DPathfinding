// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathCore.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeH3DPathCore() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
H3DPATHFINDING_API UClass* Z_Construct_UClass_AH3DPathCore();
H3DPATHFINDING_API UClass* Z_Construct_UClass_AH3DPathCore_NoRegister();
UPackage* Z_Construct_UPackage__Script_H3DPathfinding();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AH3DPathCore *************************************************************
void AH3DPathCore::StaticRegisterNativesAH3DPathCore()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AH3DPathCore;
UClass* AH3DPathCore::GetPrivateStaticClass()
{
	using TClass = AH3DPathCore;
	if (!Z_Registration_Info_UClass_AH3DPathCore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("H3DPathCore"),
			Z_Registration_Info_UClass_AH3DPathCore.InnerSingleton,
			StaticRegisterNativesAH3DPathCore,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AH3DPathCore.InnerSingleton;
}
UClass* Z_Construct_UClass_AH3DPathCore_NoRegister()
{
	return AH3DPathCore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AH3DPathCore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "H3DPathCore.h" },
		{ "ModuleRelativePath", "Public/H3DPathCore.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AH3DPathCore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AH3DPathCore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AH3DPathCore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AH3DPathCore_Statics::ClassParams = {
	&AH3DPathCore::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AH3DPathCore_Statics::Class_MetaDataParams), Z_Construct_UClass_AH3DPathCore_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AH3DPathCore()
{
	if (!Z_Registration_Info_UClass_AH3DPathCore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AH3DPathCore.OuterSingleton, Z_Construct_UClass_AH3DPathCore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AH3DPathCore.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AH3DPathCore);
AH3DPathCore::~AH3DPathCore() {}
// ********** End Class AH3DPathCore ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DPathCore_h__Script_H3DPathfinding_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AH3DPathCore, AH3DPathCore::StaticClass, TEXT("AH3DPathCore"), &Z_Registration_Info_UClass_AH3DPathCore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AH3DPathCore), 600661096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DPathCore_h__Script_H3DPathfinding_1562879423(TEXT("/Script/H3DPathfinding"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DPathCore_h__Script_H3DPathfinding_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DPathCore_h__Script_H3DPathfinding_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
