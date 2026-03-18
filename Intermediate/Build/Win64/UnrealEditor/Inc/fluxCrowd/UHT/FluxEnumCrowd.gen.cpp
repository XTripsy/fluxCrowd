// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cores/FluxEnumCrowd.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFluxEnumCrowd() {}

// ********** Begin Cross Module References ********************************************************
FLUXCROWD_API UEnum* Z_Construct_UEnum_fluxCrowd_EFluxCrowdResetType();
FLUXCROWD_API UEnum* Z_Construct_UEnum_fluxCrowd_EFluxCrowdState();
FLUXCROWD_API UEnum* Z_Construct_UEnum_fluxCrowd_EFluxCrowdStatus();
UPackage* Z_Construct_UPackage__Script_fluxCrowd();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EFluxCrowdStatus **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFluxCrowdStatus;
static UEnum* EFluxCrowdStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFluxCrowdStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFluxCrowdStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_fluxCrowd_EFluxCrowdStatus, (UObject*)Z_Construct_UPackage__Script_fluxCrowd(), TEXT("EFluxCrowdStatus"));
	}
	return Z_Registration_Info_UEnum_EFluxCrowdStatus.OuterSingleton;
}
template<> FLUXCROWD_API UEnum* StaticEnum<EFluxCrowdStatus>()
{
	return EFluxCrowdStatus_StaticEnum();
}
struct Z_Construct_UEnum_fluxCrowd_EFluxCrowdStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EActiveStatus.Name", "EFluxCrowdStatus::EActiveStatus" },
		{ "EDisableStatus.Name", "EFluxCrowdStatus::EDisableStatus" },
		{ "EIdleStatus.Name", "EFluxCrowdStatus::EIdleStatus" },
		{ "ModuleRelativePath", "Public/Cores/FluxEnumCrowd.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFluxCrowdStatus::EIdleStatus", (int64)EFluxCrowdStatus::EIdleStatus },
		{ "EFluxCrowdStatus::EActiveStatus", (int64)EFluxCrowdStatus::EActiveStatus },
		{ "EFluxCrowdStatus::EDisableStatus", (int64)EFluxCrowdStatus::EDisableStatus },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_fluxCrowd_EFluxCrowdStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_fluxCrowd,
	nullptr,
	"EFluxCrowdStatus",
	"EFluxCrowdStatus",
	Z_Construct_UEnum_fluxCrowd_EFluxCrowdStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_fluxCrowd_EFluxCrowdStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_fluxCrowd_EFluxCrowdStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_fluxCrowd_EFluxCrowdStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_fluxCrowd_EFluxCrowdStatus()
{
	if (!Z_Registration_Info_UEnum_EFluxCrowdStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFluxCrowdStatus.InnerSingleton, Z_Construct_UEnum_fluxCrowd_EFluxCrowdStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFluxCrowdStatus.InnerSingleton;
}
// ********** End Enum EFluxCrowdStatus ************************************************************

// ********** Begin Enum EFluxCrowdState ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFluxCrowdState;
static UEnum* EFluxCrowdState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFluxCrowdState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFluxCrowdState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_fluxCrowd_EFluxCrowdState, (UObject*)Z_Construct_UPackage__Script_fluxCrowd(), TEXT("EFluxCrowdState"));
	}
	return Z_Registration_Info_UEnum_EFluxCrowdState.OuterSingleton;
}
template<> FLUXCROWD_API UEnum* StaticEnum<EFluxCrowdState>()
{
	return EFluxCrowdState_StaticEnum();
}
struct Z_Construct_UEnum_fluxCrowd_EFluxCrowdState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EEndState.Name", "EFluxCrowdState::EEndState" },
		{ "ERunState.Name", "EFluxCrowdState::ERunState" },
		{ "EStartState.Name", "EFluxCrowdState::EStartState" },
		{ "ModuleRelativePath", "Public/Cores/FluxEnumCrowd.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFluxCrowdState::EStartState", (int64)EFluxCrowdState::EStartState },
		{ "EFluxCrowdState::ERunState", (int64)EFluxCrowdState::ERunState },
		{ "EFluxCrowdState::EEndState", (int64)EFluxCrowdState::EEndState },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_fluxCrowd_EFluxCrowdState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_fluxCrowd,
	nullptr,
	"EFluxCrowdState",
	"EFluxCrowdState",
	Z_Construct_UEnum_fluxCrowd_EFluxCrowdState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_fluxCrowd_EFluxCrowdState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_fluxCrowd_EFluxCrowdState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_fluxCrowd_EFluxCrowdState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_fluxCrowd_EFluxCrowdState()
{
	if (!Z_Registration_Info_UEnum_EFluxCrowdState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFluxCrowdState.InnerSingleton, Z_Construct_UEnum_fluxCrowd_EFluxCrowdState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFluxCrowdState.InnerSingleton;
}
// ********** End Enum EFluxCrowdState *************************************************************

// ********** Begin Enum EFluxCrowdResetType *******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFluxCrowdResetType;
static UEnum* EFluxCrowdResetType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFluxCrowdResetType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFluxCrowdResetType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_fluxCrowd_EFluxCrowdResetType, (UObject*)Z_Construct_UPackage__Script_fluxCrowd(), TEXT("EFluxCrowdResetType"));
	}
	return Z_Registration_Info_UEnum_EFluxCrowdResetType.OuterSingleton;
}
template<> FLUXCROWD_API UEnum* StaticEnum<EFluxCrowdResetType>()
{
	return EFluxCrowdResetType_StaticEnum();
}
struct Z_Construct_UEnum_fluxCrowd_EFluxCrowdResetType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EResetAll.Name", "EFluxCrowdResetType::EResetAll" },
		{ "EResetMode.Name", "EFluxCrowdResetType::EResetMode" },
		{ "ModuleRelativePath", "Public/Cores/FluxEnumCrowd.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFluxCrowdResetType::EResetMode", (int64)EFluxCrowdResetType::EResetMode },
		{ "EFluxCrowdResetType::EResetAll", (int64)EFluxCrowdResetType::EResetAll },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_fluxCrowd_EFluxCrowdResetType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_fluxCrowd,
	nullptr,
	"EFluxCrowdResetType",
	"EFluxCrowdResetType",
	Z_Construct_UEnum_fluxCrowd_EFluxCrowdResetType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_fluxCrowd_EFluxCrowdResetType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_fluxCrowd_EFluxCrowdResetType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_fluxCrowd_EFluxCrowdResetType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_fluxCrowd_EFluxCrowdResetType()
{
	if (!Z_Registration_Info_UEnum_EFluxCrowdResetType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFluxCrowdResetType.InnerSingleton, Z_Construct_UEnum_fluxCrowd_EFluxCrowdResetType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFluxCrowdResetType.InnerSingleton;
}
// ********** End Enum EFluxCrowdResetType *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxEnumCrowd_h__Script_fluxCrowd_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFluxCrowdStatus_StaticEnum, TEXT("EFluxCrowdStatus"), &Z_Registration_Info_UEnum_EFluxCrowdStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1754537494U) },
		{ EFluxCrowdState_StaticEnum, TEXT("EFluxCrowdState"), &Z_Registration_Info_UEnum_EFluxCrowdState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1501701067U) },
		{ EFluxCrowdResetType_StaticEnum, TEXT("EFluxCrowdResetType"), &Z_Registration_Info_UEnum_EFluxCrowdResetType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1238675098U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxEnumCrowd_h__Script_fluxCrowd_1921795058(TEXT("/Script/fluxCrowd"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxEnumCrowd_h__Script_fluxCrowd_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Crowd_Plugins_fluxCrowd_Source_fluxCrowd_Public_Cores_FluxEnumCrowd_h__Script_fluxCrowd_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
