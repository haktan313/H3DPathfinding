// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/HVolume3D.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHVolume3D() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHPathCore_NoRegister();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHVolume3D();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHVolume3D_NoRegister();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention();
H3DPATHAIPRO_API UFunction* Z_Construct_UDelegateFunction_H3DPathAIPro_OnGridsUpdated__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Delegate FOnGridsUpdated
struct Z_Construct_UDelegateFunction_H3DPathAIPro_OnGridsUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_H3DPathAIPro_OnGridsUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_H3DPathAIPro, nullptr, "OnGridsUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_H3DPathAIPro_OnGridsUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_H3DPathAIPro_OnGridsUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_H3DPathAIPro_OnGridsUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_H3DPathAIPro_OnGridsUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGridsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnGridsUpdated)
{
	OnGridsUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGridsUpdated

// Begin Class AHVolume3D Function GetRandomPointOn3DVolume
struct Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics
{
	struct HVolume3D_eventGetRandomPointOn3DVolume_Parms
	{
		FVector Origin;
		float Radius;
		TEnumAsByte<E_RandomPointsDimention> Dimention;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Haktan|Pathfinding" },
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Dimention;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HVolume3D_eventGetRandomPointOn3DVolume_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HVolume3D_eventGetRandomPointOn3DVolume_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::NewProp_Dimention = { "Dimention", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HVolume3D_eventGetRandomPointOn3DVolume_Parms, Dimention), Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention, METADATA_PARAMS(0, nullptr) }; // 1676900769
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HVolume3D_eventGetRandomPointOn3DVolume_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::NewProp_Dimention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHVolume3D, nullptr, "GetRandomPointOn3DVolume", nullptr, nullptr, Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::HVolume3D_eventGetRandomPointOn3DVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::HVolume3D_eventGetRandomPointOn3DVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHVolume3D::execGetRandomPointOn3DVolume)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FByteProperty,Z_Param_Dimention);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRandomPointOn3DVolume(Z_Param_Out_Origin,Z_Param_Radius,E_RandomPointsDimention(Z_Param_Dimention));
	P_NATIVE_END;
}
// End Class AHVolume3D Function GetRandomPointOn3DVolume

