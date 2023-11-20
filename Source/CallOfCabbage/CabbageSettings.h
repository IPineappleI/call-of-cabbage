// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "CabbageSettings.generated.h"

/**
 * 
 */
UCLASS()
class CALLOFCABBAGE_API UCabbageSettings : public UGameUserSettings
{
	GENERATED_UCLASS_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	static UCabbageSettings* GetCabbageSettings();

	UFUNCTION(BlueprintCallable)
	void SetBaseDifficulty(int32 difficulty);

	UFUNCTION(BlueprintPure)
	int32 GetBaseDifficulty() const;

	UFUNCTION(BlueprintCallable)
	void SetMaxHealth(double maxHealth);

	UFUNCTION(BlueprintPure)
	double GetMaxHealth() const;

	UFUNCTION(BlueprintCallable)
	void SetSpikeTrapDamage(double spikeTrapDamage);

	UFUNCTION(BlueprintPure)
	double GetSpikeTrapDamage() const;

	UFUNCTION(BlueprintCallable)
	void SetMovingTrapDamage(double movingTrapDamage);

	UFUNCTION(BlueprintPure)
	double GetMovingTrapDamage() const;

	UFUNCTION(BlueprintCallable)
	void SetHealing(double healing);

	UFUNCTION(BlueprintPure)
	double GetHealing() const;

	UFUNCTION(BlueprintCallable)
	void SetTrapSpeed(double trapSpeed);

	UFUNCTION(BlueprintPure)
	double GetTrapSpeed() const;

	UFUNCTION(BlueprintCallable)
	void SetBuffDuration(double buffDuration);

	UFUNCTION(BlueprintPure)
	double GetBuffDuration() const;

	UFUNCTION(BlueprintCallable)
	void SetMovementSpeed(double movementSpeed);

	UFUNCTION(BlueprintPure)
	double GetMovementSpeed() const;

	UFUNCTION(BlueprintCallable)
	void SetDebuffDuration(double debuffDuration);

	UFUNCTION(BlueprintPure)
	double GetDebuffDuration() const;

protected:
	UPROPERTY(Config)
	int32 BaseDifficulty;

	UPROPERTY(Config)
	double MaxHealth;

	UPROPERTY(Config)
	double SpikeTrapDamage;

	UPROPERTY(Config)
	double MovingTrapDamage;

	UPROPERTY(Config)
	double Healing;

	UPROPERTY(Config)
	double TrapSpeed;

	UPROPERTY(Config)
	double BuffDuration;

	UPROPERTY(Config)
	double MovementSpeed;

	UPROPERTY(Config)
	double DebuffDuration;
};
