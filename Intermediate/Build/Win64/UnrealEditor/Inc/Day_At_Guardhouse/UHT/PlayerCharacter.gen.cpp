// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Day_At_Guardhouse/PlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DAY_AT_GUARDHOUSE_API UClass* Z_Construct_UClass_APlayerCharacter();
	DAY_AT_GUARDHOUSE_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Day_At_Guardhouse();
// End Cross Module References
	DEFINE_FUNCTION(APlayerCharacter::execStartArrest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartArrest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execCancelInteraction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelInteraction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execEnablePlayerInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnablePlayerInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerCharacter::execDisablePlayerInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisablePlayerInput();
		P_NATIVE_END;
	}
	static FName NAME_APlayerCharacter_BackMove_Event = FName(TEXT("BackMove_Event"));
	void APlayerCharacter::BackMove_Event()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCharacter_BackMove_Event),NULL);
	}
	static FName NAME_APlayerCharacter_CheckList = FName(TEXT("CheckList"));
	void APlayerCharacter::CheckList()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCharacter_CheckList),NULL);
	}
	static FName NAME_APlayerCharacter_EndMove_Event = FName(TEXT("EndMove_Event"));
	void APlayerCharacter::EndMove_Event()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCharacter_EndMove_Event),NULL);
	}
	static FName NAME_APlayerCharacter_QuestionButton = FName(TEXT("QuestionButton"));
	void APlayerCharacter::QuestionButton()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCharacter_QuestionButton),NULL);
	}
	static FName NAME_APlayerCharacter_ScanBP = FName(TEXT("ScanBP"));
	void APlayerCharacter::ScanBP()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCharacter_ScanBP),NULL);
	}
	static FName NAME_APlayerCharacter_StartMove_Event = FName(TEXT("StartMove_Event"));
	void APlayerCharacter::StartMove_Event()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCharacter_StartMove_Event),NULL);
	}
	static FName NAME_APlayerCharacter_ViewInformation = FName(TEXT("ViewInformation"));
	void APlayerCharacter::ViewInformation()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerCharacter_ViewInformation),NULL);
	}
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
		UClass* Class = APlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelInteraction", &APlayerCharacter::execCancelInteraction },
			{ "DisablePlayerInput", &APlayerCharacter::execDisablePlayerInput },
			{ "EnablePlayerInput", &APlayerCharacter::execEnablePlayerInput },
			{ "StartArrest", &APlayerCharacter::execStartArrest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCharacter_BackMove_Event_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_BackMove_Event_Statics::Function_MetaDataParams[] = {
		{ "Category", "NPC" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_BackMove_Event_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "BackMove_Event", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_BackMove_Event_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_BackMove_Event_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_BackMove_Event()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_BackMove_Event_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_CancelInteraction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_CancelInteraction_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_CancelInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "CancelInteraction", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CancelInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_CancelInteraction_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_CancelInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_CancelInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_CheckList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_CheckList_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_CheckList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "CheckList", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_CheckList_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_CheckList_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_CheckList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_CheckList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Disable player input\n//\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disable player input\n\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "DisablePlayerInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enable player input\n//\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable player input\n\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "EnablePlayerInput", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_EndMove_Event_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_EndMove_Event_Statics::Function_MetaDataParams[] = {
		{ "Category", "NPC" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_EndMove_Event_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "EndMove_Event", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_EndMove_Event_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_EndMove_Event_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_EndMove_Event()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_EndMove_Event_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_QuestionButton_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_QuestionButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_QuestionButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "QuestionButton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_QuestionButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_QuestionButton_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_QuestionButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_QuestionButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_ScanBP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_ScanBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_ScanBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "ScanBP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ScanBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_ScanBP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_ScanBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_ScanBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_StartArrest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_StartArrest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_StartArrest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "StartArrest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_StartArrest_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_StartArrest_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_StartArrest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_StartArrest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_StartMove_Event_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_StartMove_Event_Statics::Function_MetaDataParams[] = {
		{ "Category", "NPC" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_StartMove_Event_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "StartMove_Event", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_StartMove_Event_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_StartMove_Event_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_StartMove_Event()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_StartMove_Event_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerCharacter_ViewInformation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_ViewInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_ViewInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "ViewInformation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_ViewInformation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_ViewInformation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_ViewInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_ViewInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCharacter);
	UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
	{
		return APlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInteracting_MetaData[];
#endif
		static void NewProp_bIsInteracting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInteracting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsArrest_MetaData[];
#endif
		static void NewProp_bIsArrest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArrest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCheckObject_MetaData[];
#endif
		static void NewProp_bIsCheckObject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCheckObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetCheckList_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetCheckList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetInformation_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetInformation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetGuide_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetGuide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetWarning_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Day_At_Guardhouse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_BackMove_Event, "BackMove_Event" }, // 2697135740
		{ &Z_Construct_UFunction_APlayerCharacter_CancelInteraction, "CancelInteraction" }, // 4280913465
		{ &Z_Construct_UFunction_APlayerCharacter_CheckList, "CheckList" }, // 4067285426
		{ &Z_Construct_UFunction_APlayerCharacter_DisablePlayerInput, "DisablePlayerInput" }, // 4005163358
		{ &Z_Construct_UFunction_APlayerCharacter_EnablePlayerInput, "EnablePlayerInput" }, // 2416652106
		{ &Z_Construct_UFunction_APlayerCharacter_EndMove_Event, "EndMove_Event" }, // 3596332152
		{ &Z_Construct_UFunction_APlayerCharacter_QuestionButton, "QuestionButton" }, // 468995204
		{ &Z_Construct_UFunction_APlayerCharacter_ScanBP, "ScanBP" }, // 2708156363
		{ &Z_Construct_UFunction_APlayerCharacter_StartArrest, "StartArrest" }, // 2865938673
		{ &Z_Construct_UFunction_APlayerCharacter_StartMove_Event, "StartMove_Event" }, // 3358005440
		{ &Z_Construct_UFunction_APlayerCharacter_ViewInformation, "ViewInformation" }, // 2100128158
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacter.h" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetClass_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsInteracting_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsInteracting_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->bIsInteracting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsInteracting = { "bIsInteracting", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsInteracting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsInteracting_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsInteracting_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsArrest_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsArrest_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->bIsArrest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsArrest = { "bIsArrest", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsArrest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsArrest_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsArrest_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsCheckObject_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	void Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsCheckObject_SetBit(void* Obj)
	{
		((APlayerCharacter*)Obj)->bIsCheckObject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsCheckObject = { "bIsCheckObject", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCharacter), &Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsCheckObject_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsCheckObject_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsCheckObject_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetCheckList_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetCheckList = { "WidgetCheckList", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, WidgetCheckList), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetCheckList_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetCheckList_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetInformation_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetInformation = { "WidgetInformation", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, WidgetInformation), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetInformation_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetInformation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetGuide_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetGuide = { "WidgetGuide", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, WidgetGuide), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetGuide_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetGuide_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetWarning_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetWarning = { "WidgetWarning", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, WidgetWarning), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetWarning_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetWarning_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera component" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CameraComponent_MetaData), Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CameraComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsInteracting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsArrest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_bIsCheckObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetCheckList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetGuide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_WidgetWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
		&APlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_APlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
	}
	template<> DAY_AT_GUARDHOUSE_API UClass* StaticClass<APlayerCharacter>()
	{
		return APlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
	APlayerCharacter::~APlayerCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_PlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_PlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 2486445737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_PlayerCharacter_h_1815800782(TEXT("/Script/Day_At_Guardhouse"),
		Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_PlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_PlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
