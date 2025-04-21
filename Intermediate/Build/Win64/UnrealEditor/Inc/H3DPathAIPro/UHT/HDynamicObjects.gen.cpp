// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/HDynamicObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHDynamicObjects() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UHDynamicObjects();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UHDynamicObjects_NoRegister();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UHDynamicObjects Function OnBeginOverlap
struct Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics
{
	struct HDynamicObjects_eventOnBeginOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HDynamicObjects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HDynamicObjects_eventOnBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HDynamicObjects_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHDynamicObjects, nullptr, "OnBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::HDynamicObjects_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::HDynamicObjects_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHDynamicObjects::execOnBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class UHDynamicObjects Function OnBeginOverlap

// Begin Class UHDynamicObjects Function OnEndOverlap
struct Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics
{
	struct HDynamicObjects_eventOnEndOverlap_Parms
	{
		AActor* OverlappedActor;
		AActor* OtherActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HDynamicObjects.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HDynamicObjects_eventOnEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HDynamicObjects_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHDynamicObjects, nullptr, "OnEndOverlap", nullptr, nullptr, Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::HDynamicObjects_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::HDynamicObjects_eventOnEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHDynamicObjects::execOnEndOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
	P_NATIVE_END;
}
// End Class UHDynamicObjects Function OnEndOverlap

// Begin Class UHDynamicObjects
void UHDynamicObjects::StaticRegisterNativesUHDynamicObjects()
{
	UClass* Class = UHDynamicObjects::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBeginOverlap", &UHDynamicObjects::execOnBeginOverlap },
		{ "OnEndOverlap", &UHDynamicObjects::execOnEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHDynamicObjects);
UClass* Z_Construct_UClass_UHDynamicObjects_NoRegister()
{
	return UHDynamicObjects::StaticClass();
}
struct Z_Construct_UClass_UHDynamicObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HDynamicObjects.h" },
		{ "ModuleRelativePath", "Public/HDynamicObjects.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHDynamicObjects_OnBeginOverlap, "OnBeginOverlap" }, // 1299396099
		{ &Z_Construct_UFunction_UHDynamicObjects_OnEndOverlap, "OnEndOverlap" }, // 1969171739
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHDynamicObjects>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHDynamicObjects_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHDynamicObjects_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHDynamicObjects_Statics::ClassParams = {
	&UHDynamicObjects::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHDynamicObjects_Statics::Class_MetaDataParams), Z_Construct_UClass_UHDynamicObjects_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHDynamicObjects()
{
	if (!Z_Registration_Info_UClass_UHDynamicObjects.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHDynamicObjects.OuterSingleton, Z_Construct_UClass_UHDynamicObjects_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHDynamicObjects.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UHDynamicObjects>()
{
	return UHDynamicObjects::StaticClass();
}
UHDynamicObjects::UHDynamicObjects(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHDynamicObjects);
UHDynamicObjects::~UHDynamicObjects() {}
// End Class UHDynamicObjects

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHDynamicObjects, UHDynamicObjects::StaticClass, TEXT("UHDynamicObjects"), &Z_Registration_Info_UClass_UHDynamicObjects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHDynamicObjects), 306731399U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h_3518701210(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
