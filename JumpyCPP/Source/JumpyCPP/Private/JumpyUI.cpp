// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpyUI.h"

#define LOCTEXT_NAMESPACE "mynamespace"

void UJumpyUI::SetHeight(int32 height)
{
	FText HeightFText = FText::Format(LOCTEXT("ShowHeight", "{0}"), (height-77)/100);
	HeightText->SetText(HeightFText);

	if (height > MaxHeight)
	{
		MaxHeight = height;
		FText MaxHeightFText = FText::Format(LOCTEXT("ShowMaxHeight", "{0}"), (MaxHeight - 77) / 100);
		MaxHeightTextBlock->SetText(MaxHeightFText);
	}
}
