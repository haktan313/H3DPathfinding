// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/Decorators/BTDecorator_IsInTheRange.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsInTheRange() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTDecorator_IsInTheRange();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTDecorator_IsInTheRange_NoRegister();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UBTDecorator_IsInTheRange
void UBTDecorator_IsInTheRange::StaticRegisterNativesUBTDecorator_IsInTheRange()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_IsInTheRange);
UClass* Z_Construct_UClass_UBTDecorator_IsInTheRange_NoRegister()
{
	return UBTDecorator_IsInTheRange::StaticClass();
}
struct Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Decorators/BTDecorator_IsInTheRange.h" },
		{ "ModuleRelativePath", "Public/Decorators/BTDecorator_IsInTheRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_idealRangeValue_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/Decorators/BTDecorator_IsInTheRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableErorRadius_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/Decorators/BTDecorator_IsInTheRange.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetActorKey_MetaData[] = {
		{ "Category", "HAI" },
		{ "ModuleRelativePath", "Public/Decorators/BTDecorator_IsInTheRange.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_idealRangeValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableErorRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetActorKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsInTheRange>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_idealRangeValue = { "idealRangeValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_IsInTheRange, idealRangeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_idealRangeValue_MetaData), NewProp_idealRangeValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_AcceptableErorRadius = { "AcceptableErorRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_IsInTheRange, AcceptableErorRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcceptableErorRadius_MetaData), NewProp_AcceptableErorRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_targetActorKey = { "targetActorKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTDecorator_IsInTheRange, targetActorKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetActorKey_MetaData), NewProp_targetActorKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_idealRangeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_AcceptableErorRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::NewProp_targetActorKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::ClassParams = {
	&UBTDecorator_IsInTheRange::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTDecorator_IsInTheRange()
{
	if (!Z_Registration_Info_UClass_UBTDecorator_IsInTheRange.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_IsInTheRange.OuterSingleton, Z_Construct_UClass_UBTDecorator_IsInTheRange_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTDecorator_IsInTheRange.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UBTDecorator_IsInTheRange>()
{
	return UBTDecorator_IsInTheRange::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsInTheRange);
UBTDecorator_IsInTheRange::~UBTDecorator_IsInTheRange() {}
// End Class UBTDecorator_IsInTheRange

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Decorators_BTDecorator_IsInTheRange_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_IsInTheRange, UBTDecorator_IsInTheRange::StaticClass, TEXT("UBTDecorator_IsInTheRange"), &Z_Registration_Info_UClass_UBTDecorator_IsInTheRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_IsInTheRange), 1639444691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Decorators_BTDecorator_IsInTheRange_h_2857056019(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Decorators_BTDecorator_IsInTheRange_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Decorators_BTDecorator_IsInTheRange_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
