// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Cores/FluxCrowdControllerInterface.h"

#ifdef FLUXCROWD_FluxCrowdControllerInterface_generated_h
#error "FluxCrowdControllerInterface.generated.h already included, missing '#pragma once' in FluxCrowdControllerInterface.h"
#endif
#define FLUXCROWD_FluxCrowdControllerInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EFluxCrowdResetType : uint8;

// ********** Begin Interface UFluxCrowdControllerInterface ****************************************
#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndCrowd_Implementation() {}; \
	virtual void ResetCrowd_Implementation(EFluxCrowdResetType type) {}; \
	virtual void StartCrowd_Implementation() {}; \
	DECLARE_FUNCTION(execEndCrowd); \
	DECLARE_FUNCTION(execResetCrowd); \
	DECLARE_FUNCTION(execStartCrowd);


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_17_CALLBACK_WRAPPERS
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxCrowdControllerInterface_NoRegister();

#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFluxCrowdControllerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFluxCrowdControllerInterface(UFluxCrowdControllerInterface&&) = delete; \
	UFluxCrowdControllerInterface(const UFluxCrowdControllerInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFluxCrowdControllerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFluxCrowdControllerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFluxCrowdControllerInterface) \
	virtual ~UFluxCrowdControllerInterface() = default;


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFluxCrowdControllerInterface(); \
	friend struct Z_Construct_UClass_UFluxCrowdControllerInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FLUXCROWD_API UClass* Z_Construct_UClass_UFluxCrowdControllerInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UFluxCrowdControllerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/fluxCrowd"), Z_Construct_UClass_UFluxCrowdControllerInterface_NoRegister) \
	DECLARE_SERIALIZER(UFluxCrowdControllerInterface)


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFluxCrowdControllerInterface() {} \
public: \
	typedef UFluxCrowdControllerInterface UClassType; \
	typedef IFluxCrowdControllerInterface ThisClass; \
	static void Execute_EndCrowd(UObject* O); \
	static void Execute_ResetCrowd(UObject* O, EFluxCrowdResetType type); \
	static void Execute_StartCrowd(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_14_PROLOG
#define FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_17_CALLBACK_WRAPPERS \
	FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFluxCrowdControllerInterface;

// ********** End Interface UFluxCrowdControllerInterface ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
