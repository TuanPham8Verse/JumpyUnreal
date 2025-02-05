﻿// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/KismetMathLibrary.h"
#include "JumpyCharacter.h"
#include "Item.h"

// Sets default values
AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	Orb = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Orb"));
	Ring = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring"));

	//Box->SetupAttachment(GetRootComponent());
	SetRootComponent(Box);
	Orb->SetupAttachment(Box);
	Ring->SetupAttachment(Orb);
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();

	int random = UKismetMathLibrary::RandomIntegerInRange(0, 360);

	Orb->SetWorldRotation(FRotator(random, 0, 0));
	Box->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnPlayerEnter);
	//UE_LOG(LogTemp, Warning, TEXT("%d"), random);
}

void AItem::OnPlayerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AJumpyCharacter* Player = Cast<AJumpyCharacter>(OtherActor);
	if (Player)
	{
		Player->PlayerHUD->SetCoin(ItemCoin);

		//UE_LOG(LogTemp, Warning, TEXT("ItemCoin :%d"), ItemCoin);
		//UE_LOG(LogTemp, Warning, TEXT("PlayerCoin: %d"), Player->PlayerHUD->Coin);

		Destroy();
	}
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}



