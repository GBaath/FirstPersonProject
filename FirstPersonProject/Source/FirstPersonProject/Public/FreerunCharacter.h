// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FreerunCharacter.generated.h"


UENUM(BlueprintType)
enum class EPlayerGroundState : uint8
{
	Idle,
	Walking,
	Sprinting,
	Crouching,
	Sliding
};
UENUM(BlueprintType)
enum class EPlayerAirState : uint8 
{
	Jumping,
	Falling,
	Climbing
};
UCLASS(Blueprintable)
class FIRSTPERSONPROJECT_API AFreerunCharacter : public APawn
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerGroundState GroundState;	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerAirState AirState;


	//TODO fix this shit no default va<lue


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	class USceneComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UCapsuleComponent* Capsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components")
	class UCharacterMovementComponent* MoveComp;

	// Sets default values for this character's properties
	AFreerunCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
