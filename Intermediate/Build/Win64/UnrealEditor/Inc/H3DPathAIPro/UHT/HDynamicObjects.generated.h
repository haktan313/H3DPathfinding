// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HDynamicObjects.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef H3DPATHAIPRO_HDynamicObjects_generated_h
#error "HDynamicObjects.generated.h already included, missing '#pragma once' in HDynamicObjects.h"
#endif
#define H3DPATHAIPRO_HDynamicObjects_generated_h

#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHDynamicObjects(); \
	friend struct Z_Construct_UClass_UHDynamicObjects_Statics; \
public: \
	DECLARE_CLASS(UHDynamicObjects, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/H3DPathAIPro"), NO_API) \
	DECLARE_SERIALIZER(UHDynamicObjects)


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHDynamicObjects(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHDynamicObjects(UHDynamicObjects&&); \
	UHDynamicObjects(const UHDynamicObjects&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHDynamicObjects); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHDynamicObjects); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHDynamicObjects) \
	NO_API virtual ~UHDynamicObjects();


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h_9_PROLOG
#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> H3DPATHAIPRO_API UClass* StaticClass<class UHDynamicObjects>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HDynamicObjects_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
