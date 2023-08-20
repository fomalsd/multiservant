// Copyright Epic Games, Inc. All Rights Reserved.

#include "servant_fpsGameMode.h"
#include "servant_fpsCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aservant_fpsGameMode::Aservant_fpsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
