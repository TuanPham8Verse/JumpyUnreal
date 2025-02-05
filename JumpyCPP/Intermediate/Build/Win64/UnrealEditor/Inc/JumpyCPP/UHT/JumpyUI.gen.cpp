// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpyCPP/Public/JumpyUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumpyUI() {}

// Begin Cross Module References
JUMPYCPP_API UClass* Z_Construct_UClass_UJumpyUI();
JUMPYCPP_API UClass* Z_Construct_UClass_UJumpyUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_JumpyCPP();
// End Cross Module References

// Begin Class UJumpyUI
void UJumpyUI::StaticRegisterNativesUJumpyUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJumpyUI);
UClass* Z_Construct_UClass_UJumpyUI_NoRegister()
{
	return UJumpyUI::StaticClass();
}
struct Z_Construct_UClass_UJumpyUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "JumpyUI.h" },
		{ "ModuleRelativePath", "Public/JumpyUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "JumpyUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JumpyUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeightTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "JumpyUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JumpyUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeightProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "JumpyUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JumpyUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoinTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "JumpyUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JumpyUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxHeightTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxHeightProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CoinTextBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJumpyUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJumpyUI_Statics::NewProp_HeightText = { "HeightText", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJumpyUI, HeightText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightText_MetaData), NewProp_HeightText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJumpyUI_Statics::NewProp_MaxHeightTextBlock = { "MaxHeightTextBlock", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJumpyUI, MaxHeightTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeightTextBlock_MetaData), NewProp_MaxHeightTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJumpyUI_Statics::NewProp_MaxHeightProgressBar = { "MaxHeightProgressBar", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJumpyUI, MaxHeightProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeightProgressBar_MetaData), NewProp_MaxHeightProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJumpyUI_Statics::NewProp_CoinTextBlock = { "CoinTextBlock", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UJumpyUI, CoinTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoinTextBlock_MetaData), NewProp_CoinTextBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJumpyUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpyUI_Statics::NewProp_HeightText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpyUI_Statics::NewProp_MaxHeightTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpyUI_Statics::NewProp_MaxHeightProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJumpyUI_Statics::NewProp_CoinTextBlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJumpyUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UJumpyUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_JumpyCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJumpyUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UJumpyUI_Statics::ClassParams = {
	&UJumpyUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UJumpyUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UJumpyUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJumpyUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UJumpyUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UJumpyUI()
{
	if (!Z_Registration_Info_UClass_UJumpyUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJumpyUI.OuterSingleton, Z_Construct_UClass_UJumpyUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UJumpyUI.OuterSingleton;
}
template<> JUMPYCPP_API UClass* StaticClass<UJumpyUI>()
{
	return UJumpyUI::StaticClass();
}
UJumpyUI::UJumpyUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UJumpyUI);
UJumpyUI::~UJumpyUI() {}
// End Class UJumpyUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_JumpyUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UJumpyUI, UJumpyUI::StaticClass, TEXT("UJumpyUI"), &Z_Registration_Info_UClass_UJumpyUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJumpyUI), 1314265242U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_JumpyUI_h_494182198(TEXT("/Script/JumpyCPP"),
	Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_JumpyUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_JumpyUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
