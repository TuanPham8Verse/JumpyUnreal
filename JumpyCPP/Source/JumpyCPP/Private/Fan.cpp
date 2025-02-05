// Fill out your copyright notice in the Description page of Project Settings.


#include "Fan.h"

// Sets default values
AFan::AFan()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Frame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FanFrame"));
	Fan = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FanBody"));
	FanGrating = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FanGrating"));
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	ForceDirection = CreateDefaultSubobject< UArrowComponent>(TEXT("Arrow"));
	Wind = CreateDefaultSubobject<UNiagaraComponent>(TEXT("VisualEffects"));

	Frame->SetupAttachment(GetRootComponent());
	Fan->SetupAttachment(Frame);
	FanGrating->SetupAttachment(Frame);
	Box->SetupAttachment(Frame);
	ForceDirection->SetupAttachment(Box);
	Wind->SetupAttachment(Frame); 
}

// Called when the game starts or when spawned
void AFan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Fan->AddLocalRotation(FRotator(0, 0, 5));
}

