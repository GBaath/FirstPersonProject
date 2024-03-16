// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "FreerunMovementComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class FIRSTPERSONPROJECT_API UFreerunMovementComponent : public UFloatingPawnMovement
{
	GENERATED_BODY()
	
public: 

	UFUNCTION(BlueprintCallable)
	void ApplyGravity(float DeltaTime);

	void ManageFOV();

	float ManageSpeedInterpolation();

};
