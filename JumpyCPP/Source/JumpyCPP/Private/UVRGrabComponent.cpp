// Fill out your copyright notice in the Description page of Project Settings.


#include "UVRGrabComponent.h"

// Sets default values for this component's properties
UUVRGrabComponent::UUVRGrabComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UUVRGrabComponent::BeginPlay()
{
    Super::BeginPlay();
    FindPhysicsHandle();
}

void UUVRGrabComponent::FindPhysicsHandle()
{
    PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
}

FHitResult UUVRGrabComponent::GetFirstPhysicsBodyInReach()
{
    FVector PlayerViewPointLocation;
    FRotator PlayerViewPointRotation;

    GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);
    FVector LineTraceEnd = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * 200.f;

    FHitResult Hit;
    FCollisionQueryParams TraceParams(FName(TEXT("")), false, GetOwner());
    GetWorld()->LineTraceSingleByObjectType(
        Hit,
        PlayerViewPointLocation,
        LineTraceEnd,
        FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
        TraceParams
    );

    return Hit;
}

void UUVRGrabComponent::Grab()
{
    FHitResult HitResult = GetFirstPhysicsBodyInReach();
    if (HitResult.GetActor())
    {
        GrabbedComponent = HitResult.GetComponent();
        if (PhysicsHandle)
        {
            PhysicsHandle->GrabComponentAtLocationWithRotation(
                GrabbedComponent,
                NAME_None,
                GrabbedComponent->GetComponentLocation(),
                GrabbedComponent->GetComponentRotation()
            );
        }
    }
}

void UUVRGrabComponent::Release()
{
    if (PhysicsHandle)
    {
        PhysicsHandle->ReleaseComponent();
    }
    GrabbedComponent = nullptr;
}

