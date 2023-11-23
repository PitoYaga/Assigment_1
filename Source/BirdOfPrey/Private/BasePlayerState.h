// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class ABasePlayerState : public APlayerState
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float PlayerScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	int RemainingLives;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float TimeOfLastDeath;



public:
	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	virtual void AddScore(float Amount);

	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	virtual void ConsumeLife();

	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	virtual bool HasRemainingLives();

	
};
