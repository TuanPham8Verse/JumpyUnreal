// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpyCPP/Public/Fan.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFan() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
JUMPYCPP_API UClass* Z_Construct_UClass_AFan();
JUMPYCPP_API UClass* Z_Construct_UClass_AFan_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_JumpyCPP();
// End Cross Module References

// Begin Class AFan
void AFan::StaticRegisterNativesAFan()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFan);
UClass* Z_Construct_UClass_AFan_NoRegister()
{
	return AFan::StaticClass();
}
struct Z_Construct_UClass_AFan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Fan.h" },
		{ "ModuleRelativePath", "Public/Fan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frame_MetaData[] = {
		{ "Category", "Fan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fan_MetaData[] = {
		{ "Category", "Fan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FanGrating_MetaData[] = {
		{ "Category", "Fan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Fan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceDirection_MetaData[] = {
		{ "Category", "Fan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wind_MetaData[] = {
		{ "Category", "Fan" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Fan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fan;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FanGrating;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Wind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFan_Statics::NewProp_Frame = { "Frame", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFan, Frame), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frame_MetaData), NewProp_Frame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFan_Statics::NewProp_Fan = { "Fan", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFan, Fan), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fan_MetaData), NewProp_Fan_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFan_Statics::NewProp_FanGrating = { "FanGrating", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFan, FanGrating), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FanGrating_MetaData), NewProp_FanGrating_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFan_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFan, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFan_Statics::NewProp_ForceDirection = { "ForceDirection", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFan, ForceDirection), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceDirection_MetaData), NewProp_ForceDirection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFan_Statics::NewProp_Wind = { "Wind", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFan, Wind), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wind_MetaData), NewProp_Wind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_Fan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_FanGrating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_ForceDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_Wind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFan_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_JumpyCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFan_Statics::ClassParams = {
	&AFan::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFan_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFan_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFan_Statics::Class_MetaDataParams), Z_Construct_UClass_AFan_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFan()
{
	if (!Z_Registration_Info_UClass_AFan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFan.OuterSingleton, Z_Construct_UClass_AFan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFan.OuterSingleton;
}
template<> JUMPYCPP_API UClass* StaticClass<AFan>()
{
	return AFan::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFan);
AFan::~AFan() {}
// End Class AFan

// Begin Registration
struct Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFan, AFan::StaticClass, TEXT("AFan"), &Z_Registration_Info_UClass_AFan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFan), 4264469042U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_826114797(TEXT("/Script/JumpyCPP"),
	Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
