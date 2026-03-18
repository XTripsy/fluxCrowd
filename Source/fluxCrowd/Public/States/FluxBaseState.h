// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FluxBaseState.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndStateDelegate);

UCLASS(Blueprintable, EditInlineNew, BlueprintType, meta=(ShowWorldContextPin), Abstract)
class FLUXCROWD_API UFluxBaseState : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UWorld> World;
	UPROPERTY()
	FOnEndStateDelegate EndStateDelegate;
	
protected:
	UFUNCTION(BlueprintImplementableEvent)
	void ReceiveStartState();
	UFUNCTION(BlueprintImplementableEvent)
	void ReceiveEndState();
	
public:
	UFUNCTION(BlueprintCallable)
	void StartState();
	UFUNCTION(BlueprintCallable)
	void EndState();
};
