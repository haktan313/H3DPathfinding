// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HAIBaseComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class E_DoActionResult : uint8;
enum class E_MovementState : uint8;
enum class E_OnPossessState : uint8;
#ifdef H3DPATHAIPRO_HAIBaseComponent_generated_h
#error "HAIBaseComponent.generated.h already included, missing '#pragma once' in HAIBaseComponent.h"
#endif
#define H3DPATHAIPRO_HAIBaseComponent_generated_h

#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_11_DELEGATE \
H3DPATHAIPRO_API void FOnDoActionDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnDoActionDelegate, int32 ActionID);


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_12_DELEGATE \
H3DPATHAIPRO_API void FOnActionEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnActionEndDelegate, E_DoActionResult DoActionResult);


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPossessState); \
	DECLARE_FUNCTION(execSetStateActive); \
	DECLARE_FUNCTION(execSetStateInvestigate); \
	DECLARE_FUNCTION(execSetStatePassive); \
	DECLARE_FUNCTION(execStopBehaviorTree); \
	DECLARE_FUNCTION(execDead); \
	DECLARE_FUNCTION(execSetMovementStateFly); \
	DECLARE_FUNCTION(execSetMovementStateWalk);


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHAIBaseComponent(); \
	friend struct Z_Construct_UClass_UHAIBaseComponent_Statics; \
public: \
	DECLARE_CLASS(UHAIBaseComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/H3DPathAIPro"), NO_API) \
	DECLARE_SERIALIZER(UHAIBaseComponent)


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHAIBaseComponent(UHAIBaseComponent&&); \
	UHAIBaseComponent(const UHAIBaseComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHAIBaseComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHAIBaseComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHAIBaseComponent) \
	NO_API virtual ~UHAIBaseComponent();


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_14_PROLOG
#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> H3DPATHAIPRO_API UClass* StaticClass<class UHAIBaseComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIBaseComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
