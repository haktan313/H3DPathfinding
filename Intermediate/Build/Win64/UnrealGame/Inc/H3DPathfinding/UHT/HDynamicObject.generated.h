// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HDynamicObject.h"

#ifdef H3DPATHFINDING_HDynamicObject_generated_h
#error "HDynamicObject.generated.h already included, missing '#pragma once' in HDynamicObject.h"
#endif
#define H3DPATHFINDING_HDynamicObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class UHDynamicObject **********************************************************
#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDynamicObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


H3DPATHFINDING_API UClass* Z_Construct_UClass_UHDynamicObject_NoRegister();

#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDynamicObject_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHDynamicObject(); \
	friend struct Z_Construct_UClass_UHDynamicObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend H3DPATHFINDING_API UClass* Z_Construct_UClass_UHDynamicObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UHDynamicObject, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/H3DPathfinding"), Z_Construct_UClass_UHDynamicObject_NoRegister) \
	DECLARE_SERIALIZER(UHDynamicObject)


#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDynamicObject_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHDynamicObject(UHDynamicObject&&) = delete; \
	UHDynamicObject(const UHDynamicObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHDynamicObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHDynamicObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHDynamicObject) \
	NO_API virtual ~UHDynamicObject();


#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDynamicObject_h_11_PROLOG
#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDynamicObject_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDynamicObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDynamicObject_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDynamicObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHDynamicObject;

// ********** End Class UHDynamicObject ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_HDynamicObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
