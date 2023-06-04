// Fill out your copyright notice in the Description page of Project Settings.


#include "StaminaCalc.h"
#include "Pandemonium.h"
#include <iostream>
#include <sstream>
#include "GameFramework/SaveGame.h"

using namespace std;

float UStaminaCalc::UsingStamina(float Stamina)
{
	Stamina = Stamina - 6;
	return Stamina;
}

bool UStaminaCalc::NoStamina(float Stamina)
{
	bool ZeroStamina = false;
	if (Stamina <= 0) {
		ZeroStamina = true;
	}
	return ZeroStamina;
}

float UStaminaCalc::ChargingStamina(float Stamina)
{
	Stamina = Stamina + 6;
	return Stamina;
}

bool UStaminaCalc::FullStamina(float Stamina)
{
	bool StaminaFull = false;
	if (Stamina >= 100) {
		StaminaFull = true;
	}
	return StaminaFull;
}
