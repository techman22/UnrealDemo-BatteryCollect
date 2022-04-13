// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBatteryPlayState : uint8;
#ifdef BATTERYCOLLECT_BatteryCollectGameMode_generated_h
#error "BatteryCollectGameMode.generated.h already included, missing '#pragma once' in BatteryCollectGameMode.h"
#endif
#define BATTERYCOLLECT_BatteryCollectGameMode_generated_h

#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_SPARSE_DATA
#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetPowerToWin);


#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetPowerToWin);


#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_EVENT_PARMS
#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_CALLBACK_WRAPPERS
#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryCollectGameMode(); \
	friend struct Z_Construct_UClass_ABatteryCollectGameMode_Statics; \
public: \
	DECLARE_CLASS(ABatteryCollectGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollect"), BATTERYCOLLECT_API) \
	DECLARE_SERIALIZER(ABatteryCollectGameMode)


#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesABatteryCollectGameMode(); \
	friend struct Z_Construct_UClass_ABatteryCollectGameMode_Statics; \
public: \
	DECLARE_CLASS(ABatteryCollectGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollect"), BATTERYCOLLECT_API) \
	DECLARE_SERIALIZER(ABatteryCollectGameMode)


#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BATTERYCOLLECT_API ABatteryCollectGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryCollectGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTERYCOLLECT_API, ABatteryCollectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCollectGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTERYCOLLECT_API ABatteryCollectGameMode(ABatteryCollectGameMode&&); \
	BATTERYCOLLECT_API ABatteryCollectGameMode(const ABatteryCollectGameMode&); \
public:


#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTERYCOLLECT_API ABatteryCollectGameMode(ABatteryCollectGameMode&&); \
	BATTERYCOLLECT_API ABatteryCollectGameMode(const ABatteryCollectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTERYCOLLECT_API, ABatteryCollectGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCollectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryCollectGameMode)


#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DecayRate() { return STRUCT_OFFSET(ABatteryCollectGameMode, DecayRate); } \
	FORCEINLINE static uint32 __PPO__PowerToWin() { return STRUCT_OFFSET(ABatteryCollectGameMode, PowerToWin); } \
	FORCEINLINE static uint32 __PPO__HUDWidgetClass() { return STRUCT_OFFSET(ABatteryCollectGameMode, HUDWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(ABatteryCollectGameMode, CurrentWidget); }


#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_19_PROLOG \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_EVENT_PARMS


#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_SPARSE_DATA \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_RPC_WRAPPERS \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_CALLBACK_WRAPPERS \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_INCLASS \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_SPARSE_DATA \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_CALLBACK_WRAPPERS \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_INCLASS_NO_PURE_DECLS \
	BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECT_API UClass* StaticClass<class ABatteryCollectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollect_Source_BatteryCollect_BatteryCollectGameMode_h


#define FOREACH_ENUM_EBATTERYPLAYSTATE(op) \
	op(EBatteryPlayState::EPlaying) \
	op(EBatteryPlayState::EGameOver) \
	op(EBatteryPlayState::EWon) \
	op(EBatteryPlayState::EUnknown) 

enum class EBatteryPlayState : uint8;
template<> BATTERYCOLLECT_API UEnum* StaticEnum<EBatteryPlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
