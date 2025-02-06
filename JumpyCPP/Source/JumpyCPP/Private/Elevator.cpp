// Fill out your copyright notice in the Description page of Project Settings.


#include "Elevator.h"

// Sets default values
AElevator::AElevator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Elevator = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ElevatorMesh"));
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));

	Elevator->SetupAttachment(GetRootComponent());
	Box->SetupAttachment(Elevator);
}

// Called when the game starts or when spawned
void AElevator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElevator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

