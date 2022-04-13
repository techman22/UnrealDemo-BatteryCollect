// Fill out your copyright notice in the Description page of Project Settings.

#include "SpawnVolume.h"
#include <Components/BoxComponent.h>
#include "Kismet/KismetMathLibrary.h"
#include "Pickup.h"

class BoxComponent;
class APickup;

// Sets default values
ASpawnVolume::ASpawnVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//create box component rep spawn area
	WhereToSpawn = CreateDefaultSubobject<UBoxComponent>(TEXT("WhereToSpawn"));
	RootComponent = WhereToSpawn;

	//Set the spawn delay range
	SpawnDelayRangeLow = 1.0f;
	SpawnDelayRangeLow = 4.5f;
}

// Called when the game starts or when spawned
void ASpawnVolume::BeginPlay()
{
	Super::BeginPlay();

	
	
}

// Called every frame
void ASpawnVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector ASpawnVolume::GetRandomPointInVolume()
{
	FVector SpawnOrigin = WhereToSpawn->Bounds.Origin;
	FVector SpawnExtent = WhereToSpawn->Bounds.BoxExtent;
	
	return UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SpawnExtent);
}

void ASpawnVolume::SetSpawningActive(bool bShouldSpawn)
{
	if (bShouldSpawn)
	{
		//Set timer on spawn pickup
		SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
		GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnVolume::SpawnPickup, SpawnDelay, false);
	}
	else
	{
		//Clear timer on spawn pickup
		GetWorldTimerManager().ClearTimer(SpawnTimer);
	}
}

void ASpawnVolume::SpawnPickup()
{
	//if we have set something to spawn
	if(WhatToSpawn != NULL)
	{
		//check for valid world
		UWorld* const World = GetWorld();
		if(World)
		{
			//set the spawn parameters
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			//Get a random spawn location
			FVector SpawnLocation = GetRandomPointInVolume();

			//Get a random rotation
			FRotator SpawnRotation;
			SpawnRotation.Yaw = FMath::FRand() * 360.0f;
			SpawnRotation.Pitch = FMath::FRand() * 360.0f;
			SpawnRotation.Roll = FMath::FRand() * 360.0f;

			//spawn the pickup
			APickup* const SpawnedPickup = World->SpawnActor<APickup>(WhatToSpawn, SpawnLocation, SpawnRotation, SpawnParams);

			SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);
			GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnVolume::SpawnPickup, SpawnDelay, false);
		}
	}
}

