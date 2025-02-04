// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "JumpyUI.generated.h"

/**
 * 
 */
UCLASS()
class JUMPYCPP_API UJumpyUI : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* HeightText;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UTextBlock* MaxHeightTextBlock;

	void SetHeight(int32 height);

	int32 MaxHeight;
};
