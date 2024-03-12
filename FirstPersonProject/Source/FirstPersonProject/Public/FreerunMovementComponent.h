// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FreerunMovementComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class FIRSTPERSONPROJECT_API UFreerunMovementComponent : public UActorComponent
{
	GENERATED_BODY()
	
public: 
	void ApplyGravity();

	void ManageFOV();

	float ManageSpeedInterpolation();

};
