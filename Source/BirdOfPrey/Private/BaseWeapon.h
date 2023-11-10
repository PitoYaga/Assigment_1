// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundCue.h"
#include "BaseWeapon.generated.h"

UCLASS()
class ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	UParticleSystem * FirePArticleEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	USoundCue * FireSoundCue;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	bool bRequiresAimForAI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	bool bIsAutomatic;

public:
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StopFire();
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void PlayFireEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void GetFireEffectSpawnTransform(FVector & ReturnValueLocation, FRotator & ReturnValueRotation, FVector & ReturnValueScale);
		//return value - vector, rotator, vector

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual bool HasFinishedFiring();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual bool IsFiring(); 
};
