// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmouredHealth.h"

/**
* Here is the CPP file where we will put our logic
* A slight hint to help you is 
* UHealth::Damage will call the base class (UHealths) damage funtion not the Armoured Health Damage
* 
*/

UArmouredHealth::UArmouredHealth()
{
	//Disable the update as we dont need it
	//PrimaryComponentTick.bCanEverTick = true;
	AHP = MaxArmouredHealth;
	// ...
}

void UArmouredHealth::TakeDamage(int Damage)
{
	AHP -= Damage;
	UE_LOG(LogTemp, Warning, TEXT("armour h %d"), AHP);
	if (AHP <= 0)
	{
		Super::TakeDamage(Damage);
	}
}

void UArmouredHealth::Repair(int Repair)
{
	AHP += Repair;
	if (AHP > MaxArmouredHealth)
	{
		AHP = MaxArmouredHealth;
	}
}