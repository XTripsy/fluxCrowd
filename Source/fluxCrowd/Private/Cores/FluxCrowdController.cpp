// Fill out your copyright notice in the Description page of Project Settings.


#include "Cores/FluxCrowdController.h"
#include "Cores/FluxCrowdSubsystem.h"
#include "Modes/FluxBaseMode.h"
#include "States/FluxBaseState.h"
#include "Cores/FluxEnumCrowd.h"

void AFluxCrowdController::NextStates()
{
	if (CurrentState) CurrentState->EndStateDelegate.RemoveDynamic(this, &AFluxCrowdController::NextStates);
	
	switch (FluxCurrentCrowdState)
	{
	case EFluxCrowdState::EStartState:
		CurrentIndexEnterState++;
		
		if (CurrentIndexEnterState == EnterStates.Num())
		{
			FluxCurrentCrowdState = EFluxCrowdState::ERunState;
			NextModes();
			return;
		}
		
		CurrentState = EnterStates[CurrentIndexEnterState];
		CurrentState->World = GetWorld();
		CurrentState->EndStateDelegate.AddDynamic(this, &AFluxCrowdController::NextStates);
		CurrentState->StartState();
		break;
	case EFluxCrowdState::EEndState:
		CurrentIndexExitState++;
		
		if (CurrentIndexExitState == ExitStates.Num())
		{
			IFluxCrowdControllerInterface::Execute_EndCrowd(this);
			return;
		}
		
		CurrentState = ExitStates[CurrentIndexExitState];
		CurrentState->World = GetWorld();
		CurrentState->EndStateDelegate.AddDynamic(this, &AFluxCrowdController::NextStates);
		CurrentState->StartState();
		break;
	}
}

void AFluxCrowdController::NextModes()
{
	if (CurrentMode) CurrentMode->EndModeDelegate.RemoveDynamic(this, &AFluxCrowdController::NextModes);
	
	CurrentIndexMode++;
	
	if (CurrentIndexMode == Modes.Num())
	{
		FluxCurrentCrowdState = EFluxCrowdState::EEndState;
		if (ExitStates.IsEmpty())
		{
			IFluxCrowdControllerInterface::Execute_EndCrowd(this);
			return;
		}
		NextStates();
		return;
	}
	
	CurrentMode = Modes[CurrentIndexMode];
	CurrentMode->World = GetWorld();
	CurrentMode->EndModeDelegate.AddDynamic(this, &AFluxCrowdController::NextModes);
	CurrentMode->StartMode();
}

void AFluxCrowdController::BeginPlay()
{
	Super::BeginPlay();
	
	if (!IsAutoActive) return;
	
	IFluxCrowdControllerInterface::Execute_StartCrowd(this);
}

AFluxCrowdController::AFluxCrowdController()
{
	bReplicates = false;
	PrimaryActorTick.bCanEverTick = false;
}

void AFluxCrowdController::StartCrowd_Implementation()
{
	if (IsDebug)
	{
		UE_LOG(LogTemp, Log, TEXT("START CROWD"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("START CROWD"));
	}
	
	if (!HasAuthority()) return;
	
	if (FluxCurrentCrowdStatus == EFluxCrowdStatus::EDisableStatus) return;
	
	FluxCrowdSubsystem = GetWorld()->GetSubsystem<UFluxCrowdSubsystem>();
	FluxCurrentCrowdStatus = EFluxCrowdStatus::EActiveStatus;
	FluxCurrentCrowdState = EFluxCrowdState::EStartState;
	FluxCrowdSubsystem->UpdateCurrentFluxCrowdController(this);
	NextStates();
}

void AFluxCrowdController::ResetCrowd_Implementation(EFluxCrowdResetType type)
{
	if (IsDebug)
	{
		UE_LOG(LogTemp, Log, TEXT("RESET CROWD"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("RESET CROWD"));
	}
	
	if (!HasAuthority()) return;
	
	switch (type)
	{
	case EFluxCrowdResetType::EResetMode:
		CurrentIndexExitState = -1;
		CurrentIndexMode = -1;
		NextModes();
		break;
	case EFluxCrowdResetType::EResetAll:
		CurrentIndexEnterState = -1;
		CurrentIndexExitState = -1;
		CurrentIndexMode = -1;
		NextStates();
		break;
	}
}

void AFluxCrowdController::EndCrowd_Implementation()
{
	if (IsDebug)
	{
		UE_LOG(LogTemp, Log, TEXT("END CROWD"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("END CROWD"));
	}
	
	if (!HasAuthority()) return;
	
	FluxCurrentCrowdStatus = EFluxCrowdStatus::EDisableStatus;
	CurrentIndexEnterState = -1;
	CurrentIndexExitState = -1;
	CurrentIndexMode = -1;
	CurrentState->EndStateDelegate.RemoveDynamic(this, &AFluxCrowdController::NextStates);
	CurrentMode->EndModeDelegate.RemoveDynamic(this, &AFluxCrowdController::NextModes);
	FluxCrowdSubsystem->UpdateCurrentFluxCrowdController(nullptr);
}