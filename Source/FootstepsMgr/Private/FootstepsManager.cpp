// Fill out your copyright notice in the Description page of Project Settings.


#include "FootstepsManager.h"

// Sets default values
AFootstepsManager::AFootstepsManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AFootstepsManager::BeginPlay()
{
	Super::BeginPlay();
	UpdateAll();
}

void AFootstepsManager::SetDisableEverything(bool state)
{
		bDisableEverything = state;
		D_Everything.Broadcast(state);
}

void AFootstepsManager::SetDisableSoundEffects(bool state)
{
	bDisableSoundEffects = state;
	D_SoundEffect.Broadcast(state);
	
}

void AFootstepsManager::SetDisableParticles(bool state)
{
	bDisableParticles = state;
	D_Particles.Broadcast(state);
}

void AFootstepsManager::SetDisableFootprints(bool state)
{
	bDisableFootprints = state;
	D_Footprints.Broadcast(state);
}

void AFootstepsManager::SetDisableDirtyFootprints(bool state)
{
	bDisableDirtyFootprints = state;
	D_DirtyFootprints.Broadcast(state);
}

void AFootstepsManager::SetOverlayDirtyFootprints(bool state)
{
	bOverlayDirtyFootprintsOverNormalOne = state;
	D_OverlayDirtyFootprints.Broadcast(state);
}

void AFootstepsManager::SetSpawnParticleAtBoneLocation(bool state)
{
	bSpawnParticleAtBoneLocation = state;
	D_ParticleAtBoneLocation.Broadcast(state);
}

void AFootstepsManager::SetIgnoreMissingEffect(bool state)
{
	bIgnoreMissingEffect = state;
	D_IgnoreMissingEffect.Broadcast(state);
}

void AFootstepsManager::SetOverrideRow(bool state)
{
	bOverrideRow = state;
	D_OverrideRow.Broadcast(state);
}

void AFootstepsManager::SetOverrideWith(FName RowName)
{
	OverrideWith = RowName;
	D_OverrideWith.Broadcast(RowName);
}

void AFootstepsManager::SetDirtyStepsCount(int32 StepsCount)
{
	DirtyStepsCount = StepsCount;
	D_StepsCount.Broadcast(StepsCount);
}

void AFootstepsManager::SetDirtyRowsNames(TArray<FName> RowsNames)
{
	DirtyRowsNames = RowsNames;
	D_DirtyRows.Broadcast(RowsNames);
}

void AFootstepsManager::SetFootprintLifeTime(float LifeTime)
{
	FootprintLifeTime = LifeTime;
	D_LifeTime.Broadcast(LifeTime);
}

void AFootstepsManager::SetFootprintFadeOutDelay(float FadeOutDelay)
{
	FootprintFadeOutDelay = FadeOutDelay;
	D_FadeOutDelay.Broadcast(FadeOutDelay);
}

void AFootstepsManager::SetFootprintFadeOutDuration(float FadeOutDuration)
{
	FootprintFadeOutDuration = FadeOutDuration;
	D_FadeOutDuration.Broadcast(FadeOutDuration);
}

void AFootstepsManager::UpdateAll()
{
	SetDisableEverything(bDisableEverything);
	SetDisableSoundEffects(bDisableSoundEffects);
	SetDisableParticles(bDisableParticles);
	SetDisableFootprints(bDisableFootprints);
	SetDisableDirtyFootprints(bDisableDirtyFootprints);
	SetOverlayDirtyFootprints(bOverlayDirtyFootprintsOverNormalOne);
	SetSpawnParticleAtBoneLocation(bSpawnParticleAtBoneLocation);
	SetIgnoreMissingEffect(bIgnoreMissingEffect);
	SetOverrideRow(bOverrideRow);
	SetOverrideWith(OverrideWith);
	SetDirtyStepsCount(DirtyStepsCount);
	SetDirtyRowsNames(DirtyRowsNames);
	SetFootprintLifeTime(FootprintLifeTime);
	SetFootprintFadeOutDelay(FootprintFadeOutDelay);
	SetFootprintFadeOutDuration(FootprintFadeOutDuration);
}


