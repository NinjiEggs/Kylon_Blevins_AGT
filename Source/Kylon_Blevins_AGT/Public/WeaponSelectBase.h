// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "WeaponSelectBase.generated.h"

/**
 * 
 */
UCLASS()
class KYLON_BLEVINS_AGT_API UWeaponSelectBase : public UUserWidget
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class AActor> Weapon1;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<class AActor> Weapon2;
	UPROPERTY(BlueprintInternalUseOnly)
	AActor* LastSpawnedWeapon;
	UPROPERTY(EditDefaultsOnly)
	FTransform WeaponTransform;
	
	
	UFUNCTION(BlueprintCallable)
	void SpawnWeapon(int WeaponSpawnIndex);
	
	void CleanupLastWeapon() const;
	
	void StoreLastWeapon(AActor* LastWeapon);
	
};
