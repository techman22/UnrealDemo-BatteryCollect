// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BatteryCollect/BatteryCollectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBatteryCollectGameMode() {}
// Cross Module References
	BATTERYCOLLECT_API UEnum* Z_Construct_UEnum_BatteryCollect_EBatteryPlayState();
	UPackage* Z_Construct_UPackage__Script_BatteryCollect();
	BATTERYCOLLECT_API UClass* Z_Construct_UClass_ABatteryCollectGameMode_NoRegister();
	BATTERYCOLLECT_API UClass* Z_Construct_UClass_ABatteryCollectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	static UEnum* EBatteryPlayState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BatteryCollect_EBatteryPlayState, Z_Construct_UPackage__Script_BatteryCollect(), TEXT("EBatteryPlayState"));
		}
		return Singleton;
	}
	template<> BATTERYCOLLECT_API UEnum* StaticEnum<EBatteryPlayState>()
	{
		return EBatteryPlayState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBatteryPlayState(EBatteryPlayState_StaticEnum, TEXT("/Script/BatteryCollect"), TEXT("EBatteryPlayState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BatteryCollect_EBatteryPlayState_Hash() { return 1467548383U; }
	UEnum* Z_Construct_UEnum_BatteryCollect_EBatteryPlayState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BatteryCollect();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBatteryPlayState"), 0, Get_Z_Construct_UEnum_BatteryCollect_EBatteryPlayState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBatteryPlayState::EPlaying", (int64)EBatteryPlayState::EPlaying },
				{ "EBatteryPlayState::EGameOver", (int64)EBatteryPlayState::EGameOver },
				{ "EBatteryPlayState::EWon", (int64)EBatteryPlayState::EWon },
				{ "EBatteryPlayState::EUnknown", (int64)EBatteryPlayState::EUnknown },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//enum to store current game state\n" },
				{ "EGameOver.Name", "EBatteryPlayState::EGameOver" },
				{ "EPlaying.Name", "EBatteryPlayState::EPlaying" },
				{ "EUnknown.Name", "EBatteryPlayState::EUnknown" },
				{ "EWon.Name", "EBatteryPlayState::EWon" },
				{ "ModuleRelativePath", "BatteryCollectGameMode.h" },
				{ "ToolTip", "enum to store current game state" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BatteryCollect,
				nullptr,
				"EBatteryPlayState",
				"EBatteryPlayState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(ABatteryCollectGameMode::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EBatteryPlayState*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABatteryCollectGameMode::execGetPowerToWin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPowerToWin();
		P_NATIVE_END;
	}
	static FName NAME_ABatteryCollectGameMode_GameOver = FName(TEXT("GameOver"));
	void ABatteryCollectGameMode::GameOver()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABatteryCollectGameMode_GameOver),NULL);
	}
	void ABatteryCollectGameMode::StaticRegisterNativesABatteryCollectGameMode()
	{
		UClass* Class = ABatteryCollectGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentState", &ABatteryCollectGameMode::execGetCurrentState },
			{ "GetPowerToWin", &ABatteryCollectGameMode::execGetPowerToWin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABatteryCollectGameMode_GameOver_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectGameMode_GameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BatteryCollectGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectGameMode_GameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectGameMode, nullptr, "GameOver", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryCollectGameMode_GameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectGameMode_GameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryCollectGameMode_GameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryCollectGameMode_GameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics
	{
		struct BatteryCollectGameMode_eventGetCurrentState_Parms
		{
			EBatteryPlayState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatteryCollectGameMode_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UEnum_BatteryCollect_EBatteryPlayState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "//returns current play state\n" },
		{ "ModuleRelativePath", "BatteryCollectGameMode.h" },
		{ "ToolTip", "returns current play state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectGameMode, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(BatteryCollectGameMode_eventGetCurrentState_Parms), Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin_Statics
	{
		struct BatteryCollectGameMode_eventGetPowerToWin_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BatteryCollectGameMode_eventGetPowerToWin_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "//Returns power needed to win\n" },
		{ "ModuleRelativePath", "BatteryCollectGameMode.h" },
		{ "ToolTip", "Returns power needed to win" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABatteryCollectGameMode, nullptr, "GetPowerToWin", nullptr, nullptr, sizeof(BatteryCollectGameMode_eventGetPowerToWin_Parms), Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABatteryCollectGameMode_NoRegister()
	{
		return ABatteryCollectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABatteryCollectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerToWin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerToWin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABatteryCollectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_BatteryCollect,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABatteryCollectGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABatteryCollectGameMode_GameOver, "GameOver" }, // 452513027
		{ &Z_Construct_UFunction_ABatteryCollectGameMode_GetCurrentState, "GetCurrentState" }, // 3509704091
		{ &Z_Construct_UFunction_ABatteryCollectGameMode_GetPowerToWin, "GetPowerToWin" }, // 728041939
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BatteryCollectGameMode.h" },
		{ "ModuleRelativePath", "BatteryCollectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_DecayRate_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//Rate player loses power\n" },
		{ "ModuleRelativePath", "BatteryCollectGameMode.h" },
		{ "ToolTip", "Rate player loses power" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_DecayRate = { "DecayRate", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectGameMode, DecayRate), METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_DecayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_DecayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_PowerToWin_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//Power needed to win\n" },
		{ "ModuleRelativePath", "BatteryCollectGameMode.h" },
		{ "ToolTip", "Power needed to win" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_PowerToWin = { "PowerToWin", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectGameMode, PowerToWin), METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_PowerToWin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_PowerToWin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//widget class to use for HUD\n" },
		{ "ModuleRelativePath", "BatteryCollectGameMode.h" },
		{ "ToolTip", "widget class to use for HUD" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectGameMode, HUDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_HUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_HUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Comment", "//Instance of HUD\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BatteryCollectGameMode.h" },
		{ "ToolTip", "Instance of HUD" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABatteryCollectGameMode, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_CurrentWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABatteryCollectGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_DecayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_PowerToWin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_HUDWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABatteryCollectGameMode_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABatteryCollectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABatteryCollectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABatteryCollectGameMode_Statics::ClassParams = {
		&ABatteryCollectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABatteryCollectGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABatteryCollectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABatteryCollectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABatteryCollectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABatteryCollectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryCollectGameMode, 2176622891);
	template<> BATTERYCOLLECT_API UClass* StaticClass<ABatteryCollectGameMode>()
	{
		return ABatteryCollectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryCollectGameMode(Z_Construct_UClass_ABatteryCollectGameMode, &ABatteryCollectGameMode::StaticClass, TEXT("/Script/BatteryCollect"), TEXT("ABatteryCollectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryCollectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
