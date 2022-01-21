// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "FromTheVoidFireHUD.generated.h"

UCLASS()
class AFromTheVoidFireHUD : public AHUD
{
	GENERATED_BODY()

public:
	AFromTheVoidFireHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

