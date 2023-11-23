// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VREditorInteractor.h"
#include "GameFramework/PlayerController.h"
#include "BasePlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ABasePlayerController : public APlayerController
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	bool bDiedWhileFiring;

	
public:
	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	virtual void CalcScreenDimensions();

	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	virtual void OnPlayerDeath(AController * Killer);
};
