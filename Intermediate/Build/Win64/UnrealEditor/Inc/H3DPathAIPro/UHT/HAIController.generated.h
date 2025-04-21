// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef H3DPATHAIPRO_HAIController_generated_h
#error "HAIController.generated.h already included, missing '#pragma once' in HAIController.h"
#endif
#define H3DPATHAIPRO_HAIController_generated_h

#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPerceptionUpdated);


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHAIController(); \
	friend struct Z_Construct_UClass_AHAIController_Statics; \
public: \
	DECLARE_CLASS(AHAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/H3DPathAIPro"), NO_API) \
	DECLARE_SERIALIZER(AHAIController)


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHAIController(AHAIController&&); \
	AHAIController(const AHAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHAIController) \
	NO_API virtual ~AHAIController();


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h_10_PROLOG
#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> H3DPATHAIPRO_API UClass* StaticClass<class AHAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
