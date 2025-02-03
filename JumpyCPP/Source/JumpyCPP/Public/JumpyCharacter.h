// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "InputMappingContext.h"
#include "JumpyCharacter.generated.h"

UCLASS()
class JUMPYCPP_API AJumpyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AJumpyCharacter();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "mInput")
	UInputMappingContext* IMCJumpy;

	UPROPERTY(EditAnywhere, Category = "mInput")
	UInputAction* IAMoveAction;

	UPROPERTY(EditAnywhere, Category = "mInput")
	UInputAction* IALookAction;

	UPROPERTY(EditAnywhere, Category = "mInput")
	UInputAction* IAJumpAction;

private:
	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* Camera;

	// Class of the item to spawn
	UPROPERTY(EditAnywhere, Category = "Item")
	TSubclassOf<class AItem> ItemClass;

	float AddTwoNumber(float A, float B);

	void Move(const FInputActionValue& Value);

	void Look(const FInputActionValue& Value);

	void Jumping(const FInputActionValue& Value);

	void SpawnItem(float y);
};
