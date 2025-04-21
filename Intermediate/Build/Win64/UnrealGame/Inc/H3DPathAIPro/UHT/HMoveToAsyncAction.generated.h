// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HMoveToAsyncAction.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACharacter;
class AHVolume3D;
class UHMoveToAsyncAction;
class UObject;
struct FS_PathResult;
#ifdef H3DPATHAIPRO_HMoveToAsyncAction_generated_h
#error "HMoveToAsyncAction.generated.h already included, missing '#pragma once' in HMoveToAsyncAction.h"
#endif
#define H3DPATHAIPRO_HMoveToAsyncAction_generated_h

#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_14_DELEGATE \
H3DPATHAIPRO_API void FHMoveToOutput_DelegateWrapper(const FMulticastScriptDelegate& HMoveToOutput);


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPathFound); \
	DECLARE_FUNCTION(execHMoveTo);


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHMoveToAsyncAction(); \
	friend struct Z_Construct_UClass_UHMoveToAsyncAction_Statics; \
public: \
	DECLARE_CLASS(UHMoveToAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/H3DPathAIPro"), NO_API) \
	DECLARE_SERIALIZER(UHMoveToAsyncAction)


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHMoveToAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHMoveToAsyncAction(UHMoveToAsyncAction&&); \
	UHMoveToAsyncAction(const UHMoveToAsyncAction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHMoveToAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHMoveToAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHMoveToAsyncAction) \
	NO_API virtual ~UHMoveToAsyncAction();


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_16_PROLOG
#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> H3DPATHAIPRO_API UClass* StaticClass<class UHMoveToAsyncAction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HMoveToAsyncAction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
