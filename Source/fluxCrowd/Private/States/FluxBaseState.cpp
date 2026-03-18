// Fill out your copyright notice in the Description page of Project Settings.


#include "States/FluxBaseState.h"

void UFluxBaseState::StartState()
{
	ReceiveStartState();
}

void UFluxBaseState::EndState()
{
	ReceiveEndState();
	EndStateDelegate.Broadcast();
}
