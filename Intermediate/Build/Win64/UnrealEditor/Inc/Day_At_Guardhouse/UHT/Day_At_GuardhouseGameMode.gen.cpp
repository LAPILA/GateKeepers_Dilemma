// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Day_At_Guardhouse/Day_At_GuardhouseGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDay_At_GuardhouseGameMode() {}
// Cross Module References
	DAY_AT_GUARDHOUSE_API UClass* Z_Construct_UClass_ADay_At_GuardhouseGameMode();
	DAY_AT_GUARDHOUSE_API UClass* Z_Construct_UClass_ADay_At_GuardhouseGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Day_At_Guardhouse();
// End Cross Module References
	void ADay_At_GuardhouseGameMode::StaticRegisterNativesADay_At_GuardhouseGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADay_At_GuardhouseGameMode);
	UClass* Z_Construct_UClass_ADay_At_GuardhouseGameMode_NoRegister()
	{
		return ADay_At_GuardhouseGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADay_At_GuardhouseGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADay_At_GuardhouseGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Day_At_Guardhouse,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADay_At_GuardhouseGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADay_At_GuardhouseGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Day_At_GuardhouseGameMode.h" },
		{ "ModuleRelativePath", "Day_At_GuardhouseGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADay_At_GuardhouseGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADay_At_GuardhouseGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADay_At_GuardhouseGameMode_Statics::ClassParams = {
		&ADay_At_GuardhouseGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADay_At_GuardhouseGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADay_At_GuardhouseGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADay_At_GuardhouseGameMode()
	{
		if (!Z_Registration_Info_UClass_ADay_At_GuardhouseGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADay_At_GuardhouseGameMode.OuterSingleton, Z_Construct_UClass_ADay_At_GuardhouseGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADay_At_GuardhouseGameMode.OuterSingleton;
	}
	template<> DAY_AT_GUARDHOUSE_API UClass* StaticClass<ADay_At_GuardhouseGameMode>()
	{
		return ADay_At_GuardhouseGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADay_At_GuardhouseGameMode);
	ADay_At_GuardhouseGameMode::~ADay_At_GuardhouseGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_Day_At_GuardhouseGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_Day_At_GuardhouseGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADay_At_GuardhouseGameMode, ADay_At_GuardhouseGameMode::StaticClass, TEXT("ADay_At_GuardhouseGameMode"), &Z_Registration_Info_UClass_ADay_At_GuardhouseGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADay_At_GuardhouseGameMode), 985637891U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_Day_At_GuardhouseGameMode_h_282796565(TEXT("/Script/Day_At_Guardhouse"),
		Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_Day_At_GuardhouseGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_GateKeepers_Dilemma_Source_Day_At_Guardhouse_Day_At_GuardhouseGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
