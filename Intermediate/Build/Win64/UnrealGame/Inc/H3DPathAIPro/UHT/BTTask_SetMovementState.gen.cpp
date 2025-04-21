// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/Tasks/BTTask_SetMovementState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SetMovementState() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_SetMovementState();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_SetMovementState_NoRegister();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_MovementState();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_MovementType();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UBTTask_SetMovementState
void UBTTask_SetMovementState::StaticRegisterNativesUBTTask_SetMovementState()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_SetMovementState);
UClass* Z_Construct_UClass_UBTTask_SetMovementState_NoRegister()
{
	return UBTTask_SetMovementState::StaticClass();
}
struct Z_Construct_UClass_UBTTask_SetMovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_SetMovementState.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetMovementState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementType_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetMovementState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_SetMovementState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_MovementState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SetMovementState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementType = { "MovementType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetMovementState, MovementType), Z_Construct_UEnum_H3DPathAIPro_E_MovementType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementType_MetaData), NewProp_MovementType_MetaData) }; // 1130632412
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_SetMovementState, MovementState), Z_Construct_UEnum_H3DPathAIPro_E_MovementState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementState_MetaData), NewProp_MovementState_MetaData) }; // 1934441174
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_SetMovementState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_SetMovementState_Statics::NewProp_MovementState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetMovementState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_SetMovementState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetMovementState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SetMovementState_Statics::ClassParams = {
	&UBTTask_SetMovementState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_SetMovementState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetMovementState_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_SetMovementState_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_SetMovementState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_SetMovementState()
{
	if (!Z_Registration_Info_UClass_UBTTask_SetMovementState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_SetMovementState.OuterSingleton, Z_Construct_UClass_UBTTask_SetMovementState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_SetMovementState.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UBTTask_SetMovementState>()
{
	return UBTTask_SetMovementState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SetMovementState);
UBTTask_SetMovementState::~UBTTask_SetMovementState() {}
// End Class UBTTask_SetMovementState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_SetMovementState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_SetMovementState, UBTTask_SetMovementState::StaticClass, TEXT("UBTTask_SetMovementState"), &Z_Registration_Info_UClass_UBTTask_SetMovementState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_SetMovementState), 3379021186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_SetMovementState_h_3671687067(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_SetMovementState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_SetMovementState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
