// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cores/FluxEnumCrowd.h"

#ifdef FLUXCROWD_FluxEnumCrowd_generated_h
#error "FluxEnumCrowd.generated.h already included, missing '#pragma once' in FluxEnumCrowd.h"
#endif
#define FLUXCROWD_FluxEnumCrowd_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxEnumCrowd_h

// ********** Begin Enum EFluxCrowdStatus **********************************************************
#define FOREACH_ENUM_EFLUXCROWDSTATUS(op) \
	op(EFluxCrowdStatus::EIdleStatus) \
	op(EFluxCrowdStatus::EActiveStatus) \
	op(EFluxCrowdStatus::EDisableStatus) 

enum class EFluxCrowdStatus : uint8;
template<> struct TIsUEnumClass<EFluxCrowdStatus> { enum { Value = true }; };
template<> FLUXCROWD_API UEnum* StaticEnum<EFluxCrowdStatus>();
// ********** End Enum EFluxCrowdStatus ************************************************************

// ********** Begin Enum EFluxCrowdState ***********************************************************
#define FOREACH_ENUM_EFLUXCROWDSTATE(op) \
	op(EFluxCrowdState::EStartState) \
	op(EFluxCrowdState::ERunState) \
	op(EFluxCrowdState::EEndState) 

enum class EFluxCrowdState : uint8;
template<> struct TIsUEnumClass<EFluxCrowdState> { enum { Value = true }; };
template<> FLUXCROWD_API UEnum* StaticEnum<EFluxCrowdState>();
// ********** End Enum EFluxCrowdState *************************************************************

// ********** Begin Enum EFluxCrowdResetType *******************************************************
#define FOREACH_ENUM_EFLUXCROWDRESETTYPE(op) \
	op(EFluxCrowdResetType::EResetMode) \
	op(EFluxCrowdResetType::EResetAll) 

enum class EFluxCrowdResetType : uint8;
template<> struct TIsUEnumClass<EFluxCrowdResetType> { enum { Value = true }; };
template<> FLUXCROWD_API UEnum* StaticEnum<EFluxCrowdResetType>();
// ********** End Enum EFluxCrowdResetType *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
