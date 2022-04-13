// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BATTERYCOLLECT_BatteryCollectCharacter_generated_h
#error "BatteryCollectCharacter.generated.h already included, missing '#pragma once' in BatteryCollectCharacter.h"
#endif
#define BATTERYCOLLECT_BatteryCollectCharacter_generated_h

#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_SPARSE_DATA
#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBeginOverlap); \
	DECLARE_FUNCTION(execCollectPickups); \
	DECLARE_FUNCTION(execUpdatePower); \
	DECLARE_FUNCTION(execGetCurrentPower); \
	DECLARE_FUNCTION(execGetInitialPower);


#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBeginOverlap); \
	DECLARE_FUNCTION(execCollectPickups); \
	DECLARE_FUNCTION(execUpdatePower); \
	DECLARE_FUNCTION(execGetCurrentPower); \
	DECLARE_FUNCTION(execGetInitialPower);


#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_EVENT_PARMS
#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_CALLBACK_WRAPPERS
#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryCollectCharacter(); \
	friend struct Z_Construct_UClass_ABatteryCollectCharacter_Statics; \
public: \
	DECLARE_CLASS(ABatteryCollectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollect"), NO_API) \
	DECLARE_SERIALIZER(ABatteryCollectCharacter)


#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABatteryCollectCharacter(); \
	friend struct Z_Construct_UClass_ABatteryCollectCharacter_Statics; \
public: \
	DECLARE_CLASS(ABatteryCollectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollect"), NO_API) \
	DECLARE_SERIALIZER(ABatteryCollectCharacter)


#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryCollectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryCollectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryCollectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCollectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryCollectCharacter(ABatteryCollectCharacter&&); \
	NO_API ABatteryCollectCharacter(const ABatteryCollectCharacter&); \
public:


#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryCollectCharacter(ABatteryCollectCharacter&&); \
	NO_API ABatteryCollectCharacter(const ABatteryCollectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryCollectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryCollectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryCollectCharacter)


#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABatteryCollectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABatteryCollectCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__CollectionSphere() { return STRUCT_OFFSET(ABatteryCollectCharacter, CollectionSphere); } \
	FORCEINLINE static uint32 __PPO__InitialPower() { return STRUCT_OFFSET(ABatteryCollectCharacter, InitialPower); } \
	FORCEINLINE static uint32 __PPO__SpeedFactor() { return STRUCT_OFFSET(ABatteryCollectCharacter, SpeedFactor); } \
	FORCEINLINE static uint32 __PPO__BaseSpeed() { return STRUCT_OFFSET(ABatteryCollectCharacter, BaseSpeed); } \
	FORCEINLINE static uint32 __PPO__CharacterPower() { return STRUCT_OFFSET(ABatteryCollectCharacter, CharacterPower); }


#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_9_PROLOG \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_EVENT_PARMS


#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_SPARSE_DATA \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_RPC_WRAPPERS \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_CALLBACK_WRAPPERS \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_INCLASS \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_SPARSE_DATA \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_CALLBACK_WRAPPERS \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECT_API UClass* StaticClass<class ABatteryCollectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollect_Source_BatteryCollect_BatteryCollectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
