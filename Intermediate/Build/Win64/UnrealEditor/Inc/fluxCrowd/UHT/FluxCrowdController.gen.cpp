// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cores/FluxCrowdController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFluxCrowdController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
FLUXCROWD_API UClass* Z_Construct_UClass_AFluxCrowdController();
FLUXCROWD_API UClass* Z_Construct_UClass_AFluxCrowdController_NoRegister();
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxBaseMode_NoRegister();
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxBaseState_NoRegister();
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxCrowdControllerInterface_NoRegister();
FLUXCROWD_API UEnum* Z_Construct_UEnum_fluxCrowd_EFluxCrowdStatus();
UPackage* Z_Construct_UPackage__Script_fluxCrowd();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFluxCrowdController Function NextModes **********************************
struct Z_Construct_UFunction_AFluxCrowdController_NextModes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFluxCrowdController_NextModes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFluxCrowdController, nullptr, "NextModes", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFluxCrowdController_NextModes_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFluxCrowdController_NextModes_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFluxCrowdController_NextModes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFluxCrowdController_NextModes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFluxCrowdController::execNextModes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextModes();
	P_NATIVE_END;
}
// ********** End Class AFluxCrowdController Function NextModes ************************************

// ********** Begin Class AFluxCrowdController Function NextStates *********************************
struct Z_Construct_UFunction_AFluxCrowdController_NextStates_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFluxCrowdController_NextStates_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFluxCrowdController, nullptr, "NextStates", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFluxCrowdController_NextStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFluxCrowdController_NextStates_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFluxCrowdController_NextStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFluxCrowdController_NextStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFluxCrowdController::execNextStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextStates();
	P_NATIVE_END;
}
// ********** End Class AFluxCrowdController Function NextStates ***********************************

// ********** Begin Class AFluxCrowdController *****************************************************
void AFluxCrowdController::StaticRegisterNativesAFluxCrowdController()
{
	UClass* Class = AFluxCrowdController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NextModes", &AFluxCrowdController::execNextModes },
		{ "NextStates", &AFluxCrowdController::execNextStates },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFluxCrowdController;
UClass* AFluxCrowdController::GetPrivateStaticClass()
{
	using TClass = AFluxCrowdController;
	if (!Z_Registration_Info_UClass_AFluxCrowdController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FluxCrowdController"),
			Z_Registration_Info_UClass_AFluxCrowdController.InnerSingleton,
			StaticRegisterNativesAFluxCrowdController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFluxCrowdController.InnerSingleton;
}
UClass* Z_Construct_UClass_AFluxCrowdController_NoRegister()
{
	return AFluxCrowdController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFluxCrowdController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Replication Collision Input Actor LOD Cooking Transform Physics Networking LevelInstance HLOD WorldPartition DataLayers" },
		{ "IncludePath", "Cores/FluxCrowdController.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsAutoActive_MetaData[] = {
		{ "Category", "FluxCrowdController" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FluxCurrentCrowdStatus_MetaData[] = {
		{ "Category", "FluxCrowdController" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterStates_Inner_MetaData[] = {
		{ "Category", "States" },
		{ "DisplayPriority", "0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnterStates_MetaData[] = {
		{ "Category", "States" },
		{ "DisplayPriority", "0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitStates_Inner_MetaData[] = {
		{ "Category", "States" },
		{ "DisplayPriority", "0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExitStates_MetaData[] = {
		{ "Category", "States" },
		{ "DisplayPriority", "0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modes_Inner_MetaData[] = {
		{ "Category", "Modes" },
		{ "DisplayPriority", "0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modes_MetaData[] = {
		{ "Category", "Modes" },
		{ "DisplayPriority", "0" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMode;
	static void NewProp_IsAutoActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAutoActive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FluxCurrentCrowdStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FluxCurrentCrowdStatus;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnterStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnterStates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExitStates_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExitStates;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Modes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Modes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFluxCrowdController_NextModes, "NextModes" }, // 1525480027
		{ &Z_Construct_UFunction_AFluxCrowdController_NextStates, "NextStates" }, // 432633192
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFluxCrowdController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFluxCrowdController, CurrentState), Z_Construct_UClass_UFluxBaseState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_CurrentMode = { "CurrentMode", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFluxCrowdController, CurrentMode), Z_Construct_UClass_UFluxBaseMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMode_MetaData), NewProp_CurrentMode_MetaData) };
void Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_IsAutoActive_SetBit(void* Obj)
{
	((AFluxCrowdController*)Obj)->IsAutoActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_IsAutoActive = { "IsAutoActive", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFluxCrowdController), &Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_IsAutoActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsAutoActive_MetaData), NewProp_IsAutoActive_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_FluxCurrentCrowdStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_FluxCurrentCrowdStatus = { "FluxCurrentCrowdStatus", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFluxCrowdController, FluxCurrentCrowdStatus), Z_Construct_UEnum_fluxCrowd_EFluxCrowdStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FluxCurrentCrowdStatus_MetaData), NewProp_FluxCurrentCrowdStatus_MetaData) }; // 1754537494
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_EnterStates_Inner = { "EnterStates", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFluxBaseState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterStates_Inner_MetaData), NewProp_EnterStates_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_EnterStates = { "EnterStates", nullptr, (EPropertyFlags)0x012408800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFluxCrowdController, EnterStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnterStates_MetaData), NewProp_EnterStates_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_ExitStates_Inner = { "ExitStates", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFluxBaseState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitStates_Inner_MetaData), NewProp_ExitStates_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_ExitStates = { "ExitStates", nullptr, (EPropertyFlags)0x012408800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFluxCrowdController, ExitStates), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExitStates_MetaData), NewProp_ExitStates_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_Modes_Inner = { "Modes", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFluxBaseMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modes_Inner_MetaData), NewProp_Modes_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_Modes = { "Modes", nullptr, (EPropertyFlags)0x012408800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFluxCrowdController, Modes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modes_MetaData), NewProp_Modes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFluxCrowdController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_CurrentMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_IsAutoActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_FluxCurrentCrowdStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_FluxCurrentCrowdStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_EnterStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_EnterStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_ExitStates_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_ExitStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_Modes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFluxCrowdController_Statics::NewProp_Modes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFluxCrowdController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFluxCrowdController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_fluxCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFluxCrowdController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFluxCrowdController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFluxCrowdControllerInterface_NoRegister, (int32)VTABLE_OFFSET(AFluxCrowdController, IFluxCrowdControllerInterface), false },  // 961383219
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFluxCrowdController_Statics::ClassParams = {
	&AFluxCrowdController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFluxCrowdController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFluxCrowdController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFluxCrowdController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFluxCrowdController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFluxCrowdController()
{
	if (!Z_Registration_Info_UClass_AFluxCrowdController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFluxCrowdController.OuterSingleton, Z_Construct_UClass_AFluxCrowdController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFluxCrowdController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFluxCrowdController);
AFluxCrowdController::~AFluxCrowdController() {}
// ********** End Class AFluxCrowdController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h__Script_fluxCrowd_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFluxCrowdController, AFluxCrowdController::StaticClass, TEXT("AFluxCrowdController"), &Z_Registration_Info_UClass_AFluxCrowdController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFluxCrowdController), 1287535351U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h__Script_fluxCrowd_2601277011(TEXT("/Script/fluxCrowd"),
	Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h__Script_fluxCrowd_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdController_h__Script_fluxCrowd_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
