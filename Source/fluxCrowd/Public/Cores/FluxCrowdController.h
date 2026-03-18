// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FluxEnumCrowd.h"
#include "GameFramework/Actor.h"
#include "Cores/FluxCrowdControllerInterface.h"
#include "FluxCrowdController.generated.h"

class UFluxBaseState;
class UFluxBaseMode;
class UFluxCrowdSubsystem;
enum class EFluxCrowdStatus : uint8;
enum class EFluxCrowdState : uint8;
enum class EFluxCrowdResetType : uint8;

UCLASS(NotBlueprintable, HideCategories=(Rendering, Replication, Collision, Input, 
	Actor, LOD, Cooking, Transform, Physics, Networking, LevelInstance, HLOD, WorldPartition, DataLayers))
class FLUXCROWD_API AFluxCrowdController final : public AActor, public IFluxCrowdControllerInterface
{
	GENERATED_BODY()

private:
	TObjectPtr<UFluxCrowdSubsystem> FluxCrowdSubsystem;
	EFluxCrowdState FluxCurrentCrowdState;
	
	int8 CurrentIndexEnterState = -1, CurrentIndexExitState = -1, CurrentIndexMode = -1;
	UPROPERTY()
	TObjectPtr<UFluxBaseState> CurrentState;
	UPROPERTY()
	TObjectPtr<UFluxBaseMode> CurrentMode;
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayPriority = "0"))
	bool IsDebug = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayPriority = "0"))
	bool IsAutoActive = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (DisplayPriority = "0"))
	EFluxCrowdStatus FluxCurrentCrowdStatus = EFluxCrowdStatus::EIdleStatus;
	
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, Category = "States", meta = (DisplayPriority = "0"))
	TArray<TObjectPtr<UFluxBaseState>> EnterStates;
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, Category = "States", meta = (DisplayPriority = "0"))
	TArray<TObjectPtr<UFluxBaseState>> ExitStates;
	
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, Category = "Modes", meta = (DisplayPriority = "0"))
	TArray<TObjectPtr<UFluxBaseMode>> Modes;
	
private:
	UFUNCTION()
	void NextStates();
	UFUNCTION()
	void NextModes();
	
protected:
	virtual void BeginPlay() override;
	
public:
	AFluxCrowdController();
	virtual void StartCrowd_Implementation() override;
	virtual void ResetCrowd_Implementation(EFluxCrowdResetType type) override;
	virtual void EndCrowd_Implementation() override;
};
