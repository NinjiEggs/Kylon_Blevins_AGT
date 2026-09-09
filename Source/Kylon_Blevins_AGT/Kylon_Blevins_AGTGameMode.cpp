// Copyright Epic Games, Inc. All Rights Reserved.

#include "Kylon_Blevins_AGTGameMode.h"
#include "Kylon_Blevins_AGTCharacter.h"
#include "UObject/ConstructorHelpers.h"

AKylon_Blevins_AGTGameMode::AKylon_Blevins_AGTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
