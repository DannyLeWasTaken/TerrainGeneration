// Copyright Epic Games, Inc. All Rights Reserved.

#include "TerrainGenerationGameMode.h"
#include "TerrainGenerationCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATerrainGenerationGameMode::ATerrainGenerationGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
