// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpyAnimationBlueprint.h"

void UJumpyAnimationBlueprint::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	jumpyCharacter = Cast<AJumpyCharacter>(TryGetPawnOwner());

	if (jumpyCharacter)
	{
		JumpyCharacterMovement = jumpyCharacter->GetCharacterMovement();
	}
}

void UJumpyAnimationBlueprint::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (JumpyCharacterMovement)
	{
		FVector velocityVector = JumpyCharacterMovement->Velocity;
		GroundSpeed = UKismetMathLibrary::VSizeXY(velocityVector);
	
		CurrentFrameRotator = jumpyCharacter->GetActorRotation();
		FRotator DeltaRotator = UKismetMathLibrary::NormalizedDeltaRotator(LastFrameRotator, CurrentFrameRotator);
		
		leanAmount = UKismetMathLibrary::FInterpTo(leanAmount, DeltaRotator.Yaw, DeltaSeconds, 2);

		LastFrameRotator = jumpyCharacter->GetActorRotation();

		//Calculate Jumping
		isInAir = JumpyCharacterMovement->IsFalling();

		FVector MovementInputVector = jumpyCharacter->GetLastMovementInputVector();
		float MovementInputValue = UKismetMathLibrary::VSize(MovementInputVector);

		if (MovementInputValue > 0) 
		{
			MovementInputBool = true;
		}
		else
		{
			MovementInputBool = false;
		}
	}
}

