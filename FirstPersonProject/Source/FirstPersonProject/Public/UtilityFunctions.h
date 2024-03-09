// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilityFunctions.generated.h"

/**
 * 
 */
UCLASS()
class FIRSTPERSONPROJECT_API UUtilityFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static UWorld* GetWorld(AActor* Actor) {
		return Actor->GetWorld();
	}
};
