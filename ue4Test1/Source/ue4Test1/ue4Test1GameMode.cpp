// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue4Test1GameMode.h"
#include "ue4Test1Character.h"
#include "UObject/ConstructorHelpers.h"

Aue4Test1GameMode::Aue4Test1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
