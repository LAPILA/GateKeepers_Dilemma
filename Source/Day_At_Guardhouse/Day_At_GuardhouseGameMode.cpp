// Copyright Epic Games, Inc. All Rights Reserved.

#include "Day_At_GuardhouseGameMode.h"
#include "Day_At_GuardhouseCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADay_At_GuardhouseGameMode::ADay_At_GuardhouseGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
