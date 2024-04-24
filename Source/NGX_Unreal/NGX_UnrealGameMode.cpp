// Copyright Epic Games, Inc. All Rights Reserved.

#include "NGX_UnrealGameMode.h"
#include "NGX_UnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANGX_UnrealGameMode::ANGX_UnrealGameMode()
	: Super()
{
	// // set default pawn class to our Blueprinted character
	// static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	// DefaultPawnClass = PlayerPawnClassFinder.Class;

}
