// Copyright Epic Games, Inc. All Rights Reserved.

#include "BatteryCollectGameMode.h"
#include "BatteryCollectCharacter.h"
#include "BatteryCollect.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "SpawnVolume.h"
#include "GameFramework/PawnMovementComponent.h"

ABatteryCollectGameMode::ABatteryCollectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;
	//base decay rate
	DecayRate = 0.01f;
}

void ABatteryCollectGameMode::BeginPlay()
{
	Super::BeginPlay();

	//Find all spawn volume actors
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundActors);

	for (auto Actor : FoundActors)
	{
		ASpawnVolume* SpawnVolumeActor = Cast<ASpawnVolume>(Actor);
		if (SpawnVolumeActor)
		{
			SpawnVolumeActors.AddUnique(SpawnVolumeActor);
		}
	}

	SetCurrentState(EBatteryPlayState::EPlaying);

	//set score to beat
	ABatteryCollectCharacter* MyCharacter = Cast<ABatteryCollectCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{
		PowerToWin = (MyCharacter->GetInitialPower()) * 1.25f;
	}

	if(HUDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), HUDWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

void ABatteryCollectGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Check we are using battery collecter character
	ABatteryCollectCharacter* MyCharacter = Cast<ABatteryCollectCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{
		//if power is greater than needed to win, set game state to Won
		if (MyCharacter->GetCurrentPower() > PowerToWin)
		{
			SetCurrentState(EBatteryPlayState::EWon);
		}
		//if the players power is positive
		else if (MyCharacter->GetCurrentPower() > 0)
		{
			//decrease players power
			MyCharacter->UpdatePower(-DeltaTime*DecayRate*(MyCharacter->GetInitialPower()));
		}
		else
		{
			SetCurrentState(EBatteryPlayState::EGameOver);
		}
	}
}

float ABatteryCollectGameMode::GetPowerToWin() const
{
	return PowerToWin;
}

EBatteryPlayState ABatteryCollectGameMode::GetCurrentState() const
{
	return CurrentState;
}

void ABatteryCollectGameMode::SetCurrentState(EBatteryPlayState NewState)
{
	//set current state
	CurrentState = NewState;
	//handle new state
	HandleNewState(CurrentState);
}

void ABatteryCollectGameMode::HandleNewState(EBatteryPlayState NewState)
{
	switch (NewState)
	{
		//If game is playing
		case EBatteryPlayState::EPlaying:
		{
			//Spawn Volumes active
			for (ASpawnVolume* Volume : SpawnVolumeActors)
			{
				Volume->SetSpawningActive(true);
			}
			
		}
		break;
		//If we've won the game
		case EBatteryPlayState::EWon:
		{
			//Spawn Volumes inactive
			for (ASpawnVolume* Volume : SpawnVolumeActors)
			{
				Volume->SetSpawningActive(false);
			}
			
		}
		break;
		//If we lost the game
		case EBatteryPlayState::EGameOver:
		{
			GameOver();
			//Spawn Volumes inactive
			for (ASpawnVolume* Volume : SpawnVolumeActors)
			{
				Volume->SetSpawningActive(false);
			}
			//block player input
			APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
			if (PlayerController)
			{
				PlayerController->SetCinematicMode(true, false, false, true, true);
			}
			//ragdoll player
			ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
			if (MyCharacter)
			{
				MyCharacter->GetMesh()->SetSimulatePhysics(true);
				MyCharacter->GetMovementComponent()->MovementState.bCanJump = false;
			}
		}
		break;	
		//Unknown/default state
		default:
		case EBatteryPlayState::EUnknown:
		{

		}
		break;
	}
}