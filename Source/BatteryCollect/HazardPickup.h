// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "HazardPickup.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECT_API AHazardPickup : public APickup
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	AHazardPickup();

	//override WasCollected function -> blueprint native event
	void WasCollected_Implementation() override;

	//Public way to access Hazard power level
	float GetHazard();

protected:
	//set amount of power hazards take away from player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float HazardPower;
};
