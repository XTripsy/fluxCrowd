// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "States/FluxBaseState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFluxBaseState() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxBaseState();
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxBaseState_NoRegister();
FLUXCROWD_API UFunction* Z_Construct_UDelegateFunction_fluxCrowd_OnEndStateDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_fluxCrowd();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnEndStateDelegate ***************************************************
struct Z_Construct_UDelegateFunction_fluxCrowd_OnEndStateDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/States/FluxBaseState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_fluxCrowd_OnEndStateDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_fluxCrowd, nullptr, "OnEndStateDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_fluxCrowd_OnEndStateDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_fluxCrowd_OnEndStateDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_fluxCrowd_OnEndStateDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_fluxCrowd_OnEndStateDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndStateDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEndStateDelegate)
{
	OnEndStateDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnEndStateDelegate *****************************************************

// ********** Begin Class UFluxBaseState Function EndState *****************************************
struct Z_Construct_UFunction_UFluxBaseState_EndState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/States/FluxBaseState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFluxBaseState_EndState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFluxBaseState, nullptr, "EndState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxBaseState_EndState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFluxBaseState_EndState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFluxBaseState_EndState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFluxBaseState_EndState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFluxBaseState::execEndState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndState();
	P_NATIVE_END;
}
// ********** End Class UFluxBaseState Function EndState *******************************************

// ********** Begin Class UFluxBaseState Function ReceiveEndState **********************************
static FName NAME_UFluxBaseState_ReceiveEndState = FName(TEXT("ReceiveEndState"));
void UFluxBaseState::ReceiveEndState()
{
	UFunction* Func = FindFunctionChecked(NAME_UFluxBaseState_ReceiveEndState);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UFluxBaseState_ReceiveEndState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/States/FluxBaseState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFluxBaseState_ReceiveEndState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFluxBaseState, nullptr, "ReceiveEndState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxBaseState_ReceiveEndState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFluxBaseState_ReceiveEndState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFluxBaseState_ReceiveEndState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFluxBaseState_ReceiveEndState_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UFluxBaseState Function ReceiveEndState ************************************

// ********** Begin Class UFluxBaseState Function ReceiveStartState ********************************
static FName NAME_UFluxBaseState_ReceiveStartState = FName(TEXT("ReceiveStartState"));
void UFluxBaseState::ReceiveStartState()
{
	UFunction* Func = FindFunctionChecked(NAME_UFluxBaseState_ReceiveStartState);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UFluxBaseState_ReceiveStartState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/States/FluxBaseState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFluxBaseState_ReceiveStartState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFluxBaseState, nullptr, "ReceiveStartState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxBaseState_ReceiveStartState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFluxBaseState_ReceiveStartState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFluxBaseState_ReceiveStartState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFluxBaseState_ReceiveStartState_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UFluxBaseState Function ReceiveStartState **********************************

// ********** Begin Class UFluxBaseState Function StartState ***************************************
struct Z_Construct_UFunction_UFluxBaseState_StartState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/States/FluxBaseState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFluxBaseState_StartState_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFluxBaseState, nullptr, "StartState", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxBaseState_StartState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFluxBaseState_StartState_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFluxBaseState_StartState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFluxBaseState_StartState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFluxBaseState::execStartState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartState();
	P_NATIVE_END;
}
// ********** End Class UFluxBaseState Function StartState *****************************************

// ********** Begin Class UFluxBaseState ***********************************************************
void UFluxBaseState::StaticRegisterNativesUFluxBaseState()
{
	UClass* Class = UFluxBaseState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndState", &UFluxBaseState::execEndState },
		{ "StartState", &UFluxBaseState::execStartState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFluxBaseState;
UClass* UFluxBaseState::GetPrivateStaticClass()
{
	using TClass = UFluxBaseState;
	if (!Z_Registration_Info_UClass_UFluxBaseState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FluxBaseState"),
			Z_Registration_Info_UClass_UFluxBaseState.InnerSingleton,
			StaticRegisterNativesUFluxBaseState,
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
	return Z_Registration_Info_UClass_UFluxBaseState.InnerSingleton;
}
UClass* Z_Construct_UClass_UFluxBaseState_NoRegister()
{
	return UFluxBaseState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFluxBaseState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "States/FluxBaseState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/States/FluxBaseState.h" },
		{ "ShowWorldContextPin", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "Category", "FluxBaseState" },
		{ "ModuleRelativePath", "Public/States/FluxBaseState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndStateDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/States/FluxBaseState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndStateDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFluxBaseState_EndState, "EndState" }, // 1321664071
		{ &Z_Construct_UFunction_UFluxBaseState_ReceiveEndState, "ReceiveEndState" }, // 3436882504
		{ &Z_Construct_UFunction_UFluxBaseState_ReceiveStartState, "ReceiveStartState" }, // 2577107558
		{ &Z_Construct_UFunction_UFluxBaseState_StartState, "StartState" }, // 1349287070
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFluxBaseState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFluxBaseState_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFluxBaseState, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFluxBaseState_Statics::NewProp_EndStateDelegate = { "EndStateDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFluxBaseState, EndStateDelegate), Z_Construct_UDelegateFunction_fluxCrowd_OnEndStateDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndStateDelegate_MetaData), NewProp_EndStateDelegate_MetaData) }; // 3086406264
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFluxBaseState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFluxBaseState_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFluxBaseState_Statics::NewProp_EndStateDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFluxBaseState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFluxBaseState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_fluxCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFluxBaseState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFluxBaseState_Statics::ClassParams = {
	&UFluxBaseState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFluxBaseState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFluxBaseState_Statics::PropPointers),
	0,
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFluxBaseState_Statics::Class_MetaDataParams), Z_Construct_UClass_UFluxBaseState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFluxBaseState()
{
	if (!Z_Registration_Info_UClass_UFluxBaseState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFluxBaseState.OuterSingleton, Z_Construct_UClass_UFluxBaseState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFluxBaseState.OuterSingleton;
}
UFluxBaseState::UFluxBaseState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFluxBaseState);
UFluxBaseState::~UFluxBaseState() {}
// ********** End Class UFluxBaseState *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h__Script_fluxCrowd_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFluxBaseState, UFluxBaseState::StaticClass, TEXT("UFluxBaseState"), &Z_Registration_Info_UClass_UFluxBaseState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFluxBaseState), 3073442599U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h__Script_fluxCrowd_768744377(TEXT("/Script/fluxCrowd"),
	Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h__Script_fluxCrowd_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_States_FluxBaseState_h__Script_fluxCrowd_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
