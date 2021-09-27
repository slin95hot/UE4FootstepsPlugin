// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootstepsMgr/Public/FootstepsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootstepsManager() {}
// Cross Module References
	FOOTSTEPSMGR_API UClass* Z_Construct_UClass_AFootstepsManager_NoRegister();
	FOOTSTEPSMGR_API UClass* Z_Construct_UClass_AFootstepsManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FootstepsMgr();
// End Cross Module References
	DEFINE_FUNCTION(AFootstepsManager::execUpdateAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetFootprintFadeOutDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDuration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFootprintFadeOutDuration(Z_Param_FadeOutDuration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetFootprintFadeOutDelay)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeOutDelay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFootprintFadeOutDelay(Z_Param_FadeOutDelay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetFootprintLifeTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_LifeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFootprintLifeTime(Z_Param_LifeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetDirtyRowsNames)
	{
		P_GET_TARRAY(FName,Z_Param_RowsNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDirtyRowsNames(Z_Param_RowsNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetDirtyStepsCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StepsCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDirtyStepsCount(Z_Param_StepsCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetOverrideWith)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverrideWith(Z_Param_RowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetOverrideRow)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverrideRow(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetIgnoreMissingEffect)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIgnoreMissingEffect(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetSpawnParticleAtBoneLocation)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpawnParticleAtBoneLocation(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetOverlayDirtyFootprints)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlayDirtyFootprints(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetDisableDirtyFootprints)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableDirtyFootprints(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetDisableFootprints)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableFootprints(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetDisableParticles)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableParticles(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetDisableSoundEffects)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableSoundEffects(Z_Param_state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFootstepsManager::execSetDisableEverything)
	{
		P_GET_UBOOL(Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableEverything(Z_Param_state);
		P_NATIVE_END;
	}
	void AFootstepsManager::StaticRegisterNativesAFootstepsManager()
	{
		UClass* Class = AFootstepsManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDirtyRowsNames", &AFootstepsManager::execSetDirtyRowsNames },
			{ "SetDirtyStepsCount", &AFootstepsManager::execSetDirtyStepsCount },
			{ "SetDisableDirtyFootprints", &AFootstepsManager::execSetDisableDirtyFootprints },
			{ "SetDisableEverything", &AFootstepsManager::execSetDisableEverything },
			{ "SetDisableFootprints", &AFootstepsManager::execSetDisableFootprints },
			{ "SetDisableParticles", &AFootstepsManager::execSetDisableParticles },
			{ "SetDisableSoundEffects", &AFootstepsManager::execSetDisableSoundEffects },
			{ "SetFootprintFadeOutDelay", &AFootstepsManager::execSetFootprintFadeOutDelay },
			{ "SetFootprintFadeOutDuration", &AFootstepsManager::execSetFootprintFadeOutDuration },
			{ "SetFootprintLifeTime", &AFootstepsManager::execSetFootprintLifeTime },
			{ "SetIgnoreMissingEffect", &AFootstepsManager::execSetIgnoreMissingEffect },
			{ "SetOverlayDirtyFootprints", &AFootstepsManager::execSetOverlayDirtyFootprints },
			{ "SetOverrideRow", &AFootstepsManager::execSetOverrideRow },
			{ "SetOverrideWith", &AFootstepsManager::execSetOverrideWith },
			{ "SetSpawnParticleAtBoneLocation", &AFootstepsManager::execSetSpawnParticleAtBoneLocation },
			{ "UpdateAll", &AFootstepsManager::execUpdateAll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics
	{
		struct FootstepsManager_eventSetDirtyRowsNames_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics::NewProp_RowsNames_Inner = { "RowsNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics::NewProp_RowsNames = { "RowsNames", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsManager_eventSetDirtyRowsNames_Parms, RowsNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics::NewProp_RowsNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics::NewProp_RowsNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetDirtyRowsNames", nullptr, nullptr, sizeof(FootstepsManager_eventSetDirtyRowsNames_Parms), Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount_Statics
	{
		struct FootstepsManager_eventSetDirtyStepsCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount_Statics::NewProp_StepsCount = { "StepsCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsManager_eventSetDirtyStepsCount_Parms, StepsCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount_Statics::NewProp_StepsCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetDirtyStepsCount", nullptr, nullptr, sizeof(FootstepsManager_eventSetDirtyStepsCount_Parms), Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics
	{
		struct FootstepsManager_eventSetDisableDirtyFootprints_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics::NewProp_state_SetBit(void* Obj)
	{
		((FootstepsManager_eventSetDisableDirtyFootprints_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsManager_eventSetDisableDirtyFootprints_Parms), &Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetDisableDirtyFootprints", nullptr, nullptr, sizeof(FootstepsManager_eventSetDisableDirtyFootprints_Parms), Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics
	{
		struct FootstepsManager_eventSetDisableEverything_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics::NewProp_state_SetBit(void* Obj)
	{
		((FootstepsManager_eventSetDisableEverything_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsManager_eventSetDisableEverything_Parms), &Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetDisableEverything", nullptr, nullptr, sizeof(FootstepsManager_eventSetDisableEverything_Parms), Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetDisableEverything()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetDisableEverything_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics
	{
		struct FootstepsManager_eventSetDisableFootprints_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics::NewProp_state_SetBit(void* Obj)
	{
		((FootstepsManager_eventSetDisableFootprints_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsManager_eventSetDisableFootprints_Parms), &Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetDisableFootprints", nullptr, nullptr, sizeof(FootstepsManager_eventSetDisableFootprints_Parms), Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics
	{
		struct FootstepsManager_eventSetDisableParticles_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics::NewProp_state_SetBit(void* Obj)
	{
		((FootstepsManager_eventSetDisableParticles_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsManager_eventSetDisableParticles_Parms), &Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetDisableParticles", nullptr, nullptr, sizeof(FootstepsManager_eventSetDisableParticles_Parms), Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetDisableParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetDisableParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics
	{
		struct FootstepsManager_eventSetDisableSoundEffects_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics::NewProp_state_SetBit(void* Obj)
	{
		((FootstepsManager_eventSetDisableSoundEffects_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsManager_eventSetDisableSoundEffects_Parms), &Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetDisableSoundEffects", nullptr, nullptr, sizeof(FootstepsManager_eventSetDisableSoundEffects_Parms), Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay_Statics
	{
		struct FootstepsManager_eventSetFootprintFadeOutDelay_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay_Statics::NewProp_FadeOutDelay = { "FadeOutDelay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsManager_eventSetFootprintFadeOutDelay_Parms, FadeOutDelay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay_Statics::NewProp_FadeOutDelay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetFootprintFadeOutDelay", nullptr, nullptr, sizeof(FootstepsManager_eventSetFootprintFadeOutDelay_Parms), Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration_Statics
	{
		struct FootstepsManager_eventSetFootprintFadeOutDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsManager_eventSetFootprintFadeOutDuration_Parms, FadeOutDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration_Statics::NewProp_FadeOutDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetFootprintFadeOutDuration", nullptr, nullptr, sizeof(FootstepsManager_eventSetFootprintFadeOutDuration_Parms), Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime_Statics
	{
		struct FootstepsManager_eventSetFootprintLifeTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsManager_eventSetFootprintLifeTime_Parms, LifeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime_Statics::NewProp_LifeTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetFootprintLifeTime", nullptr, nullptr, sizeof(FootstepsManager_eventSetFootprintLifeTime_Parms), Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics
	{
		struct FootstepsManager_eventSetIgnoreMissingEffect_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics::NewProp_state_SetBit(void* Obj)
	{
		((FootstepsManager_eventSetIgnoreMissingEffect_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsManager_eventSetIgnoreMissingEffect_Parms), &Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetIgnoreMissingEffect", nullptr, nullptr, sizeof(FootstepsManager_eventSetIgnoreMissingEffect_Parms), Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics
	{
		struct FootstepsManager_eventSetOverlayDirtyFootprints_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics::NewProp_state_SetBit(void* Obj)
	{
		((FootstepsManager_eventSetOverlayDirtyFootprints_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsManager_eventSetOverlayDirtyFootprints_Parms), &Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetOverlayDirtyFootprints", nullptr, nullptr, sizeof(FootstepsManager_eventSetOverlayDirtyFootprints_Parms), Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics
	{
		struct FootstepsManager_eventSetOverrideRow_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics::NewProp_state_SetBit(void* Obj)
	{
		((FootstepsManager_eventSetOverrideRow_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsManager_eventSetOverrideRow_Parms), &Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetOverrideRow", nullptr, nullptr, sizeof(FootstepsManager_eventSetOverrideRow_Parms), Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetOverrideRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetOverrideRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetOverrideWith_Statics
	{
		struct FootstepsManager_eventSetOverrideWith_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AFootstepsManager_SetOverrideWith_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootstepsManager_eventSetOverrideWith_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetOverrideWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetOverrideWith_Statics::NewProp_RowName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetOverrideWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetOverrideWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetOverrideWith", nullptr, nullptr, sizeof(FootstepsManager_eventSetOverrideWith_Parms), Z_Construct_UFunction_AFootstepsManager_SetOverrideWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetOverrideWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetOverrideWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetOverrideWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetOverrideWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetOverrideWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics
	{
		struct FootstepsManager_eventSetSpawnParticleAtBoneLocation_Parms
		{
			bool state;
		};
		static void NewProp_state_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics::NewProp_state_SetBit(void* Obj)
	{
		((FootstepsManager_eventSetSpawnParticleAtBoneLocation_Parms*)Obj)->state = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FootstepsManager_eventSetSpawnParticleAtBoneLocation_Parms), &Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics::NewProp_state_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics::NewProp_state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "SetSpawnParticleAtBoneLocation", nullptr, nullptr, sizeof(FootstepsManager_eventSetSpawnParticleAtBoneLocation_Parms), Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFootstepsManager_UpdateAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFootstepsManager_UpdateAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Footsteps Manager" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFootstepsManager_UpdateAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFootstepsManager, nullptr, "UpdateAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFootstepsManager_UpdateAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFootstepsManager_UpdateAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFootstepsManager_UpdateAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFootstepsManager_UpdateAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFootstepsManager_NoRegister()
	{
		return AFootstepsManager::StaticClass();
	}
	struct Z_Construct_UClass_AFootstepsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
	UObject* (*const Z_Construct_UClass_AFootstepsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FootstepsMgr,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFootstepsManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFootstepsManager_SetDirtyRowsNames, "SetDirtyRowsNames" }, // 3974338800
		{ &Z_Construct_UFunction_AFootstepsManager_SetDirtyStepsCount, "SetDirtyStepsCount" }, // 1284916173
		{ &Z_Construct_UFunction_AFootstepsManager_SetDisableDirtyFootprints, "SetDisableDirtyFootprints" }, // 3933739184
		{ &Z_Construct_UFunction_AFootstepsManager_SetDisableEverything, "SetDisableEverything" }, // 4130156800
		{ &Z_Construct_UFunction_AFootstepsManager_SetDisableFootprints, "SetDisableFootprints" }, // 1083305489
		{ &Z_Construct_UFunction_AFootstepsManager_SetDisableParticles, "SetDisableParticles" }, // 807761885
		{ &Z_Construct_UFunction_AFootstepsManager_SetDisableSoundEffects, "SetDisableSoundEffects" }, // 1333393391
		{ &Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDelay, "SetFootprintFadeOutDelay" }, // 3558036866
		{ &Z_Construct_UFunction_AFootstepsManager_SetFootprintFadeOutDuration, "SetFootprintFadeOutDuration" }, // 2774655446
		{ &Z_Construct_UFunction_AFootstepsManager_SetFootprintLifeTime, "SetFootprintLifeTime" }, // 3243861242
		{ &Z_Construct_UFunction_AFootstepsManager_SetIgnoreMissingEffect, "SetIgnoreMissingEffect" }, // 745706767
		{ &Z_Construct_UFunction_AFootstepsManager_SetOverlayDirtyFootprints, "SetOverlayDirtyFootprints" }, // 1142282887
		{ &Z_Construct_UFunction_AFootstepsManager_SetOverrideRow, "SetOverrideRow" }, // 3662149490
		{ &Z_Construct_UFunction_AFootstepsManager_SetOverrideWith, "SetOverrideWith" }, // 2101243747
		{ &Z_Construct_UFunction_AFootstepsManager_SetSpawnParticleAtBoneLocation, "SetSpawnParticleAtBoneLocation" }, // 4010833007
		{ &Z_Construct_UFunction_AFootstepsManager_UpdateAll, "UpdateAll" }, // 3625559257
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FootstepsManager.h" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableEverything_MetaData[] = {
		{ "Category", "Footsteps Component|Footsteps State" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	void Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableEverything_SetBit(void* Obj)
	{
		((AFootstepsManager*)Obj)->bDisableEverything = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableEverything = { "bDisableEverything", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFootstepsManager), &Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableEverything_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableEverything_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableEverything_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableSoundEffects_MetaData[] = {
		{ "Category", "Footsteps Component|Footsteps State" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	void Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableSoundEffects_SetBit(void* Obj)
	{
		((AFootstepsManager*)Obj)->bDisableSoundEffects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableSoundEffects = { "bDisableSoundEffects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFootstepsManager), &Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableSoundEffects_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableSoundEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableSoundEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableParticles_MetaData[] = {
		{ "Category", "Footsteps Component|Footsteps State" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	void Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableParticles_SetBit(void* Obj)
	{
		((AFootstepsManager*)Obj)->bDisableParticles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableParticles = { "bDisableParticles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFootstepsManager), &Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableParticles_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableFootprints_MetaData[] = {
		{ "Category", "Footsteps Component|Footsteps State" },
		{ "DisplayPriority", "4" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	void Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableFootprints_SetBit(void* Obj)
	{
		((AFootstepsManager*)Obj)->bDisableFootprints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableFootprints = { "bDisableFootprints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFootstepsManager), &Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableFootprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableFootprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableFootprints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableDirtyFootprints_MetaData[] = {
		{ "Category", "Footsteps Component|Footsteps State" },
		{ "DisplayPriority", "5" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	void Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableDirtyFootprints_SetBit(void* Obj)
	{
		((AFootstepsManager*)Obj)->bDisableDirtyFootprints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableDirtyFootprints = { "bDisableDirtyFootprints", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFootstepsManager), &Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableDirtyFootprints_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableDirtyFootprints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableDirtyFootprints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintLifeTime_MetaData[] = {
		{ "Category", "Footsteps Component|Fade Out" },
		{ "DisplayPriority", "1" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintLifeTime = { "FootprintLifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootstepsManager, FootprintLifeTime), METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintLifeTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintLifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintFadeOutDelay_MetaData[] = {
		{ "Category", "Footsteps Component|Fade Out" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintFadeOutDelay = { "FootprintFadeOutDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootstepsManager, FootprintFadeOutDelay), METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintFadeOutDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintFadeOutDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintFadeOutDuration_MetaData[] = {
		{ "Category", "Footsteps Component|Fade Out" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintFadeOutDuration = { "FootprintFadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootstepsManager, FootprintFadeOutDuration), METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintFadeOutDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintFadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne_MetaData[] = {
		{ "Category", "Footsteps Component|Dirty Footprints" },
		{ "DisplayPriority", "1" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	void Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne_SetBit(void* Obj)
	{
		((AFootstepsManager*)Obj)->bOverlayDirtyFootprintsOverNormalOne = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne = { "bOverlayDirtyFootprintsOverNormalOne", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFootstepsManager), &Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_DirtyStepsCount_MetaData[] = {
		{ "Category", "Footsteps Component|Dirty Footprints" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_DirtyStepsCount = { "DirtyStepsCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootstepsManager, DirtyStepsCount), METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_DirtyStepsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_DirtyStepsCount_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_DirtyRowsNames_Inner = { "DirtyRowsNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_DirtyRowsNames_MetaData[] = {
		{ "Category", "Footsteps Component|Dirty Footprints" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_DirtyRowsNames = { "DirtyRowsNames", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootstepsManager, DirtyRowsNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_DirtyRowsNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_DirtyRowsNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bSpawnParticleAtBoneLocation_MetaData[] = {
		{ "Category", "Footsteps Component|Others" },
		{ "DisplayPriority", "1" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	void Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bSpawnParticleAtBoneLocation_SetBit(void* Obj)
	{
		((AFootstepsManager*)Obj)->bSpawnParticleAtBoneLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bSpawnParticleAtBoneLocation = { "bSpawnParticleAtBoneLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFootstepsManager), &Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bSpawnParticleAtBoneLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bSpawnParticleAtBoneLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bSpawnParticleAtBoneLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverrideRow_MetaData[] = {
		{ "Category", "Footsteps Component|Others" },
		{ "DisplayPriority", "2" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	void Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverrideRow_SetBit(void* Obj)
	{
		((AFootstepsManager*)Obj)->bOverrideRow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverrideRow = { "bOverrideRow", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFootstepsManager), &Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverrideRow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverrideRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverrideRow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_OverrideWith_MetaData[] = {
		{ "Category", "Footsteps Component|Others" },
		{ "DisplayPriority", "3" },
		{ "EditCondition", "bOverrideRow" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_OverrideWith = { "OverrideWith", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFootstepsManager, OverrideWith), METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_OverrideWith_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_OverrideWith_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bIgnoreMissingEffect_MetaData[] = {
		{ "Category", "Footsteps Component|Others" },
		{ "DisplayPriority", "4" },
		{ "EditCondition", "!bDisableEverything" },
		{ "ModuleRelativePath", "Public/FootstepsManager.h" },
		{ "ShortTooltip", "do not use Default Effect if they're missing from current row." },
	};
#endif
	void Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bIgnoreMissingEffect_SetBit(void* Obj)
	{
		((AFootstepsManager*)Obj)->bIgnoreMissingEffect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bIgnoreMissingEffect = { "bIgnoreMissingEffect", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFootstepsManager), &Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bIgnoreMissingEffect_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bIgnoreMissingEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bIgnoreMissingEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFootstepsManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableEverything,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableSoundEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableFootprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bDisableDirtyFootprints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintFadeOutDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_FootprintFadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverlayDirtyFootprintsOverNormalOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_DirtyStepsCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_DirtyRowsNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_DirtyRowsNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bSpawnParticleAtBoneLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bOverrideRow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_OverrideWith,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFootstepsManager_Statics::NewProp_bIgnoreMissingEffect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFootstepsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFootstepsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFootstepsManager_Statics::ClassParams = {
		&AFootstepsManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFootstepsManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFootstepsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFootstepsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFootstepsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFootstepsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFootstepsManager, 1984926473);
	template<> FOOTSTEPSMGR_API UClass* StaticClass<AFootstepsManager>()
	{
		return AFootstepsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFootstepsManager(Z_Construct_UClass_AFootstepsManager, &AFootstepsManager::StaticClass, TEXT("/Script/FootstepsMgr"), TEXT("AFootstepsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFootstepsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
