// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpyCPP/Public/Fan.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFan() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
JUMPYCPP_API UClass* Z_Construct_UClass_AFan();
JUMPYCPP_API UClass* Z_Construct_UClass_AFan_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_JumpyCPP();
// End Cross Module References

// Begin Class AFan Function OnPlayerEnter
struct Z_Construct_UFunction_AFan_OnPlayerEnter_Statics
{
	struct Fan_eventOnPlayerEnter_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fan_eventOnPlayerEnter_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fan_eventOnPlayerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fan_eventOnPlayerEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fan_eventOnPlayerEnter_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Fan_eventOnPlayerEnter_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Fan_eventOnPlayerEnter_Parms), &Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fan_eventOnPlayerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFan, nullptr, "OnPlayerEnter", nullptr, nullptr, Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::Fan_eventOnPlayerEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::Fan_eventOnPlayerEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFan_OnPlayerEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFan_OnPlayerEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFan::execOnPlayerEnter)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerEnter(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AFan Function OnPlayerEnter

// Begin Class AFan Function OnPlayerExit
struct Z_Construct_UFunction_AFan_OnPlayerExit_Statics
{
	struct Fan_eventOnPlayerExit_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Fan.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFan_OnPlayerExit_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fan_eventOnPlayerExit_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFan_OnPlayerExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fan_eventOnPlayerExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFan_OnPlayerExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fan_eventOnPlayerExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFan_OnPlayerExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Fan_eventOnPlayerExit_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFan_OnPlayerExit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFan_OnPlayerExit_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFan_OnPlayerExit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFan_OnPlayerExit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFan_OnPlayerExit_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFan_OnPlayerExit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFan_OnPlayerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFan, nullptr, "OnPlayerExit", nullptr, nullptr, Z_Construct_UFunction_AFan_OnPlayerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFan_OnPlayerExit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFan_OnPlayerExit_Statics::Fan_eventOnPlayerExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFan_OnPlayerExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFan_OnPlayerExit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFan_OnPlayerExit_Statics::Fan_eventOnPlayerExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFan_OnPlayerExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFan_OnPlayerExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFan::execOnPlayerExit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerExit(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AFan Function OnPlayerExit

// Begin Class AFan
void AFan::StaticRegisterNativesAFan()
{
	UClass* Class = AFan::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlayerEnter", &AFan::execOnPlayerEnter },
		{ "OnPlayerExit", &AFan::execOnPlayerExit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Power_MetaData[] = {
		{ "Category", "Fan" },
		{ "ModuleRelativePath", "Public/Fan.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Frame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fan;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FanGrating;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceDirection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Wind;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Power;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFan_OnPlayerEnter, "OnPlayerEnter" }, // 133533867
		{ &Z_Construct_UFunction_AFan_OnPlayerExit, "OnPlayerExit" }, // 2876157723
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
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
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFan_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFan, Power), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Power_MetaData), NewProp_Power_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_Frame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_Fan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_FanGrating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_ForceDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_Wind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFan_Statics::NewProp_Power,
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
	FuncInfo,
	Z_Construct_UClass_AFan_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_AFan, AFan::StaticClass, TEXT("AFan"), &Z_Registration_Info_UClass_AFan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFan), 1070093364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_3628104555(TEXT("/Script/JumpyCPP"),
	Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_Fan_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
