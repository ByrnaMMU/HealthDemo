// Fill out your copyright notice in the Description page of Project Settings.


#include "ArmouredFoe.h"
#include "ArmouredHealth.h"

//AArmouredFoe::AArmouredFoe()
//{
	// attach the health
	//ArmouredHealth = CreateDefaultSubobject<UArmouredHealth>(TEXT("ArmouredHealth"));
	//Super::ABasicFoe();
//}

void AArmouredFoe::BeginPlay()
{
	Super::BeginPlay();
	//Health->Died.AddDynamic(this, &ABasicFoe::Died);
}

