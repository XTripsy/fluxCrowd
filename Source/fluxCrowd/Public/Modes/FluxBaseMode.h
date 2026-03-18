// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FluxBaseMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEndModeDelegate);

UCLASS(Blueprintable, EditInlineNew, BlueprintType, meta=(ShowWorldContextPin), Abstract)
class FLUXCROWD_API UFluxBaseMode : public UObject
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Debug")
	bool IsDebug;
	
public:
	UPROPERTY(BlueprintReadOnly)
	TObjectPtr<UWorld> World;
	UPROPERTY()
	FOnEndModeDelegate EndModeDelegate;
	
protected:
	UFUNCTION(BlueprintImplementableEvent)
	void ReceiveStartMode();
	UFUNCTION(BlueprintImplementableEvent)
	void ReceiveEndMode();
	
public:
	UFUNCTION(BlueprintCallable)
	void StartMode();
	UFUNCTION(BlueprintCallable)
	void EndMode();
};
