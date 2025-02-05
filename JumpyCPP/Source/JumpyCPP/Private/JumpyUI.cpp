// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpyUI.h"

#define LOCTEXT_NAMESPACE "mynamespace"

void UJumpyUI::SetHeight(int32 height)
{
	FText HeightFText = FText::Format(LOCTEXT("ShowHeight", "{0}"), (height - 77) / 100);
	HeightText->SetText(HeightFText);

	MaxHeightProgressBar->SetPercent(height / static_cast<float>(MaxHeight));

	if (MaxHeight == 0 && Coin == 0)
	{
		SetCoin(0);

		FText MaxHeightFText = FText::Format(LOCTEXT("ShowMaxHeight", "{0}"), (MaxHeight - 77) / 100);
		MaxHeightTextBlock->SetText(MaxHeightFText);
	}

	if (((height - 77) / 100) > ((MaxHeight - 77) / 100))
	{
		SetCoin(5);

		MaxHeight = height;
		FText MaxHeightFText = FText::Format(LOCTEXT("ShowMaxHeight", "{0}"), (MaxHeight - 77) / 100);
		MaxHeightTextBlock->SetText(MaxHeightFText);
	}
}

void UJumpyUI::SetCoin(int32 amount)
{
	Coin += amount;

	FText CoinFText = FText::AsCurrency(Coin, "$");
	CoinTextBlock->SetText(CoinFText);
}
