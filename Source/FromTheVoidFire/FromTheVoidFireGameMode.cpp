// Copyright Epic Games, Inc. All Rights Reserved.

#include "FromTheVoidFireGameMode.h"
#include "FromTheVoidFireHUD.h"
#include "FromTheVoidFireCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFromTheVoidFireGameMode::AFromTheVoidFireGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFromTheVoidFireHUD::StaticClass();
}
