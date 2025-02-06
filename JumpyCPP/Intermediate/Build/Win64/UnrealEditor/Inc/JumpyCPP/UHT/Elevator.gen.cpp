// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpyCPP/Public/Elevator.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElevator() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
JUMPYCPP_API UClass* Z_Construct_UClass_AElevator();
JUMPYCPP_API UClass* Z_Construct_UClass_AElevator_NoRegister();
UPackage* Z_Construct_UPackage__Script_JumpyCPP();
// End Cross Module References

// Begin Class AElevator Function OnPlayerEnter
struct Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics
{
	struct Elevator_eventOnPlayerEnter_Parms
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
		{ "ModuleRelativePath", "Public/Elevator.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Elevator_eventOnPlayerEnter_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Elevator_eventOnPlayerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Elevator_eventOnPlayerEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Elevator_eventOnPlayerEnter_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Elevator_eventOnPlayerEnter_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Elevator_eventOnPlayerEnter_Parms), &Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Elevator_eventOnPlayerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElevator, nullptr, "OnPlayerEnter", nullptr, nullptr, Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::Elevator_eventOnPlayerEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::Elevator_eventOnPlayerEnter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AElevator_OnPlayerEnter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AElevator_OnPlayerEnter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AElevator::execOnPlayerEnter)
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
// End Class AElevator Function OnPlayerEnter

// Begin Class AElevator Function OnPlayerExit
struct Z_Construct_UFunction_AElevator_OnPlayerExit_Statics
{
	struct Elevator_eventOnPlayerExit_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elevator.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Elevator_eventOnPlayerExit_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Elevator_eventOnPlayerExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Elevator_eventOnPlayerExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Elevator_eventOnPlayerExit_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElevator, nullptr, "OnPlayerExit", nullptr, nullptr, Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::Elevator_eventOnPlayerExit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::Elevator_eventOnPlayerExit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AElevator_OnPlayerExit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AElevator_OnPlayerExit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AElevator::execOnPlayerExit)
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
// End Class AElevator Function OnPlayerExit

// Begin Class AElevator Function SetGoToEndLocation
struct Z_Construct_UFunction_AElevator_SetGoToEndLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elevator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AElevator_SetGoToEndLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AElevator, nullptr, "SetGoToEndLocation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AElevator_SetGoToEndLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AElevator_SetGoToEndLocation_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AElevator_SetGoToEndLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AElevator_SetGoToEndLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AElevator::execSetGoToEndLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGoToEndLocation();
	P_NATIVE_END;
}
// End Class AElevator Function SetGoToEndLocation

// Begin Class AElevator
void AElevator::StaticRegisterNativesAElevator()
{
	UClass* Class = AElevator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPlayerEnter", &AElevator::execOnPlayerEnter },
		{ "OnPlayerExit", &AElevator::execOnPlayerExit },
		{ "SetGoToEndLocation", &AElevator::execSetGoToEndLocation },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AElevator);
UClass* Z_Construct_UClass_AElevator_NoRegister()
{
	return AElevator::StaticClass();
}
struct Z_Construct_UClass_AElevator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Elevator.h" },
		{ "ModuleRelativePath", "Public/Elevator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[] = {
		{ "Category", "Elevator" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/Elevator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[] = {
		{ "Category", "Elevator" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/Elevator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Elevator_MetaData[] = {
		{ "Category", "Elevator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elevator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[] = {
		{ "Category", "Elevator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elevator.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerStayDown_MetaData[] = {
		{ "Category", "Elevator" },
		{ "ModuleRelativePath", "Public/Elevator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Elevator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerStayDown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AElevator_OnPlayerEnter, "OnPlayerEnter" }, // 2925814750
		{ &Z_Construct_UFunction_AElevator_OnPlayerExit, "OnPlayerExit" }, // 193244549
		{ &Z_Construct_UFunction_AElevator_SetGoToEndLocation, "SetGoToEndLocation" }, // 1370212065
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AElevator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElevator_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElevator, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartLocation_MetaData), NewProp_StartLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AElevator_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElevator, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndLocation_MetaData), NewProp_EndLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElevator_Statics::NewProp_Elevator = { "Elevator", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElevator, Elevator), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Elevator_MetaData), NewProp_Elevator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AElevator_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElevator, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Box_MetaData), NewProp_Box_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AElevator_Statics::NewProp_TimerStayDown = { "TimerStayDown", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AElevator, TimerStayDown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerStayDown_MetaData), NewProp_TimerStayDown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AElevator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElevator_Statics::NewProp_StartLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElevator_Statics::NewProp_EndLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElevator_Statics::NewProp_Elevator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElevator_Statics::NewProp_Box,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AElevator_Statics::NewProp_TimerStayDown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AElevator_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AElevator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_JumpyCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AElevator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AElevator_Statics::ClassParams = {
	&AElevator::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AElevator_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AElevator_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AElevator_Statics::Class_MetaDataParams), Z_Construct_UClass_AElevator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AElevator()
{
	if (!Z_Registration_Info_UClass_AElevator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AElevator.OuterSingleton, Z_Construct_UClass_AElevator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AElevator.OuterSingleton;
}
template<> JUMPYCPP_API UClass* StaticClass<AElevator>()
{
	return AElevator::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AElevator);
AElevator::~AElevator() {}
// End Class AElevator

// Begin Registration
struct Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_Elevator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AElevator, AElevator::StaticClass, TEXT("AElevator"), &Z_Registration_Info_UClass_AElevator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AElevator), 3595513425U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_Elevator_h_1694771258(TEXT("/Script/JumpyCPP"),
	Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_Elevator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JumpyCPP_Source_JumpyCPP_Public_Elevator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
