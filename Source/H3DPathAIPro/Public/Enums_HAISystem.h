//Enums_HAISystem
//Enums for the AI System

#pragma once

#include "CoreMinimal.h"
#include "Enums_HAISystem.generated.h"

UENUM(BlueprintType)
enum class E_SenseType : uint8 { 
	see UMETA(DisplayName = "See"),
	hear UMETA(DisplayName = "Hear"),
	damage UMETA(DisplayName = "Damage")
};

UENUM(BlueprintType)
enum class E_OnPossessState : uint8 {
	passive UMETA(DisplayName = "Passive"),
	investigate UMETA(DisplayName = "Investigate"),
	active UMETA(DisplayName = "Active")
};

UENUM(BlueprintType)
enum class E_MovementType : uint8 {
	walk UMETA(DisplayName = "Walk"),
	fly UMETA(DisplayName = "Fly")
};

UENUM(BlueprintType)
enum class E_MovementState : uint8 {
	idle UMETA(DisplayName = "Idle"),
	walking UMETA(DisplayName = "Walking"),
	running UMETA(DisplayName = "Running"),
	normalFlying UMETA(DisplayName = "NormalFlying"),
	fastFlying UMETA(DisplayName = "FastFlying")
};

UENUM(BlueprintType)
enum class E_DominantSense : uint8
{
	Sight UMETA(DisplayName = "Sight"),
	Hearing UMETA(DisplayName = "Hearing"),
	Damage UMETA(DisplayName = "Damage")
};

UENUM(BlueprintType)
enum class E_DoActionResult : uint8
{
	success UMETA(DisplayName = "Success"),
	failed UMETA(DisplayName = "Failed"),
	inProgress UMETA(DisplayName = "InProgress"),
	aborted UMETA(DisplayName = "Aborted")
};
