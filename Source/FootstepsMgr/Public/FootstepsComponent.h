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
USTRUCT(BlueprintType, meta = (DisplayName = "Footsteps Data"))
struct FFootStepsData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "Footsteps Component")
	USoundBase* SoundEffect = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component")
	UNiagaraSystem* ParticleSystem = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component", meta = (DisplayName = "Footprint"))
	UMaterialInterface* FootPrint = nullptr;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Footsteps Component", meta = (DisplayName = "Faded Dirty Footprint"))
	UMaterialInterface* FadedDirtyFootPrint = nullptr;
};
/*
 *
 *
 */
UCLASS(Blueprintable, ClassGroup = "Footsteps", meta = (BlueprintSpawnableComponent))
class FOOTSTEPSMGR_API UFootstepsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UFootstepsComponent();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Footsteps Component")
	void AddFootstepEffect(FVector FootprintSize, FVector ParticleSize, USceneComponent* SkeletalMesh, FName BoneName, float TraceLength, float VolumeMultiplier);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Component", meta = (DisplayName = "Add Footsteps Effect Without Skeletal Mesh", KeyWords = "Footsteps", ToolTip = "Add Footsteps Effect"))
	void AddFootstepEffect2(FVector TraceStartingLocation, float TraceLength, FVector FootprintSize, FVector ParticleSize, float VolumeMultiplier);

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
	UPROPERTY(BlueprintReadOnly, SaveGame, Category = "Footsteps Component")
	bool bDirtySteps;

	FFootStepsData* DefaultRow;
	FFootStepsData* CurrentRow;
	FFootStepsData* CurrentDirtyRow;
	int32 DirtyStepsCountInt;
	UPROPERTY(BlueprintReadOnly, SaveGame, Category = "Footsteps Component")
	TEnumAsByte<EPhysicalSurface> SurfaceType;


public:

	UFUNCTION(Category = "Footsteps Component")
	void SetDisableEverything(bool State);
	UFUNCTION(Category = "Footsteps Component")
	void SetDisableSoundEffects(bool State);
	UFUNCTION(Category = "Footsteps Component")
	void SetDisableParticles(bool State);
	UFUNCTION(Category = "Footsteps Component")
	void SetDisableFootprints(bool State);
	UFUNCTION(Category = "Footsteps Component")
	void SetDisableDirtyFootprints(bool State);
	UFUNCTION(Category = "Footsteps Component")
	void SetOverlayDirtyFootprints(bool State);
	UFUNCTION(Category = "Footsteps Component")
	void SetSpawnParticleAtBoneLocation(bool State);
	UFUNCTION(Category = "Footsteps Component")
	void SetIgnoreMissingEffect(bool State);
	UFUNCTION(Category = "Footsteps Component")
	void SetOverrideRow(bool State);
	UFUNCTION(Category = "Footsteps Component")
	void SetOverrideWith(FName RowName);
	UFUNCTION(Category = "Footsteps Component")
	void SetDirtyStepsCount(int32 StepsCount);
	UFUNCTION(Category = "Footsteps Component")
	void SetDirtyRowsNames(TArray<FName> RowsNames);
	UFUNCTION(Category = "Footsteps Component")
	void SetFootprintLifeTime(float LifeTime);
	UFUNCTION(Category = "Footsteps Component")
	void SetFootprintFadeOutDelay(float FadeOutDelay);
	UFUNCTION(Category = "Footsteps Component")
	void SetFootprintFadeOutDuration(float FadeOutDuration);
	UFUNCTION(BlueprintCallable, Category = "Footsteps Component")
	void ChangeIgnoreManagerState(bool State, TSubclassOf<AFootstepsManager> ManagerType);
	/*
	 *
	 *
	 *
	 *
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component", meta = (DisplayPriority = 1))
	UDataTable* DataTable;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame, Category = "Footsteps Component", meta = (DisplayPriority = 2, EditCondition = "!bIgnoreManager"))
	TSubclassOf<AFootstepsManager> ManagerClass;
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, SaveGame, Category = "Footsteps Component", meta = (DisplayPriority = 3))
	AFootstepsManager* Manager;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component", meta = (DisplayPriority = 4))
	bool bIgnoreManager;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Footsteps State", meta = (DisplayPriority = 1))
	bool bDisableEverything;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Footsteps State", meta = (DisplayPriority = 2, EditCondition = "!bDisableEverything"))
	bool bDisableSoundEffects;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Footsteps State", meta = (DisplayPriority = 3, EditCondition = "!bDisableEverything"))
	bool bDisableParticles;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Footsteps State", meta = (DisplayPriority = 4, EditCondition = "!bDisableEverything"))
	bool bDisableFootprints;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Footsteps State", meta = (DisplayPriority = 5, EditCondition = "!bDisableEverything"))
	bool bDisableDirtyFootprints;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Fade Out", meta = (DisplayPriority = 1, EditCondition = "!bDisableEverything"))
	float FootprintLifeTime=16.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Fade Out", meta = (DisplayPriority = 2, EditCondition = "!bDisableEverything"))
	float FootprintFadeOutDelay=11.f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Fade Out", meta = (DisplayPriority = 3, EditCondition = "!bDisableEverything"))
	float FootprintFadeOutDuration=5.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Dirty Footprints", meta = (DisplayName = "Overlay Dirty Footprints Over Normal Ones", DisplayPriority = 1, EditCondition = "!bDisableEverything", ToolTip = "Overlay Dirty Footprints Over Normal Ones"))
	bool bOverlayDirtyFootprintsOverNormalOne=true;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Dirty Footprints", meta = (DisplayPriority = 2, EditCondition = "!bDisableEverything"))
	int32 DirtyStepsCount = 8;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Dirty Footprints", meta = (DisplayPriority = 3, EditCondition = "!bDisableEverything"))
	TArray<FName> DirtyRowsNames;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Others", meta = (DisplayPriority = 1, EditCondition = "!bDisableEverything"))
	bool bSpawnParticleAtBoneLocation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Others", meta = (DisplayPriority = 2, EditCondition = "!bDisableEverything"))
	bool bOverrideRow;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Others", meta = (DisplayPriority = 3, EditCondition = "bOverrideRow"))
	FName OverrideWith;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, Category = "Footsteps Component|Others", meta = (DisplayPriority = 4, ShortTooltip = "do not use Default Effect if they're missing from current row.", EditCondition = "!bDisableEverything"))
	bool bIgnoreMissingEffect = true;
};