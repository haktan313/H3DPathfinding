// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HPatrolSpline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef H3DPATHAIPRO_HPatrolSpline_generated_h
#error "HPatrolSpline.generated.h already included, missing '#pragma once' in HPatrolSpline.h"
#endif
#define H3DPATHAIPRO_HPatrolSpline_generated_h

#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FS_PatrolData_Statics; \
	H3DPATHAIPRO_API static class UScriptStruct* StaticStruct();


template<> H3DPATHAIPRO_API UScriptStruct* StaticStruct<struct FS_PatrolData>();

#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPatrolRouteLocation); \
	DECLARE_FUNCTION(execPatrolRouteIndex);


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHPatrolSpline(); \
	friend struct Z_Construct_UClass_AHPatrolSpline_Statics; \
public: \
	DECLARE_CLASS(AHPatrolSpline, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/H3DPathAIPro"), NO_API) \
	DECLARE_SERIALIZER(AHPatrolSpline)


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHPatrolSpline(AHPatrolSpline&&); \
	AHPatrolSpline(const AHPatrolSpline&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHPatrolSpline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHPatrolSpline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHPatrolSpline) \
	NO_API virtual ~AHPatrolSpline();


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_20_PROLOG
#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> H3DPATHAIPRO_API UClass* StaticClass<class AHPatrolSpline>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HPatrolSpline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
