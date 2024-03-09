// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "LegacyCameraShake.h"
#include "FreeRunnerGameInstance.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FGameAssets
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "CameraShake")
	TArray<TSubclassOf<ULegacyCameraShake>> CameraShakeActiveAssets;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "CameraShake")
	TArray<TSubclassOf<UCameraShakeBase>> CameraShakePassiveAssets;

};
UCLASS()
class FIRSTPERSONPROJECT_API UFreeRunnerGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Structs")
	FGameAssets GameAssets;
};
