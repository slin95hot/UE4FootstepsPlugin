// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFootstepsManager;
struct FVector;
class USceneComponent;
#ifdef FOOTSTEPSMGR_FootstepsComponent_generated_h
#error "FootstepsComponent.generated.h already included, missing '#pragma once' in FootstepsComponent.h"
#endif
#define FOOTSTEPSMGR_FootstepsComponent_generated_h

#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFootStepsData_Statics; \
	FOOTSTEPSMGR_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> FOOTSTEPSMGR_API UScriptStruct* StaticStruct<struct FFootStepsData>();

#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_SPARSE_DATA
#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeIgnoreManagerState); \
	DECLARE_FUNCTION(execSetFootprintFadeOutDuration); \
	DECLARE_FUNCTION(execSetFootprintFadeOutDelay); \
	DECLARE_FUNCTION(execSetFootprintLifeTime); \
	DECLARE_FUNCTION(execSetDirtyRowsNames); \
	DECLARE_FUNCTION(execSetDirtyStepsCount); \
	DECLARE_FUNCTION(execSetOverrideWith); \
	DECLARE_FUNCTION(execSetOverrideRow); \
	DECLARE_FUNCTION(execSetIgnoreMissingEffect); \
	DECLARE_FUNCTION(execSetSpawnParticleAtBoneLocation); \
	DECLARE_FUNCTION(execSetOverlayDirtyFootprints); \
	DECLARE_FUNCTION(execSetDisableDirtyFootprints); \
	DECLARE_FUNCTION(execSetDisableFootprints); \
	DECLARE_FUNCTION(execSetDisableParticles); \
	DECLARE_FUNCTION(execSetDisableSoundEffects); \
	DECLARE_FUNCTION(execSetDisableEverything); \
	DECLARE_FUNCTION(execAddFootstepEffect);


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeIgnoreManagerState); \
	DECLARE_FUNCTION(execSetFootprintFadeOutDuration); \
	DECLARE_FUNCTION(execSetFootprintFadeOutDelay); \
	DECLARE_FUNCTION(execSetFootprintLifeTime); \
	DECLARE_FUNCTION(execSetDirtyRowsNames); \
	DECLARE_FUNCTION(execSetDirtyStepsCount); \
	DECLARE_FUNCTION(execSetOverrideWith); \
	DECLARE_FUNCTION(execSetOverrideRow); \
	DECLARE_FUNCTION(execSetIgnoreMissingEffect); \
	DECLARE_FUNCTION(execSetSpawnParticleAtBoneLocation); \
	DECLARE_FUNCTION(execSetOverlayDirtyFootprints); \
	DECLARE_FUNCTION(execSetDisableDirtyFootprints); \
	DECLARE_FUNCTION(execSetDisableFootprints); \
	DECLARE_FUNCTION(execSetDisableParticles); \
	DECLARE_FUNCTION(execSetDisableSoundEffects); \
	DECLARE_FUNCTION(execSetDisableEverything); \
	DECLARE_FUNCTION(execAddFootstepEffect);


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFootstepsComponent(); \
	friend struct Z_Construct_UClass_UFootstepsComponent_Statics; \
public: \
	DECLARE_CLASS(UFootstepsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FootstepsMgr"), NO_API) \
	DECLARE_SERIALIZER(UFootstepsComponent)


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUFootstepsComponent(); \
	friend struct Z_Construct_UClass_UFootstepsComponent_Statics; \
public: \
	DECLARE_CLASS(UFootstepsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FootstepsMgr"), NO_API) \
	DECLARE_SERIALIZER(UFootstepsComponent)


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFootstepsComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFootstepsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFootstepsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFootstepsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFootstepsComponent(UFootstepsComponent&&); \
	NO_API UFootstepsComponent(const UFootstepsComponent&); \
public:


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFootstepsComponent(UFootstepsComponent&&); \
	NO_API UFootstepsComponent(const UFootstepsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFootstepsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFootstepsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFootstepsComponent)


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bDirtySteps() { return STRUCT_OFFSET(UFootstepsComponent, bDirtySteps); } \
	FORCEINLINE static uint32 __PPO__SurfaceType() { return STRUCT_OFFSET(UFootstepsComponent, SurfaceType); }


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_37_PROLOG
#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_SPARSE_DATA \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_RPC_WRAPPERS \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_INCLASS \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_SPARSE_DATA \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOOTSTEPSMGR_API UClass* StaticClass<class UFootstepsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootstepsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
