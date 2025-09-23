// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "H3DMoveToAsyncAction.h"

#ifdef H3DPATHFINDING_H3DMoveToAsyncAction_generated_h
#error "H3DMoveToAsyncAction.generated.h already included, missing '#pragma once' in H3DMoveToAsyncAction.h"
#endif
#define H3DPATHFINDING_H3DMoveToAsyncAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AH3DVolume;
class APawn;
class UH3DMoveToAsyncAction;
class UObject;
enum class EFailureType : uint8;
struct FPathResult;

// ********** Begin Delegate FHMoveToOutput ********************************************************
#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h_11_DELEGATE \
H3DPATHFINDING_API void FHMoveToOutput_DelegateWrapper(const FMulticastScriptDelegate& HMoveToOutput, EFailureType FailureType);


// ********** End Delegate FHMoveToOutput **********************************************************

// ********** Begin Class UH3DMoveToAsyncAction ****************************************************
#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckTargetActorsLocation); \
	DECLARE_FUNCTION(execCheckAvailability); \
	DECLARE_FUNCTION(execOnPathFound); \
	DECLARE_FUNCTION(execH3DMoveTo);


H3DPATHFINDING_API UClass* Z_Construct_UClass_UH3DMoveToAsyncAction_NoRegister();

#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUH3DMoveToAsyncAction(); \
	friend struct Z_Construct_UClass_UH3DMoveToAsyncAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend H3DPATHFINDING_API UClass* Z_Construct_UClass_UH3DMoveToAsyncAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UH3DMoveToAsyncAction, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/H3DPathfinding"), Z_Construct_UClass_UH3DMoveToAsyncAction_NoRegister) \
	DECLARE_SERIALIZER(UH3DMoveToAsyncAction)


#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UH3DMoveToAsyncAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UH3DMoveToAsyncAction(UH3DMoveToAsyncAction&&) = delete; \
	UH3DMoveToAsyncAction(const UH3DMoveToAsyncAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UH3DMoveToAsyncAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UH3DMoveToAsyncAction); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UH3DMoveToAsyncAction) \
	NO_API virtual ~UH3DMoveToAsyncAction();


#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h_13_PROLOG
#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UH3DMoveToAsyncAction;

// ********** End Class UH3DMoveToAsyncAction ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DMoveToAsyncAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
