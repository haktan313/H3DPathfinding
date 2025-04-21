// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/Decorators/BTDecorator_HasPatrolRoute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_HasPatrolRoute() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTDecorator_HasPatrolRoute();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTDecorator_HasPatrolRoute_NoRegister();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UBTDecorator_HasPatrolRoute
void UBTDecorator_HasPatrolRoute::StaticRegisterNativesUBTDecorator_HasPatrolRoute()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_HasPatrolRoute);
UClass* Z_Construct_UClass_UBTDecorator_HasPatrolRoute_NoRegister()
{
	return UBTDecorator_HasPatrolRoute::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_HasPatrolRoute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Decorators/BTDecorator_HasPatrolRoute.h" },
		{ "ModuleRelativePath", "Public/Decorators/BTDecorator_HasPatrolRoute.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_HasPatrolRoute>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBTDecorator_HasPatrolRoute_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_HasPatrolRoute_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_HasPatrolRoute_Statics::ClassParams = {
	&UBTDecorator_HasPatrolRoute::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_HasPatrolRoute_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_HasPatrolRoute_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_HasPatrolRoute()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_HasPatrolRoute.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_HasPatrolRoute.OuterSingleton, Z_Construct_UClass_UBTDecorator_HasPatrolRoute_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_HasPatrolRoute.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UBTDecorator_HasPatrolRoute>()
{
	return UBTDecorator_HasPatrolRoute::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_HasPatrolRoute);
UBTDecorator_HasPatrolRoute::~UBTDecorator_HasPatrolRoute() {}
// End Class UBTDecorator_HasPatrolRoute

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Decorators_BTDecorator_HasPatrolRoute_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_HasPatrolRoute, UBTDecorator_HasPatrolRoute::StaticClass, TEXT("UBTDecorator_HasPatrolRoute"), &Z_Registration_Info_UClass_UBTDecorator_HasPatrolRoute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_HasPatrolRoute), 2029886867U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Decorators_BTDecorator_HasPatrolRoute_h_2320744351(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Decorators_BTDecorator_HasPatrolRoute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Decorators_BTDecorator_HasPatrolRoute_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
