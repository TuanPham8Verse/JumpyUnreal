// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpyCPP/Public/JumpyAnimationBlueprint.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumpyAnimationBlueprint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
JUMPYCPP_API UClass* Z_Construct_UClass_AJumpyCharacter_NoRegister();
JUMPYCPP_API UClass* Z_Construct_UClass_UJumpyAnimationBlueprint();
JUMPYCPP_API UClass* Z_Construct_UClass_UJumpyAnimationBlueprint_NoRegister();
UPackage* Z_Construct_UPackage__Script_JumpyCPP();
// End Cross Module References

// Begin Class UJumpyAnimationBlueprint
void UJumpyAnimationBlueprint::StaticRegisterNativesUJumpyAnimationBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJumpyAnimationBlueprint);
UClass* Z_Construct_UClass_UJumpyAnimationBlueprint_NoRegister()
{
	return UJumpyAnimationBlueprint::StaticClass();
}
struct Z_Construct_UClass_UJumpyAnimationBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "JumpyAnimationBlueprint.h" },
		{ "ModuleRelativePath", "Public/JumpyAnimationBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_jumpyCharacter_MetaData[] = {
		{ "Category", "JumpyAnimationBlueprint" },
		{ "ModuleRelativePath", "Public/JumpyAnimationBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpyCharacterMovement_MetaData[] = {
		{ "Category", "JumpyAnimationBlueprint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JumpyAnimationBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "JumpyAnimationBlueprint" },
		{ "ModuleRelativePath", "Public/JumpyAnimationBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_leanAmount_MetaData[] = {
		{ "Category", "JumpyAnimationBlueprint" },
		{ "ModuleRelativePath", "Public/JumpyAnimationBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isInAir_MetaData[] = {
		{ "Category", "JumpyAnimationBlueprint" },
		{ "ModuleRelativePath", "Public/JumpyAnimationBlueprint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_jumpyCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpyCharacterMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_leanAmount;
	static void NewProp_isInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isInAir;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJumpyAnimationBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::NewProp_jumpyCharacter = { "jumpyCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJumpyAnimationBlueprint, jumpyCharacter), Z_Construct_UClass_AJumpyCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_jumpyCharacter_MetaData), NewProp_jumpyCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::NewProp_JumpyCharacterMovement = { "JumpyCharacterMovement", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJumpyAnimationBlueprint, JumpyCharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpyCharacterMovement_MetaData), NewProp_JumpyCharacterMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJumpyAnimationBlueprint, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::NewProp_leanAmount = { "leanAmount", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJumpyAnimationBlueprint, leanAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_leanAmount_MetaData), NewProp_leanAmount_MetaData) };
void Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::NewProp_isInAir_SetBit(void* Obj)
{
	((UJumpyAnimationBlueprint*)Obj)->isInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::NewProp_isInAir = { "isInAir", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UJumpyAnimationBlueprint), &Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::NewProp_isInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isInAir_MetaData), NewProp_isInAir_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::NewProp_jumpyCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::NewProp_JumpyCharacterMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::NewProp_leanAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::NewProp_isInAir,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_JumpyCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::ClassParams = {
	&UJumpyAnimationBlueprint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJumpyAnimationBlueprint()
{
	if (!Z_Registration_Info_UClass_UJumpyAnimationBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJumpyAnimationBlueprint.OuterSingleton, Z_Construct_UClass_UJumpyAnimationBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJumpyAnimationBlueprint.OuterSingleton;
}
template<> JUMPYCPP_API UClass* StaticClass<UJumpyAnimationBlueprint>()
{
	return UJumpyAnimationBlueprint::StaticClass();
}
UJumpyAnimationBlueprint::UJumpyAnimationBlueprint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJumpyAnimationBlueprint);
UJumpyAnimationBlueprint::~UJumpyAnimationBlueprint() {}
// End Class UJumpyAnimationBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_JumpyAnimationBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJumpyAnimationBlueprint, UJumpyAnimationBlueprint::StaticClass, TEXT("UJumpyAnimationBlueprint"), &Z_Registration_Info_UClass_UJumpyAnimationBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJumpyAnimationBlueprint), 3362359216U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_JumpyAnimationBlueprint_h_2423587925(TEXT("/Script/JumpyCPP"),
	Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_JumpyAnimationBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_JumpyAnimationBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
