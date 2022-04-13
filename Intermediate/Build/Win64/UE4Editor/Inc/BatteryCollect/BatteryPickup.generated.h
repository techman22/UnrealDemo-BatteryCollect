// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTERYCOLLECT_BatteryPickup_generated_h
#error "BatteryPickup.generated.h already included, missing '#pragma once' in BatteryPickup.h"
#endif
#define BATTERYCOLLECT_BatteryPickup_generated_h

#define BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_SPARSE_DATA
#define BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_RPC_WRAPPERS
#define BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryPickup(); \
	friend struct Z_Construct_UClass_ABatteryPickup_Statics; \
public: \
	DECLARE_CLASS(ABatteryPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollect"), NO_API) \
	DECLARE_SERIALIZER(ABatteryPickup)


#define BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABatteryPickup(); \
	friend struct Z_Construct_UClass_ABatteryPickup_Statics; \
public: \
	DECLARE_CLASS(ABatteryPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BatteryCollect"), NO_API) \
	DECLARE_SERIALIZER(ABatteryPickup)


#define BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryPickup(ABatteryPickup&&); \
	NO_API ABatteryPickup(const ABatteryPickup&); \
public:


#define BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryPickup(ABatteryPickup&&); \
	NO_API ABatteryPickup(const ABatteryPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryPickup)


#define BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BatteryPower() { return STRUCT_OFFSET(ABatteryPickup, BatteryPower); }


#define BatteryCollect_Source_BatteryCollect_BatteryPickup_h_12_PROLOG
#define BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_SPARSE_DATA \
	BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_RPC_WRAPPERS \
	BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_INCLASS \
	BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_PRIVATE_PROPERTY_OFFSET \
	BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_SPARSE_DATA \
	BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_INCLASS_NO_PURE_DECLS \
	BatteryCollect_Source_BatteryCollect_BatteryPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERYCOLLECT_API UClass* StaticClass<class ABatteryPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BatteryCollect_Source_BatteryCollect_BatteryPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
