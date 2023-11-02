// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "GameFramework/Actor.h"
#include "Particles/ParticleSystem.h"

#include "BaseProjectile.generated.h"

UCLASS()
class ABaseProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="COA")
	float ProjectileSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="COA")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="COA")
	UParticleSystem * DetonationEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="COA")
	float GroundUnitCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="COA")
	float GroundUnitCheckAngel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="COA")
	ABaseGameAgent * GroundTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="COA")
	float DesiredZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="COA")
	USoundBase * ImpactSound;

	
	
public:
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void DealDamageTo();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void OnHit();
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void GetInstigatorCollisionChannel();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void ShouldCheckForGroundTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void AdjustToTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void IsEnemyProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void AdjustToDesiredZ();
};
