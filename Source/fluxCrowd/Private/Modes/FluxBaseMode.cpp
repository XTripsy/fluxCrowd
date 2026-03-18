// Fill out your copyright notice in the Description page of Project Settings.


#include "Modes/FluxBaseMode.h"

void UFluxBaseMode::StartMode()
{
	ReceiveStartMode();
	
	if (IsDebug)
	{
		UE_LOG(LogTemp, Log, TEXT("START MODE"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("START MODE"));
	}
}

void UFluxBaseMode::EndMode()
{
	ReceiveEndMode();
	
	if (IsDebug)
	{
		UE_LOG(LogTemp, Log, TEXT("END MODE"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("END MODE"));
	}
	
	EndModeDelegate.Broadcast();
}
