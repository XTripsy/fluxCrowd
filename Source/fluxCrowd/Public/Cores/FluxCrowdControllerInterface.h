// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FluxCrowdControllerInterface.generated.h"

enum class EFluxCrowdStatus : uint8;
enum class EFluxCrowdState : uint8;
enum class EFluxCrowdResetType : uint8;

// This class does not need to be modified.
UINTERFACE()
class UFluxCrowdControllerInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FLUXCROWD_API IFluxCrowdControllerInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Flux Crowd")
	void StartCrowd();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Flux Crowd")
	void ResetCrowd(EFluxCrowdResetType type);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Flux Crowd")
	void EndCrowd();
};
