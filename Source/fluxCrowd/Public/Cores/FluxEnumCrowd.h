#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EFluxCrowdStatus : uint8
{
	EIdleStatus,
	EActiveStatus,
	EDisableStatus
};

UENUM(BlueprintType)
enum class EFluxCrowdState : uint8
{
	EStartState,
	ERunState,
	EEndState
};

UENUM(BlueprintType)
enum class EFluxCrowdResetType : uint8
{
	EResetMode,
	EResetAll
};
