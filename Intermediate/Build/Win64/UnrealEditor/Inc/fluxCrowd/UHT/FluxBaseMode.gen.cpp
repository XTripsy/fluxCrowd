// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modes/FluxBaseMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFluxBaseMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxBaseMode();
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxBaseMode_NoRegister();
FLUXCROWD_API UFunction* Z_Construct_UDelegateFunction_fluxCrowd_OnEndModeDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_fluxCrowd();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnEndModeDelegate ****************************************************
struct Z_Construct_UDelegateFunction_fluxCrowd_OnEndModeDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Modes/FluxBaseMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_fluxCrowd_OnEndModeDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_fluxCrowd, nullptr, "OnEndModeDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_fluxCrowd_OnEndModeDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_fluxCrowd_OnEndModeDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_fluxCrowd_OnEndModeDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_fluxCrowd_OnEndModeDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnEndModeDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnEndModeDelegate)
{
	OnEndModeDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnEndModeDelegate ******************************************************

// ********** Begin Class UFluxBaseMode Function EndMode *******************************************
struct Z_Construct_UFunction_UFluxBaseMode_EndMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Modes/FluxBaseMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFluxBaseMode_EndMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFluxBaseMode, nullptr, "EndMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxBaseMode_EndMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFluxBaseMode_EndMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFluxBaseMode_EndMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFluxBaseMode_EndMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFluxBaseMode::execEndMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndMode();
	P_NATIVE_END;
}
// ********** End Class UFluxBaseMode Function EndMode *********************************************

// ********** Begin Class UFluxBaseMode Function ReceiveEndMode ************************************
static FName NAME_UFluxBaseMode_ReceiveEndMode = FName(TEXT("ReceiveEndMode"));
void UFluxBaseMode::ReceiveEndMode()
{
	UFunction* Func = FindFunctionChecked(NAME_UFluxBaseMode_ReceiveEndMode);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UFluxBaseMode_ReceiveEndMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Modes/FluxBaseMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFluxBaseMode_ReceiveEndMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFluxBaseMode, nullptr, "ReceiveEndMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxBaseMode_ReceiveEndMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFluxBaseMode_ReceiveEndMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFluxBaseMode_ReceiveEndMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFluxBaseMode_ReceiveEndMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UFluxBaseMode Function ReceiveEndMode **************************************

// ********** Begin Class UFluxBaseMode Function ReceiveStartMode **********************************
static FName NAME_UFluxBaseMode_ReceiveStartMode = FName(TEXT("ReceiveStartMode"));
void UFluxBaseMode::ReceiveStartMode()
{
	UFunction* Func = FindFunctionChecked(NAME_UFluxBaseMode_ReceiveStartMode);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UFluxBaseMode_ReceiveStartMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Modes/FluxBaseMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFluxBaseMode_ReceiveStartMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFluxBaseMode, nullptr, "ReceiveStartMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxBaseMode_ReceiveStartMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFluxBaseMode_ReceiveStartMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFluxBaseMode_ReceiveStartMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFluxBaseMode_ReceiveStartMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UFluxBaseMode Function ReceiveStartMode ************************************

// ********** Begin Class UFluxBaseMode Function StartMode *****************************************
struct Z_Construct_UFunction_UFluxBaseMode_StartMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Modes/FluxBaseMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFluxBaseMode_StartMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFluxBaseMode, nullptr, "StartMode", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxBaseMode_StartMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFluxBaseMode_StartMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFluxBaseMode_StartMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFluxBaseMode_StartMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFluxBaseMode::execStartMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartMode();
	P_NATIVE_END;
}
// ********** End Class UFluxBaseMode Function StartMode *******************************************

// ********** Begin Class UFluxBaseMode ************************************************************
void UFluxBaseMode::StaticRegisterNativesUFluxBaseMode()
{
	UClass* Class = UFluxBaseMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndMode", &UFluxBaseMode::execEndMode },
		{ "StartMode", &UFluxBaseMode::execStartMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFluxBaseMode;
UClass* UFluxBaseMode::GetPrivateStaticClass()
{
	using TClass = UFluxBaseMode;
	if (!Z_Registration_Info_UClass_UFluxBaseMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FluxBaseMode"),
			Z_Registration_Info_UClass_UFluxBaseMode.InnerSingleton,
			StaticRegisterNativesUFluxBaseMode,
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
	return Z_Registration_Info_UClass_UFluxBaseMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UFluxBaseMode_NoRegister()
{
	return UFluxBaseMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFluxBaseMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Modes/FluxBaseMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Modes/FluxBaseMode.h" },
		{ "ShowWorldContextPin", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "Category", "FluxBaseMode" },
		{ "ModuleRelativePath", "Public/Modes/FluxBaseMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndModeDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Modes/FluxBaseMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndModeDelegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFluxBaseMode_EndMode, "EndMode" }, // 4001225104
		{ &Z_Construct_UFunction_UFluxBaseMode_ReceiveEndMode, "ReceiveEndMode" }, // 1509041774
		{ &Z_Construct_UFunction_UFluxBaseMode_ReceiveStartMode, "ReceiveStartMode" }, // 4047119443
		{ &Z_Construct_UFunction_UFluxBaseMode_StartMode, "StartMode" }, // 1765261729
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFluxBaseMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFluxBaseMode_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFluxBaseMode, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFluxBaseMode_Statics::NewProp_EndModeDelegate = { "EndModeDelegate", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFluxBaseMode, EndModeDelegate), Z_Construct_UDelegateFunction_fluxCrowd_OnEndModeDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndModeDelegate_MetaData), NewProp_EndModeDelegate_MetaData) }; // 2042640300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFluxBaseMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFluxBaseMode_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFluxBaseMode_Statics::NewProp_EndModeDelegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFluxBaseMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFluxBaseMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_fluxCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFluxBaseMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFluxBaseMode_Statics::ClassParams = {
	&UFluxBaseMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFluxBaseMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFluxBaseMode_Statics::PropPointers),
	0,
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFluxBaseMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFluxBaseMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFluxBaseMode()
{
	if (!Z_Registration_Info_UClass_UFluxBaseMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFluxBaseMode.OuterSingleton, Z_Construct_UClass_UFluxBaseMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFluxBaseMode.OuterSingleton;
}
UFluxBaseMode::UFluxBaseMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFluxBaseMode);
UFluxBaseMode::~UFluxBaseMode() {}
// ********** End Class UFluxBaseMode **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h__Script_fluxCrowd_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFluxBaseMode, UFluxBaseMode::StaticClass, TEXT("UFluxBaseMode"), &Z_Registration_Info_UClass_UFluxBaseMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFluxBaseMode), 2347721943U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h__Script_fluxCrowd_647595173(TEXT("/Script/fluxCrowd"),
	Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h__Script_fluxCrowd_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Modes_FluxBaseMode_h__Script_fluxCrowd_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
