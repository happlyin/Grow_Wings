// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GrowWings/GrowWingsGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrowWingsGameModeBase() {}
// Cross Module References
	GROWWINGS_API UClass* Z_Construct_UClass_AGrowWingsGameModeBase_NoRegister();
	GROWWINGS_API UClass* Z_Construct_UClass_AGrowWingsGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GrowWings();
// End Cross Module References
	void AGrowWingsGameModeBase::StaticRegisterNativesAGrowWingsGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGrowWingsGameModeBase_NoRegister()
	{
		return AGrowWingsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGrowWingsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrowWingsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GrowWings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrowWingsGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GrowWingsGameModeBase.h" },
		{ "ModuleRelativePath", "GrowWingsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrowWingsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrowWingsGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrowWingsGameModeBase_Statics::ClassParams = {
		&AGrowWingsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGrowWingsGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrowWingsGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrowWingsGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrowWingsGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrowWingsGameModeBase, 2056685874);
	template<> GROWWINGS_API UClass* StaticClass<AGrowWingsGameModeBase>()
	{
		return AGrowWingsGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrowWingsGameModeBase(Z_Construct_UClass_AGrowWingsGameModeBase, &AGrowWingsGameModeBase::StaticClass, TEXT("/Script/GrowWings"), TEXT("AGrowWingsGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrowWingsGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
