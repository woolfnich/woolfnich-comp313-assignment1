// Copyright Epic Games, Inc. All Rights Reserved.

#include "COMP313_ThirdPersonGameMode.h"
#include "COMP313_ThirdPersonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACOMP313_ThirdPersonGameMode::ACOMP313_ThirdPersonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
