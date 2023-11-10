// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameInstance.h"
#include "GameFramework/Pawn.h"
#include "BaseWeapon.h"

#include "BaseGameAgent.generated.h"



UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseGameAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	ABaseWeapon * Weapon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	TSubclassOf<ABaseWeapon>DefaultWeaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	FSAgentInfo AgentInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float Points;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float OutOfBandsCheckTolerar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	FName WeaponSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	UEnum * WeaponAttachRule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	FVector TargetLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	UParticleSystem * DeathParticleEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	USoundCue * DeathSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	USoundCue * HitSoundCue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	UParticleSystem * HitParticleEffect;
	
};
