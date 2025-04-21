// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enums_HAISystem.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef H3DPATHAIPRO_Enums_HAISystem_generated_h
#error "Enums_HAISystem.generated.h already included, missing '#pragma once' in Enums_HAISystem.h"
#endif
#define H3DPATHAIPRO_Enums_HAISystem_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Enums_HAISystem_h


#define FOREACH_ENUM_E_SENSETYPE(op) \
	op(E_SenseType::see) \
	op(E_SenseType::hear) \
	op(E_SenseType::damage) 

enum class E_SenseType : uint8;
template<> struct TIsUEnumClass<E_SenseType> { enum { Value = true }; };
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_SenseType>();

#define FOREACH_ENUM_E_ONPOSSESSSTATE(op) \
	op(E_OnPossessState::passive) \
	op(E_OnPossessState::investigate) \
	op(E_OnPossessState::active) 

enum class E_OnPossessState : uint8;
template<> struct TIsUEnumClass<E_OnPossessState> { enum { Value = true }; };
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_OnPossessState>();

#define FOREACH_ENUM_E_MOVEMENTTYPE(op) \
	op(E_MovementType::walk) \
	op(E_MovementType::fly) 

enum class E_MovementType : uint8;
template<> struct TIsUEnumClass<E_MovementType> { enum { Value = true }; };
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_MovementType>();

#define FOREACH_ENUM_E_MOVEMENTSTATE(op) \
	op(E_MovementState::idle) \
	op(E_MovementState::walking) \
	op(E_MovementState::running) \
	op(E_MovementState::normalFlying) \
	op(E_MovementState::fastFlying) 

enum class E_MovementState : uint8;
template<> struct TIsUEnumClass<E_MovementState> { enum { Value = true }; };
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_MovementState>();

#define FOREACH_ENUM_E_DOMINANTSENSE(op) \
	op(E_DominantSense::Sight) \
	op(E_DominantSense::Hearing) \
	op(E_DominantSense::Damage) 

enum class E_DominantSense : uint8;
template<> struct TIsUEnumClass<E_DominantSense> { enum { Value = true }; };
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_DominantSense>();

#define FOREACH_ENUM_E_DOACTIONRESULT(op) \
	op(E_DoActionResult::success) \
	op(E_DoActionResult::failed) \
	op(E_DoActionResult::inProgress) \
	op(E_DoActionResult::aborted) 

enum class E_DoActionResult : uint8;
template<> struct TIsUEnumClass<E_DoActionResult> { enum { Value = true }; };
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_DoActionResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
