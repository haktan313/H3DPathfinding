// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Structures_Pathfinding.h"

#ifdef H3DPATHFINDING_Structures_Pathfinding_generated_h
#error "Structures_Pathfinding.generated.h already included, missing '#pragma once' in Structures_Pathfinding.h"
#endif
#define H3DPATHFINDING_Structures_Pathfinding_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPathfindingGrid **************************************************
#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_Structures_Pathfinding_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPathfindingGrid_Statics; \
	H3DPATHFINDING_API static class UScriptStruct* StaticStruct();


struct FPathfindingGrid;
// ********** End ScriptStruct FPathfindingGrid ****************************************************

// ********** Begin ScriptStruct FAStarNode ********************************************************
#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_Structures_Pathfinding_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAStarNode_Statics; \
	H3DPATHFINDING_API static class UScriptStruct* StaticStruct();


struct FAStarNode;
// ********** End ScriptStruct FAStarNode **********************************************************

// ********** Begin ScriptStruct FPathResult *******************************************************
#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_Structures_Pathfinding_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPathResult_Statics; \
	H3DPATHFINDING_API static class UScriptStruct* StaticStruct();


struct FPathResult;
// ********** End ScriptStruct FPathResult *********************************************************

// ********** Begin ScriptStruct FPathRequest ******************************************************
#define FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_Structures_Pathfinding_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPathRequest_Statics; \
	H3DPATHFINDING_API static class UScriptStruct* StaticStruct();


struct FPathRequest;
// ********** End ScriptStruct FPathRequest ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathfinding_H3DPathfinding_HostProject_Plugins_H3DPathfinding_Source_H3DPathfinding_Public_Structures_Pathfinding_h

// ********** Begin Enum EFailureType **************************************************************
#define FOREACH_ENUM_EFAILURETYPE(op) \
	op(EFailureType::None) \
	op(EFailureType::WorldContextIsNull) \
	op(EFailureType::WorldIsNull) \
	op(EFailureType::PawnIsNull) \
	op(EFailureType::VolumeIsNull) \
	op(EFailureType::ReturnNull) \
	op(EFailureType::EndLocationNotAvailable) \
	op(EFailureType::StartLocationNotAvailable) \
	op(EFailureType::StartLocationNotInVolume) \
	op(EFailureType::EndLocationNotInVolume) \
	op(EFailureType::StartEqualsEnd) \
	op(EFailureType::StartGridIsNotFound) \
	op(EFailureType::PathNotFound) 

enum class EFailureType : uint8;
template<> struct TIsUEnumClass<EFailureType> { enum { Value = true }; };
template<> H3DPATHFINDING_API UEnum* StaticEnum<EFailureType>();
// ********** End Enum EFailureType ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
