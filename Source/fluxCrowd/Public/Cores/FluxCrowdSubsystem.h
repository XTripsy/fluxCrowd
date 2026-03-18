// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "FluxCrowdSubsystem.generated.h"

class IFluxCrowdControllerInterface;

UCLASS()
class FLUXCROWD_API UFluxCrowdSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	
private:
	IFluxCrowdControllerInterface* CurrentFluxCrowdController;
	
public:
	void UpdateCurrentFluxCrowdController(IFluxCrowdControllerInterface* controller);
	FORCEINLINE IFluxCrowdControllerInterface* GetCurrentFluxCrowdController() const
	{
		return CurrentFluxCrowdController;
	}
	
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
};
