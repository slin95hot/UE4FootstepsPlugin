// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FootstepsManager.h"
#include "Engine/DataTable.h"
#include "Components/ActorComponent.h"
#include "PhysicsEngine/PhysicsSettings.h"
#include "FootstepsComponent.generated.h"

class UMaterialInterface;
class UNiagaraSystem;
class USoundBase;
/*
 *
 *
 */
USTRUCT(BlueprintType)
struct FFootStepsData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	USoundBase* SoundEffect = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UNiagaraSystem* ParticleSystem = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Footprint"))
	UMaterialInterface* FootPrint = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayName = "Faded Dirty Footprint"))
	UMaterialInterface* FadedDirtyFootPrint = nullptr;
};
/*
 *
 *
 */
UCLASS(Blueprintable, ClassGroup = "Custom", meta = (BlueprintSpawnableComponent))
class FOOTSTEPSMGR_API UFootstepsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UFootstepsComponent();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void AddFootstepEffect(FVector FootprintSize, FVector ParticleSize, USceneComponent* SkeletalMesh, FName BoneName, float TraceLength, float VolumeMultiplier);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void SetupManager();

	const bool CheckDataTableValidity(UDataTable* DataTableToCheck);

	const bool CheckDataTableRowValidity(FString RowName, UDataTable* InDataTable);

	const void SpawnParticleAtLocation(UWorld* World, UNiagaraSystem* Particle, FVector Location, FRotator Rotation, FVector Size);

	const void SpawnFootprintAtLocation(UWorld* World, UMaterialInterface* Footprint, FVector Location, FRotator Rotation, FVector Size, float LifeTime, float FadeOutDelay, float FadeOutDuration);

	bool IsADirtyRow(FName RowName);

	bool bDataTableIsValid;
	UPROPERTY(BlueprintReadOnly)
	bool bDirtySteps;

	FFootStepsData* DefaultRow;
	FFootStepsData* CurrentRow;
	FFootStepsData* CurrentDirtyRow;
	int32 DirtyStepsCountInt;
	UPROPERTY(BlueprintReadOnly)
	TEnumAsByte<EPhysicalSurface> SurfaceType;


public:

	UFUNCTION()
	void SetDisableEverything(bool State);
	UFUNCTION()
	void SetDisableSoundEffects(bool State);
	UFUNCTION()
	void SetDisableParticles(bool State);
	UFUNCTION()
	void SetDisableFootprints(bool State);
	UFUNCTION()
	void SetDisableDirtyFootprints(bool State);
	UFUNCTION()
	void SetOverlayDirtyFootprints(bool State);
	UFUNCTION()
	void SetSpawnParticleAtBoneLocation(bool State);
	UFUNCTION()
	void SetIgnoreMissingEffect(bool State);
	UFUNCTION()
	void SetOverrideRow(bool State);
	UFUNCTION()
	void SetOverrideWith(FName RowName);
	UFUNCTION()
	void SetDirtyStepsCount(int32 StepsCount);
	UFUNCTION()
	void SetDirtyRowsNames(TArray<FName> RowsNames);
	UFUNCTION()
	void SetFootprintLifeTime(float LifeTime);
	UFUNCTION()
	void SetFootprintFadeOutDelay(float FadeOutDelay);
	UFUNCTION()
	void SetFootprintFadeOutDuration(float FadeOutDuration);
	UFUNCTION(BlueprintCallable)
	void ChangeIgnoreManagerState(bool State, TSubclassOf<AFootstepsManager> ManagerType);
	/*
	 *
	 *
	 *
	 *
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component", meta = (DisplayPriority = 1))
	UDataTable* DataTable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component", meta = (DisplayPriority = 2, EditCondition = "!bIgnoreManager"))
	TSubclassOf<AFootstepsManager> ManagerClass;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component", meta = (DisplayPriority = 3, EditCondition = "!bIgnoreManager"))
	AFootstepsManager* Manager;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component", meta = (DisplayPriority = 4))
	bool bIgnoreManager;

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
	float FootprintLifeTime=16.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Fade Out", meta = (DisplayPriority = 2, EditCondition = "!bDisableEverything"))
	float FootprintFadeOutDelay=11.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Fade Out", meta = (DisplayPriority = 3, EditCondition = "!bDisableEverything"))
	float FootprintFadeOutDuration=5.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component|Dirty Footprints", meta = (DisplayName = "Overlay Dirty Footprints Over Normal Ones", DisplayPriority = 1, EditCondition = "!bDisableEverything"))
	bool bOverlayDirtyFootprintsOverNormalOne=true;
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