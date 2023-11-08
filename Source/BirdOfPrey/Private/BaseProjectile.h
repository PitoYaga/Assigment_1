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
	UPROPERTY(VisibleAnywhere, Category="BOP")
	UStaticMeshComponent* StaticMesh;
	
	UPROPERTY(VisibleAnywhere, Category="BOP")
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere, Category="BOP")
	UProjectileMovementComponent* ProjectileMovement;


public: //Variables
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BOP")
	float ProjectileSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BOP")
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BOP")
	UParticleSystem * DetonationEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BOP")
	float GroundUnitCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BOP")
	float GroundUnitCheckAngel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BOP")
	ABaseGameAgent * GroundTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BOP")
	float DesiredZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="BOP")
	USoundBase * ImpactSound;

	
	
public:
	UFUNCTION(BlueprintCallable, Category = "BOP")
	virtual void DealDamageTo();

	UFUNCTION(BlueprintCallable, Category = "BOP")
	virtual void OnHit();
	
	UFUNCTION(BlueprintCallable, Category = "BOP")
	virtual void GetInstigatorCollisionChannel(UEnum * ReturnValue); //return value - enum

	UFUNCTION(BlueprintCallable, Category = "BOP")
	virtual void CheckForGroundUnitTarget();

	UFUNCTION(BlueprintCallable, Category = "BOP")
	virtual void ShouldCheckForGroundTarget(bool & ReturnValue); //return value - bool

	UFUNCTION(BlueprintCallable, Category = "BOP")
	virtual void AdjustToTarget();

	UFUNCTION(BlueprintCallable, Category = "BOP")
	virtual void IsEnemyProjectile(bool & ReturnValue); //return value - bool

	UFUNCTION(BlueprintCallable, Category = "BOP")
	virtual void AdjustToDesiredZ();
};
