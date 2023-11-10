// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "GameFramework/Actor.h"
#include "CapsuleComponent.generated.h"
#include "ProjectileMovementComponent.generated.h"


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


	
public: //Components
	UPROPERTY(VisibleAnywhere, Category="BirdOfPrey")
	UStaticMeshComponent* StaticMesh;
	
	UPROPERTY(VisibleAnywhere, Category="BirdOfPrey")
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere, Category="BirdOfPrey")
	UProjectileMovementComponent* ProjectileMovement;


public: //Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float ProjectileSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	UParticleSystem * DetonationEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float GroundUnitCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPreyBirdOfPrey")
	float GroundUnitCheckAngel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	ABaseGameAgent * GroundTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	float DesiredZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BirdOfPrey")
	USoundBase * ImpactSound;

	
	
public:
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void DealDamageTo();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void OnHit();
	
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void GetInstigatorCollisionChannel(UEnum * ReturnValue); 

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual bool  ShouldCheckForGroundTarget(); 

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void AdjustToTarget();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual bool IsEnemyProjectile(); 

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void AdjustToDesiredZ();
};
