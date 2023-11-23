// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGameMode.h"

FVector ABaseGameMode::GetWorldScrollVelocity()
{
	return {};
}

AWorldCameraActor* ABaseGameMode::GetWorldCameraActor()
{
	return nullptr;
}

void ABaseGameMode::GetPlayerDied(ABasePlayerController* Player)
{
}

void ABaseGameMode::OnEnemyDied(ABaseGameAgent* Enemy, AController * Killer)
{
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame(bool Success)
{
}

void ABaseGameMode::SpawnEnemyFrom(TArray<ABaseGameAgent*> ClassList)
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::TrySpawnPowerUp(FVector Location)
{
}

float ABaseGameMode::GetDistanceTravelled()
{
	return 0;
}
