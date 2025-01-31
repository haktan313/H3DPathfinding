// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathfinding/Public/HVolume3D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHVolume3D() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	H3DPATHFINDING_API UClass* Z_Construct_UClass_AHPathCore_NoRegister();
	H3DPATHFINDING_API UClass* Z_Construct_UClass_AHVolume3D();
	H3DPATHFINDING_API UClass* Z_Construct_UClass_AHVolume3D_NoRegister();
	H3DPATHFINDING_API UFunction* Z_Construct_UDelegateFunction_H3DPathfinding_OnGridsUpdated__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_H3DPathfinding();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_H3DPathfinding_OnGridsUpdated__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_H3DPathfinding_OnGridsUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_H3DPathfinding_OnGridsUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_H3DPathfinding, nullptr, "OnGridsUpdated__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_H3DPathfinding_OnGridsUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_H3DPathfinding_OnGridsUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_H3DPathfinding_OnGridsUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_H3DPathfinding_OnGridsUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnGridsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnGridsUpdated)
{
	OnGridsUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
	void AHVolume3D::StaticRegisterNativesAHVolume3D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHVolume3D);
	UClass* Z_Construct_UClass_AHVolume3D_NoRegister()
	{
		return AHVolume3D::StaticClass();
	}
	struct Z_Construct_UClass_AHVolume3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathCore_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PathCore;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicObjectsLastPosition_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicObjectsLastPosition_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicObjectsLastPosition_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DynamicObjectsLastPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugGridsFromPlayer_MetaData[];
#endif
		static void NewProp_bDrawDebugGridsFromPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugGridsFromPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHVolume3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_H3DPathfinding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHVolume3D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//delegate for when the grids are updated by DinamicObjects\n" },
		{ "IncludePath", "HVolume3D.h" },
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
		{ "ToolTip", "delegate for when the grids are updated by DinamicObjects" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHVolume3D_Statics::NewProp_VolumeBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_VolumeBox = { "VolumeBox", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHVolume3D, VolumeBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHVolume3D_Statics::NewProp_VolumeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHVolume3D_Statics::NewProp_VolumeBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHVolume3D_Statics::NewProp_PathCore_MetaData[] = {
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_PathCore = { "PathCore", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHVolume3D, PathCore), Z_Construct_UClass_AHPathCore_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHVolume3D_Statics::NewProp_PathCore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHVolume3D_Statics::NewProp_PathCore_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjects_Inner = { "DynamicObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjects = { "DynamicObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHVolume3D, DynamicObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjects_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition_ValueProp = { "DynamicObjectsLastPosition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition_Key_KeyProp = { "DynamicObjectsLastPosition_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition = { "DynamicObjectsLastPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHVolume3D, DynamicObjectsLastPosition), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHVolume3D_Statics::NewProp_bDrawDebugGridsFromPlayer_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
#endif
	void Z_Construct_UClass_AHVolume3D_Statics::NewProp_bDrawDebugGridsFromPlayer_SetBit(void* Obj)
	{
		((AHVolume3D*)Obj)->bDrawDebugGridsFromPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_bDrawDebugGridsFromPlayer = { "bDrawDebugGridsFromPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AHVolume3D), &Z_Construct_UClass_AHVolume3D_Statics::NewProp_bDrawDebugGridsFromPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHVolume3D_Statics::NewProp_bDrawDebugGridsFromPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHVolume3D_Statics::NewProp_bDrawDebugGridsFromPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHVolume3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_VolumeBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_PathCore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_bDrawDebugGridsFromPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHVolume3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHVolume3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHVolume3D_Statics::ClassParams = {
		&AHVolume3D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHVolume3D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHVolume3D_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHVolume3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHVolume3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHVolume3D()
	{
		if (!Z_Registration_Info_UClass_AHVolume3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHVolume3D.OuterSingleton, Z_Construct_UClass_AHVolume3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHVolume3D.OuterSingleton;
	}
	template<> H3DPATHFINDING_API UClass* StaticClass<AHVolume3D>()
	{
		return AHVolume3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHVolume3D);
	AHVolume3D::~AHVolume3D() {}
	struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HVolume3D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HVolume3D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHVolume3D, AHVolume3D::StaticClass, TEXT("AHVolume3D"), &Z_Registration_Info_UClass_AHVolume3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHVolume3D), 1845595154U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HVolume3D_h_434361848(TEXT("/Script/H3DPathfinding"),
		Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HVolume3D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HVolume3D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
