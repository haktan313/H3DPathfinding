// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "H3DVolume.h"

#ifdef H3DPATHFINDING_H3DVolume_generated_h
#error "H3DVolume.generated.h already included, missing '#pragma once' in H3DVolume.h"
#endif
#define H3DPATHFINDING_H3DVolume_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AH3DVolume ***************************************************************
#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateGridID); \
	DECLARE_FUNCTION(execGetCellAmountOfTargetActorsBoundsOccupied); \
	DECLARE_FUNCTION(execGetCollisionChannel); \
	DECLARE_FUNCTION(execGetUpdateGridsRate); \
	DECLARE_FUNCTION(execGetCellSizeMultiplierForAdjustment); \
	DECLARE_FUNCTION(execGetGridCellSize); \
	DECLARE_FUNCTION(execGetGridIDFromPosition); \
	DECLARE_FUNCTION(execDivideVolumeIntoGrids);


H3DPATHFINDING_API UClass* Z_Construct_UClass_AH3DVolume_NoRegister();

#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAH3DVolume(); \
	friend struct Z_Construct_UClass_AH3DVolume_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend H3DPATHFINDING_API UClass* Z_Construct_UClass_AH3DVolume_NoRegister(); \
public: \
	DECLARE_CLASS2(AH3DVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/H3DPathfinding"), Z_Construct_UClass_AH3DVolume_NoRegister) \
	DECLARE_SERIALIZER(AH3DVolume)


#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AH3DVolume(AH3DVolume&&) = delete; \
	AH3DVolume(const AH3DVolume&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AH3DVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AH3DVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AH3DVolume) \
	NO_API virtual ~AH3DVolume();


#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h_10_PROLOG
#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AH3DVolume;

// ********** End Class AH3DVolume *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_H3DVolume_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
