// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BasePlayerController.h"
#include "BaseAIController.generated.h"

/**
 * 
 */
UCLASS()
class ABaseAIController : public AAIController
{
	GENERATED_BODY()



public:
	UPROPERTY(EditAnywhere, Category="BirdOfPrey")
	float LastFireTime;

	UPROPERTY(EditAnywhere, Category="BirdOfPrey")
	bool isFiring;

	UPROPERTY(EditAnywhere, Category="BirdOfPrey")
	float RefireDelay;
	
	UPROPERTY(EditAnywhere, Category="BirdOfPrey")
	bool bSlouldUpdateAim;

	UPROPERTY(EditAnywhere, Category="BirdOfPrey")
	ABasePlayerController * Target;

	UPROPERTY(EditAnywhere, Category="BirdOfPrey")
	ABasePlayerController * ControlledAgent;

	
public:
	UFUNCTION(Blueprintable, Category="BirdOfPrey")
	virtual void SelectTarget();

	UFUNCTION(Blueprintable, Category="BirdOfPrey")
	virtual void AimAt(FVector AimTarget);

	UFUNCTION(Blueprintable, Category="BirdOfPrey")
	virtual void CheckFire();

	UFUNCTION(Blueprintable, Category="BirdOfPrey")
	virtual void UpdateAim();

	UFUNCTION(Blueprintable, Category="BirdOfPrey")
	virtual bool ShouldStartFire();

	UFUNCTION(Blueprintable, Category="BirdOfPrey")
	virtual bool ShouldStopFire();

	UFUNCTION(Blueprintable, Category="BirdOfPrey")
	virtual void StartFire();

	UFUNCTION(Blueprintable, Category="BirdOfPrey")
	virtual void StopFire();

	UFUNCTION(Blueprintable, Category="BirdOfPrey")
	virtual bool ShouldUpdateAim();
	

	
	
};
