// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePlayerController.h"
#include "BaseShip.h"
#include "PlayerShip.generated.h"

/**
 * 
 */
UCLASS()
class APlayerShip : public ABaseShip
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, Category="BirdOfPrey")
	ABasePlayerController * BasePlayerController;

	UPROPERTY(EditAnywhere, Category="BirdOfPrey")
	float InvulnerabilityTime;



public:
	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	virtual void GetShipConstantVelocity();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	virtual void ClampToCameraBounds();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	virtual float GetShipAxisAdjustment();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	virtual void CalcOutOfBoundsAdjustment();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	virtual void GetPlayerAgentInfo();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	virtual void ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	virtual void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable,Category="BirdOfPrey")
	virtual bool HasDiedRecently();

	//Override TakeDamage
	
};
