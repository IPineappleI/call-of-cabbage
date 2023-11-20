// Fill out your copyright notice in the Description page of Project Settings.


#include "CabbageSettings.h"

UCabbageSettings::UCabbageSettings(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	BaseDifficulty = 1;
	MaxHealth = 100.0f;
	SpikeTrapDamage = 20.0f;
	MovingTrapDamage = 20.0f;
	Healing = 40.0f;
	TrapSpeed = 1.0f;
	BuffDuration = 5.0f;
	MovementSpeed = 600.0f;
	DebuffDuration = 3.0f;
}

UCabbageSettings* UCabbageSettings::GetCabbageSettings()
{
	return Cast<UCabbageSettings>(UGameUserSettings::GetGameUserSettings());
}

void UCabbageSettings::SetBaseDifficulty(int32 difficulty)
{
	BaseDifficulty = FMath::Clamp(difficulty, 0, 10);
}

int32 UCabbageSettings::GetBaseDifficulty() const
{
	return BaseDifficulty;
}

void UCabbageSettings::SetMaxHealth(double maxHealth)
{
	MaxHealth = FMath::Clamp(maxHealth, 1, 1000);
}

double UCabbageSettings::GetMaxHealth() const
{
	return MaxHealth;
}

void UCabbageSettings::SetSpikeTrapDamage(double spikeTrapDamage)
{
	SpikeTrapDamage = FMath::Clamp(spikeTrapDamage, 1, 1000);
}

double UCabbageSettings::GetSpikeTrapDamage() const
{
	return SpikeTrapDamage;
}

void UCabbageSettings::SetMovingTrapDamage(double movingTrapDamage)
{
	MovingTrapDamage = FMath::Clamp(movingTrapDamage, 1, 1000);
}

double UCabbageSettings::GetMovingTrapDamage() const
{
	return MovingTrapDamage;
}

void UCabbageSettings::SetHealing(double healing)
{
	Healing = FMath::Clamp(healing, 1, 1000);
}

double UCabbageSettings::GetHealing() const
{
	return Healing;
}

void UCabbageSettings::SetTrapSpeed(double trapSpeed)
{
	TrapSpeed = FMath::Clamp(trapSpeed, 0.5, 3);
}

double UCabbageSettings::GetTrapSpeed() const
{
	return TrapSpeed;
}

void UCabbageSettings::SetBuffDuration(double buffDuration)
{
	BuffDuration = FMath::Clamp(buffDuration, 2, 10);
}

double UCabbageSettings::GetBuffDuration() const
{
	return BuffDuration;
}

void UCabbageSettings::SetMovementSpeed(double movementSpeed)
{
	MovementSpeed = FMath::Clamp(movementSpeed, 500, 1000);
}

double UCabbageSettings::GetMovementSpeed() const
{
	return MovementSpeed;
}

void UCabbageSettings::SetDebuffDuration(double debuffDuration)
{
	DebuffDuration = FMath::Clamp(debuffDuration, 1, 6);
}

double UCabbageSettings::GetDebuffDuration() const
{
	return DebuffDuration;
}
