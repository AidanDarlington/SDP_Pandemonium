// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "StaminaCalc.generated.h"

using namespace std;
/**
 * 
 */
UCLASS(Blueprintable)
class PANDEMONIUM_API UStaminaCalc : public USaveGame
{
	GENERATED_BODY()

public: 

	UFUNCTION(BlueprintCallable, Category = "C++StaminaCat")
		static float UsingStamina(float Stamina);

	UFUNCTION(BlueprintCallable, Category = "C++StaminaCat")
		static bool NoStamina(float Stamina);

	UFUNCTION(BlueprintCallable, Category = "C++StaminaCat")
		static float ChargingStamina(float Stamina);

	UFUNCTION(BlueprintCallable, Category = "C++StaminaCat")
		static bool FullStamina(float Stamina);
};
