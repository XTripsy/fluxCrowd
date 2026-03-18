// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cores/FluxCrowdSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFluxCrowdSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxCrowdSubsystem();
FLUXCROWD_API UClass* Z_Construct_UClass_UFluxCrowdSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_fluxCrowd();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFluxCrowdSubsystem ******************************************************
void UFluxCrowdSubsystem::StaticRegisterNativesUFluxCrowdSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFluxCrowdSubsystem;
UClass* UFluxCrowdSubsystem::GetPrivateStaticClass()
{
	using TClass = UFluxCrowdSubsystem;
	if (!Z_Registration_Info_UClass_UFluxCrowdSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FluxCrowdSubsystem"),
			Z_Registration_Info_UClass_UFluxCrowdSubsystem.InnerSingleton,
			StaticRegisterNativesUFluxCrowdSubsystem,
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
	return Z_Registration_Info_UClass_UFluxCrowdSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UFluxCrowdSubsystem_NoRegister()
{
	return UFluxCrowdSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFluxCrowdSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Cores/FluxCrowdSubsystem.h" },
		{ "ModuleRelativePath", "Public/Cores/FluxCrowdSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFluxCrowdSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFluxCrowdSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_fluxCrowd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFluxCrowdSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFluxCrowdSubsystem_Statics::ClassParams = {
	&UFluxCrowdSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFluxCrowdSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UFluxCrowdSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFluxCrowdSubsystem()
{
	if (!Z_Registration_Info_UClass_UFluxCrowdSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFluxCrowdSubsystem.OuterSingleton, Z_Construct_UClass_UFluxCrowdSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFluxCrowdSubsystem.OuterSingleton;
}
UFluxCrowdSubsystem::UFluxCrowdSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFluxCrowdSubsystem);
UFluxCrowdSubsystem::~UFluxCrowdSubsystem() {}
// ********** End Class UFluxCrowdSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdSubsystem_h__Script_fluxCrowd_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFluxCrowdSubsystem, UFluxCrowdSubsystem::StaticClass, TEXT("UFluxCrowdSubsystem"), &Z_Registration_Info_UClass_UFluxCrowdSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFluxCrowdSubsystem), 646747224U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdSubsystem_h__Script_fluxCrowd_92986517(TEXT("/Script/fluxCrowd"),
	Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdSubsystem_h__Script_fluxCrowd_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxCrowdSubsystem_h__Script_fluxCrowd_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
