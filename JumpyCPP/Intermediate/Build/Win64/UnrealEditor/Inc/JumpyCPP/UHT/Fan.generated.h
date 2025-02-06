// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Fan.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef JUMPYCPP_Fan_generated_h
#error "Fan.generated.h already included, missing '#pragma once' in Fan.h"
#endif
#define JUMPYCPP_Fan_generated_h

#define FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPlayerExit); \
	DECLARE_FUNCTION(execOnPlayerEnter);


#define FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFan(); \
	friend struct Z_Construct_UClass_AFan_Statics; \
public: \
	DECLARE_CLASS(AFan, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JumpyCPP"), NO_API) \
	DECLARE_SERIALIZER(AFan)


#define FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFan(AFan&&); \
	AFan(const AFan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFan); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFan) \
	NO_API virtual ~AFan();


#define FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_13_PROLOG
#define FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_16_INCLASS_NO_PURE_DECLS \
	FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JUMPYCPP_API UClass* StaticClass<class AFan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
