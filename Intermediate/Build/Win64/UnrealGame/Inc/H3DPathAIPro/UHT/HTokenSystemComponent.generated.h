// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HTokenSystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef H3DPATHAIPRO_HTokenSystemComponent_generated_h
#error "HTokenSystemComponent.generated.h already included, missing '#pragma once' in HTokenSystemComponent.h"
#endif
#define H3DPATHAIPRO_HTokenSystemComponent_generated_h

#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGiveTokenToTarget); \
	DECLARE_FUNCTION(execTookTokenFromTarget);


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHTokenSystemComponent(); \
	friend struct Z_Construct_UClass_UHTokenSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UHTokenSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/H3DPathAIPro"), NO_API) \
	DECLARE_SERIALIZER(UHTokenSystemComponent)


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHTokenSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHTokenSystemComponent(UHTokenSystemComponent&&); \
	UHTokenSystemComponent(const UHTokenSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHTokenSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHTokenSystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHTokenSystemComponent) \
	NO_API virtual ~UHTokenSystemComponent();


#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h_9_PROLOG
#define FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> H3DPATHAIPRO_API UClass* StaticClass<class UHTokenSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_HTokenSystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
