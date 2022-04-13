// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollect/HazardPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHazardPickup() {}
// Cross Module References
	BATTERYCOLLECT_API UClass* Z_Construct_UClass_AHazardPickup_NoRegister();
	BATTERYCOLLECT_API UClass* Z_Construct_UClass_AHazardPickup();
	BATTERYCOLLECT_API UClass* Z_Construct_UClass_APickup();
	UPackage* Z_Construct_UPackage__Script_BatteryCollect();
// End Cross Module References
	void AHazardPickup::StaticRegisterNativesAHazardPickup()
	{
	}
	UClass* Z_Construct_UClass_AHazardPickup_NoRegister()
	{
		return AHazardPickup::StaticClass();
	}
	struct Z_Construct_UClass_AHazardPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HazardPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HazardPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHazardPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickup,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHazardPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HazardPickup.h" },
		{ "ModuleRelativePath", "HazardPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHazardPickup_Statics::NewProp_HazardPower_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//set amount of power hazards take away from player\n" },
		{ "ModuleRelativePath", "HazardPickup.h" },
		{ "ToolTip", "set amount of power hazards take away from player" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHazardPickup_Statics::NewProp_HazardPower = { "HazardPower", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHazardPickup, HazardPower), METADATA_PARAMS(Z_Construct_UClass_AHazardPickup_Statics::NewProp_HazardPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHazardPickup_Statics::NewProp_HazardPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHazardPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHazardPickup_Statics::NewProp_HazardPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHazardPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHazardPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHazardPickup_Statics::ClassParams = {
		&AHazardPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHazardPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHazardPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHazardPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHazardPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHazardPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHazardPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHazardPickup, 134124491);
	template<> BATTERYCOLLECT_API UClass* StaticClass<AHazardPickup>()
	{
		return AHazardPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHazardPickup(Z_Construct_UClass_AHazardPickup, &AHazardPickup::StaticClass, TEXT("/Script/BatteryCollect"), TEXT("AHazardPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHazardPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
