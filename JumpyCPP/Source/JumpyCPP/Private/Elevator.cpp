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
	
	Box->OnComponentBeginOverlap.AddDynamic(this, &AElevator::OnPlayerEnter);
	Box->OnComponentEndOverlap.AddDynamic(this, &AElevator::OnPlayerExit);

	GetWorldTimerManager().SetTimer(TimerForStayingDown, this, &AElevator::SetGoToEndLocation, TimerStayDown, false);
}

void AElevator::OnPlayerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AJumpyCharacter* player = Cast<AJumpyCharacter>(OtherActor);

	if (player)
	{
		UE_LOG(LogTemp, Warning, TEXT("HEHEHE"));
	}
}

void AElevator::OnPlayerExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AJumpyCharacter* player = Cast<AJumpyCharacter>(OtherActor);

	if (player)
	{
		UE_LOG(LogTemp, Warning, TEXT("HUHUHU"));
	}
}

void AElevator::SetGoToEndLocation()
{
	UE_LOG(LogTemp, Warning, TEXT("SetGoToEndLocation"));
}

// Called every frame
void AElevator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

