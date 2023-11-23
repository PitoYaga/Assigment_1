// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"


ABaseProjectile* AProjectileWeapon::BaseProjectile()
{
	return nullptr;
}

FTransform AProjectileWeapon::GetProjectileSpawnTransform()
{
	return {};
}

bool AProjectileWeapon::ReadyToFire()
{
	return false;
}
