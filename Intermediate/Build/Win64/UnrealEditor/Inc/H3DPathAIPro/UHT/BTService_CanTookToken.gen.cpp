// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/Services/BTService_CanTookToken.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_CanTookToken() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTService_CanTookToken();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTService_CanTookToken_NoRegister();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UBTService_CanTookToken
void UBTService_CanTookToken::StaticRegisterNativesUBTService_CanTookToken()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_CanTookToken);
UClass* Z_Construct_UClass_UBTService_CanTookToken_NoRegister()
{
	return UBTService_CanTookToken::StaticClass();
}
struct Z_Construct_UClass_UBTService_CanTookToken_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Services/BTService_CanTookToken.h" },
		{ "ModuleRelativePath", "Public/Services/BTService_CanTookToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_amountOfTokenNedded_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Services/BTService_CanTookToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Services/BTService_CanTookToken.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoActionBoolKey_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Services/BTService_CanTookToken.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_amountOfTokenNedded;
	static const UECodeGen_Private::FStructPropertyParams NewProp_targetKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoActionBoolKey;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_CanTookToken>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_amountOfTokenNedded = { "amountOfTokenNedded", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_CanTookToken, amountOfTokenNedded), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_amountOfTokenNedded_MetaData), NewProp_amountOfTokenNedded_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_targetKey = { "targetKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_CanTookToken, targetKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetKey_MetaData), NewProp_targetKey_MetaData) }; // 3940742986
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_DoActionBoolKey = { "DoActionBoolKey", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_CanTookToken, DoActionBoolKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoActionBoolKey_MetaData), NewProp_DoActionBoolKey_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_CanTookToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_amountOfTokenNedded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_targetKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_CanTookToken_Statics::NewProp_DoActionBoolKey,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CanTookToken_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTService_CanTookToken_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CanTookToken_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_CanTookToken_Statics::ClassParams = {
	&UBTService_CanTookToken::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTService_CanTookToken_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CanTookToken_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_CanTookToken_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_CanTookToken_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTService_CanTookToken()
{
	if (!Z_Registration_Info_UClass_UBTService_CanTookToken.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_CanTookToken.OuterSingleton, Z_Construct_UClass_UBTService_CanTookToken_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTService_CanTookToken.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UBTService_CanTookToken>()
{
	return UBTService_CanTookToken::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_CanTookToken);
UBTService_CanTookToken::~UBTService_CanTookToken() {}
// End Class UBTService_CanTookToken

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Services_BTService_CanTookToken_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_CanTookToken, UBTService_CanTookToken::StaticClass, TEXT("UBTService_CanTookToken"), &Z_Registration_Info_UClass_UBTService_CanTookToken, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_CanTookToken), 1882896309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Services_BTService_CanTookToken_h_3234952962(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Services_BTService_CanTookToken_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Services_BTService_CanTookToken_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
