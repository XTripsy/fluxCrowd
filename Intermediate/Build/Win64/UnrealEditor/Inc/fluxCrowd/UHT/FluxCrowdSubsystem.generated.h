// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cores/FluxCrowdSubsystem.h"

#ifdef FLUXCROWD_FluxCrowdSubsystem_generated_h
#error "FluxCrowdSubsystem.generated.h already included, missing '#pragma once' in FluxCrowdSubsystem.h"
#endif
#define FLUXCROWD_FluxCrowdSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFluxCrowdSubsystem ******************************************************
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxCrowdSubsystem_NoRegister();

#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFluxCrowdSubsystem(); \
	friend struct Z_Construct_UClass_UFluxCrowdSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FLUXCROWD_API UClass* Z_Construct_UClass_UFluxCrowdSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UFluxCrowdSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/fluxCrowd"), Z_Construct_UClass_UFluxCrowdSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UFluxCrowdSubsystem)


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdSubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFluxCrowdSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFluxCrowdSubsystem(UFluxCrowdSubsystem&&) = delete; \
	UFluxCrowdSubsystem(const UFluxCrowdSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFluxCrowdSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFluxCrowdSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFluxCrowdSubsystem) \
	NO_API virtual ~UFluxCrowdSubsystem();


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdSubsystem_h_11_PROLOG
#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFluxCrowdSubsystem;

// ********** End Class UFluxCrowdSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
