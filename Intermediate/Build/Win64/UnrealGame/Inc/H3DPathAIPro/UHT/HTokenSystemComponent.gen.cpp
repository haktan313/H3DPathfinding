// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/HTokenSystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHTokenSystemComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UHTokenSystemComponent();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UHTokenSystemComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UHTokenSystemComponent Function GiveTokenToTarget
struct Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics
{
	struct HTokenSystemComponent_eventGiveTokenToTarget_Parms
	{
		int32 amount;
		AActor* targetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HToken" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventGiveTokenToTarget_Parms, amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventGiveTokenToTarget_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::NewProp_amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::NewProp_targetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTokenSystemComponent, nullptr, "GiveTokenToTarget", nullptr, nullptr, Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::HTokenSystemComponent_eventGiveTokenToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::HTokenSystemComponent_eventGiveTokenToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHTokenSystemComponent::execGiveTokenToTarget)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_amount);
	P_GET_OBJECT(AActor,Z_Param_targetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveTokenToTarget(Z_Param_amount,Z_Param_targetActor);
	P_NATIVE_END;
}
// End Class UHTokenSystemComponent Function GiveTokenToTarget

// Begin Class UHTokenSystemComponent Function TookTokenFromTarget
struct Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics
{
	struct HTokenSystemComponent_eventTookTokenFromTarget_Parms
	{
		int32 amount;
		AActor* targetActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HToken" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_amount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_targetActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventTookTokenFromTarget_Parms, amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_targetActor = { "targetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HTokenSystemComponent_eventTookTokenFromTarget_Parms, targetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((HTokenSystemComponent_eventTookTokenFromTarget_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(HTokenSystemComponent_eventTookTokenFromTarget_Parms), &Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_targetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHTokenSystemComponent, nullptr, "TookTokenFromTarget", nullptr, nullptr, Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::HTokenSystemComponent_eventTookTokenFromTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::HTokenSystemComponent_eventTookTokenFromTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHTokenSystemComponent::execTookTokenFromTarget)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_amount);
	P_GET_OBJECT(AActor,Z_Param_targetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TookTokenFromTarget(Z_Param_amount,Z_Param_targetActor);
	P_NATIVE_END;
}
// End Class UHTokenSystemComponent Function TookTokenFromTarget

// Begin Class UHTokenSystemComponent
void UHTokenSystemComponent::StaticRegisterNativesUHTokenSystemComponent()
{
	UClass* Class = UHTokenSystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GiveTokenToTarget", &UHTokenSystemComponent::execGiveTokenToTarget },
		{ "TookTokenFromTarget", &UHTokenSystemComponent::execTookTokenFromTarget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHTokenSystemComponent);
UClass* Z_Construct_UClass_UHTokenSystemComponent_NoRegister()
{
	return UHTokenSystemComponent::StaticClass();
}
struct Z_Construct_UClass_UHTokenSystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HTokenSystemComponent.h" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentToken_MetaData[] = {
		{ "Category", "HToken" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TokenMap_MetaData[] = {
		{ "Category", "HToken" },
		{ "ModuleRelativePath", "Public/HTokenSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentToken;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TokenMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TokenMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_TokenMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHTokenSystemComponent_GiveTokenToTarget, "GiveTokenToTarget" }, // 3326624943
		{ &Z_Construct_UFunction_UHTokenSystemComponent_TookTokenFromTarget, "TookTokenFromTarget" }, // 668860247
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHTokenSystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_currentToken = { "currentToken", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHTokenSystemComponent, currentToken), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentToken_MetaData), NewProp_currentToken_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap_ValueProp = { "TokenMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap_Key_KeyProp = { "TokenMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap = { "TokenMap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHTokenSystemComponent, TokenMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TokenMap_MetaData), NewProp_TokenMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHTokenSystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_currentToken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHTokenSystemComponent_Statics::NewProp_TokenMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHTokenSystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHTokenSystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHTokenSystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHTokenSystemComponent_Statics::ClassParams = {
	&UHTokenSystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UHTokenSystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UHTokenSystemComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHTokenSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHTokenSystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHTokenSystemComponent()
{
	if (!Z_Registration_Info_UClass_UHTokenSystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHTokenSystemComponent.OuterSingleton, Z_Construct_UClass_UHTokenSystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHTokenSystemComponent.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UHTokenSystemComponent>()
{
	return UHTokenSystemComponent::StaticClass();
}
UHTokenSystemComponent::UHTokenSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHTokenSystemComponent);
UHTokenSystemComponent::~UHTokenSystemComponent() {}
// End Class UHTokenSystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHTokenSystemComponent, UHTokenSystemComponent::StaticClass, TEXT("UHTokenSystemComponent"), &Z_Registration_Info_UClass_UHTokenSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHTokenSystemComponent), 2025702839U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h_2913172106(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
