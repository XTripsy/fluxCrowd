// Fill out your copyright notice in the Description page of Project Settings.


#include "States/FluxBaseState.h"

void UFluxBaseState::StartState()
{
	ReceiveStartState();
	
	if (IsDebug)
	{
		UE_LOG(LogTemp, Log, TEXT("START STATE"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("START STATE"));
	}
}

void UFluxBaseState::EndState()
{
	ReceiveEndState();
	
	if (IsDebug)
	{
		UE_LOG(LogTemp, Log, TEXT("END STATE"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("END STATE"));
	}
	
	EndStateDelegate.Broadcast();
}
