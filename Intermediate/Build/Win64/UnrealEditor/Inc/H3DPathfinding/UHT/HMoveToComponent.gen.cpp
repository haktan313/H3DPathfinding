// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathfinding/Public/HMoveToComponent.h"
#include "H3DPathfinding/Public/StructuresEnums_H3DPathFinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHMoveToComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	H3DPATHFINDING_API UClass* Z_Construct_UClass_AHVolume3D_NoRegister();
	H3DPATHFINDING_API UClass* Z_Construct_UClass_UHMoveToComponent();
	H3DPATHFINDING_API UClass* Z_Construct_UClass_UHMoveToComponent_NoRegister();
	H3DPATHFINDING_API UScriptStruct* Z_Construct_UScriptStruct_FS_PathResult();
	UPackage* Z_Construct_UPackage__Script_H3DPathfinding();
// End Cross Module References
	DEFINE_FUNCTION(UHMoveToComponent::execCheckAvailability)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckAvailability();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHMoveToComponent::execOnPathFound)
	{
		P_GET_STRUCT_REF(FS_PathResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPathFound(Z_Param_Out_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHMoveToComponent::execHMoveTo)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorRef);
		P_GET_OBJECT(AHVolume3D,Z_Param_VolumeRef);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ToleranceRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HMoveTo(Z_Param_ActorRef,Z_Param_VolumeRef,Z_Param_ToleranceRef);
		P_NATIVE_END;
	}
	void UHMoveToComponent::StaticRegisterNativesUHMoveToComponent()
	{
		UClass* Class = UHMoveToComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckAvailability", &UHMoveToComponent::execCheckAvailability },
			{ "HMoveTo", &UHMoveToComponent::execHMoveTo },
			{ "OnPathFound", &UHMoveToComponent::execOnPathFound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHMoveToComponent_CheckAvailability_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHMoveToComponent_CheckAvailability_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//When path is found, this function is called by OnPathFound delegate.\n" },
		{ "ModuleRelativePath", "Public/HMoveToComponent.h" },
		{ "ToolTip", "When path is found, this function is called by OnPathFound delegate." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHMoveToComponent_CheckAvailability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHMoveToComponent, nullptr, "CheckAvailability", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHMoveToComponent_CheckAvailability_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHMoveToComponent_CheckAvailability_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHMoveToComponent_CheckAvailability()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHMoveToComponent_CheckAvailability_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics
	{
		struct HMoveToComponent_eventHMoveTo_Parms
		{
			AActor* ActorRef;
			AHVolume3D* VolumeRef;
			float ToleranceRef;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeRef;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ToleranceRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::NewProp_ActorRef = { "ActorRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HMoveToComponent_eventHMoveTo_Parms, ActorRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::NewProp_VolumeRef = { "VolumeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HMoveToComponent_eventHMoveTo_Parms, VolumeRef), Z_Construct_UClass_AHVolume3D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::NewProp_ToleranceRef = { "ToleranceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HMoveToComponent_eventHMoveTo_Parms, ToleranceRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::NewProp_ActorRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::NewProp_VolumeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::NewProp_ToleranceRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "MoveToComponent" },
		{ "ModuleRelativePath", "Public/HMoveToComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHMoveToComponent, nullptr, "HMoveTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::HMoveToComponent_eventHMoveTo_Parms), Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHMoveToComponent_HMoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHMoveToComponent_HMoveTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics
	{
		struct HMoveToComponent_eventOnPathFound_Parms
		{
			FS_PathResult Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HMoveToComponent_eventOnPathFound_Parms, Result), Z_Construct_UScriptStruct_FS_PathResult, METADATA_PARAMS(Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::NewProp_Result_MetaData)) }; // 2741538086
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Cooldown for finding the path.\n" },
		{ "ModuleRelativePath", "Public/HMoveToComponent.h" },
		{ "ToolTip", "Cooldown for finding the path." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHMoveToComponent, nullptr, "OnPathFound", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::HMoveToComponent_eventOnPathFound_Parms), Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHMoveToComponent_OnPathFound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHMoveToComponent_OnPathFound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHMoveToComponent);
	UClass* Z_Construct_UClass_UHMoveToComponent_NoRegister()
	{
		return UHMoveToComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHMoveToComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugLine_MetaData[];
#endif
		static void NewProp_bDrawDebugLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugLineDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugLineDuration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHMoveToComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHMoveToComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHMoveToComponent_CheckAvailability, "CheckAvailability" }, // 2896829644
		{ &Z_Construct_UFunction_UHMoveToComponent_HMoveTo, "HMoveTo" }, // 3962344674
		{ &Z_Construct_UFunction_UHMoveToComponent_OnPathFound, "OnPathFound" }, // 528575646
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHMoveToComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HMoveToComponent.h" },
		{ "ModuleRelativePath", "Public/HMoveToComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "MoveToComponent" },
		{ "ModuleRelativePath", "Public/HMoveToComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHMoveToComponent, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_bDrawDebugLine_MetaData[] = {
		{ "Category", "MoveToComponent" },
		{ "Comment", "//Target location of the actor.\n" },
		{ "ModuleRelativePath", "Public/HMoveToComponent.h" },
		{ "ToolTip", "Target location of the actor." },
	};
#endif
	void Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_bDrawDebugLine_SetBit(void* Obj)
	{
		((UHMoveToComponent*)Obj)->bDrawDebugLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_bDrawDebugLine = { "bDrawDebugLine", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHMoveToComponent), &Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_bDrawDebugLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_bDrawDebugLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_bDrawDebugLine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_DebugLineDuration_MetaData[] = {
		{ "Category", "MoveToComponent" },
		{ "Comment", "//If the debug line should be drawn or not.\n" },
		{ "ModuleRelativePath", "Public/HMoveToComponent.h" },
		{ "ToolTip", "If the debug line should be drawn or not." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_DebugLineDuration = { "DebugLineDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHMoveToComponent, DebugLineDuration), METADATA_PARAMS(Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_DebugLineDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_DebugLineDuration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHMoveToComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_TargetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_bDrawDebugLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHMoveToComponent_Statics::NewProp_DebugLineDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHMoveToComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHMoveToComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHMoveToComponent_Statics::ClassParams = {
		&UHMoveToComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHMoveToComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHMoveToComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHMoveToComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHMoveToComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHMoveToComponent()
	{
		if (!Z_Registration_Info_UClass_UHMoveToComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHMoveToComponent.OuterSingleton, Z_Construct_UClass_UHMoveToComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHMoveToComponent.OuterSingleton;
	}
	template<> H3DPATHFINDING_API UClass* StaticClass<UHMoveToComponent>()
	{
		return UHMoveToComponent::StaticClass();
	}
	UHMoveToComponent::UHMoveToComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHMoveToComponent);
	UHMoveToComponent::~UHMoveToComponent() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHMoveToComponent, UHMoveToComponent::StaticClass, TEXT("UHMoveToComponent"), &Z_Registration_Info_UClass_UHMoveToComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHMoveToComponent), 710324125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_1035762376(TEXT("/Script/H3DPathfinding"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Documents_Unreal_Projects_MyProject_Build_BuiltPlugins_H3DPathfinding_5_2_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
