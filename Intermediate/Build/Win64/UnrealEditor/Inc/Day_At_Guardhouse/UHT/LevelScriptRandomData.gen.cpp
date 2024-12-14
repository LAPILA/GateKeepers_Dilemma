// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Day_At_Guardhouse/LevelScriptRandomData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelScriptRandomData() {}
// Cross Module References
	DAY_AT_GUARDHOUSE_API UClass* Z_Construct_UClass_ALevelScriptRandomData();
	DAY_AT_GUARDHOUSE_API UClass* Z_Construct_UClass_ALevelScriptRandomData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelScriptActor();
	UPackage* Z_Construct_UPackage__Script_Day_At_Guardhouse();
// End Cross Module References
	DEFINE_FUNCTION(ALevelScriptRandomData::execDebugPrintValidationResults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugPrintValidationResults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelScriptRandomData::execSetValidationProbabilities)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewErrorProbability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewNameProbability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewIDProbability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPNProbability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPVProbability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGenderProbability);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewBirthProbability);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValidationProbabilities(Z_Param_NewErrorProbability,Z_Param_NewNameProbability,Z_Param_NewIDProbability,Z_Param_NewPNProbability,Z_Param_NewPVProbability,Z_Param_NewGenderProbability,Z_Param_NewBirthProbability);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelScriptRandomData::execValidateRandomData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ValidateRandomData();
		P_NATIVE_END;
	}
	void ALevelScriptRandomData::StaticRegisterNativesALevelScriptRandomData()
	{
		UClass* Class = ALevelScriptRandomData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DebugPrintValidationResults", &ALevelScriptRandomData::execDebugPrintValidationResults },
			{ "SetValidationProbabilities", &ALevelScriptRandomData::execSetValidationProbabilities },
			{ "ValidateRandomData", &ALevelScriptRandomData::execValidateRandomData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelScriptRandomData_DebugPrintValidationResults_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelScriptRandomData_DebugPrintValidationResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "LevelScriptRandomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelScriptRandomData_DebugPrintValidationResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptRandomData, nullptr, "DebugPrintValidationResults", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptRandomData_DebugPrintValidationResults_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelScriptRandomData_DebugPrintValidationResults_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelScriptRandomData_DebugPrintValidationResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelScriptRandomData_DebugPrintValidationResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics
	{
		struct LevelScriptRandomData_eventSetValidationProbabilities_Parms
		{
			float NewErrorProbability;
			float NewNameProbability;
			float NewIDProbability;
			float NewPNProbability;
			float NewPVProbability;
			float NewGenderProbability;
			float NewBirthProbability;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewErrorProbability;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewNameProbability;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIDProbability;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPNProbability;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPVProbability;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewGenderProbability;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewBirthProbability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewErrorProbability = { "NewErrorProbability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelScriptRandomData_eventSetValidationProbabilities_Parms, NewErrorProbability), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewNameProbability = { "NewNameProbability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelScriptRandomData_eventSetValidationProbabilities_Parms, NewNameProbability), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewIDProbability = { "NewIDProbability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelScriptRandomData_eventSetValidationProbabilities_Parms, NewIDProbability), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewPNProbability = { "NewPNProbability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelScriptRandomData_eventSetValidationProbabilities_Parms, NewPNProbability), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewPVProbability = { "NewPVProbability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelScriptRandomData_eventSetValidationProbabilities_Parms, NewPVProbability), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewGenderProbability = { "NewGenderProbability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelScriptRandomData_eventSetValidationProbabilities_Parms, NewGenderProbability), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewBirthProbability = { "NewBirthProbability", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LevelScriptRandomData_eventSetValidationProbabilities_Parms, NewBirthProbability), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewErrorProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewNameProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewIDProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewPNProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewPVProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewGenderProbability,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::NewProp_NewBirthProbability,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "LevelScriptRandomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptRandomData, nullptr, "SetValidationProbabilities", nullptr, nullptr, Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::LevelScriptRandomData_eventSetValidationProbabilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::LevelScriptRandomData_eventSetValidationProbabilities_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelScriptRandomData_ValidateRandomData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelScriptRandomData_ValidateRandomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Validation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "LevelScriptRandomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelScriptRandomData_ValidateRandomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelScriptRandomData, nullptr, "ValidateRandomData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelScriptRandomData_ValidateRandomData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALevelScriptRandomData_ValidateRandomData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALevelScriptRandomData_ValidateRandomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelScriptRandomData_ValidateRandomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelScriptRandomData);
	UClass* Z_Construct_UClass_ALevelScriptRandomData_NoRegister()
	{
		return ALevelScriptRandomData::StaticClass();
	}
	struct Z_Construct_UClass_ALevelScriptRandomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bErrorData_MetaData[];
#endif
		static void NewProp_bErrorData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bErrorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNameValid_MetaData[];
#endif
		static void NewProp_bNameValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNameValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIDValid_MetaData[];
#endif
		static void NewProp_bIDValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIDValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPNValid_MetaData[];
#endif
		static void NewProp_bPNValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPNValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPVValid_MetaData[];
#endif
		static void NewProp_bPVValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPVValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenderValid_MetaData[];
#endif
		static void NewProp_bGenderValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenderValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBirthValid_MetaData[];
#endif
		static void NewProp_bBirthValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBirthValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelScriptRandomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALevelScriptActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Day_At_Guardhouse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptRandomData_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelScriptRandomData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelScriptRandomData_DebugPrintValidationResults, "DebugPrintValidationResults" }, // 2548355340
		{ &Z_Construct_UFunction_ALevelScriptRandomData_SetValidationProbabilities, "SetValidationProbabilities" }, // 731025115
		{ &Z_Construct_UFunction_ALevelScriptRandomData_ValidateRandomData, "ValidateRandomData" }, // 1856375472
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptRandomData_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScriptRandomData_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd, \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "LevelScriptRandomData.h" },
		{ "ModuleRelativePath", "LevelScriptRandomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd, \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bErrorData_MetaData[] = {
		{ "Category", "Random Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "LevelScriptRandomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	void Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bErrorData_SetBit(void* Obj)
	{
		((ALevelScriptRandomData*)Obj)->bErrorData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bErrorData = { "bErrorData", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALevelScriptRandomData), &Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bErrorData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bErrorData_MetaData), Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bErrorData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bNameValid_MetaData[] = {
		{ "Category", "Random Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd */" },
#endif
		{ "ModuleRelativePath", "LevelScriptRandomData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	void Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bNameValid_SetBit(void* Obj)
	{
		((ALevelScriptRandomData*)Obj)->bNameValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bNameValid = { "bNameValid", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALevelScriptRandomData), &Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bNameValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bNameValid_MetaData), Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bNameValid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bIDValid_MetaData[] = {
		{ "Category", "Random Data" },
		{ "ModuleRelativePath", "LevelScriptRandomData.h" },
	};
#endif
	void Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bIDValid_SetBit(void* Obj)
	{
		((ALevelScriptRandomData*)Obj)->bIDValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bIDValid = { "bIDValid", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALevelScriptRandomData), &Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bIDValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bIDValid_MetaData), Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bIDValid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPNValid_MetaData[] = {
		{ "Category", "Random Data" },
		{ "ModuleRelativePath", "LevelScriptRandomData.h" },
	};
#endif
	void Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPNValid_SetBit(void* Obj)
	{
		((ALevelScriptRandomData*)Obj)->bPNValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPNValid = { "bPNValid", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALevelScriptRandomData), &Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPNValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPNValid_MetaData), Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPNValid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPVValid_MetaData[] = {
		{ "Category", "Random Data" },
		{ "ModuleRelativePath", "LevelScriptRandomData.h" },
	};
#endif
	void Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPVValid_SetBit(void* Obj)
	{
		((ALevelScriptRandomData*)Obj)->bPVValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPVValid = { "bPVValid", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALevelScriptRandomData), &Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPVValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPVValid_MetaData), Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPVValid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bGenderValid_MetaData[] = {
		{ "Category", "Random Data" },
		{ "ModuleRelativePath", "LevelScriptRandomData.h" },
	};
#endif
	void Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bGenderValid_SetBit(void* Obj)
	{
		((ALevelScriptRandomData*)Obj)->bGenderValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bGenderValid = { "bGenderValid", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALevelScriptRandomData), &Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bGenderValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bGenderValid_MetaData), Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bGenderValid_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bBirthValid_MetaData[] = {
		{ "Category", "Random Data" },
		{ "ModuleRelativePath", "LevelScriptRandomData.h" },
	};
#endif
	void Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bBirthValid_SetBit(void* Obj)
	{
		((ALevelScriptRandomData*)Obj)->bBirthValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bBirthValid = { "bBirthValid", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALevelScriptRandomData), &Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bBirthValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bBirthValid_MetaData), Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bBirthValid_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelScriptRandomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bErrorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bNameValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bIDValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPNValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bPVValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bGenderValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelScriptRandomData_Statics::NewProp_bBirthValid,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelScriptRandomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelScriptRandomData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelScriptRandomData_Statics::ClassParams = {
		&ALevelScriptRandomData::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelScriptRandomData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptRandomData_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptRandomData_Statics::Class_MetaDataParams), Z_Construct_UClass_ALevelScriptRandomData_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALevelScriptRandomData_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALevelScriptRandomData()
	{
		if (!Z_Registration_Info_UClass_ALevelScriptRandomData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelScriptRandomData.OuterSingleton, Z_Construct_UClass_ALevelScriptRandomData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelScriptRandomData.OuterSingleton;
	}
	template<> DAY_AT_GUARDHOUSE_API UClass* StaticClass<ALevelScriptRandomData>()
	{
		return ALevelScriptRandomData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelScriptRandomData);
	ALevelScriptRandomData::~ALevelScriptRandomData() {}
	struct Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_LevelScriptRandomData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_LevelScriptRandomData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelScriptRandomData, ALevelScriptRandomData::StaticClass, TEXT("ALevelScriptRandomData"), &Z_Registration_Info_UClass_ALevelScriptRandomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelScriptRandomData), 2793228267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_LevelScriptRandomData_h_826313285(TEXT("/Script/Day_At_Guardhouse"),
		Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_LevelScriptRandomData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_LevelScriptRandomData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
