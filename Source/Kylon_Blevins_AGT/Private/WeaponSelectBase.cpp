// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponSelectBase.h"

void UWeaponSelectBase::SpawnWeapon(int WeaponSpawnIndex)
{
	if (LastSpawnedWeapon != nullptr)
	{
		CleanupLastWeapon();
	}
	switch (WeaponSpawnIndex)
	{
		AActor* WeaponToSpawn;
		case 0:
			break;
		case 1:
			WeaponToSpawn = GetWorld()->SpawnActor<AActor>(Weapon1, WeaponTransform.GetLocation(), WeaponTransform.Rotator());
			StoreLastWeapon(WeaponToSpawn);
			break;
		case 2:
			WeaponToSpawn = GetWorld()->SpawnActor<AActor>(Weapon2, WeaponTransform.GetLocation(), WeaponTransform.Rotator());
			StoreLastWeapon(WeaponToSpawn);
			break;
		default: 
			break;
	}
}

void UWeaponSelectBase::StoreLastWeapon(AActor* LastWeapon)
{
	LastSpawnedWeapon = LastWeapon;
}

void UWeaponSelectBase::CleanupLastWeapon() const
{
	LastSpawnedWeapon->Destroy();
}
