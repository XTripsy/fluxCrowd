// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modes/FluxBaseMode.h"

#ifdef FLUXCROWD_FluxBaseMode_generated_h
#error "FluxBaseMode.generated.h already included, missing '#pragma once' in FluxBaseMode.h"
#endif
#define FLUXCROWD_FluxBaseMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnEndModeDelegate ****************************************************
#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h_9_DELEGATE \
FLUXCROWD_API void FOnEndModeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEndModeDelegate);


// ********** End Delegate FOnEndModeDelegate ******************************************************

// ********** Begin Class UFluxBaseMode ************************************************************
#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndMode); \
	DECLARE_FUNCTION(execStartMode);


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h_14_CALLBACK_WRAPPERS
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxBaseMode_NoRegister();

#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFluxBaseMode(); \
	friend struct Z_Construct_UClass_UFluxBaseMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FLUXCROWD_API UClass* Z_Construct_UClass_UFluxBaseMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UFluxBaseMode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/fluxCrowd"), Z_Construct_UClass_UFluxBaseMode_NoRegister) \
	DECLARE_SERIALIZER(UFluxBaseMode)


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFluxBaseMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFluxBaseMode(UFluxBaseMode&&) = delete; \
	UFluxBaseMode(const UFluxBaseMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFluxBaseMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFluxBaseMode); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFluxBaseMode) \
	NO_API virtual ~UFluxBaseMode();


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h_11_PROLOG
#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h_14_CALLBACK_WRAPPERS \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFluxBaseMode;

// ********** End Class UFluxBaseMode **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
