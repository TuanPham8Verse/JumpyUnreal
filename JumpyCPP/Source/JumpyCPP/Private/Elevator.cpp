// Fill out your copyright notice in the Description page of Project Settings.

#include "Elevator.h"

// Sets default values
AElevator::AElevator()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Elevator = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ElevatorMesh"));
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));

	SetRootComponent(Root);
	Elevator->SetupAttachment(Root);
	Box->SetupAttachment(Elevator);
}

// Called when the game starts or when spawned
void AElevator::BeginPlay()
{
	Super::BeginPlay();

	Box->OnComponentBeginOverlap.AddDynamic(this, &AElevator::OnPlayerEnter);
	Box->OnComponentEndOverlap.AddDynamic(this, &AElevator::OnPlayerExit);

	/*GetWorldTimerManager().SetTimer(TimerForStayingDown, this, &AElevator::SetGoToEndLocation, TimerStayDown, false);*/
}

void AElevator::OnPlayerEnter(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AJumpyCharacter* player = Cast<AJumpyCharacter>(OtherActor);

	if (player)
	{
		if (CheckIsExit)
		{
			if (CheckIsUse)
			{
				UE_LOG(LogTemp, Warning, TEXT("OnPlayerEnter"));

				GetWorldTimerManager().SetTimer(TimerForStayingDown, this, &AElevator::SetGoToEndLocation, TimerStayDown, false);
				CheckIsUse = false;
			}
			CheckIsExit = false;
		}
	}
}

void AElevator::OnPlayerExit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	AJumpyCharacter* player = Cast<AJumpyCharacter>(OtherActor);

	if (player)
	{
		GetWorldTimerManager().ClearTimer(TimerForStayingDown);
		CheckIsUse = true;
		CheckIsExit = true;
	}
}
//
void AElevator::SetGoToEndLocation()
{
	if (GoToEndLocation && !GoToStartLocation)
	{
		GoToEndLocation = false;
		GoToStartLocation = true;
	}
	else
	{
		GoToEndLocation = true;
		GoToStartLocation = false;
	}
}

// Called every frame
void AElevator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GoToEndLocation && !GoToStartLocation)
	{
		FVector TempLocation = UKismetMathLibrary::VInterpTo(Elevator->GetRelativeLocation(), EndLocation, DeltaTime, 2);
		Elevator->SetRelativeLocation(TempLocation);
		float distanceToEndLocation = UKismetMathLibrary::Vector_Distance(TempLocation, EndLocation);
		if (distanceToEndLocation < 20)
		{
			CheckIsExit = true;
		}
	}
	else if (!GoToEndLocation && GoToStartLocation)
	{
		FVector TempLocation = UKismetMathLibrary::VInterpTo(Elevator->GetRelativeLocation(), StartLocation, DeltaTime, 2);
		Elevator->SetRelativeLocation(TempLocation);
		float distanceToEndLocation = UKismetMathLibrary::Vector_Distance(TempLocation, EndLocation);
		if (distanceToEndLocation < 20)
		{
			CheckIsExit = true;
		}
	}
}

