// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class USceneComponent;
#ifdef FOOTSTEPSMGR_FootsepsInterface_generated_h
#error "FootsepsInterface.generated.h already included, missing '#pragma once' in FootsepsInterface.h"
#endif
#define FOOTSTEPSMGR_FootsepsInterface_generated_h

#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_SPARSE_DATA
#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_RPC_WRAPPERS \
	virtual void SendFootstepNotification_Implementation(FVector FootprintSize, FVector ParticleSize, USceneComponent* SkeletalMesh, FName BoneName, float TraceLength, float VolumeMultiplier) {}; \
 \
	DECLARE_FUNCTION(execSendFootstepNotification);


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SendFootstepNotification_Implementation(FVector FootprintSize, FVector ParticleSize, USceneComponent* SkeletalMesh, FName BoneName, float TraceLength, float VolumeMultiplier) {}; \
 \
	DECLARE_FUNCTION(execSendFootstepNotification);


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_EVENT_PARMS \
	struct FootsepsInterface_eventSendFootstepNotification_Parms \
	{ \
		FVector FootprintSize; \
		FVector ParticleSize; \
		USceneComponent* SkeletalMesh; \
		FName BoneName; \
		float TraceLength; \
		float VolumeMultiplier; \
	};


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_CALLBACK_WRAPPERS
#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOOTSTEPSMGR_API UFootsepsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFootsepsInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOOTSTEPSMGR_API, UFootsepsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFootsepsInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOOTSTEPSMGR_API UFootsepsInterface(UFootsepsInterface&&); \
	FOOTSTEPSMGR_API UFootsepsInterface(const UFootsepsInterface&); \
public:


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOOTSTEPSMGR_API UFootsepsInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOOTSTEPSMGR_API UFootsepsInterface(UFootsepsInterface&&); \
	FOOTSTEPSMGR_API UFootsepsInterface(const UFootsepsInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOOTSTEPSMGR_API, UFootsepsInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFootsepsInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFootsepsInterface)


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUFootsepsInterface(); \
	friend struct Z_Construct_UClass_UFootsepsInterface_Statics; \
public: \
	DECLARE_CLASS(UFootsepsInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FootstepsMgr"), FOOTSTEPSMGR_API) \
	DECLARE_SERIALIZER(UFootsepsInterface)


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IFootsepsInterface() {} \
public: \
	typedef UFootsepsInterface UClassType; \
	typedef IFootsepsInterface ThisClass; \
	static void Execute_SendFootstepNotification(UObject* O, FVector FootprintSize, FVector ParticleSize, USceneComponent* SkeletalMesh, FName BoneName, float TraceLength, float VolumeMultiplier); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IFootsepsInterface() {} \
public: \
	typedef UFootsepsInterface UClassType; \
	typedef IFootsepsInterface ThisClass; \
	static void Execute_SendFootstepNotification(UObject* O, FVector FootprintSize, FVector ParticleSize, USceneComponent* SkeletalMesh, FName BoneName, float TraceLength, float VolumeMultiplier); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_10_PROLOG \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_EVENT_PARMS


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_SPARSE_DATA \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_RPC_WRAPPERS \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_SPARSE_DATA \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_CALLBACK_WRAPPERS \
	HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOOTSTEPSMGR_API UClass* StaticClass<class UFootsepsInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_FootstepsMgr_Source_FootstepsMgr_Public_FootsepsInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
