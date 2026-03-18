// Fill out your copyright notice in the Description page of Project Settings.


#include "Cores/FluxCrowdSubsystem.h"


void UFluxCrowdSubsystem::UpdateCurrentFluxCrowdController(IFluxCrowdControllerInterface* controller)
{
	CurrentFluxCrowdController = controller;
}

void UFluxCrowdSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UFluxCrowdSubsystem::Deinitialize()
{
	Super::Deinitialize();
}
