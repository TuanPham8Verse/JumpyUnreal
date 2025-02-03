// Fill out your copyright notice in the Description page of Project Settings.

#include "Kismet/KismetMathLibrary.h"
#include "Item.h"

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	Orb = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Orb"));
	Ring = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ring"));

	Box->SetupAttachment(GetRootComponent());
	Orb->SetupAttachment(Box);
	Ring->SetupAttachment(Orb);
}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
	int random = UKismetMathLibrary::RandomIntegerInRange(0, 360);

	Orb->SetWorldRotation(FRotator(random, 0, 0));
	UE_LOG(LogTemp, Warning, TEXT("%d"), random);

    //SpawnMyActor(this);
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}



