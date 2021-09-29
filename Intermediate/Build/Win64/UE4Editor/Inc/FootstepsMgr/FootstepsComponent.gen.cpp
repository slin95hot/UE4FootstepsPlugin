// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootstepsMgr/Public/FootstepsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepsComponent() {}
// Cross Module References
	FOOTSTEPSMGR_API UScriptStruct* Z_Construct_UScriptStruct_FFootStepsData();
	UPackage* Z_Construct_UPackage__Script_FootstepsMgr();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	FOOTSTEPSMGR_API UClass* Z_Construct_UClass_UFootstepsComponent_NoRegister();
	FOOTSTEPSMGR_API UClass* Z_Construct_UClass_UFootstepsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FOOTSTEPSMGR_API UClass* Z_Construct_UClass_AFootstepsManager_NoRegister();
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EPhysicalSurface();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FFootStepsData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FFootStepsData cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FFootStepsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOOTSTEPSMGR_API uint32 Get_Z_Construct_UScriptStruct_FFootStepsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootStepsData, Z_Construct_UPackage__Script_FootstepsMgr(), TEXT("FootStepsData"), sizeof(FFootStepsData), Get_Z_Construct_UScriptStruct_FFootStepsData_Hash());
	}
	return Singleton;
}
template<> FOOTSTEPSMGR_API UScriptStruct* StaticStruct<FFootStepsData>()
{
	return FFootStepsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFootStepsData(FFootStepsData::StaticStruct, TEXT("/Script/FootstepsMgr"), TEXT("FootStepsData"), false, nullptr, nullptr);
static struct FScriptStruct_FootstepsMgr_StaticRegisterNativesFFootStepsData
{
	FScriptStruct_FootstepsMgr_StaticRegisterNativesFFootStepsData()
	{
		UScriptStruct::DeferCppStructOps<FFootStepsData>(FName(TEXT("FootStepsData")));
	}
} ScriptStruct_FootstepsMgr_StaticRegisterNativesFFootStepsData;
	struct Z_Construct_UScriptStruct_FFootStepsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootPrint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootPrint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadedDirtyFootPrint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FadedDirtyFootPrint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootStepsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n *\n *\n */" },
		{ "DisplayName", "Footsteps Data" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootStepsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootStepsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_SoundEffect_MetaData[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_SoundEffect = { "SoundEffect", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootStepsData, SoundEffect), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_SoundEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_SoundEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootStepsData, ParticleSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_ParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_FootPrint_MetaData[] = {
		{ "Category", "Footsteps Component" },
		{ "DisplayName", "Footprint" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_FootPrint = { "FootPrint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootStepsData, FootPrint), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_FootPrint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_FootPrint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_FadedDirtyFootPrint_MetaData[] = {
		{ "Category", "Footsteps Component" },
		{ "DisplayName", "Faded Dirty Footprint" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_FadedDirtyFootPrint = { "FadedDirtyFootPrint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootStepsData, FadedDirtyFootPrint), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_FadedDirtyFootPrint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_FadedDirtyFootPrint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootStepsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_SoundEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_ParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_FootPrint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootStepsData_Statics::NewProp_FadedDirtyFootPrint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootStepsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FootstepsMgr,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"FootStepsData",
		sizeof(FFootStepsData),
		alignof(FFootStepsData),
		Z_Construct_UScriptStruct_FFootStepsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootStepsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootStepsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootStepsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFootStepsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FootstepsMgr();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FootStepsData"), sizeof(FFootStepsData), Get_Z_Construct_UScriptStruct_FFootStepsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFootStepsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFootStepsData_Hash() { return 553931328U; }
	DEFINE_FUNCTION(UFootstepsComponent::execChangeIgnoreManagerState)
	{
		P_GET_UBOOL(Z_Param_State);
		P_GET_OBJECT(UClass,Z_Param_ManagerType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeIgnoreManagerState(Z_Param_State,Z_Param_ManagerType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetFootprintFadeOutDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFootprintFadeOutDuration(Z_Param_FadeOutDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetFootprintFadeOutDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFootprintFadeOutDelay(Z_Param_FadeOutDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetFootprintLifeTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFootprintLifeTime(Z_Param_LifeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetDirtyRowsNames)
	{
		P_GET_TARRAY(FName,Z_Param_RowsNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDirtyRowsNames(Z_Param_RowsNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetDirtyStepsCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDirtyStepsCount(Z_Param_StepsCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetOverrideWith)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverrideWith(Z_Param_RowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetOverrideRow)
	{
		P_GET_UBOOL(Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverrideRow(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetIgnoreMissingEffect)
	{
		P_GET_UBOOL(Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIgnoreMissingEffect(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetSpawnParticleAtBoneLocation)
	{
		P_GET_UBOOL(Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpawnParticleAtBoneLocation(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetOverlayDirtyFootprints)
	{
		P_GET_UBOOL(Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlayDirtyFootprints(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetDisableDirtyFootprints)
	{
		P_GET_UBOOL(Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableDirtyFootprints(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetDisableFootprints)
	{
		P_GET_UBOOL(Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableFootprints(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetDisableParticles)
	{
		P_GET_UBOOL(Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableParticles(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetDisableSoundEffects)
	{
		P_GET_UBOOL(Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableSoundEffects(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execSetDisableEverything)
	{
		P_GET_UBOOL(Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableEverything(Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execAddFootstepEffect2)
	{
		P_GET_STRUCT(FVector,Z_Param_TraceStartingLocation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TraceLength);
		P_GET_STRUCT(FVector,Z_Param_FootprintSize);
		P_GET_STRUCT(FVector,Z_Param_ParticleSize);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFootstepEffect2(Z_Param_TraceStartingLocation,Z_Param_TraceLength,Z_Param_FootprintSize,Z_Param_ParticleSize,Z_Param_VolumeMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFootstepsComponent::execAddFootstepEffect)
	{
		P_GET_STRUCT(FVector,Z_Param_FootprintSize);
		P_GET_STRUCT(FVector,Z_Param_ParticleSize);
		P_GET_OBJECT(USceneComponent,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TraceLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFootstepEffect(Z_Param_FootprintSize,Z_Param_ParticleSize,Z_Param_SkeletalMesh,Z_Param_BoneName,Z_Param_TraceLength,Z_Param_VolumeMultiplier);
		P_NATIVE_END;
	}
	void UFootstepsComponent::StaticRegisterNativesUFootstepsComponent()
	{
		UClass* Class = UFootstepsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFootstepEffect", &UFootstepsComponent::execAddFootstepEffect },
			{ "AddFootstepEffect2", &UFootstepsComponent::execAddFootstepEffect2 },
			{ "ChangeIgnoreManagerState", &UFootstepsComponent::execChangeIgnoreManagerState },
			{ "SetDirtyRowsNames", &UFootstepsComponent::execSetDirtyRowsNames },
			{ "SetDirtyStepsCount", &UFootstepsComponent::execSetDirtyStepsCount },
			{ "SetDisableDirtyFootprints", &UFootstepsComponent::execSetDisableDirtyFootprints },
			{ "SetDisableEverything", &UFootstepsComponent::execSetDisableEverything },
			{ "SetDisableFootprints", &UFootstepsComponent::execSetDisableFootprints },
			{ "SetDisableParticles", &UFootstepsComponent::execSetDisableParticles },
			{ "SetDisableSoundEffects", &UFootstepsComponent::execSetDisableSoundEffects },
			{ "SetFootprintFadeOutDelay", &UFootstepsComponent::execSetFootprintFadeOutDelay },
			{ "SetFootprintFadeOutDuration", &UFootstepsComponent::execSetFootprintFadeOutDuration },
			{ "SetFootprintLifeTime", &UFootstepsComponent::execSetFootprintLifeTime },
			{ "SetIgnoreMissingEffect", &UFootstepsComponent::execSetIgnoreMissingEffect },
			{ "SetOverlayDirtyFootprints", &UFootstepsComponent::execSetOverlayDirtyFootprints },
			{ "SetOverrideRow", &UFootstepsComponent::execSetOverrideRow },
			{ "SetOverrideWith", &UFootstepsComponent::execSetOverrideWith },
			{ "SetSpawnParticleAtBoneLocation", &UFootstepsComponent::execSetSpawnParticleAtBoneLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics
	{
		struct FootstepsComponent_eventAddFootstepEffect_Parms
		{
			FVector FootprintSize;
			FVector ParticleSize;
			USceneComponent* SkeletalMesh;
			FName BoneName;
			float TraceLength;
			float VolumeMultiplier;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootprintSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_FootprintSize = { "FootprintSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventAddFootstepEffect_Parms, FootprintSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_ParticleSize = { "ParticleSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventAddFootstepEffect_Parms, ParticleSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventAddFootstepEffect_Parms, SkeletalMesh), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventAddFootstepEffect_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventAddFootstepEffect_Parms, TraceLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventAddFootstepEffect_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_FootprintSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_ParticleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_TraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::NewProp_VolumeMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "AddFootstepEffect", nullptr, nullptr, sizeof(FootstepsComponent_eventAddFootstepEffect_Parms), Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics
	{
		struct FootstepsComponent_eventAddFootstepEffect2_Parms
		{
			FVector TraceStartingLocation;
			float TraceLength;
			FVector FootprintSize;
			FVector ParticleSize;
			float VolumeMultiplier;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TraceStartingLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FootprintSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParticleSize;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::NewProp_TraceStartingLocation = { "TraceStartingLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventAddFootstepEffect2_Parms, TraceStartingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventAddFootstepEffect2_Parms, TraceLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::NewProp_FootprintSize = { "FootprintSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventAddFootstepEffect2_Parms, FootprintSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::NewProp_ParticleSize = { "ParticleSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventAddFootstepEffect2_Parms, ParticleSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventAddFootstepEffect2_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::NewProp_TraceStartingLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::NewProp_TraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::NewProp_FootprintSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::NewProp_ParticleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::NewProp_VolumeMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "DisplayName", "Add Footsteps Effect Without Skeletal Mesh" },
		{ "KeyWords", "Footsteps" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
		{ "ToolTip", "Add Footsteps Effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "AddFootstepEffect2", nullptr, nullptr, sizeof(FootstepsComponent_eventAddFootstepEffect2_Parms), Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics
	{
		struct FootstepsComponent_eventChangeIgnoreManagerState_Parms
		{
			bool State;
			TSubclassOf<AFootstepsManager>  ManagerType;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ManagerType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::NewProp_State_SetBit(void* Obj)
	{
		((FootstepsComponent_eventChangeIgnoreManagerState_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsComponent_eventChangeIgnoreManagerState_Parms), &Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::NewProp_ManagerType = { "ManagerType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventChangeIgnoreManagerState_Parms, ManagerType), Z_Construct_UClass_AFootstepsManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::NewProp_ManagerType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "ChangeIgnoreManagerState", nullptr, nullptr, sizeof(FootstepsComponent_eventChangeIgnoreManagerState_Parms), Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics
	{
		struct FootstepsComponent_eventSetDirtyRowsNames_Parms
		{
			TArray<FName> RowsNames;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowsNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RowsNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics::NewProp_RowsNames_Inner = { "RowsNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics::NewProp_RowsNames = { "RowsNames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventSetDirtyRowsNames_Parms, RowsNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics::NewProp_RowsNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics::NewProp_RowsNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetDirtyRowsNames", nullptr, nullptr, sizeof(FootstepsComponent_eventSetDirtyRowsNames_Parms), Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount_Statics
	{
		struct FootstepsComponent_eventSetDirtyStepsCount_Parms
		{
			int32 StepsCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StepsCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount_Statics::NewProp_StepsCount = { "StepsCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventSetDirtyStepsCount_Parms, StepsCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount_Statics::NewProp_StepsCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetDirtyStepsCount", nullptr, nullptr, sizeof(FootstepsComponent_eventSetDirtyStepsCount_Parms), Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics
	{
		struct FootstepsComponent_eventSetDisableDirtyFootprints_Parms
		{
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics::NewProp_State_SetBit(void* Obj)
	{
		((FootstepsComponent_eventSetDisableDirtyFootprints_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsComponent_eventSetDisableDirtyFootprints_Parms), &Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetDisableDirtyFootprints", nullptr, nullptr, sizeof(FootstepsComponent_eventSetDisableDirtyFootprints_Parms), Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics
	{
		struct FootstepsComponent_eventSetDisableEverything_Parms
		{
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics::NewProp_State_SetBit(void* Obj)
	{
		((FootstepsComponent_eventSetDisableEverything_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsComponent_eventSetDisableEverything_Parms), &Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetDisableEverything", nullptr, nullptr, sizeof(FootstepsComponent_eventSetDisableEverything_Parms), Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics
	{
		struct FootstepsComponent_eventSetDisableFootprints_Parms
		{
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics::NewProp_State_SetBit(void* Obj)
	{
		((FootstepsComponent_eventSetDisableFootprints_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsComponent_eventSetDisableFootprints_Parms), &Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetDisableFootprints", nullptr, nullptr, sizeof(FootstepsComponent_eventSetDisableFootprints_Parms), Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics
	{
		struct FootstepsComponent_eventSetDisableParticles_Parms
		{
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics::NewProp_State_SetBit(void* Obj)
	{
		((FootstepsComponent_eventSetDisableParticles_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsComponent_eventSetDisableParticles_Parms), &Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetDisableParticles", nullptr, nullptr, sizeof(FootstepsComponent_eventSetDisableParticles_Parms), Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics
	{
		struct FootstepsComponent_eventSetDisableSoundEffects_Parms
		{
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics::NewProp_State_SetBit(void* Obj)
	{
		((FootstepsComponent_eventSetDisableSoundEffects_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsComponent_eventSetDisableSoundEffects_Parms), &Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetDisableSoundEffects", nullptr, nullptr, sizeof(FootstepsComponent_eventSetDisableSoundEffects_Parms), Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay_Statics
	{
		struct FootstepsComponent_eventSetFootprintFadeOutDelay_Parms
		{
			float FadeOutDelay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay_Statics::NewProp_FadeOutDelay = { "FadeOutDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventSetFootprintFadeOutDelay_Parms, FadeOutDelay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay_Statics::NewProp_FadeOutDelay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetFootprintFadeOutDelay", nullptr, nullptr, sizeof(FootstepsComponent_eventSetFootprintFadeOutDelay_Parms), Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration_Statics
	{
		struct FootstepsComponent_eventSetFootprintFadeOutDuration_Parms
		{
			float FadeOutDuration;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventSetFootprintFadeOutDuration_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration_Statics::NewProp_FadeOutDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetFootprintFadeOutDuration", nullptr, nullptr, sizeof(FootstepsComponent_eventSetFootprintFadeOutDuration_Parms), Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime_Statics
	{
		struct FootstepsComponent_eventSetFootprintLifeTime_Parms
		{
			float LifeTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventSetFootprintLifeTime_Parms, LifeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime_Statics::NewProp_LifeTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetFootprintLifeTime", nullptr, nullptr, sizeof(FootstepsComponent_eventSetFootprintLifeTime_Parms), Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics
	{
		struct FootstepsComponent_eventSetIgnoreMissingEffect_Parms
		{
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics::NewProp_State_SetBit(void* Obj)
	{
		((FootstepsComponent_eventSetIgnoreMissingEffect_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsComponent_eventSetIgnoreMissingEffect_Parms), &Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetIgnoreMissingEffect", nullptr, nullptr, sizeof(FootstepsComponent_eventSetIgnoreMissingEffect_Parms), Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics
	{
		struct FootstepsComponent_eventSetOverlayDirtyFootprints_Parms
		{
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics::NewProp_State_SetBit(void* Obj)
	{
		((FootstepsComponent_eventSetOverlayDirtyFootprints_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsComponent_eventSetOverlayDirtyFootprints_Parms), &Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetOverlayDirtyFootprints", nullptr, nullptr, sizeof(FootstepsComponent_eventSetOverlayDirtyFootprints_Parms), Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics
	{
		struct FootstepsComponent_eventSetOverrideRow_Parms
		{
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics::NewProp_State_SetBit(void* Obj)
	{
		((FootstepsComponent_eventSetOverrideRow_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsComponent_eventSetOverrideRow_Parms), &Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetOverrideRow", nullptr, nullptr, sizeof(FootstepsComponent_eventSetOverrideRow_Parms), Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith_Statics
	{
		struct FootstepsComponent_eventSetOverrideWith_Parms
		{
			FName RowName;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsComponent_eventSetOverrideWith_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith_Statics::NewProp_RowName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetOverrideWith", nullptr, nullptr, sizeof(FootstepsComponent_eventSetOverrideWith_Parms), Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics
	{
		struct FootstepsComponent_eventSetSpawnParticleAtBoneLocation_Parms
		{
			bool State;
		};
		static void NewProp_State_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics::NewProp_State_SetBit(void* Obj)
	{
		((FootstepsComponent_eventSetSpawnParticleAtBoneLocation_Parms*)Obj)->State = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsComponent_eventSetSpawnParticleAtBoneLocation_Parms), &Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics::NewProp_State_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics::NewProp_State,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootstepsComponent, nullptr, "SetSpawnParticleAtBoneLocation", nullptr, nullptr, sizeof(FootstepsComponent_eventSetSpawnParticleAtBoneLocation_Parms), Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFootstepsComponent_NoRegister()
	{
		return UFootstepsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFootstepsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDirtySteps_MetaData[];
#endif
		static void NewProp_bDirtySteps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDirtySteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Manager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreManager_MetaData[];
#endif
		static void NewProp_bIgnoreManager_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableEverything_MetaData[];
#endif
		static void NewProp_bDisableEverything_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableEverything;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableSoundEffects_MetaData[];
#endif
		static void NewProp_bDisableSoundEffects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableSoundEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableParticles_MetaData[];
#endif
		static void NewProp_bDisableParticles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableFootprints_MetaData[];
#endif
		static void NewProp_bDisableFootprints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableFootprints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableDirtyFootprints_MetaData[];
#endif
		static void NewProp_bDisableDirtyFootprints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableDirtyFootprints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootprintLifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootprintLifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootprintFadeOutDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootprintFadeOutDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootprintFadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootprintFadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverlayDirtyFootprintsOverNormalOne_MetaData[];
#endif
		static void NewProp_bOverlayDirtyFootprintsOverNormalOne_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverlayDirtyFootprintsOverNormalOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtyStepsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DirtyStepsCount;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DirtyRowsNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirtyRowsNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DirtyRowsNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnParticleAtBoneLocation_MetaData[];
#endif
		static void NewProp_bSpawnParticleAtBoneLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnParticleAtBoneLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideRow_MetaData[];
#endif
		static void NewProp_bOverrideRow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideRow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideWith_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OverrideWith;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreMissingEffect_MetaData[];
#endif
		static void NewProp_bIgnoreMissingEffect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreMissingEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootstepsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FootstepsMgr,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFootstepsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect, "AddFootstepEffect" }, // 3969786895
		{ &Z_Construct_UFunction_UFootstepsComponent_AddFootstepEffect2, "AddFootstepEffect2" }, // 3166624242
		{ &Z_Construct_UFunction_UFootstepsComponent_ChangeIgnoreManagerState, "ChangeIgnoreManagerState" }, // 2702438308
		{ &Z_Construct_UFunction_UFootstepsComponent_SetDirtyRowsNames, "SetDirtyRowsNames" }, // 1436612212
		{ &Z_Construct_UFunction_UFootstepsComponent_SetDirtyStepsCount, "SetDirtyStepsCount" }, // 3758243577
		{ &Z_Construct_UFunction_UFootstepsComponent_SetDisableDirtyFootprints, "SetDisableDirtyFootprints" }, // 3932874876
		{ &Z_Construct_UFunction_UFootstepsComponent_SetDisableEverything, "SetDisableEverything" }, // 3703432836
		{ &Z_Construct_UFunction_UFootstepsComponent_SetDisableFootprints, "SetDisableFootprints" }, // 196715217
		{ &Z_Construct_UFunction_UFootstepsComponent_SetDisableParticles, "SetDisableParticles" }, // 1835342346
		{ &Z_Construct_UFunction_UFootstepsComponent_SetDisableSoundEffects, "SetDisableSoundEffects" }, // 2224633649
		{ &Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDelay, "SetFootprintFadeOutDelay" }, // 3345651443
		{ &Z_Construct_UFunction_UFootstepsComponent_SetFootprintFadeOutDuration, "SetFootprintFadeOutDuration" }, // 224414707
		{ &Z_Construct_UFunction_UFootstepsComponent_SetFootprintLifeTime, "SetFootprintLifeTime" }, // 1337729075
		{ &Z_Construct_UFunction_UFootstepsComponent_SetIgnoreMissingEffect, "SetIgnoreMissingEffect" }, // 251422623
		{ &Z_Construct_UFunction_UFootstepsComponent_SetOverlayDirtyFootprints, "SetOverlayDirtyFootprints" }, // 2811585000
		{ &Z_Construct_UFunction_UFootstepsComponent_SetOverrideRow, "SetOverrideRow" }, // 1570014989
		{ &Z_Construct_UFunction_UFootstepsComponent_SetOverrideWith, "SetOverrideWith" }, // 2706585554
		{ &Z_Construct_UFunction_UFootstepsComponent_SetSpawnParticleAtBoneLocation, "SetSpawnParticleAtBoneLocation" }, // 2758691953
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Footsteps" },
		{ "Comment", "/*\n *\n *\n */" },
		{ "IncludePath", "FootstepsComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDirtySteps_MetaData[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDirtySteps_SetBit(void* Obj)
	{
		((UFootstepsComponent*)Obj)->bDirtySteps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDirtySteps = { "bDirtySteps", nullptr, (EPropertyFlags)0x0020080001000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstepsComponent), &Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDirtySteps_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDirtySteps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDirtySteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_SurfaceType_MetaData[] = {
		{ "Category", "Footsteps Component" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_SurfaceType = { "SurfaceType", nullptr, (EPropertyFlags)0x0020080001000014, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepsComponent, SurfaceType), Z_Construct_UEnum_PhysicsCore_EPhysicalSurface, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_SurfaceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_SurfaceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DataTable_MetaData[] = {
		{ "Category", "Footsteps Component" },
		{ "Comment", "/*\n\x09 *\n\x09 *\n\x09 *\n\x09 *\n\x09 */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepsComponent, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_ManagerClass_MetaData[] = {
		{ "Category", "Footsteps Component" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "!bIgnoreManager" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_ManagerClass = { "ManagerClass", nullptr, (EPropertyFlags)0x0014000001010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepsComponent, ManagerClass), Z_Construct_UClass_AFootstepsManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_ManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_ManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_Manager_MetaData[] = {
		{ "Category", "Footsteps Component" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0010000001000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepsComponent, Manager), Z_Construct_UClass_AFootstepsManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_Manager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_Manager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreManager_MetaData[] = {
		{ "Category", "Footsteps Component" },
		{ "DisplayPriority", "4" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreManager_SetBit(void* Obj)
	{
		((UFootstepsComponent*)Obj)->bIgnoreManager = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreManager = { "bIgnoreManager", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstepsComponent), &Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreManager_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableEverything_MetaData[] = {
		{ "Category", "Footsteps Component|Footsteps State" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableEverything_SetBit(void* Obj)
	{
		((UFootstepsComponent*)Obj)->bDisableEverything = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableEverything = { "bDisableEverything", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstepsComponent), &Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableEverything_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableEverything_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableEverything_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableSoundEffects_MetaData[] = {
		{ "Category", "Footsteps Component|Footsteps State" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableSoundEffects_SetBit(void* Obj)
	{
		((UFootstepsComponent*)Obj)->bDisableSoundEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableSoundEffects = { "bDisableSoundEffects", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstepsComponent), &Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableSoundEffects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableSoundEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableSoundEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableParticles_MetaData[] = {
		{ "Category", "Footsteps Component|Footsteps State" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableParticles_SetBit(void* Obj)
	{
		((UFootstepsComponent*)Obj)->bDisableParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableParticles = { "bDisableParticles", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstepsComponent), &Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableParticles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableFootprints_MetaData[] = {
		{ "Category", "Footsteps Component|Footsteps State" },
		{ "DisplayPriority", "4" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableFootprints_SetBit(void* Obj)
	{
		((UFootstepsComponent*)Obj)->bDisableFootprints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableFootprints = { "bDisableFootprints", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstepsComponent), &Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableFootprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableFootprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableFootprints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableDirtyFootprints_MetaData[] = {
		{ "Category", "Footsteps Component|Footsteps State" },
		{ "DisplayPriority", "5" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableDirtyFootprints_SetBit(void* Obj)
	{
		((UFootstepsComponent*)Obj)->bDisableDirtyFootprints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableDirtyFootprints = { "bDisableDirtyFootprints", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstepsComponent), &Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableDirtyFootprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableDirtyFootprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableDirtyFootprints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintLifeTime_MetaData[] = {
		{ "Category", "Footsteps Component|Fade Out" },
		{ "DisplayPriority", "1" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintLifeTime = { "FootprintLifeTime", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepsComponent, FootprintLifeTime), METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintLifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintFadeOutDelay_MetaData[] = {
		{ "Category", "Footsteps Component|Fade Out" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintFadeOutDelay = { "FootprintFadeOutDelay", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepsComponent, FootprintFadeOutDelay), METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintFadeOutDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintFadeOutDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintFadeOutDuration_MetaData[] = {
		{ "Category", "Footsteps Component|Fade Out" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintFadeOutDuration = { "FootprintFadeOutDuration", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepsComponent, FootprintFadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintFadeOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintFadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne_MetaData[] = {
		{ "Category", "Footsteps Component|Dirty Footprints" },
		{ "DisplayName", "Overlay Dirty Footprints Over Normal Ones" },
		{ "DisplayPriority", "1" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
		{ "ToolTip", "Overlay Dirty Footprints Over Normal Ones" },
	};
#endif
	void Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne_SetBit(void* Obj)
	{
		((UFootstepsComponent*)Obj)->bOverlayDirtyFootprintsOverNormalOne = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne = { "bOverlayDirtyFootprintsOverNormalOne", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstepsComponent), &Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DirtyStepsCount_MetaData[] = {
		{ "Category", "Footsteps Component|Dirty Footprints" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DirtyStepsCount = { "DirtyStepsCount", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepsComponent, DirtyStepsCount), METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DirtyStepsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DirtyStepsCount_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DirtyRowsNames_Inner = { "DirtyRowsNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DirtyRowsNames_MetaData[] = {
		{ "Category", "Footsteps Component|Dirty Footprints" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DirtyRowsNames = { "DirtyRowsNames", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepsComponent, DirtyRowsNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DirtyRowsNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DirtyRowsNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bSpawnParticleAtBoneLocation_MetaData[] = {
		{ "Category", "Footsteps Component|Others" },
		{ "DisplayPriority", "1" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bSpawnParticleAtBoneLocation_SetBit(void* Obj)
	{
		((UFootstepsComponent*)Obj)->bSpawnParticleAtBoneLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bSpawnParticleAtBoneLocation = { "bSpawnParticleAtBoneLocation", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstepsComponent), &Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bSpawnParticleAtBoneLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bSpawnParticleAtBoneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bSpawnParticleAtBoneLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverrideRow_MetaData[] = {
		{ "Category", "Footsteps Component|Others" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	void Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverrideRow_SetBit(void* Obj)
	{
		((UFootstepsComponent*)Obj)->bOverrideRow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverrideRow = { "bOverrideRow", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstepsComponent), &Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverrideRow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverrideRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverrideRow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_OverrideWith_MetaData[] = {
		{ "Category", "Footsteps Component|Others" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "bOverrideRow" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_OverrideWith = { "OverrideWith", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFootstepsComponent, OverrideWith), METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_OverrideWith_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_OverrideWith_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreMissingEffect_MetaData[] = {
		{ "Category", "Footsteps Component|Others" },
		{ "DisplayPriority", "4" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsComponent.h" },
		{ "ShortTooltip", "do not use Default Effect if they're missing from current row." },
	};
#endif
	void Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreMissingEffect_SetBit(void* Obj)
	{
		((UFootstepsComponent*)Obj)->bIgnoreMissingEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreMissingEffect = { "bIgnoreMissingEffect", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFootstepsComponent), &Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreMissingEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreMissingEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreMissingEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFootstepsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDirtySteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_SurfaceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_ManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_Manager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableEverything,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableSoundEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableFootprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bDisableDirtyFootprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintFadeOutDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_FootprintFadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DirtyStepsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DirtyRowsNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_DirtyRowsNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bSpawnParticleAtBoneLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bOverrideRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_OverrideWith,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFootstepsComponent_Statics::NewProp_bIgnoreMissingEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootstepsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFootstepsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootstepsComponent_Statics::ClassParams = {
		&UFootstepsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFootstepsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFootstepsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFootstepsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootstepsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootstepsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootstepsComponent, 872432111);
	template<> FOOTSTEPSMGR_API UClass* StaticClass<UFootstepsComponent>()
	{
		return UFootstepsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootstepsComponent(Z_Construct_UClass_UFootstepsComponent, &UFootstepsComponent::StaticClass, TEXT("/Script/FootstepsMgr"), TEXT("UFootstepsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootstepsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
