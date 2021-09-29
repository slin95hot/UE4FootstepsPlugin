// Fill out your copyright notice in the Description page of Project Settings.


#include "FootstepsComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/DecalComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"

// Sets default values for this component's properties
UFootstepsComponent::UFootstepsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UFootstepsComponent::BeginPlay()
{
	Super::BeginPlay();
	//Manager.EX.BindUFunction(this, TEXT("SetDisableSoundEffects"));
	CheckDataTableValidity(DataTable);
	SetupManager();
	// ...
	
}

void UFootstepsComponent::SetupManager()
{
	if (ManagerClass != NULL)
	{

		if (Manager == NULL)
		{
			TArray<AActor*> FoundActors;
			UGameplayStatics::GetAllActorsOfClass(GetOwner()->GetWorld(), ManagerClass, FoundActors);
			if (FoundActors.Num() != 0)
			{
				Manager = Cast<AFootstepsManager>(FoundActors.Last());
				if (Manager == NULL)
				{
					Manager = GetOwner()->GetWorld()->SpawnActor<AFootstepsManager>(ManagerClass, FVector(0.f, 0.f, 0.f), FRotator(0.f, 0.f, 0.f));
				}
			}
			else
			{
				Manager = GetOwner()->GetWorld()->SpawnActor<AFootstepsManager>(ManagerClass, FVector(0.f, 0.f, 0.f), FRotator(0.f, 0.f, 0.f));
			}
		}
	}
	else
	{
		if (Manager == NULL)
		{
			TArray<AActor*> FoundActors;
			UGameplayStatics::GetAllActorsOfClass(GetOwner()->GetWorld(), AFootstepsManager::StaticClass(), FoundActors);
			if (FoundActors.Num() != 0)
			{
				Manager = Cast<AFootstepsManager>(FoundActors.Last());
				if (Manager == NULL)
				{
					Manager = GetOwner()->GetWorld()->SpawnActor<AFootstepsManager>(FVector(0.f, 0.f, 0.f), FRotator(0.f, 0.f, 0.f));
				}
			}
			else
			{
				Manager = GetOwner()->GetWorld()->SpawnActor<AFootstepsManager>(FVector(0.f, 0.f, 0.f), FRotator(0.f, 0.f, 0.f));
			}
		}
	}
	if (Manager != NULL)
	{
		Manager->D_Everything.AddUFunction(this, TEXT("SetDisableEverything"));
		Manager->D_SoundEffect.AddUFunction(this, TEXT("SetDisableSoundEffects"));
		Manager->D_Particles.AddUFunction(this, TEXT("SetDisableParticles"));
		Manager->D_Footprints.AddUFunction(this, TEXT("SetDisableFootprints"));
		Manager->D_DirtyFootprints.AddUFunction(this, TEXT("SetDisableDirtyFootprints"));
		Manager->D_OverlayDirtyFootprints.AddUFunction(this, TEXT("SetOverlayDirtyFootprints"));
		Manager->D_ParticleAtBoneLocation.AddUFunction(this, TEXT("SetSpawnParticleAtBoneLocation"));
		Manager->D_IgnoreMissingEffect.AddUFunction(this, TEXT("SetIgnoreMissingEffect"));
		Manager->D_OverrideRow.AddUFunction(this, TEXT("SetOverrideRow"));
		Manager->D_OverrideWith.AddUFunction(this, TEXT("SetOverrideWith"));
		Manager->D_StepsCount.AddUFunction(this, TEXT("SetDirtyStepsCount"));
		Manager->D_DirtyRows.AddUFunction(this, TEXT("SetDirtyRowsNames"));
		Manager->D_LifeTime.AddUFunction(this, TEXT("SetFootprintLifeTime"));
		Manager->D_FadeOutDelay.AddUFunction(this, TEXT("SetFootprintFadeOutDelay"));
		Manager->D_FadeOutDuration.AddUFunction(this, TEXT("SetFootprintFadeOutDuration"));
		Manager->UpdateAll();

	}
}

