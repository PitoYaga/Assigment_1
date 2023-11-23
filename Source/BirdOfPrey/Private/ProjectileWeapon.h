// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseProjectile.h"
#include "BaseWeapon.h"

#include "ProjectileWeapon.generated.h"

/**
 * 
 */
UCLASS()
class AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	ABaseProjectile * ProjectileType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float RefireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float LastFireTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	int NumShots;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	bool bIsFiring;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float DesiredZ;



public:
	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	ABaseProjectile * BaseProjectile();

	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	virtual FTransform GetProjectileSpawnTransform();

	UFUNCTION(BlueprintCallable, Category="BirdOfPrey")
	bool ReadyToFire();

	//isFiring override
	
};
