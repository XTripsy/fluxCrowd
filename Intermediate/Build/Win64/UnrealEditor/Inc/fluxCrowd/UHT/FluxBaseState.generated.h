// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "States/FluxBaseState.h"

#ifdef FLUXCROWD_FluxBaseState_generated_h
#error "FluxBaseState.generated.h already included, missing '#pragma once' in FluxBaseState.h"
#endif
#define FLUXCROWD_FluxBaseState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FOnEndStateDelegate ***************************************************
#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h_9_DELEGATE \
FLUXCROWD_API void FOnEndStateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEndStateDelegate);


// ********** End Delegate FOnEndStateDelegate *****************************************************

// ********** Begin Class UFluxBaseState ***********************************************************
#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndState); \
	DECLARE_FUNCTION(execStartState);


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h_14_CALLBACK_WRAPPERS
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxBaseState_NoRegister();

#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFluxBaseState(); \
	friend struct Z_Construct_UClass_UFluxBaseState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FLUXCROWD_API UClass* Z_Construct_UClass_UFluxBaseState_NoRegister(); \
public: \
	DECLARE_CLASS2(UFluxBaseState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/fluxCrowd"), Z_Construct_UClass_UFluxBaseState_NoRegister) \
	DECLARE_SERIALIZER(UFluxBaseState)


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFluxBaseState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFluxBaseState(UFluxBaseState&&) = delete; \
	UFluxBaseState(const UFluxBaseState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFluxBaseState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFluxBaseState); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFluxBaseState) \
	NO_API virtual ~UFluxBaseState();


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h_11_PROLOG
#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h_14_CALLBACK_WRAPPERS \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h_14_INCLASS_NO_PURE_DECLS \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFluxBaseState;

// ********** End Class UFluxBaseState *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
