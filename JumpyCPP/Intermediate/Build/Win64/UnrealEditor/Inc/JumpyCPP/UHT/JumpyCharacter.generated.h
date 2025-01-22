// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JumpyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JUMPYCPP_JumpyCharacter_generated_h
#error "JumpyCharacter.generated.h already included, missing '#pragma once' in JumpyCharacter.h"
#endif
#define JUMPYCPP_JumpyCharacter_generated_h

#define FID_JumpyCPP_Source_JumpyCPP_Public_JumpyCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJumpyCharacter(); \
	friend struct Z_Construct_UClass_AJumpyCharacter_Statics; \
public: \
	DECLARE_CLASS(AJumpyCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JumpyCPP"), NO_API) \
	DECLARE_SERIALIZER(AJumpyCharacter)


#define FID_JumpyCPP_Source_JumpyCPP_Public_JumpyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AJumpyCharacter(AJumpyCharacter&&); \
	AJumpyCharacter(const AJumpyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJumpyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJumpyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJumpyCharacter) \
	NO_API virtual ~AJumpyCharacter();


#define FID_JumpyCPP_Source_JumpyCPP_Public_JumpyCharacter_h_11_PROLOG
#define FID_JumpyCPP_Source_JumpyCPP_Public_JumpyCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JumpyCPP_Source_JumpyCPP_Public_JumpyCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_JumpyCPP_Source_JumpyCPP_Public_JumpyCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JUMPYCPP_API UClass* StaticClass<class AJumpyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JumpyCPP_Source_JumpyCPP_Public_JumpyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
