// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BatteryCollectGameMode.generated.h"

//enum to store current game state
UENUM(BlueprintType)
enum class EBatteryPlayState : uint8
{
	EPlaying,
	EGameOver,
	EWon,
	EUnknown
};

UCLASS(minimalapi)
class ABatteryCollectGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ABatteryCollectGameMode();

	virtual void Tick(float DeltaTime) override;

	//Returns power needed to win
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetPowerToWin() const;

	virtual void BeginPlay() override;

	//returns current play state
	UFUNCTION(BlueprintPure, Category = "Power")
	EBatteryPlayState GetCurrentState() const;

	//sets new play state
	void SetCurrentState(EBatteryPlayState NewState);

	UFUNCTION(BlueprintImplementableEvent)
	void GameOver();

private:
	//tracks current play state
	EBatteryPlayState CurrentState;

	TArray<class ASpawnVolume*> SpawnVolumeActors;

	//Handle any function calls that rely upon changing the play state of game
	void HandleNewState(EBatteryPlayState NewState);

protected:
	//Rate player loses power
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float DecayRate;

	//Power needed to win
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float PowerToWin;

	//widget class to use for HUD
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	//Instance of HUD
	UPROPERTY()
	class UUserWidget* CurrentWidget;
};