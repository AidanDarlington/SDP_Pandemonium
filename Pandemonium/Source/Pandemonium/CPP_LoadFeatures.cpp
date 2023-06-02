// Fill out your copyright notice in the Description page of Project Settings.

#include "CPP_LoadFeatures.h"
#include "Pandemonium.h"
#include <iostream>
#include <sstream>
#include "GameFramework/SaveGame.h"

using namespace std;

//default constructor
UCPP_LoadFeatures::UCPP_LoadFeatures()
{
	//saveslotname and indexid used to identify the .sav file
	SaveSlotName = "";
	IndexID = 0;
	playerHealth = 0;
}

//constructor
UCPP_LoadFeatures::UCPP_LoadFeatures(FString saveSlotName, uint32 indexID)
{
	//saveslotname and indexid used to identify the .sav file if known
	SaveSlotName = saveSlotName;
	IndexID = indexID;
}

//return the saved player's health
float UCPP_LoadFeatures::getPlayerHealth()
{
	//variables
	class USaveGame* savedGame;
	//access the contents of the saved game
	/* NOTE: The 0 is a magic number as it is used without proper explanation of why it was added. This may confuse those reading through the code.
	In this case, it is the index id used to access the correct save game file. It will be removed once we can load the correct save game file dynamically. */
	savedGame = UGameplayStatics::LoadGameFromSlot("Save1", 0);

	//find the value of the player's health using the variable name
	FProperty* playerHealth_Property = savedGame->GetClass()->FindPropertyByName("playerHealth");
	FString playerHealth_FStr;

	//DEVELOPMENT PURPOSE ONLY: To check that the player health was accessed correctly
	//convert fproperty to fstring
	playerHealth_Property->ExportTextItem(playerHealth_FStr, playerHealth_Property->ContainerPtrToValuePtr<void>(savedGame), nullptr, nullptr, PPF_None);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, playerHealth_FStr);

	//convert fproperty to ffloatproperty, then convert to string
	FFloatProperty* floatProperty = CastField<FFloatProperty>(playerHealth_Property);
	string playerHealth_Str = TCHAR_TO_UTF8(*playerHealth_FStr);

	//convert string to float
	float playerHealth_fl = stof(playerHealth_Str);

	//return the obtained player's health from save file
	return playerHealth_fl;
}

//return the saved flashlight 
float UCPP_LoadFeatures::getFlashlightPlaybackPos()
{
	//variables
	class USaveGame* savedGame;
	//Access contents of the saved game
	savedGame = UGameplayStatics::LoadGameFromSlot("Save1", 0);

	//find value of flashlight playback position from the saved file
	FProperty* FlashlightPlaybackPos_Property = savedGame->GetClass()->FindPropertyByName("flashlightPlaybackPos");
	FString FlashlightPlaybackPos_FStr;

	//To check that the flashlight playback position is correct
	//convert fproperty to fstring
	FlashlightPlaybackPos_Property->ExportTextItem(FlashlightPlaybackPos_FStr, FlashlightPlaybackPos_Property->ContainerPtrToValuePtr<void>(savedGame), nullptr, nullptr, PPF_None);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FlashlightPlaybackPos_FStr);

	//convert fproperty to ffloatproperty, then to string
	FFloatProperty* floatProperty = CastField<FFloatProperty>(FlashlightPlaybackPos_Property);
	string flashlightPlaybackPos_Str = TCHAR_TO_UTF8(*FlashlightPlaybackPos_FStr);

	//convert string to float
	float flashlightPlaybackPos_fl = stof(flashlightPlaybackPos_Str);

	//return obtained flashlight playback position value
	return flashlightPlaybackPos_fl;
}

//return the saved number of wisps 
float UCPP_LoadFeatures::getNumberOfWisps()
{
	//variables
	class USaveGame* savedGame;
	//Access contents of the saved game
	savedGame = UGameplayStatics::LoadGameFromSlot("Save1", 0);

	//find value of flashlight playback position from the saved file
	FProperty* FlashlightPlaybackPos_Property = savedGame->GetClass()->FindPropertyByName("flashlightPlaybackPos");
	FString FlashlightPlaybackPos_FStr;

	//To check that the flashlight playback position is correct
	//convert fproperty to fstring
	FlashlightPlaybackPos_Property->ExportTextItem(FlashlightPlaybackPos_FStr, FlashlightPlaybackPos_Property->ContainerPtrToValuePtr<void>(savedGame), nullptr, nullptr, PPF_None);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FlashlightPlaybackPos_FStr);

	//convert fproperty to ffloatproperty, then to string
	FFloatProperty* floatProperty = CastField<FFloatProperty>(FlashlightPlaybackPos_Property);
	string flashlightPlaybackPos_Str = TCHAR_TO_UTF8(*FlashlightPlaybackPos_FStr);

	//convert string to float
	float flashlightPlaybackPos_fl = stof(flashlightPlaybackPos_Str);

	//return obtained flashlight playback position value
	return flashlightPlaybackPos_fl;
}

