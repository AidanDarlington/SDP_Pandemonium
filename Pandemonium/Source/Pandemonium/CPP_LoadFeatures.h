// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include <iostream>
#include "CPP_LoadFeatures.generated.h"

using namespace std;
/**
 *
 */
UCLASS(Blueprintable)
class PANDEMONIUM_API UCPP_LoadFeatures : public USaveGame
{
	GENERATED_BODY()
public:

	//default constructor
	UCPP_LoadFeatures();

	//for converting FString to String
	void convert_FStringToString(FString SaveSlotName);

	//get player health function
	UFUNCTION(BlueprintCallable, Category = "C++LoadCategory")
		static float getPlayerHealth(FString SaveSlotName, int IndexID);

	//get flashlight playback position function
	UFUNCTION(BlueprintCallable, Category = "C++LoadCategory")
		static float getFlashlightPlaybackPos(FString SaveSlotName, int IndexID);

	//get number of wisps function
	UFUNCTION(BlueprintCallable, Category = "C++LoadCategory")
		static int getNumberOfWisps(FString SaveSlotName, int IndexID);

};
