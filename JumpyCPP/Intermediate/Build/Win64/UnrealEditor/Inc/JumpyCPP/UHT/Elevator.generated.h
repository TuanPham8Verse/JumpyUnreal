// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Elevator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JUMPYCPP_Elevator_generated_h
#error "Elevator.generated.h already included, missing '#pragma once' in Elevator.h"
#endif
#define JUMPYCPP_Elevator_generated_h

#define FID_JumpyCPP_Source_JumpyCPP_Public_Elevator_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAElevator(); \
	friend struct Z_Construct_UClass_AElevator_Statics; \
public: \
	DECLARE_CLASS(AElevator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JumpyCPP"), NO_API) \
	DECLARE_SERIALIZER(AElevator)


#define FID_JumpyCPP_Source_JumpyCPP_Public_Elevator_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AElevator(AElevator&&); \
	AElevator(const AElevator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AElevator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AElevator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AElevator) \
	NO_API virtual ~AElevator();


#define FID_JumpyCPP_Source_JumpyCPP_Public_Elevator_h_10_PROLOG
#define FID_JumpyCPP_Source_JumpyCPP_Public_Elevator_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JumpyCPP_Source_JumpyCPP_Public_Elevator_h_13_INCLASS_NO_PURE_DECLS \
	FID_JumpyCPP_Source_JumpyCPP_Public_Elevator_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JUMPYCPP_API UClass* StaticClass<class AElevator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JumpyCPP_Source_JumpyCPP_Public_Elevator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
