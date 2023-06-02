// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "CPP_LoadFeatures.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class PANDEMONIUM_API UCPP_LoadFeatures : public USaveGame
{
	GENERATED_BODY()
public:
	//variables from constructor to load the save game
	UPROPERTY(VisibleAnywhere, Category = "C++LoadCategory")
		FString SaveSlotName;
	UPROPERTY(VisibleAnywhere, Category = "C++LoadCategory")
		uint32 IndexID;
	UPROPERTY(VisibleAnywhere, Category = "C++LoadCategory")
		FTransform charTransform;
	UPROPERTY(VisibleAnywhere, Category = "C++LoadCategory")
		float playerHealth;



	//default constructor
	UCPP_LoadFeatures();
	//constructor
	UCPP_LoadFeatures(FString saveSlotName, uint32 indexID);
	//constructor
	UCPP_LoadFeatures(ACharacter* firstPersonChar);

	//get player health function
	UFUNCTION(BlueprintCallable, Category = "C++LoadCategory")
		static float getPlayerHealth();

	//get flashlight playback position function
	UFUNCTION(BlueprintCallable, Category = "C++LoadCategory")
		static float getFlashlightPlaybackPos();

	//get number of wisps function
	UFUNCTION(BlueprintCallable, Category = "C++LoadCategory")
		static float getNumberOfWisps();

	//get location of wisps function
	UFUNCTION(BlueprintCallable, Category = "C++LoadCategory")
		static float getLocationOfWisps();

	//get transform of entity function
	UFUNCTION(BlueprintCallable, Category = "C++LoadCategory")
		static float getEntityTransform();

	//get transform of player function
	UFUNCTION(BlueprintCallable, Category = "C++LoadCategory")
		static float getPlayerTransform();

	//get location of healthpacks function
	UFUNCTION(BlueprintCallable, Category = "C++LoadCategory")
		static float getLocationOfHealthPacks();

	//get location of batteries function
	UFUNCTION(BlueprintCallable, Category = "C++LoadCategory")
		static float getLocationOfBatteries();
};
