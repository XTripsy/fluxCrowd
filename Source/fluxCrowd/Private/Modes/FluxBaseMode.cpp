// Fill out your copyright notice in the Description page of Project Settings.


#include "Modes/FluxBaseMode.h"

void UFluxBaseMode::StartMode()
{
	ReceiveStartMode();
}

void UFluxBaseMode::EndMode()
{
	ReceiveEndMode();
	EndModeDelegate.Broadcast();
}
