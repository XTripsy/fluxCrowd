// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cores/FluxCrowdControllerInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFluxCrowdControllerInterface() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxCrowdControllerInterface();
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxCrowdControllerInterface_NoRegister();
FLUXCROWD_API UEnum* Z_Construct_UEnum_fluxCrowd_EFluxCrowdResetType();
UPackage* Z_Construct_UPackage__Script_fluxCrowd();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UFluxCrowdControllerInterface Function EndCrowd **********************
void IFluxCrowdControllerInterface::EndCrowd()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EndCrowd instead.");
}
static FName NAME_UFluxCrowdControllerInterface_EndCrowd = FName(TEXT("EndCrowd"));
void IFluxCrowdControllerInterface::Execute_EndCrowd(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFluxCrowdControllerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UFluxCrowdControllerInterface_EndCrowd);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IFluxCrowdControllerInterface*)(O->GetNativeInterfaceAddress(UFluxCrowdControllerInterface::StaticClass())))
	{
		I->EndCrowd_Implementation();
	}
}
struct Z_Construct_UFunction_UFluxCrowdControllerInterface_EndCrowd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flux Crowd" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdControllerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFluxCrowdControllerInterface_EndCrowd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFluxCrowdControllerInterface, nullptr, "EndCrowd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxCrowdControllerInterface_EndCrowd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFluxCrowdControllerInterface_EndCrowd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFluxCrowdControllerInterface_EndCrowd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFluxCrowdControllerInterface_EndCrowd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFluxCrowdControllerInterface::execEndCrowd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndCrowd_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UFluxCrowdControllerInterface Function EndCrowd ************************

// ********** Begin Interface UFluxCrowdControllerInterface Function ResetCrowd ********************
struct FluxCrowdControllerInterface_eventResetCrowd_Parms
{
	EFluxCrowdResetType type;
};
void IFluxCrowdControllerInterface::ResetCrowd(EFluxCrowdResetType type)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ResetCrowd instead.");
}
static FName NAME_UFluxCrowdControllerInterface_ResetCrowd = FName(TEXT("ResetCrowd"));
void IFluxCrowdControllerInterface::Execute_ResetCrowd(UObject* O, EFluxCrowdResetType type)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFluxCrowdControllerInterface::StaticClass()));
	FluxCrowdControllerInterface_eventResetCrowd_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UFluxCrowdControllerInterface_ResetCrowd);
	if (Func)
	{
		Parms.type=type;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IFluxCrowdControllerInterface*)(O->GetNativeInterfaceAddress(UFluxCrowdControllerInterface::StaticClass())))
	{
		I->ResetCrowd_Implementation(type);
	}
}
struct Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flux Crowd" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdControllerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FluxCrowdControllerInterface_eventResetCrowd_Parms, type), Z_Construct_UEnum_fluxCrowd_EFluxCrowdResetType, METADATA_PARAMS(0, nullptr) }; // 1238675098
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics::NewProp_type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics::NewProp_type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFluxCrowdControllerInterface, nullptr, "ResetCrowd", Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics::PropPointers), sizeof(FluxCrowdControllerInterface_eventResetCrowd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FluxCrowdControllerInterface_eventResetCrowd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFluxCrowdControllerInterface::execResetCrowd)
{
	P_GET_ENUM(EFluxCrowdResetType,Z_Param_type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCrowd_Implementation(EFluxCrowdResetType(Z_Param_type));
	P_NATIVE_END;
}
// ********** End Interface UFluxCrowdControllerInterface Function ResetCrowd **********************

// ********** Begin Interface UFluxCrowdControllerInterface Function StartCrowd ********************
void IFluxCrowdControllerInterface::StartCrowd()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartCrowd instead.");
}
static FName NAME_UFluxCrowdControllerInterface_StartCrowd = FName(TEXT("StartCrowd"));
void IFluxCrowdControllerInterface::Execute_StartCrowd(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UFluxCrowdControllerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UFluxCrowdControllerInterface_StartCrowd);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IFluxCrowdControllerInterface*)(O->GetNativeInterfaceAddress(UFluxCrowdControllerInterface::StaticClass())))
	{
		I->StartCrowd_Implementation();
	}
}
struct Z_Construct_UFunction_UFluxCrowdControllerInterface_StartCrowd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flux Crowd" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdControllerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFluxCrowdControllerInterface_StartCrowd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFluxCrowdControllerInterface, nullptr, "StartCrowd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFluxCrowdControllerInterface_StartCrowd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFluxCrowdControllerInterface_StartCrowd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFluxCrowdControllerInterface_StartCrowd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFluxCrowdControllerInterface_StartCrowd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IFluxCrowdControllerInterface::execStartCrowd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCrowd_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UFluxCrowdControllerInterface Function StartCrowd **********************

// ********** Begin Interface UFluxCrowdControllerInterface ****************************************
void UFluxCrowdControllerInterface::StaticRegisterNativesUFluxCrowdControllerInterface()
{
	UClass* Class = UFluxCrowdControllerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndCrowd", &IFluxCrowdControllerInterface::execEndCrowd },
		{ "ResetCrowd", &IFluxCrowdControllerInterface::execResetCrowd },
		{ "StartCrowd", &IFluxCrowdControllerInterface::execStartCrowd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFluxCrowdControllerInterface;
UClass* UFluxCrowdControllerInterface::GetPrivateStaticClass()
{
	using TClass = UFluxCrowdControllerInterface;
	if (!Z_Registration_Info_UClass_UFluxCrowdControllerInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FluxCrowdControllerInterface"),
			Z_Registration_Info_UClass_UFluxCrowdControllerInterface.InnerSingleton,
			StaticRegisterNativesUFluxCrowdControllerInterface,
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
	return Z_Registration_Info_UClass_UFluxCrowdControllerInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UFluxCrowdControllerInterface_NoRegister()
{
	return UFluxCrowdControllerInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFluxCrowdControllerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdControllerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFluxCrowdControllerInterface_EndCrowd, "EndCrowd" }, // 2892842906
		{ &Z_Construct_UFunction_UFluxCrowdControllerInterface_ResetCrowd, "ResetCrowd" }, // 2220827663
		{ &Z_Construct_UFunction_UFluxCrowdControllerInterface_StartCrowd, "StartCrowd" }, // 1923220894
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFluxCrowdControllerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFluxCrowdControllerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_fluxCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFluxCrowdControllerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFluxCrowdControllerInterface_Statics::ClassParams = {
	&UFluxCrowdControllerInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFluxCrowdControllerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UFluxCrowdControllerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFluxCrowdControllerInterface()
{
	if (!Z_Registration_Info_UClass_UFluxCrowdControllerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFluxCrowdControllerInterface.OuterSingleton, Z_Construct_UClass_UFluxCrowdControllerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFluxCrowdControllerInterface.OuterSingleton;
}
UFluxCrowdControllerInterface::UFluxCrowdControllerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFluxCrowdControllerInterface);
// ********** End Interface UFluxCrowdControllerInterface ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h__Script_fluxCrowd_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFluxCrowdControllerInterface, UFluxCrowdControllerInterface::StaticClass, TEXT("UFluxCrowdControllerInterface"), &Z_Registration_Info_UClass_UFluxCrowdControllerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFluxCrowdControllerInterface), 961383219U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h__Script_fluxCrowd_124609613(TEXT("/Script/fluxCrowd"),
	Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h__Script_fluxCrowd_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdControllerInterface_h__Script_fluxCrowd_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
