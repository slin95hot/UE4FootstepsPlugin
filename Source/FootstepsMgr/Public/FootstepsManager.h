// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FootstepsManager.generated.h"


DECLARE_MULTICAST_DELEGATE_OneParam(FEverything, bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FSoundEffect, bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FParticles, bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FFootprints, bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FDirtyFootprints, bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FOverlayDirtyFootprints, bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FParticleAtBoneLocation, bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FIgnoreMissingEffect, bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FOverrideRow, bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FOverrideWith, FName);
DECLARE_MULTICAST_DELEGATE_OneParam(FStepsCount, int32);
DECLARE_MULTICAST_DELEGATE_OneParam(FDirtyRows, TArray<FName>);
DECLARE_MULTICAST_DELEGATE_OneParam(FLifeTime, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FFadeOutDelay, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FFadeOutDuration, float);

UCLASS()
class FOOTSTEPSMGR_API AFootstepsManager : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:


	FEverything D_Everything;
	FSoundEffect D_SoundEffect;
	FParticles D_Particles;
	FFootprints D_Footprints;
	FDirtyFootprints D_DirtyFootprints;
	FOverlayDirtyFootprints D_OverlayDirtyFootprints;
	FParticleAtBoneLocation D_ParticleAtBoneLocation;
	FIgnoreMissingEffect D_IgnoreMissingEffect;
	FOverrideRow D_OverrideRow;
	FOverrideWith D_OverrideWith;
	FStepsCount D_StepsCount;
	FDirtyRows D_DirtyRows;
	FLifeTime D_LifeTime;
	FFadeOutDelay D_FadeOutDelay;
	FFadeOutDuration D_FadeOutDuration;

	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetDisableEverything(bool state);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetDisableSoundEffects(bool state);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetDisableParticles(bool state);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetDisableFootprints(bool state);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetDisableDirtyFootprints(bool state);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetOverlayDirtyFootprints(bool state);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetSpawnParticleAtBoneLocation(bool state);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetIgnoreMissingEffect(bool state);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetOverrideRow(bool state);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetOverrideWith(FName RowName);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetDirtyStepsCount(int32 StepsCount);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetDirtyRowsNames(TArray<FName> RowsNames);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetFootprintLifeTime(float LifeTime);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetFootprintFadeOutDelay(float FadeOutDelay);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void SetFootprintFadeOutDuration(float FadeOutDuration);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Manager")
	void UpdateAll();
public:	
	// Sets default values for this actor's properties
	AFootstepsManager();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Footsteps State", meta = (DisplayPriority = 1))
	bool bDisableEverything;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Footsteps State", meta = (DisplayPriority = 2, EditCondition = "!bDisableEverything"))
	bool bDisableSoundEffects;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Footsteps State", meta = (DisplayPriority = 3, EditCondition = "!bDisableEverything"))
	bool bDisableParticles;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Footsteps State", meta = (DisplayPriority = 4, EditCondition = "!bDisableEverything"))
	bool bDisableFootprints;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Footsteps State", meta = (DisplayPriority = 5, EditCondition = "!bDisableEverything"))
	bool bDisableDirtyFootprints;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Fade Out", meta = (DisplayPriority = 1, EditCondition = "!bDisableEverything"))
	float FootprintLifeTime = 16.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Fade Out", meta = (DisplayPriority = 2, EditCondition = "!bDisableEverything"))
	float FootprintFadeOutDelay = 11.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Fade Out", meta = (DisplayPriority = 3, EditCondition = "!bDisableEverything"))
	float FootprintFadeOutDuration = 5.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Dirty Footprints", meta = (DisplayPriority = 1, EditCondition = "!bDisableEverything"))
	bool bOverlayDirtyFootprintsOverNormalOne = true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Dirty Footprints", meta = (DisplayPriority = 2, EditCondition = "!bDisableEverything"))
	int32 DirtyStepsCount = 8;
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Footsteps Component|Dirty Footprints", meta = (DisplayPriority = 3, EditCondition = "!bDisableEverything"))
	TArray<FName> DirtyRowsNames;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Others", meta = (DisplayPriority = 1, EditCondition = "!bDisableEverything"))
	bool bSpawnParticleAtBoneLocation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Others", meta = (DisplayPriority = 2, EditCondition = "!bDisableEverything"))
	bool bOverrideRow;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Others", meta = (DisplayPriority = 3, EditCondition = "bOverrideRow"))
	FName OverrideWith;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Others", meta = (DisplayPriority = 4, ShortTooltip = "do not use Default Effect if they're missing from current row.", EditCondition = "!bDisableEverything"))
	bool bIgnoreMissingEffect = true;

};
