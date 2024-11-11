// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathfinding/Public/HDinamicObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHDinamicObjects() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	H3DPATHFINDING_API UClass* Z_Construct_UClass_UHDinamicObjects();
	H3DPATHFINDING_API UClass* Z_Construct_UClass_UHDinamicObjects_NoRegister();
	UPackage* Z_Construct_UPackage__Script_H3DPathfinding();
// End Cross Module References
	DEFINE_FUNCTION(UHDinamicObjects::execOnEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHDinamicObjects::execOnBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void UHDinamicObjects::StaticRegisterNativesUHDinamicObjects()
	{
		UClass* Class = UHDinamicObjects::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &UHDinamicObjects::execOnBeginOverlap },
			{ "OnEndOverlap", &UHDinamicObjects::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics
	{
		struct HDinamicObjects_eventOnBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HDinamicObjects_eventOnBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HDinamicObjects_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::NewProp_OverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HDinamicObjects.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHDinamicObjects, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::HDinamicObjects_eventOnBeginOverlap_Parms), Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics
	{
		struct HDinamicObjects_eventOnEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HDinamicObjects_eventOnEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HDinamicObjects_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::NewProp_OverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HDinamicObjects.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHDinamicObjects, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::HDinamicObjects_eventOnEndOverlap_Parms), Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHDinamicObjects);
	UClass* Z_Construct_UClass_UHDinamicObjects_NoRegister()
	{
		return UHDinamicObjects::StaticClass();
	}
	struct Z_Construct_UClass_UHDinamicObjects_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHDinamicObjects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHDinamicObjects_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHDinamicObjects_OnBeginOverlap, "OnBeginOverlap" }, // 1726550948
		{ &Z_Construct_UFunction_UHDinamicObjects_OnEndOverlap, "OnEndOverlap" }, // 1076224153
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHDinamicObjects_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HDinamicObjects.h" },
		{ "ModuleRelativePath", "Public/HDinamicObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHDinamicObjects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHDinamicObjects>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHDinamicObjects_Statics::ClassParams = {
		&UHDinamicObjects::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHDinamicObjects_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHDinamicObjects_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHDinamicObjects()
	{
		if (!Z_Registration_Info_UClass_UHDinamicObjects.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHDinamicObjects.OuterSingleton, Z_Construct_UClass_UHDinamicObjects_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHDinamicObjects.OuterSingleton;
	}
	template<> H3DPATHFINDING_API UClass* StaticClass<UHDinamicObjects>()
	{
		return UHDinamicObjects::StaticClass();
	}
	UHDinamicObjects::UHDinamicObjects(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHDinamicObjects);
	UHDinamicObjects::~UHDinamicObjects() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDinamicObjects_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDinamicObjects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHDinamicObjects, UHDinamicObjects::StaticClass, TEXT("UHDinamicObjects"), &Z_Registration_Info_UClass_UHDinamicObjects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHDinamicObjects), 810474429U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDinamicObjects_h_3633640459(TEXT("/Script/H3DPathfinding"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDinamicObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDinamicObjects_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
