// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPickup.h"

//Set Default Values
ABatteryPickup::ABatteryPickup()
{
    GetMesh()->SetSimulatePhysics(true);

    //base power level of battery
    BatteryPower = 150.f;
}

void ABatteryPickup::WasCollected_Implementation()
{
    //use base pickup behavior
    Super::WasCollected_Implementation();
    //Destroy battery
    Destroy();
}

//report power level of battery
float ABatteryPickup::GetPower()
{
    return BatteryPower;
}