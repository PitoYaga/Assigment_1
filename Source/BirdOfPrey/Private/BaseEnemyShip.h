// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAIController.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

/**
 * 
 */
UCLASS()
class ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	ABaseAIController * BaseShirAIController;
	
public:
	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	virtual void Move();
	
};
