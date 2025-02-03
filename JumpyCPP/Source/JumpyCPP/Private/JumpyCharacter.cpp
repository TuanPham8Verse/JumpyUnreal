// Fill out your copyright notice in the Description page of Project Settings.

#include "EnhancedInputSubsystems.h"
#include "JumpyCharacter.h"
#include "EnhancedInputComponent.h"
#include "Item.h"

// Sets default values
AJumpyCharacter::AJumpyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("MySpringArm"));
	SpringArm->SetupAttachment(GetRootComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("MyCamera"));
	Camera->AttachToComponent(SpringArm, FAttachmentTransformRules::KeepRelativeTransform);

	SpringArm->TargetArmLength = 500;
	SpringArm->SocketOffset = FVector(0, 0, 80);
	SpringArm->bUsePawnControlRotation = true;

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->MaxWalkSpeed = 500;
	GetCharacterMovement()->bOrientRotationToMovement = true;
}

// Called when the game starts or when spawned
void AJumpyCharacter::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogTemp, Warning, TEXT("TuanDepTrai"));

	float floatValue = 5.4f;
	int intValue = 3;
	FVector vectorValue = FVector(3, 4, 5);

	//UE_LOG(LogTemp, Warning, TEXT("The float value is: %f"), floatValue);
	//UE_LOG(LogTemp, Warning, TEXT("The float value is: %f"), floatValue);
	//UE_LOG(LogTemp, Warning, TEXT("The interger value is: %d"), intValue);
	//UE_LOG(LogTemp, Warning, TEXT("The vector value is: %s"), *vectorValue.ToString());

	float sum = AddTwoNumber(floatValue, intValue);
	UE_LOG(LogTemp, Warning, TEXT("Sum %f + %d is: %f"), floatValue, intValue, sum);

	APlayerController* JumpyController = Cast<APlayerController>(GetController());

	if (JumpyController) 
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(JumpyController->GetLocalPlayer());

		if (Subsystem) 
		{
			Subsystem->ClearAllMappings();
			Subsystem->AddMappingContext(IMCJumpy, 0);
		}
	}

	for (int i = 0; i < 100; i++) 
	{
		SpawnItem(i * 150);
	}
}

float AJumpyCharacter::AddTwoNumber(float A, float B)
{
	return A + B;
}

void AJumpyCharacter::Move(const FInputActionValue& Value)
{
	FVector2D RCVValue = Value.Get<FVector2D>();

	//UE_LOG(LogTemp, Warning, TEXT("InputActionValue: %s"), *RCVValue.ToString());

	FRotator ControlRotation = GetControlRotation();
	//FVector ForwarVector = FRotationMatrix(ControlRotation).GetUnitAxis(EAxis::X);

	FVector ForwarVector = FRotationMatrix(FRotator(0, ControlRotation.Yaw, 0)).GetUnitAxis(EAxis::X);
	FVector RightVector = FRotationMatrix(FRotator(0, ControlRotation.Yaw, 0)).GetUnitAxis(EAxis::Y);

	AddMovementInput(ForwarVector, RCVValue.X);
	AddMovementInput(RightVector, RCVValue.Y);
}

void AJumpyCharacter::Look(const FInputActionValue& Value)
{
	FVector2D RCVValue = Value.Get<FVector2D>();

	//UE_LOG(LogTemp, Warning, TEXT("LookActionValue: %s"), *RCVValue.ToString());

	AddControllerYawInput(RCVValue.X);
	AddControllerPitchInput(RCVValue.Y);
}

void AJumpyCharacter::Jumping(const FInputActionValue& Value)
{
	bool RCVValue = Value.Get<bool>();

	if (RCVValue)
	{
		Jump();
	}
}

// Called every frame
void AJumpyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AJumpyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (EnhancedInputComponent) 
	{
		EnhancedInputComponent->BindAction(IAMoveAction, ETriggerEvent::Triggered, this, &AJumpyCharacter::Move);

		EnhancedInputComponent->BindAction(IALookAction, ETriggerEvent::Triggered, this, &AJumpyCharacter::Look);

		EnhancedInputComponent->BindAction(IAJumpAction, ETriggerEvent::Triggered, this, &AJumpyCharacter::Jumping);
	}
}

// Function to spawn item
void AJumpyCharacter::SpawnItem(float y)
{
	if (ItemClass)
	{
		FVector spawnLocation = FVector(-200.0, y, 77.150006);

		// Get player location and rotation
		//FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 200.0f;
		FRotator SpawnRotation = GetActorRotation();

		// Spawn the item
		AItem* SpawnedItem = GetWorld()->SpawnActor<AItem>(ItemClass, spawnLocation, SpawnRotation);
		IndexCoin++;
		SpawnedItem->ItemCoin = IndexCoin;
	}
}

