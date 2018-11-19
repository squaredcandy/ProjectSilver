// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectSilverGameMode.h"
#include "ProjectSilverCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectSilverGameMode::AProjectSilverGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ParagonKallari/Characters/Heroes/Kallari/KallariPlayerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
