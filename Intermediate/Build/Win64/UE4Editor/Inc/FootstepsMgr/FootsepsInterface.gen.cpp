// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootstepsMgr/Public/FootsepsInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootsepsInterface() {}
// Cross Module References
	FOOTSTEPSMGR_API UClass* Z_Construct_UClass_UFootsepsInterface_NoRegister();
	FOOTSTEPSMGR_API UClass* Z_Construct_UClass_UFootsepsInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_FootstepsMgr();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IFootsepsInterface::execSendFootstepNotification)
	{
		P_GET_STRUCT(FVector,Z_Param_FootprintSize);
		P_GET_STRUCT(FVector,Z_Param_ParticleSize);
		P_GET_OBJECT(USceneComponent,Z_Param_SkeletalMesh);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TraceLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendFootstepNotification_Implementation(Z_Param_FootprintSize,Z_Param_ParticleSize,Z_Param_SkeletalMesh,Z_Param_BoneName,Z_Param_TraceLength,Z_Param_VolumeMultiplier);
		P_NATIVE_END;
	}
	void IFootsepsInterface::SendFootstepNotification(FVector FootprintSize, FVector ParticleSize, USceneComponent* SkeletalMesh, FName BoneName, float TraceLength, float VolumeMultiplier)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SendFootstepNotification instead.");
	}
	void UFootsepsInterface::StaticRegisterNativesUFootsepsInterface()
	{
		UClass* Class = UFootsepsInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendFootstepNotification", &IFootsepsInterface::execSendFootstepNotification },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics
	{
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_FootprintSize = { "FootprintSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootsepsInterface_eventSendFootstepNotification_Parms, FootprintSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_ParticleSize = { "ParticleSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootsepsInterface_eventSendFootstepNotification_Parms, ParticleSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootsepsInterface_eventSendFootstepNotification_Parms, SkeletalMesh), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootsepsInterface_eventSendFootstepNotification_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootsepsInterface_eventSendFootstepNotification_Parms, TraceLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FootsepsInterface_eventSendFootstepNotification_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_FootprintSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_ParticleSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_BoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_TraceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::NewProp_VolumeMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FootsepsInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFootsepsInterface, nullptr, "SendFootstepNotification", nullptr, nullptr, sizeof(FootsepsInterface_eventSendFootstepNotification_Parms), Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFootsepsInterface_NoRegister()
	{
		return UFootsepsInterface::StaticClass();
	}
	struct Z_Construct_UClass_UFootsepsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFootsepsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FootstepsMgr,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFootsepsInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFootsepsInterface_SendFootstepNotification, "SendFootstepNotification" }, // 837666786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFootsepsInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FootsepsInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFootsepsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IFootsepsInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFootsepsInterface_Statics::ClassParams = {
		&UFootsepsInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFootsepsInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFootsepsInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFootsepsInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFootsepsInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFootsepsInterface, 4097543751);
	template<> FOOTSTEPSMGR_API UClass* StaticClass<UFootsepsInterface>()
	{
		return UFootsepsInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFootsepsInterface(Z_Construct_UClass_UFootsepsInterface, &UFootsepsInterface::StaticClass, TEXT("/Script/FootstepsMgr"), TEXT("UFootsepsInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFootsepsInterface);
	static FName NAME_UFootsepsInterface_SendFootstepNotification = FName(TEXT("SendFootstepNotification"));
	void IFootsepsInterface::Execute_SendFootstepNotification(UObject* O, FVector FootprintSize, FVector ParticleSize, USceneComponent* SkeletalMesh, FName BoneName, float TraceLength, float VolumeMultiplier)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UFootsepsInterface::StaticClass()));
		FootsepsInterface_eventSendFootstepNotification_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UFootsepsInterface_SendFootstepNotification);
		if (Func)
		{
			Parms.FootprintSize=FootprintSize;
			Parms.ParticleSize=ParticleSize;
			Parms.SkeletalMesh=SkeletalMesh;
			Parms.BoneName=BoneName;
			Parms.TraceLength=TraceLength;
			Parms.VolumeMultiplier=VolumeMultiplier;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IFootsepsInterface*)(O->GetNativeInterfaceAddress(UFootsepsInterface::StaticClass())))
		{
			I->SendFootstepNotification_Implementation(FootprintSize,ParticleSize,SkeletalMesh,BoneName,TraceLength,VolumeMultiplier);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
