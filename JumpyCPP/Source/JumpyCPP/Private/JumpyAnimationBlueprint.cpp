// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpyAnimationBlueprint.h"

void UJumpyAnimationBlueprint::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	jumpyCharacter = Cast<AJumpyCharacter>(TryGetPawnOwner());

	if (jumpyCharacter)
	{
		UE_LOG(LogTemp, Warning, TEXT("JumpyCharacter NativeInitializeAnimation Playing"));
	}
}

void UJumpyAnimationBlueprint::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
}

