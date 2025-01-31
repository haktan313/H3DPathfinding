// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HMoveToComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AHVolume3D;
struct FS_PathResult;
#ifdef H3DPATHFINDING_HMoveToComponent_generated_h
#error "HMoveToComponent.generated.h already included, missing '#pragma once' in HMoveToComponent.h"
#endif
#define H3DPATHFINDING_HMoveToComponent_generated_h

#define FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_SPARSE_DATA
#define FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckAvailability); \
	DECLARE_FUNCTION(execOnPathFound); \
	DECLARE_FUNCTION(execHMoveTo);


#define FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckAvailability); \
	DECLARE_FUNCTION(execOnPathFound); \
	DECLARE_FUNCTION(execHMoveTo);


#define FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_ACCESSORS
#define FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHMoveToComponent(); \
	friend struct Z_Construct_UClass_UHMoveToComponent_Statics; \
public: \
	DECLARE_CLASS(UHMoveToComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/H3DPathfinding"), NO_API) \
	DECLARE_SERIALIZER(UHMoveToComponent)


#define FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHMoveToComponent(); \
	friend struct Z_Construct_UClass_UHMoveToComponent_Statics; \
public: \
	DECLARE_CLASS(UHMoveToComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/H3DPathfinding"), NO_API) \
	DECLARE_SERIALIZER(UHMoveToComponent)


#define FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHMoveToComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHMoveToComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHMoveToComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHMoveToComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHMoveToComponent(UHMoveToComponent&&); \
	NO_API UHMoveToComponent(const UHMoveToComponent&); \
public: \
	NO_API virtual ~UHMoveToComponent();


#define FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHMoveToComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHMoveToComponent(UHMoveToComponent&&); \
	NO_API UHMoveToComponent(const UHMoveToComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHMoveToComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHMoveToComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHMoveToComponent) \
	NO_API virtual ~UHMoveToComponent();


#define FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_11_PROLOG
#define FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_SPARSE_DATA \
	FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_RPC_WRAPPERS \
	FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_ACCESSORS \
	FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_INCLASS \
	FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_SPARSE_DATA \
	FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_ACCESSORS \
	FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> H3DPATHFINDING_API UClass* StaticClass<class UHMoveToComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HMoveToComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
