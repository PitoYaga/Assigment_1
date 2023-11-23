// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePowerUp.h"
#include "WorldCameraActor.h"
#include "GameFramework/GameMode.h"
#include "BaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class ABaseGameMode : public AGameMode
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float WorldScrollSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FVector2D MaxRelativePlayerOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	AWorldCameraActor * WorldCameraActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	UDataTable * PlayerAgentInfoTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float RespawnDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float SpawnOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle StationarySpawnTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	FTimerHandle ShipSpawnTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	TArray<ABasePowerUp*> PowerUpList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	float PickUpSpawnPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdOfPrey")
	bool IsGameOverScreen;


public:
	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	virtual FVector GetWorldScrollVelocity();

	UFUNCTION(BlueprintPure, Category = "BirdOfPrey")
	virtual AWorldCameraActor * GetWorldCameraActor();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void GetPlayerDied(ABasePlayerController * Player);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void OnEnemyDied(ABaseGameAgent * Enemy, AController * Killer);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StartGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void EndGame(bool Success);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void SpawnEnemyFrom(TArray<ABaseGameAgent*> ClassList);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void ResetGame();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void RespawnPlayer();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void TrySpawnPowerUp(FVector Location);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual float GetDistanceTravelled();
	
};
