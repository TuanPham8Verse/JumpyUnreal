// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpyCPP/Public/JumpyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumpyCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
JUMPYCPP_API UClass* Z_Construct_UClass_AJumpyCharacter();
JUMPYCPP_API UClass* Z_Construct_UClass_AJumpyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_JumpyCPP();
// End Cross Module References

// Begin Class AJumpyCharacter
void AJumpyCharacter::StaticRegisterNativesAJumpyCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJumpyCharacter);
UClass* Z_Construct_UClass_AJumpyCharacter_NoRegister()
{
	return AJumpyCharacter::StaticClass();
}
struct Z_Construct_UClass_AJumpyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "JumpyCharacter.h" },
		{ "ModuleRelativePath", "Public/JumpyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IMCJumpy_MetaData[] = {
		{ "Category", "JumpyCharacter" },
		{ "ModuleRelativePath", "Public/JumpyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "JumpyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JumpyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "JumpyCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JumpyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IMCJumpy;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJumpyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJumpyCharacter_Statics::NewProp_IMCJumpy = { "IMCJumpy", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJumpyCharacter, IMCJumpy), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IMCJumpy_MetaData), NewProp_IMCJumpy_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJumpyCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJumpyCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJumpyCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AJumpyCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJumpyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpyCharacter_Statics::NewProp_IMCJumpy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpyCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJumpyCharacter_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumpyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AJumpyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_JumpyCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumpyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AJumpyCharacter_Statics::ClassParams = {
	&AJumpyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AJumpyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AJumpyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJumpyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AJumpyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AJumpyCharacter()
{
	if (!Z_Registration_Info_UClass_AJumpyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJumpyCharacter.OuterSingleton, Z_Construct_UClass_AJumpyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AJumpyCharacter.OuterSingleton;
}
template<> JUMPYCPP_API UClass* StaticClass<AJumpyCharacter>()
{
	return AJumpyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AJumpyCharacter);
AJumpyCharacter::~AJumpyCharacter() {}
// End Class AJumpyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_JumpyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AJumpyCharacter, AJumpyCharacter::StaticClass, TEXT("AJumpyCharacter"), &Z_Registration_Info_UClass_AJumpyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJumpyCharacter), 1980915585U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_JumpyCharacter_h_1780735134(TEXT("/Script/JumpyCPP"),
	Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_JumpyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_JumpyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
