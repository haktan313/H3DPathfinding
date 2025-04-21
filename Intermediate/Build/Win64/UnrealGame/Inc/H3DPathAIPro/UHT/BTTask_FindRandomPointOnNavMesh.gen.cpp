// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/Tasks/BTTask_FindRandomPointOnNavMesh.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_FindRandomPointOnNavMesh() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh();
H3DPATHAIPRO_API UClass* Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Class UBTTask_FindRandomPointOnNavMesh
void UBTTask_FindRandomPointOnNavMesh::StaticRegisterNativesUBTTask_FindRandomPointOnNavMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_FindRandomPointOnNavMesh);
UClass* Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_NoRegister()
{
	return UBTTask_FindRandomPointOnNavMesh::StaticClass();
}
struct Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/BTTask_FindRandomPointOnNavMesh.h" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FindRandomPointOnNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Radius" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FindRandomPointOnNavMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pointVector_MetaData[] = {
		{ "Category", "Blackboard" },
		{ "ModuleRelativePath", "Public/Tasks/BTTask_FindRandomPointOnNavMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_pointVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_FindRandomPointOnNavMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindRandomPointOnNavMesh, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_pointVector = { "pointVector", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_FindRandomPointOnNavMesh, pointVector), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pointVector_MetaData), NewProp_pointVector_MetaData) }; // 3940742986
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::NewProp_pointVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_H3DPathAIPro,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::ClassParams = {
	&UBTTask_FindRandomPointOnNavMesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh()
{
	if (!Z_Registration_Info_UClass_UBTTask_FindRandomPointOnNavMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_FindRandomPointOnNavMesh.OuterSingleton, Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBTTask_FindRandomPointOnNavMesh.OuterSingleton;
}
template<> H3DPATHAIPRO_API UClass* StaticClass<UBTTask_FindRandomPointOnNavMesh>()
{
	return UBTTask_FindRandomPointOnNavMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_FindRandomPointOnNavMesh);
UBTTask_FindRandomPointOnNavMesh::~UBTTask_FindRandomPointOnNavMesh() {}
// End Class UBTTask_FindRandomPointOnNavMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_FindRandomPointOnNavMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_FindRandomPointOnNavMesh, UBTTask_FindRandomPointOnNavMesh::StaticClass, TEXT("UBTTask_FindRandomPointOnNavMesh"), &Z_Registration_Info_UClass_UBTTask_FindRandomPointOnNavMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_FindRandomPointOnNavMesh), 3730828192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_FindRandomPointOnNavMesh_h_1761765746(TEXT("/Script/H3DPathAIPro"),
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_FindRandomPointOnNavMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Tasks_BTTask_FindRandomPointOnNavMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
