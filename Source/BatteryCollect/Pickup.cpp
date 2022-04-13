// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"
#include  <Components/StaticMeshComponent.h>

class StaticMeshComponent;

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//all pickups start active
	bIsActive = true;

	//create statick mesh component
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PickupMesh"));
	RootComponent = PickupMesh;

	if(GetMesh() != nullptr)
	{
		GetMesh()->SetSimulatePhysics(true);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Mesh is null"));
	}
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//returns active state
bool APickup::IsActive()
{
	return bIsActive;
}

//changes active state
void APickup::SetActive(bool NewPickupState)
{
	bIsActive = NewPickupState;
}

void APickup::WasCollected_Implementation()
{
	//log debug message
	FString PickupDebugString = GetName();
	UE_LOG(LogClass, Log, TEXT("You have collected %s"), *PickupDebugString);
}