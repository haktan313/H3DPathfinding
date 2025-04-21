// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "H3DPathAIPro/Public/Enums_HAISystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnums_HAISystem() {}

// Begin Cross Module References
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_DominantSense();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_MovementState();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_MovementType();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_OnPossessState();
H3DPATHAIPRO_API UEnum* Z_Construct_UEnum_H3DPathAIPro_E_SenseType();
UPackage* Z_Construct_UPackage__Script_H3DPathAIPro();
// End Cross Module References

// Begin Enum E_SenseType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_SenseType;
static UEnum* E_SenseType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_SenseType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_SenseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_H3DPathAIPro_E_SenseType, (UObject*)Z_Construct_UPackage__Script_H3DPathAIPro(), TEXT("E_SenseType"));
	}
	return Z_Registration_Info_UEnum_E_SenseType.OuterSingleton;
}
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_SenseType>()
{
	return E_SenseType_StaticEnum();
}
struct Z_Construct_UEnum_H3DPathAIPro_E_SenseType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "damage.DisplayName", "Damage" },
		{ "damage.Name", "E_SenseType::damage" },
		{ "hear.DisplayName", "Hear" },
		{ "hear.Name", "E_SenseType::hear" },
		{ "ModuleRelativePath", "Public/Enums_HAISystem.h" },
		{ "see.DisplayName", "See" },
		{ "see.Name", "E_SenseType::see" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_SenseType::see", (int64)E_SenseType::see },
		{ "E_SenseType::hear", (int64)E_SenseType::hear },
		{ "E_SenseType::damage", (int64)E_SenseType::damage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_H3DPathAIPro_E_SenseType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_H3DPathAIPro,
	nullptr,
	"E_SenseType",
	"E_SenseType",
	Z_Construct_UEnum_H3DPathAIPro_E_SenseType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_SenseType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_SenseType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_H3DPathAIPro_E_SenseType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_H3DPathAIPro_E_SenseType()
{
	if (!Z_Registration_Info_UEnum_E_SenseType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_SenseType.InnerSingleton, Z_Construct_UEnum_H3DPathAIPro_E_SenseType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_SenseType.InnerSingleton;
}
// End Enum E_SenseType

// Begin Enum E_OnPossessState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_OnPossessState;
static UEnum* E_OnPossessState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_OnPossessState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_OnPossessState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_H3DPathAIPro_E_OnPossessState, (UObject*)Z_Construct_UPackage__Script_H3DPathAIPro(), TEXT("E_OnPossessState"));
	}
	return Z_Registration_Info_UEnum_E_OnPossessState.OuterSingleton;
}
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_OnPossessState>()
{
	return E_OnPossessState_StaticEnum();
}
struct Z_Construct_UEnum_H3DPathAIPro_E_OnPossessState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "active.DisplayName", "Active" },
		{ "active.Name", "E_OnPossessState::active" },
		{ "BlueprintType", "true" },
		{ "investigate.DisplayName", "Investigate" },
		{ "investigate.Name", "E_OnPossessState::investigate" },
		{ "ModuleRelativePath", "Public/Enums_HAISystem.h" },
		{ "passive.DisplayName", "Passive" },
		{ "passive.Name", "E_OnPossessState::passive" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_OnPossessState::passive", (int64)E_OnPossessState::passive },
		{ "E_OnPossessState::investigate", (int64)E_OnPossessState::investigate },
		{ "E_OnPossessState::active", (int64)E_OnPossessState::active },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_H3DPathAIPro_E_OnPossessState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_H3DPathAIPro,
	nullptr,
	"E_OnPossessState",
	"E_OnPossessState",
	Z_Construct_UEnum_H3DPathAIPro_E_OnPossessState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_OnPossessState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_OnPossessState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_H3DPathAIPro_E_OnPossessState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_H3DPathAIPro_E_OnPossessState()
{
	if (!Z_Registration_Info_UEnum_E_OnPossessState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_OnPossessState.InnerSingleton, Z_Construct_UEnum_H3DPathAIPro_E_OnPossessState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_OnPossessState.InnerSingleton;
}
// End Enum E_OnPossessState

// Begin Enum E_MovementType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_MovementType;
static UEnum* E_MovementType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_MovementType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_MovementType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_H3DPathAIPro_E_MovementType, (UObject*)Z_Construct_UPackage__Script_H3DPathAIPro(), TEXT("E_MovementType"));
	}
	return Z_Registration_Info_UEnum_E_MovementType.OuterSingleton;
}
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_MovementType>()
{
	return E_MovementType_StaticEnum();
}
struct Z_Construct_UEnum_H3DPathAIPro_E_MovementType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "fly.DisplayName", "Fly" },
		{ "fly.Name", "E_MovementType::fly" },
		{ "ModuleRelativePath", "Public/Enums_HAISystem.h" },
		{ "walk.DisplayName", "Walk" },
		{ "walk.Name", "E_MovementType::walk" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_MovementType::walk", (int64)E_MovementType::walk },
		{ "E_MovementType::fly", (int64)E_MovementType::fly },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_H3DPathAIPro_E_MovementType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_H3DPathAIPro,
	nullptr,
	"E_MovementType",
	"E_MovementType",
	Z_Construct_UEnum_H3DPathAIPro_E_MovementType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_MovementType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_MovementType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_H3DPathAIPro_E_MovementType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_H3DPathAIPro_E_MovementType()
{
	if (!Z_Registration_Info_UEnum_E_MovementType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_MovementType.InnerSingleton, Z_Construct_UEnum_H3DPathAIPro_E_MovementType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_MovementType.InnerSingleton;
}
// End Enum E_MovementType

// Begin Enum E_MovementState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_MovementState;
static UEnum* E_MovementState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_MovementState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_MovementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_H3DPathAIPro_E_MovementState, (UObject*)Z_Construct_UPackage__Script_H3DPathAIPro(), TEXT("E_MovementState"));
	}
	return Z_Registration_Info_UEnum_E_MovementState.OuterSingleton;
}
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_MovementState>()
{
	return E_MovementState_StaticEnum();
}
struct Z_Construct_UEnum_H3DPathAIPro_E_MovementState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "fastFlying.DisplayName", "FastFlying" },
		{ "fastFlying.Name", "E_MovementState::fastFlying" },
		{ "idle.DisplayName", "Idle" },
		{ "idle.Name", "E_MovementState::idle" },
		{ "ModuleRelativePath", "Public/Enums_HAISystem.h" },
		{ "normalFlying.DisplayName", "NormalFlying" },
		{ "normalFlying.Name", "E_MovementState::normalFlying" },
		{ "running.DisplayName", "Running" },
		{ "running.Name", "E_MovementState::running" },
		{ "walking.DisplayName", "Walking" },
		{ "walking.Name", "E_MovementState::walking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_MovementState::idle", (int64)E_MovementState::idle },
		{ "E_MovementState::walking", (int64)E_MovementState::walking },
		{ "E_MovementState::running", (int64)E_MovementState::running },
		{ "E_MovementState::normalFlying", (int64)E_MovementState::normalFlying },
		{ "E_MovementState::fastFlying", (int64)E_MovementState::fastFlying },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_H3DPathAIPro_E_MovementState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_H3DPathAIPro,
	nullptr,
	"E_MovementState",
	"E_MovementState",
	Z_Construct_UEnum_H3DPathAIPro_E_MovementState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_MovementState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_MovementState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_H3DPathAIPro_E_MovementState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_H3DPathAIPro_E_MovementState()
{
	if (!Z_Registration_Info_UEnum_E_MovementState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_MovementState.InnerSingleton, Z_Construct_UEnum_H3DPathAIPro_E_MovementState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_MovementState.InnerSingleton;
}
// End Enum E_MovementState

// Begin Enum E_DominantSense
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_DominantSense;
static UEnum* E_DominantSense_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_DominantSense.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_DominantSense.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_H3DPathAIPro_E_DominantSense, (UObject*)Z_Construct_UPackage__Script_H3DPathAIPro(), TEXT("E_DominantSense"));
	}
	return Z_Registration_Info_UEnum_E_DominantSense.OuterSingleton;
}
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_DominantSense>()
{
	return E_DominantSense_StaticEnum();
}
struct Z_Construct_UEnum_H3DPathAIPro_E_DominantSense_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Damage.DisplayName", "Damage" },
		{ "Damage.Name", "E_DominantSense::Damage" },
		{ "Hearing.DisplayName", "Hearing" },
		{ "Hearing.Name", "E_DominantSense::Hearing" },
		{ "ModuleRelativePath", "Public/Enums_HAISystem.h" },
		{ "Sight.DisplayName", "Sight" },
		{ "Sight.Name", "E_DominantSense::Sight" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_DominantSense::Sight", (int64)E_DominantSense::Sight },
		{ "E_DominantSense::Hearing", (int64)E_DominantSense::Hearing },
		{ "E_DominantSense::Damage", (int64)E_DominantSense::Damage },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_H3DPathAIPro_E_DominantSense_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_H3DPathAIPro,
	nullptr,
	"E_DominantSense",
	"E_DominantSense",
	Z_Construct_UEnum_H3DPathAIPro_E_DominantSense_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_DominantSense_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_DominantSense_Statics::Enum_MetaDataParams), Z_Construct_UEnum_H3DPathAIPro_E_DominantSense_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_H3DPathAIPro_E_DominantSense()
{
	if (!Z_Registration_Info_UEnum_E_DominantSense.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_DominantSense.InnerSingleton, Z_Construct_UEnum_H3DPathAIPro_E_DominantSense_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_DominantSense.InnerSingleton;
}
// End Enum E_DominantSense

// Begin Enum E_DoActionResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_DoActionResult;
static UEnum* E_DoActionResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_DoActionResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_DoActionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult, (UObject*)Z_Construct_UPackage__Script_H3DPathAIPro(), TEXT("E_DoActionResult"));
	}
	return Z_Registration_Info_UEnum_E_DoActionResult.OuterSingleton;
}
template<> H3DPATHAIPRO_API UEnum* StaticEnum<E_DoActionResult>()
{
	return E_DoActionResult_StaticEnum();
}
struct Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "aborted.DisplayName", "Aborted" },
		{ "aborted.Name", "E_DoActionResult::aborted" },
		{ "BlueprintType", "true" },
		{ "failed.DisplayName", "Failed" },
		{ "failed.Name", "E_DoActionResult::failed" },
		{ "inProgress.DisplayName", "InProgress" },
		{ "inProgress.Name", "E_DoActionResult::inProgress" },
		{ "ModuleRelativePath", "Public/Enums_HAISystem.h" },
		{ "success.DisplayName", "Success" },
		{ "success.Name", "E_DoActionResult::success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_DoActionResult::success", (int64)E_DoActionResult::success },
		{ "E_DoActionResult::failed", (int64)E_DoActionResult::failed },
		{ "E_DoActionResult::inProgress", (int64)E_DoActionResult::inProgress },
		{ "E_DoActionResult::aborted", (int64)E_DoActionResult::aborted },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_H3DPathAIPro,
	nullptr,
	"E_DoActionResult",
	"E_DoActionResult",
	Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult()
{
	if (!Z_Registration_Info_UEnum_E_DoActionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_DoActionResult.InnerSingleton, Z_Construct_UEnum_H3DPathAIPro_E_DoActionResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_DoActionResult.InnerSingleton;
}
// End Enum E_DoActionResult

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Enums_HAISystem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E_SenseType_StaticEnum, TEXT("E_SenseType"), &Z_Registration_Info_UEnum_E_SenseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 879423196U) },
		{ E_OnPossessState_StaticEnum, TEXT("E_OnPossessState"), &Z_Registration_Info_UEnum_E_OnPossessState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2366824250U) },
		{ E_MovementType_StaticEnum, TEXT("E_MovementType"), &Z_Registration_Info_UEnum_E_MovementType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1130632412U) },
		{ E_MovementState_StaticEnum, TEXT("E_MovementState"), &Z_Registration_Info_UEnum_E_MovementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1934441174U) },
		{ E_DominantSense_StaticEnum, TEXT("E_DominantSense"), &Z_Registration_Info_UEnum_E_DominantSense, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2523168760U) },
		{ E_DoActionResult_StaticEnum, TEXT("E_DoActionResult"), &Z_Registration_Info_UEnum_E_DoActionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2089742983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Enums_HAISystem_h_2090196627(TEXT("/Script/H3DPathAIPro"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Enums_HAISystem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Haktan_Desktop_H3DPathAIPro_HostProject_Plugins_H3DPathAIPro_Source_H3DPathAIPro_Public_Enums_HAISystem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