// Begin Class AHVolume3D Function GetRandomReachablePointOn3DVolume
struct Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics
{
	struct HVolume3D_eventGetRandomReachablePointOn3DVolume_Parms
	{
		FVector Origin;
		float Radius;
		AActor* ActorRef;
		TEnumAsByte<E_RandomPointsDimention> Dimention;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Haktan|Pathfinding" },
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorRef;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Dimention;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HVolume3D_eventGetRandomReachablePointOn3DVolume_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HVolume3D_eventGetRandomReachablePointOn3DVolume_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::NewProp_ActorRef = { "ActorRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HVolume3D_eventGetRandomReachablePointOn3DVolume_Parms, ActorRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::NewProp_Dimention = { "Dimention", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HVolume3D_eventGetRandomReachablePointOn3DVolume_Parms, Dimention), Z_Construct_UEnum_H3DPathAIPro_E_RandomPointsDimention, METADATA_PARAMS(0, nullptr) }; // 1676900769
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HVolume3D_eventGetRandomReachablePointOn3DVolume_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::NewProp_ActorRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::NewProp_Dimention,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHVolume3D, nullptr, "GetRandomReachablePointOn3DVolume", nullptr, nullptr, Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::HVolume3D_eventGetRandomReachablePointOn3DVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::HVolume3D_eventGetRandomReachablePointOn3DVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHVolume3D::execGetRandomReachablePointOn3DVolume)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_OBJECT(AActor,Z_Param_ActorRef);
	P_GET_PROPERTY(FByteProperty,Z_Param_Dimention);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRandomReachablePointOn3DVolume(Z_Param_Out_Origin,Z_Param_Radius,Z_Param_ActorRef,E_RandomPointsDimention(Z_Param_Dimention));
	P_NATIVE_END;
}
// End Class AHVolume3D Function GetRandomReachablePointOn3DVolume

// Begin Class AHVolume3D
void AHVolume3D::StaticRegisterNativesAHVolume3D()
{
	UClass* Class = AHVolume3D::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRandomPointOn3DVolume", &AHVolume3D::execGetRandomPointOn3DVolume },
		{ "GetRandomReachablePointOn3DVolume", &AHVolume3D::execGetRandomReachablePointOn3DVolume },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHVolume3D);
UClass* Z_Construct_UClass_AHVolume3D_NoRegister()
{
	return AHVolume3D::StaticClass();
}
struct Z_Construct_UClass_AHVolume3D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "//delegate for when the grids are updated by DinamicObjects\n" },
		{ "IncludePath", "HVolume3D.h" },
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
		{ "ToolTip", "delegate for when the grids are updated by DinamicObjects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathCore_MetaData[] = {
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicObjectsLastPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugGridsFromPlayer_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDistance_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetObjects_MetaData[] = {
		{ "Category", "Shape" },
		{ "ModuleRelativePath", "Public/HVolume3D.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VolumeBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathCore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DynamicObjects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicObjectsLastPosition_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicObjectsLastPosition_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DynamicObjectsLastPosition;
	static void NewProp_bDrawDebugGridsFromPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugGridsFromPlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawDistance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_targetObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_targetObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHVolume3D_GetRandomPointOn3DVolume, "GetRandomPointOn3DVolume" }, // 252898559
		{ &Z_Construct_UFunction_AHVolume3D_GetRandomReachablePointOn3DVolume, "GetRandomReachablePointOn3DVolume" }, // 2658163258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHVolume3D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_VolumeBox = { "VolumeBox", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHVolume3D, VolumeBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeBox_MetaData), NewProp_VolumeBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_PathCore = { "PathCore", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHVolume3D, PathCore), Z_Construct_UClass_AHPathCore_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathCore_MetaData), NewProp_PathCore_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjects_Inner = { "DynamicObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjects = { "DynamicObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHVolume3D, DynamicObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicObjects_MetaData), NewProp_DynamicObjects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition_ValueProp = { "DynamicObjectsLastPosition", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition_Key_KeyProp = { "DynamicObjectsLastPosition_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition = { "DynamicObjectsLastPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHVolume3D, DynamicObjectsLastPosition), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicObjectsLastPosition_MetaData), NewProp_DynamicObjectsLastPosition_MetaData) };
void Z_Construct_UClass_AHVolume3D_Statics::NewProp_bDrawDebugGridsFromPlayer_SetBit(void* Obj)
{
	((AHVolume3D*)Obj)->bDrawDebugGridsFromPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_bDrawDebugGridsFromPlayer = { "bDrawDebugGridsFromPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AHVolume3D), &Z_Construct_UClass_AHVolume3D_Statics::NewProp_bDrawDebugGridsFromPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebugGridsFromPlayer_MetaData), NewProp_bDrawDebugGridsFromPlayer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_DrawDistance = { "DrawDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHVolume3D, DrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDistance_MetaData), NewProp_DrawDistance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_targetObjects_Inner = { "targetObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHVolume3D_Statics::NewProp_targetObjects = { "targetObjects", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHVolume3D, targetObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetObjects_MetaData), NewProp_targetObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHVolume3D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_VolumeBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_PathCore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_DynamicObjectsLastPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_bDrawDebugGridsFromPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_DrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_targetObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHVolume3D_Statics::NewProp_targetObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHVolume3D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHVolume3D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHVolume3D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHVolume3D_Statics::ClassParams = {
	&AHVolume3D::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHVolume3D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHVolume3D_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHVolume3D_Statics::Class_MetaDataParams), Z_Construct_UClass_AHVolume3D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHVolume3D()
{
	if (!Z_Registration_Info_UClass_AHVolume3D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHVolume3D.OuterSingleton, Z_Construct_UClass_AHVolume3D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHVolume3D.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<AHVolume3D>()
{
	return AHVolume3D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHVolume3D);
AHVolume3D::~AHVolume3D() {}
// End Class AHVolume3D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHVolume3D, AHVolume3D::StaticClass, TEXT("AHVolume3D"), &Z_Registration_Info_UClass_AHVolume3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHVolume3D), 4191625369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_1340007090(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
