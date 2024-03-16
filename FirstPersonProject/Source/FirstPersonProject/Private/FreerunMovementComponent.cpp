// Fill out your copyright notice in the Description page of Project Settings.


#include "FreerunMovementComponent.h"

void UFreerunMovementComponent::ApplyGravity(float DeltaTime)
{
	ApplyControlInputToVelocity(DeltaTime);
}