const bool UFootstepsComponent::CheckDataTableValidity(UDataTable* DataTableToCheck)
{
	if (DataTableToCheck !=NULL)
	{
		const TArray<FName> RowNamesTemp = DataTableToCheck->GetRowNames();
		if (RowNamesTemp.Num()<=0)
		{
			UE_LOG(LogTemp, Error, TEXT("Footsteps Component DataTable is Empty in Actor:%s!"), *GetOwner()->GetName());
			return bDataTableIsValid=false;
		}
		else
		{
			FFootStepsData* FootStepsDataTemp = DataTableToCheck->FindRow<FFootStepsData>(RowNamesTemp[0],"First Row", true);
			if (FootStepsDataTemp)
			{
				DefaultRow = FootStepsDataTemp;
				if (FootStepsDataTemp->SoundEffect == NULL)
				{
					UE_LOG(LogTemp, Error, TEXT("SoundEffect in Footsteps Component DataTable is Empty in Actor:%s!"), *GetOwner()->GetName());
				}
				if (FootStepsDataTemp->ParticleSystem == NULL)
				{
					UE_LOG(LogTemp, Error, TEXT("ParticleSystem in Footsteps Component DataTable is Empty is Empty in Actor:%s!"), *GetOwner()->GetName());
				}
				if (FootStepsDataTemp->FootPrint == NULL)
				{
					UE_LOG(LogTemp, Error, TEXT("FootSteps DataTable is Footsteps Component is Empty in Actor:%s!"), *GetOwner()->GetName());
				}
				return bDataTableIsValid = true;
			}
			else
			{
				return bDataTableIsValid = false;
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Footsteps Component DataTable is Missing in Actor:%s!"), *GetOwner()->GetName());
		return bDataTableIsValid = false;
	}
}

const bool UFootstepsComponent::CheckDataTableRowValidity(FString RowName, UDataTable* InDataTable)
{
	if (bDataTableIsValid)
	{
		FFootStepsData* DataTableRowTemp= InDataTable->FindRow<FFootStepsData>(FName(RowName), "First Row", true);
		if (DataTableRowTemp)
		{
			return true;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("invalid Row Name 33:%s"),&RowName);
			return false;
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("invalid Row Name:%s"),&RowName);
		return false;
	}
}

const void UFootstepsComponent::SpawnParticleAtLocation(UWorld* World, UNiagaraSystem* Particle, FVector Location,
	FRotator Rotation, FVector Size)
{
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(World, Particle, Location, Rotation, Size, true, true, ENCPoolMethod::AutoRelease);
}

const void UFootstepsComponent::SpawnFootprintAtLocation(UWorld* World, UMaterialInterface* Footprint, FVector Location,
	FRotator Rotation, FVector Size, float LifeTime, float FadeOutDelay, float FadeOutDuration)
{
	UGameplayStatics::SpawnDecalAtLocation(World, Footprint, Size, Location, Rotation, LifeTime)->SetFadeOut(FadeOutDelay, FadeOutDuration, true);
}

bool UFootstepsComponent::IsADirtyRow(FName RowName)
{
	if (DirtyRowsNames.Num() != 0)
	{
		for (FName MyRowName : DirtyRowsNames)
		{
			if (MyRowName == RowName)
			{
				return true;
			}
		}
		return false;
	}
	else
	{
		return false;
	}
}

void UFootstepsComponent::AddFootstepEffect(FVector FootprintSize, FVector ParticleSize, USceneComponent* SkeletalMesh, FName BoneName, float TraceLength, float VolumeMultiplier)
{
	if (SkeletalMesh!=NULL)
	{
		if (SkeletalMesh->IsValidLowLevel())
		{
			UWorld* World = SkeletalMesh->GetOwner()->GetWorld();

			if (bDataTableIsValid)
			{
				//LineTrace From bone Downward
				FHitResult Hit;
				FVector Start = SkeletalMesh->GetSocketLocation(BoneName);
				FVector End = FVector(Start.X, Start.Y, Start.Z - TraceLength);
				FCollisionQueryParams CollQueryPar;
				CollQueryPar.bReturnPhysicalMaterial = true;
				World->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, CollQueryPar);

				//Check Hit Result
				if (Hit.IsValidBlockingHit())
				{
					if (Hit.PhysMaterial.Get() != NULL)
					{
						if (Hit.PhysMaterial.IsValid())
						{
							SurfaceType = Hit.PhysMaterial.Get()->SurfaceType;
							const FName SurfaceName= FName(UEnum::GetDisplayValueAsText(SurfaceType).ToString());

							if (CheckDataTableRowValidity(SurfaceName.ToString(), DataTable) && !bDisableEverything)
							{
								//getRow
								if (bOverrideRow&&CheckDataTableRowValidity(OverrideWith.ToString(),DataTable))
								{
									CurrentRow = DataTable->FindRow<FFootStepsData>(OverrideWith, "", true);
								}
								else
								{
									bOverrideRow = false;
									CurrentRow = DataTable->FindRow<FFootStepsData>(SurfaceName, "", true);
								}
								//check if Dirty
								if (IsADirtyRow(SurfaceName))
								{
									bDirtySteps = true;
									CurrentDirtyRow= DataTable->FindRow<FFootStepsData>(SurfaceName, "", true);
									DirtyStepsCountInt = DirtyStepsCount;
								}
								else
								{
									if (DirtyStepsCountInt==0)
									{
										bDirtySteps = false;
									}
									else
									{
										DirtyStepsCountInt = DirtyStepsCountInt - 1;
									}
								}
								//
								//Play sound
								if (!bDisableSoundEffects)
								{
									if (CurrentRow->SoundEffect != NULL)
									{
										UGameplayStatics::PlaySoundAtLocation(SkeletalMesh->GetOwner(), CurrentRow->SoundEffect, Hit.Location, FRotator(0.f, 0.f, 0.f), VolumeMultiplier);
									}
									else
									{
										if (!bIgnoreMissingEffect)
										{
											if (DefaultRow->SoundEffect != NULL)
											{
												UGameplayStatics::PlaySoundAtLocation(SkeletalMesh->GetOwner(), DefaultRow->SoundEffect, Hit.Location, FRotator(0.f, 0.f, 0.f), VolumeMultiplier);
											}
										}
									}
								}
								//spawn Decal
								FRotator ForwardRot = UKismetMathLibrary::MakeRotationFromAxes(SkeletalMesh->GetOwner()->GetActorForwardVector() * -1.f, SkeletalMesh->GetOwner()->GetActorRightVector()*-1, Hit.ImpactNormal);
								FRotator FootprintRot = FRotator(-90.f, 0.f, SkeletalMesh->GetOwner()->GetActorRotation().Yaw);
								
								if (!bDisableFootprints)
								{
									if (bOverlayDirtyFootprintsOverNormalOne||!bDirtySteps)
									{
										if (CurrentRow->FootPrint != NULL)
										{
											SpawnFootprintAtLocation(World, CurrentRow->FootPrint, Hit.Location, FootprintRot, FootprintSize, FootprintLifeTime, FootprintFadeOutDelay, FootprintFadeOutDuration);
										}
										else
										{
											if (!bIgnoreMissingEffect)
											{
												if (DefaultRow->FootPrint != NULL)
												{
													SpawnFootprintAtLocation(World, DefaultRow->FootPrint, Hit.Location, FootprintRot, FootprintSize, FootprintLifeTime, FootprintFadeOutDelay, FootprintFadeOutDuration);
												}
											}
										}
									}
								}

								if (bDirtySteps)
								{
									if (CurrentDirtyRow && !bDisableDirtyFootprints)
									{
										if (DirtyStepsCountInt > DirtyStepsCount / 2)
										{

											if (CurrentDirtyRow->FootPrint != NULL)
											{
												SpawnFootprintAtLocation(World, CurrentDirtyRow->FootPrint, Hit.Location, FootprintRot, FootprintSize, FootprintLifeTime, FootprintFadeOutDelay, FootprintFadeOutDuration);
											}
											else
											{
												if (!bIgnoreMissingEffect)
												{
													if (DefaultRow->FootPrint != NULL)
													{
														SpawnFootprintAtLocation(World, DefaultRow->FootPrint, Hit.Location, FootprintRot, FootprintSize, FootprintLifeTime, FootprintFadeOutDelay, FootprintFadeOutDuration);
													}
												}
											}
										}
										else
										{
											if (CurrentDirtyRow->FadedDirtyFootPrint != NULL)
											{
												SpawnFootprintAtLocation(World, CurrentDirtyRow->FadedDirtyFootPrint, Hit.Location, FootprintRot, FootprintSize, FootprintLifeTime, FootprintFadeOutDelay, FootprintFadeOutDuration);
											}
											else
											{
												if (!bIgnoreMissingEffect)
												{
													if (DefaultRow->FadedDirtyFootPrint != NULL)
													{
														SpawnFootprintAtLocation(World, DefaultRow->FadedDirtyFootPrint, Hit.Location, FootprintRot, FootprintSize, FootprintLifeTime, FootprintFadeOutDelay, FootprintFadeOutDuration);
													}
												}
											}

										}
									}
								}
								//spawn particle
								if (!bDisableParticles)
								{
									if (!bSpawnParticleAtBoneLocation)
									{
										if (CurrentRow->ParticleSystem != NULL)
										{
											SpawnParticleAtLocation(World, CurrentRow->ParticleSystem, Hit.Location, ForwardRot, ParticleSize);
										}
										else
										{
											if (!bIgnoreMissingEffect)
											{
												if (DefaultRow->ParticleSystem != NULL)
												{
													SpawnParticleAtLocation(World, DefaultRow->ParticleSystem, Hit.Location, ForwardRot, ParticleSize);
												}
											}

										}
									}
									else
									{
										if (CurrentRow->ParticleSystem != NULL)
										{
											SpawnParticleAtLocation(World, CurrentRow->ParticleSystem, Start, ForwardRot, ParticleSize);
										}
										else
										{
											if (!bIgnoreMissingEffect)
											{
												if (DefaultRow->ParticleSystem != NULL)
												{
													SpawnParticleAtLocation(World, DefaultRow->ParticleSystem,Start, ForwardRot, ParticleSize);
												}
											}

										}

									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void UFootstepsComponent::AddFootstepEffect2(FVector TraceStartingLocation, float TraceLength, FVector FootprintSize, FVector ParticleSize, float VolumeMultiplier)
{
	UWorld* World = GetOwner()->GetWorld();

	if (bDataTableIsValid)
	{
		//LineTrace Downward
		FHitResult Hit;
		FVector Start = TraceStartingLocation;
		FVector End = FVector(Start.X, Start.Y, Start.Z - TraceLength);
		FCollisionQueryParams CollQueryPar;
		CollQueryPar.bReturnPhysicalMaterial = true;
		World->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, CollQueryPar);

		//Check Hit Result
		if (Hit.IsValidBlockingHit())
		{
			if (Hit.PhysMaterial.Get() != NULL)
			{
				if (Hit.PhysMaterial.IsValid())
				{
					SurfaceType = Hit.PhysMaterial.Get()->SurfaceType;
					const FName SurfaceName = FName(UEnum::GetDisplayValueAsText(SurfaceType).ToString());

					if (CheckDataTableRowValidity(SurfaceName.ToString(), DataTable) && !bDisableEverything)
					{
						//getRow
						if (bOverrideRow && CheckDataTableRowValidity(OverrideWith.ToString(), DataTable))
						{
							CurrentRow = DataTable->FindRow<FFootStepsData>(OverrideWith, "", true);
						}
						else
						{
							bOverrideRow = false;
							CurrentRow = DataTable->FindRow<FFootStepsData>(SurfaceName, "", true);
						}
						//check if Dirty
						if (IsADirtyRow(SurfaceName))
						{
							bDirtySteps = true;
							CurrentDirtyRow = DataTable->FindRow<FFootStepsData>(SurfaceName, "", true);
							DirtyStepsCountInt = DirtyStepsCount;
						}
						else
						{
							if (DirtyStepsCountInt == 0)
							{
								bDirtySteps = false;
							}
							else
							{
								DirtyStepsCountInt = DirtyStepsCountInt - 1;
							}
						}
						//
						//Play sound
						if (!bDisableSoundEffects)
						{
							if (CurrentRow->SoundEffect != NULL)
							{
								UGameplayStatics::PlaySoundAtLocation(GetOwner(), CurrentRow->SoundEffect, Hit.Location, FRotator(0.f, 0.f, 0.f), VolumeMultiplier);
							}
							else
							{
								if (!bIgnoreMissingEffect)
								{
									if (DefaultRow->SoundEffect != NULL)
									{
										UGameplayStatics::PlaySoundAtLocation(GetOwner(), DefaultRow->SoundEffect, Hit.Location, FRotator(0.f, 0.f, 0.f), VolumeMultiplier);
									}
								}
							}
						}
						//spawn Decal
						FRotator ForwardRot = UKismetMathLibrary::MakeRotationFromAxes(GetOwner()->GetActorForwardVector() * -1.f, GetOwner()->GetActorRightVector() * -1, Hit.ImpactNormal);
						FRotator FootprintRot = FRotator(-90.f, 0.f, GetOwner()->GetActorRotation().Yaw);

						if (!bDisableFootprints)
						{
							if (bOverlayDirtyFootprintsOverNormalOne || !bDirtySteps)
							{
								if (CurrentRow->FootPrint != NULL)
								{
									SpawnFootprintAtLocation(World, CurrentRow->FootPrint, Hit.Location, FootprintRot, FootprintSize, FootprintLifeTime, FootprintFadeOutDelay, FootprintFadeOutDuration);
								}
								else
								{
									if (!bIgnoreMissingEffect)
									{
										if (DefaultRow->FootPrint != NULL)
										{
											SpawnFootprintAtLocation(World, DefaultRow->FootPrint, Hit.Location, FootprintRot, FootprintSize, FootprintLifeTime, FootprintFadeOutDelay, FootprintFadeOutDuration);
										}
									}
								}
							}
						}

						if (bDirtySteps)
						{
							if (CurrentDirtyRow && !bDisableDirtyFootprints)
							{
								if (DirtyStepsCountInt > DirtyStepsCount / 2)
								{

									if (CurrentDirtyRow->FootPrint != NULL)
									{
										SpawnFootprintAtLocation(World, CurrentDirtyRow->FootPrint, Hit.Location, FootprintRot, FootprintSize, FootprintLifeTime, FootprintFadeOutDelay, FootprintFadeOutDuration);
									}
									else
									{
										if (!bIgnoreMissingEffect)
										{
											if (DefaultRow->FootPrint != NULL)
											{
												SpawnFootprintAtLocation(World, DefaultRow->FootPrint, Hit.Location, FootprintRot, FootprintSize, FootprintLifeTime, FootprintFadeOutDelay, FootprintFadeOutDuration);
											}
										}
									}
								}
								else
								{
									if (CurrentDirtyRow->FadedDirtyFootPrint != NULL)
									{
										SpawnFootprintAtLocation(World, CurrentDirtyRow->FadedDirtyFootPrint, Hit.Location, FootprintRot, FootprintSize, FootprintLifeTime, FootprintFadeOutDelay, FootprintFadeOutDuration);
									}
									else
									{
										if (!bIgnoreMissingEffect)
										{
											if (DefaultRow->FadedDirtyFootPrint != NULL)
											{
												SpawnFootprintAtLocation(World, DefaultRow->FadedDirtyFootPrint, Hit.Location, FootprintRot, FootprintSize, FootprintLifeTime, FootprintFadeOutDelay, FootprintFadeOutDuration);
											}
										}
									}

								}
							}
						}
						//spawn particle
						if (!bDisableParticles)
						{
							if (!bSpawnParticleAtBoneLocation)
							{
								if (CurrentRow->ParticleSystem != NULL)
								{
									SpawnParticleAtLocation(World, CurrentRow->ParticleSystem, Hit.Location, ForwardRot, ParticleSize);
								}
								else
								{
									if (!bIgnoreMissingEffect)
									{
										if (DefaultRow->ParticleSystem != NULL)
										{
											SpawnParticleAtLocation(World, DefaultRow->ParticleSystem, Hit.Location, ForwardRot, ParticleSize);
										}
									}

								}
							}
							else
							{
								if (CurrentRow->ParticleSystem != NULL)
								{
									SpawnParticleAtLocation(World, CurrentRow->ParticleSystem, Start, ForwardRot, ParticleSize);
								}
								else
								{
									if (!bIgnoreMissingEffect)
									{
										if (DefaultRow->ParticleSystem != NULL)
										{
											SpawnParticleAtLocation(World, DefaultRow->ParticleSystem, Start, ForwardRot, ParticleSize);
										}
									}

								}

							}
						}
					}
				}
			}
		}
	}
}

// Called every frame
void UFootstepsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

//Update From Manager
void UFootstepsComponent::SetDisableEverything(bool State)
{
	if (!bIgnoreManager)
	{
		bDisableEverything = State;
	}
}

void UFootstepsComponent::SetDisableSoundEffects(bool State)
{
	if (!bIgnoreManager)
	{
		bDisableSoundEffects = State;
	}
}

void UFootstepsComponent::SetDisableParticles(bool State)
{
	if (!bIgnoreManager)
	{
		bDisableParticles = State;
	}
}

void UFootstepsComponent::SetDisableFootprints(bool State)
{
	if (!bIgnoreManager)
	{
		bDisableFootprints = State;
	}
}

void UFootstepsComponent::SetDisableDirtyFootprints(bool State)
{
	if (!bIgnoreManager)
	{
		bDisableDirtyFootprints = State;
	}
}

void UFootstepsComponent::SetOverlayDirtyFootprints(bool State)
{
	if (!bIgnoreManager)
	{
		bOverlayDirtyFootprintsOverNormalOne = State;
	}
}

void UFootstepsComponent::SetSpawnParticleAtBoneLocation(bool State)
{
	if (!bIgnoreManager)
	{
		bSpawnParticleAtBoneLocation = State;
	}
}

void UFootstepsComponent::SetIgnoreMissingEffect(bool State)
{
	if (!bIgnoreManager)
	{
		bIgnoreMissingEffect = State;
	}
}

void UFootstepsComponent::SetOverrideRow(bool State)
{
	if (!bIgnoreManager)
	{
		bOverrideRow = State;
	}
}

void UFootstepsComponent::SetOverrideWith(FName RowName)
{
	if (!bIgnoreManager)
	{
		OverrideWith = RowName;
	}
}

void UFootstepsComponent::SetDirtyStepsCount(int32 StepsCount)
{
	if (!bIgnoreManager)
	{
		DirtyStepsCount = StepsCount;
	}
}

void UFootstepsComponent::SetDirtyRowsNames(TArray<FName> RowsNames)
{
	if (!bIgnoreManager)
	{
		DirtyRowsNames = RowsNames;
	}
}

void UFootstepsComponent::SetFootprintLifeTime(float LifeTime)
{
	if (!bIgnoreManager)
	{
		FootprintLifeTime = LifeTime;
	}
}

void UFootstepsComponent::SetFootprintFadeOutDelay(float FadeOutDelay)
{
	if (!bIgnoreManager)
	{
		FootprintFadeOutDelay = FadeOutDelay;
	}
}

void UFootstepsComponent::SetFootprintFadeOutDuration(float FadeOutDuration)
{
	if (!bIgnoreManager)
	{
		FootprintFadeOutDuration = FadeOutDuration;
	}
}

void UFootstepsComponent::ChangeIgnoreManagerState(bool State, TSubclassOf<AFootstepsManager> ManagerType)
{
	if (!State)
	{
		bIgnoreManager = false;
		ManagerClass = ManagerType;
		SetupManager();
	}
	else
	{
		bIgnoreManager = true;
	}
}
