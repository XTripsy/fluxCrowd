// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cores/FluxCrowdController.h"

#ifdef FLUXCROWD_FluxCrowdController_generated_h
#error "FluxCrowdController.generated.h already included, missing '#pragma once' in FluxCrowdController.h"
#endif
#define FLUXCROWD_FluxCrowdController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFluxCrowdController *****************************************************
#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNextModes); \
	DECLARE_FUNCTION(execNextStates);


FLUXCROWD_API UClass* Z_Construct_UClass_AFluxCrowdController_NoRegister();

#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFluxCrowdController(); \
	friend struct Z_Construct_UClass_AFluxCrowdController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FLUXCROWD_API UClass* Z_Construct_UClass_AFluxCrowdController_NoRegister(); \
public: \
	DECLARE_CLASS2(AFluxCrowdController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fluxCrowd"), Z_Construct_UClass_AFluxCrowdController_NoRegister) \
	DECLARE_SERIALIZER(AFluxCrowdController) \
	virtual UObject* _getUObject() const override { return const_cast<AFluxCrowdController*>(this); }


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFluxCrowdController(AFluxCrowdController&&) = delete; \
	AFluxCrowdController(const AFluxCrowdController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFluxCrowdController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFluxCrowdController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFluxCrowdController) \
	NO_API virtual ~AFluxCrowdController();


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h_19_PROLOG
#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFluxCrowdController;

// ********** End Class AFluxCrowdController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
