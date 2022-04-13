// Copyright Epic Games, Inc. All Rights Reserved.

#include "BatteryCollectCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Pickup.h"
#include "BatteryPickup.h"
#include "HazardPickup.h"
#include "Kismet/KismetSystemLibrary.h"

//////////////////////////////////////////////////////////////////////////
// ABatteryCollectCharacter

class USphereComponent;

ABatteryCollectCharacter::ABatteryCollectCharacter()
{
	
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	//Create the collection sphere
	CollectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	CollectionSphere->SetupAttachment(RootComponent);
	CollectionSphere->SetSphereRadius(200.f);

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	

	//Set base power level for player
	InitialPower = 2000.f;
	CharacterPower = InitialPower;

	//set dependence of speed on power level
	SpeedFactor = 0.75f;
	BaseSpeed = 10.0f;
}

//void ABatteryCollectCharacter::BeginPlay()
//{
//	GetCapsuleComponent()->OnComponentBeginOverlap.AddDynamic(this, &ABatteryCollectCharacter::BeginOverlap);
//}

//////////////////////////////////////////////////////////////////////////
// Input

void ABatteryCollectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	InputComponent->BindAction("Collect", IE_Pressed, this, &ABatteryCollectCharacter::CollectPickups);

	PlayerInputComponent->BindAxis("MoveForward", this, &ABatteryCollectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABatteryCollectCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ABatteryCollectCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ABatteryCollectCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ABatteryCollectCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ABatteryCollectCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ABatteryCollectCharacter::OnResetVR);
}


void ABatteryCollectCharacter::OnResetVR()
{
	// If BatteryCollect is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in BatteryCollect.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ABatteryCollectCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ABatteryCollectCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ABatteryCollectCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ABatteryCollectCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ABatteryCollectCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ABatteryCollectCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void ABatteryCollectCharacter::CollectPickups()
{
	//Get all overlapping Actors put in array
	TArray<AActor*> CollectedActors;
	CollectionSphere->GetOverlappingActors(CollectedActors);

	//track collected power
	float CollectedPower = 0;

	//for each actor collected
	for(int32 iCollected = 0; iCollected < CollectedActors.Num(); ++iCollected)
	{
		//cast actor to APickup
		APickup* const TestPickup = Cast<APickup>(CollectedActors[iCollected]);
		//if the cast is successful & pickup is valid & active
		if(TestPickup && !TestPickup->IsPendingKill() && TestPickup->IsActive())
		{
			//call pickup WasCollected function
			TestPickup->WasCollected();
			//Check if pickup is a battery
			ABatteryPickup* const TestBattery = Cast<ABatteryPickup>(TestPickup);
			AHazardPickup* const TestHazard = Cast<AHazardPickup>(TestPickup);
			
			if(TestBattery)
			{
				//increase collected power
				CollectedPower += TestBattery->GetPower();
			}
			else if(TestHazard)
			{
				CollectedPower -= TestHazard->GetHazard();
				FTimerHandle TimerHandle;
				BaseSpeed = 0.0f;
				SpeedFactor = 0.0f;
				GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
				{
					BaseSpeed = 10.0f;
					SpeedFactor = 0.75f;
				},
				2, false);
			}
			//deactivate the pickup
			TestPickup->SetActive(false);
		}
	}
	UpdatePower(CollectedPower);
}

void ABatteryCollectCharacter::BeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult)
{
	TArray<AActor*> CollectedActors;
	CollectionSphere->GetOverlappingActors(CollectedActors);

	float Power = 0;

	for(int32 iCollected = 0; iCollected < CollectedActors.Num(); ++iCollected)
	{
		APickup* const TPickup = Cast<APickup>(CollectedActors[iCollected]);

		if(TPickup && !TPickup->IsPendingKill() && TPickup->IsActive())
		{
			TPickup->WasCollected();

			AHazardPickup* const TestHazard = Cast<AHazardPickup>(TPickup);

			//check if pickup is a hazard
			if(TestHazard)
			{
				//decrease collected power
				Power -= TestHazard->GetHazard();
			}
		}
	}
}

//reports starting power
float ABatteryCollectCharacter::GetInitialPower()
{
	return InitialPower;
}

//reports current power
float ABatteryCollectCharacter::GetCurrentPower()
{
	return CharacterPower;
}

//called when power increases/decreases
void ABatteryCollectCharacter::UpdatePower(float PowerChange)
{
	//change player power
	CharacterPower += PowerChange;
	//change speed based on player power
	GetCharacterMovement()->MaxWalkSpeed = BaseSpeed + SpeedFactor * CharacterPower;
	//call visual effect
	PowerChangeEffect();
}