// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FootsepsInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UFootsepsInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FOOTSTEPSMGR_API IFootsepsInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SendFootstepNotification(FVector FootprintSize, FVector ParticleSize, USceneComponent* SkeletalMesh, FName BoneName, float TraceLength, float VolumeMultiplier);
};
