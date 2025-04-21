// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HVolume3D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef H3DPATHAIPRO_HVolume3D_generated_h
#error "HVolume3D.generated.h already included, missing '#pragma once' in HVolume3D.h"
#endif
#define H3DPATHAIPRO_HVolume3D_generated_h

#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_11_DELEGATE \
H3DPATHAIPRO_API void FOnGridsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnGridsUpdated);


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRandomReachablePointOn3DVolume); \
	DECLARE_FUNCTION(execGetRandomPointOn3DVolume);


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHVolume3D(); \
	friend struct Z_Construct_UClass_AHVolume3D_Statics; \
public: \
	DECLARE_CLASS(AHVolume3D, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/H3DPathAIPro"), NO_API) \
	DECLARE_SERIALIZER(AHVolume3D)


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHVolume3D(AHVolume3D&&); \
	AHVolume3D(const AHVolume3D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHVolume3D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHVolume3D); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHVolume3D) \
	NO_API virtual ~AHVolume3D();


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_13_PROLOG
#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> H3DPATHAIPRO_API UClass* StaticClass<class AHVolume3D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HVolume3D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
