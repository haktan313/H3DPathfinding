// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/HPatrolSpline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPatrolSpline() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHPatrolSpline();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_AHPatrolSpline_NoRegister();
H3DPATHAIPRO_API UScriptStruct* Z_Construct_UScriptStruct_FS_PatrolData();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin ScriptStruct FS_PatrolData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_PatrolData;
class UScriptStruct* FS_PatrolData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_PatrolData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_PatrolData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_PatrolData, (UObject*)Z_Construct_UPackage__Script_H3DPathAIPro(), TEXT("S_PatrolData"));
	}
	return Z_Registration_Info_UScriptStruct_S_PatrolData.OuterSingleton;
}
template<> H3DPATHAIPRO_API UScriptStruct* StaticStruct<FS_PatrolData>()
{
	return FS_PatrolData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FS_PatrolData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentPointIndex_MetaData[] = {
		{ "Category", "PatrolData" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[] = {
		{ "Category", "PatrolData" },
		{ "ClampMax", "1" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentPointIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_PatrolData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_currentPointIndex = { "currentPointIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_PatrolData, currentPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentPointIndex_MetaData), NewProp_currentPointIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_PatrolData, direction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_direction_MetaData), NewProp_direction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_PatrolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_currentPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewProp_direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PatrolData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_PatrolData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
	nullptr,
	&NewStructOps,
	"S_PatrolData",
	Z_Construct_UScriptStruct_FS_PatrolData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PatrolData_Statics::PropPointers),
	sizeof(FS_PatrolData),
	alignof(FS_PatrolData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_PatrolData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FS_PatrolData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FS_PatrolData()
{
	if (!Z_Registration_Info_UScriptStruct_S_PatrolData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_PatrolData.InnerSingleton, Z_Construct_UScriptStruct_FS_PatrolData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_S_PatrolData.InnerSingleton;
}
// End ScriptStruct FS_PatrolData

// Begin Class AHPatrolSpline Function GetPatrolRouteLocation
struct Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics
{
	struct HPatrolSpline_eventGetPatrolRouteLocation_Parms
	{
		AActor* RequestedBy;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestedBy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::NewProp_RequestedBy = { "RequestedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HPatrolSpline_eventGetPatrolRouteLocation_Parms, RequestedBy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HPatrolSpline_eventGetPatrolRouteLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::NewProp_RequestedBy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHPatrolSpline, nullptr, "GetPatrolRouteLocation", nullptr, nullptr, Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::HPatrolSpline_eventGetPatrolRouteLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::HPatrolSpline_eventGetPatrolRouteLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHPatrolSpline::execGetPatrolRouteLocation)
{
	P_GET_OBJECT(AActor,Z_Param_RequestedBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPatrolRouteLocation(Z_Param_RequestedBy);
	P_NATIVE_END;
}
// End Class AHPatrolSpline Function GetPatrolRouteLocation

// Begin Class AHPatrolSpline Function PatrolRouteIndex
struct Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics
{
	struct HPatrolSpline_eventPatrolRouteIndex_Parms
	{
		AActor* RequestedBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RequestedBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics::NewProp_RequestedBy = { "RequestedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HPatrolSpline_eventPatrolRouteIndex_Parms, RequestedBy), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics::NewProp_RequestedBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHPatrolSpline, nullptr, "PatrolRouteIndex", nullptr, nullptr, Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics::HPatrolSpline_eventPatrolRouteIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics::HPatrolSpline_eventPatrolRouteIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHPatrolSpline::execPatrolRouteIndex)
{
	P_GET_OBJECT(AActor,Z_Param_RequestedBy);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PatrolRouteIndex(Z_Param_RequestedBy);
	P_NATIVE_END;
}
// End Class AHPatrolSpline Function PatrolRouteIndex

// Begin Class AHPatrolSpline
void AHPatrolSpline::StaticRegisterNativesAHPatrolSpline()
{
	UClass* Class = AHPatrolSpline::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPatrolRouteLocation", &AHPatrolSpline::execGetPatrolRouteLocation },
		{ "PatrolRouteIndex", &AHPatrolSpline::execPatrolRouteIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHPatrolSpline);
UClass* Z_Construct_UClass_AHPatrolSpline_NoRegister()
{
	return AHPatrolSpline::StaticClass();
}
struct Z_Construct_UClass_AHPatrolSpline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HPatrolSpline.h" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolDataMap_MetaData[] = {
		{ "Category", "PatrolSpline" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HPatrolSpline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PatrolDataMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PatrolDataMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PatrolDataMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHPatrolSpline_GetPatrolRouteLocation, "GetPatrolRouteLocation" }, // 328880025
		{ &Z_Construct_UFunction_AHPatrolSpline_PatrolRouteIndex, "PatrolRouteIndex" }, // 3471282316
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHPatrolSpline>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap_ValueProp = { "PatrolDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FS_PatrolData, METADATA_PARAMS(0, nullptr) }; // 113074073
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap_Key_KeyProp = { "PatrolDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap = { "PatrolDataMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHPatrolSpline, PatrolDataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolDataMap_MetaData), NewProp_PatrolDataMap_MetaData) }; // 113074073
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHPatrolSpline, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SplineComponent_MetaData), NewProp_SplineComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHPatrolSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_PatrolDataMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHPatrolSpline_Statics::NewProp_SplineComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHPatrolSpline_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHPatrolSpline_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHPatrolSpline_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHPatrolSpline_Statics::ClassParams = {
	&AHPatrolSpline::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHPatrolSpline_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHPatrolSpline_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHPatrolSpline_Statics::Class_MetaDataParams), Z_Construct_UClass_AHPatrolSpline_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHPatrolSpline()
{
	if (!Z_Registration_Info_UClass_AHPatrolSpline.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHPatrolSpline.OuterSingleton, Z_Construct_UClass_AHPatrolSpline_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHPatrolSpline.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<AHPatrolSpline>()
{
	return AHPatrolSpline::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHPatrolSpline);
AHPatrolSpline::~AHPatrolSpline() {}
// End Class AHPatrolSpline

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FS_PatrolData::StaticStruct, Z_Construct_UScriptStruct_FS_PatrolData_Statics::NewStructOps, TEXT("S_PatrolData"), &Z_Registration_Info_UScriptStruct_S_PatrolData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_PatrolData), 113074073U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHPatrolSpline, AHPatrolSpline::StaticClass, TEXT("AHPatrolSpline"), &Z_Registration_Info_UClass_AHPatrolSpline, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHPatrolSpline), 4105363559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_783778355(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
