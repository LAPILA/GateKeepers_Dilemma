// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Day_At_Guardhouse/DialogueWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueWidget() {}
// Cross Module References
	DAY_AT_GUARDHOUSE_API UClass* Z_Construct_UClass_UDialogueWidget();
	DAY_AT_GUARDHOUSE_API UClass* Z_Construct_UClass_UDialogueWidget_NoRegister();
	DAY_AT_GUARDHOUSE_API UScriptStruct* Z_Construct_UScriptStruct_FNPCData();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Day_At_Guardhouse();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NPCData;
class UScriptStruct* FNPCData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NPCData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NPCData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNPCData, (UObject*)Z_Construct_UPackage__Script_Day_At_Guardhouse(), TEXT("NPCData"));
	}
	return Z_Registration_Info_UScriptStruct_NPCData.OuterSingleton;
}
template<> DAY_AT_GUARDHOUSE_API UScriptStruct* StaticStruct<FNPCData>()
{
	return FNPCData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNPCData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdentifyNumber_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IdentifyNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassportNumber_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PassportNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassportValidityPeriod_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PassportValidityPeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BirthDate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BirthDate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Residence_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Residence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Purpose_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Purpose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static void NewProp_Gender_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stamp_MetaData[];
#endif
		static void NewProp_Stamp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Stamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Diagnosis_MetaData[];
#endif
		static void NewProp_Diagnosis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Diagnosis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NPCType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NPCType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeriodStay_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PeriodStay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNPCData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNPCData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "NPC Data" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Name_MetaData), Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_IdentifyNumber_MetaData[] = {
		{ "Category", "NPC Data" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_IdentifyNumber = { "IdentifyNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCData, IdentifyNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_IdentifyNumber_MetaData), Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_IdentifyNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PassportNumber_MetaData[] = {
		{ "Category", "NPC Data" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PassportNumber = { "PassportNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCData, PassportNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PassportNumber_MetaData), Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PassportNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PassportValidityPeriod_MetaData[] = {
		{ "Category", "NPC Data" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PassportValidityPeriod = { "PassportValidityPeriod", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCData, PassportValidityPeriod), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PassportValidityPeriod_MetaData), Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PassportValidityPeriod_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_BirthDate_MetaData[] = {
		{ "Category", "NPC Data" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_BirthDate = { "BirthDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCData, BirthDate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_BirthDate_MetaData), Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_BirthDate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Residence_MetaData[] = {
		{ "Category", "NPC Data" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Residence = { "Residence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCData, Residence), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Residence_MetaData), Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Residence_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Purpose_MetaData[] = {
		{ "Category", "NPC Data" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Purpose = { "Purpose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCData, Purpose), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Purpose_MetaData), Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Purpose_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "NPC Data" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Gender_SetBit(void* Obj)
	{
		((FNPCData*)Obj)->Gender = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNPCData), &Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Gender_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Gender_MetaData), Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Gender_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Stamp_MetaData[] = {
		{ "Category", "NPC Data" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Stamp_SetBit(void* Obj)
	{
		((FNPCData*)Obj)->Stamp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Stamp = { "Stamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNPCData), &Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Stamp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Stamp_MetaData), Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Stamp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Diagnosis_MetaData[] = {
		{ "Category", "NPC Data" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Diagnosis_SetBit(void* Obj)
	{
		((FNPCData*)Obj)->Diagnosis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Diagnosis = { "Diagnosis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FNPCData), &Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Diagnosis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Diagnosis_MetaData), Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Diagnosis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_NPCType_MetaData[] = {
		{ "Category", "NPC Data" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_NPCType = { "NPCType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCData, NPCType), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_NPCType_MetaData), Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_NPCType_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PeriodStay_MetaData[] = {
		{ "Category", "NPC Data" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PeriodStay = { "PeriodStay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNPCData, PeriodStay), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PeriodStay_MetaData), Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PeriodStay_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNPCData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_IdentifyNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PassportNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PassportValidityPeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_BirthDate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Residence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Purpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Gender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Stamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_Diagnosis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_NPCType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNPCData_Statics::NewProp_PeriodStay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNPCData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Day_At_Guardhouse,
		nullptr,
		&NewStructOps,
		"NPCData",
		Z_Construct_UScriptStruct_FNPCData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::PropPointers),
		sizeof(FNPCData),
		alignof(FNPCData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNPCData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNPCData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FNPCData()
	{
		if (!Z_Registration_Info_UScriptStruct_NPCData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NPCData.InnerSingleton, Z_Construct_UScriptStruct_FNPCData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NPCData.InnerSingleton;
	}
	DEFINE_FUNCTION(UDialogueWidget::execUpdateDialogue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlayerChoice);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateDialogue(Z_Param_PlayerChoice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDialogueWidget::execSetNPCData)
	{
		P_GET_STRUCT_REF(FNPCData,Z_Param_Out_NewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNPCData(Z_Param_Out_NewData);
		P_NATIVE_END;
	}
	void UDialogueWidget::StaticRegisterNativesUDialogueWidget()
	{
		UClass* Class = UDialogueWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNPCData", &UDialogueWidget::execSetNPCData },
			{ "UpdateDialogue", &UDialogueWidget::execUpdateDialogue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics
	{
		struct DialogueWidget_eventSetNPCData_Parms
		{
			FNPCData NewData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::NewProp_NewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueWidget_eventSetNPCData_Parms, NewData), Z_Construct_UScriptStruct_FNPCData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::NewProp_NewData_MetaData), Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::NewProp_NewData_MetaData) }; // 4199538785
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::NewProp_NewData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::Function_MetaDataParams[] = {
		{ "Category", "NPC Management" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "SetNPCData", nullptr, nullptr, Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::DialogueWidget_eventSetNPCData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::DialogueWidget_eventSetNPCData_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogueWidget_SetNPCData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_SetNPCData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics
	{
		struct DialogueWidget_eventUpdateDialogue_Parms
		{
			FString PlayerChoice;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerChoice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerChoice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::NewProp_PlayerChoice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::NewProp_PlayerChoice = { "PlayerChoice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DialogueWidget_eventUpdateDialogue_Parms, PlayerChoice), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::NewProp_PlayerChoice_MetaData), Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::NewProp_PlayerChoice_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::NewProp_PlayerChoice,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dialogue System" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDialogueWidget, nullptr, "UpdateDialogue", nullptr, nullptr, Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::DialogueWidget_eventUpdateDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::DialogueWidget_eventUpdateDialogue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UDialogueWidget_UpdateDialogue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDialogueWidget_UpdateDialogue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueWidget);
	UClass* Z_Construct_UClass_UDialogueWidget_NoRegister()
	{
		return UDialogueWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDialogueWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDialogueWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Day_At_Guardhouse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UDialogueWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDialogueWidget_SetNPCData, "SetNPCData" }, // 1951814331
		{ &Z_Construct_UFunction_UDialogueWidget_UpdateDialogue, "UpdateDialogue" }, // 4169998654
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DialogueWidget.h" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DialogueWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueText = { "DialogueText", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDialogueWidget, DialogueText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueText_MetaData), Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDialogueWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDialogueWidget_Statics::NewProp_DialogueText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDialogueWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueWidget_Statics::ClassParams = {
		&UDialogueWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDialogueWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UDialogueWidget()
	{
		if (!Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton, Z_Construct_UClass_UDialogueWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDialogueWidget.OuterSingleton;
	}
	template<> DAY_AT_GUARDHOUSE_API UClass* StaticClass<UDialogueWidget>()
	{
		return UDialogueWidget::StaticClass();
	}
	UDialogueWidget::UDialogueWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueWidget);
	UDialogueWidget::~UDialogueWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_DialogueWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_DialogueWidget_h_Statics::ScriptStructInfo[] = {
		{ FNPCData::StaticStruct, Z_Construct_UScriptStruct_FNPCData_Statics::NewStructOps, TEXT("NPCData"), &Z_Registration_Info_UScriptStruct_NPCData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNPCData), 4199538785U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_DialogueWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueWidget, UDialogueWidget::StaticClass, TEXT("UDialogueWidget"), &Z_Registration_Info_UClass_UDialogueWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueWidget), 1144504778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_DialogueWidget_h_1295391421(TEXT("/Script/Day_At_Guardhouse"),
		Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_DialogueWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_DialogueWidget_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_DialogueWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_DialogueWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
