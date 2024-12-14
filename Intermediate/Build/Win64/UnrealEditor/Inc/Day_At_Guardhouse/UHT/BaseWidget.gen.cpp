// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Day_At_Guardhouse/Public/BaseWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWidget() {}
// Cross Module References
	DAY_AT_GUARDHOUSE_API UClass* Z_Construct_UClass_UBaseWidget();
	DAY_AT_GUARDHOUSE_API UClass* Z_Construct_UClass_UBaseWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidgetBlueprint();
	UPackage* Z_Construct_UPackage__Script_Day_At_Guardhouse();
// End Cross Module References
	void UBaseWidget::StaticRegisterNativesUBaseWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseWidget);
	UClass* Z_Construct_UClass_UBaseWidget_NoRegister()
	{
		return UBaseWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidgetBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_Day_At_Guardhouse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWidget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BaseWidget.h" },
		{ "ModuleRelativePath", "Public/BaseWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseWidget_Statics::ClassParams = {
		&UBaseWidget::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBaseWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseWidget.OuterSingleton, Z_Construct_UClass_UBaseWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseWidget.OuterSingleton;
	}
	template<> DAY_AT_GUARDHOUSE_API UClass* StaticClass<UBaseWidget>()
	{
		return UBaseWidget::StaticClass();
	}
	UBaseWidget::UBaseWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseWidget);
	UBaseWidget::~UBaseWidget() {}
	struct Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_Public_BaseWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_Public_BaseWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseWidget, UBaseWidget::StaticClass, TEXT("UBaseWidget"), &Z_Registration_Info_UClass_UBaseWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseWidget), 1933485660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_Public_BaseWidget_h_198516774(TEXT("/Script/Day_At_Guardhouse"),
		Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_Public_BaseWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TOP_Documents_GitHub_GateKeepers_Dilemma_Source_Day_At_Guardhouse_Public_BaseWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
