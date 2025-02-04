// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "JumpyUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JUMPYCPP_JumpyUI_generated_h
#error "JumpyUI.generated.h already included, missing '#pragma once' in JumpyUI.h"
#endif
#define JUMPYCPP_JumpyUI_generated_h

#define FID_JumpyCPP_Source_JumpyCPP_Public_JumpyUI_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUJumpyUI(); \
	friend struct Z_Construct_UClass_UJumpyUI_Statics; \
public: \
	DECLARE_CLASS(UJumpyUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/JumpyCPP"), NO_API) \
	DECLARE_SERIALIZER(UJumpyUI)


#define FID_JumpyCPP_Source_JumpyCPP_Public_JumpyUI_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UJumpyUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UJumpyUI(UJumpyUI&&); \
	UJumpyUI(const UJumpyUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UJumpyUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UJumpyUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UJumpyUI) \
	NO_API virtual ~UJumpyUI();


#define FID_JumpyCPP_Source_JumpyCPP_Public_JumpyUI_h_13_PROLOG
#define FID_JumpyCPP_Source_JumpyCPP_Public_JumpyUI_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JumpyCPP_Source_JumpyCPP_Public_JumpyUI_h_16_INCLASS_NO_PURE_DECLS \
	FID_JumpyCPP_Source_JumpyCPP_Public_JumpyUI_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JUMPYCPP_API UClass* StaticClass<class UJumpyUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JumpyCPP_Source_JumpyCPP_Public_JumpyUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
