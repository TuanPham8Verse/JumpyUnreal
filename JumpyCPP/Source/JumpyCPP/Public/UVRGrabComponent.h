// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "UVRGrabComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class JUMPYCPP_API UUVRGrabComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UUVRGrabComponent();

protected:
	virtual void BeginPlay() override;

public:
	void Grab();
	void Release();

private:
	UPROPERTY()
	UPhysicsHandleComponent* PhysicsHandle;

	UPROPERTY()
	UPrimitiveComponent* GrabbedComponent;

	UFUNCTION()
	void FindPhysicsHandle();

	UFUNCTION()
	FHitResult GetFirstPhysicsBodyInReach();
};
