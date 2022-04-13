// Fill out your copyright notice in the Description page of Project Settings.


#include "HazardPickup.h"

AHazardPickup::AHazardPickup()
{

    //base hazard power
    HazardPower = 200.0f;
}

void AHazardPickup::WasCollected_Implementation()
{
    //use base pickup behavior
    Super::WasCollected_Implementation();
    //Destroy battery
    Destroy();
}

//report hazard level
float AHazardPickup::GetHazard()
{
    return HazardPower;
}