// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonProject/Public/FreeRunnerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFreeRunnerGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FIRSTPERSONPROJECT_API UClass* Z_Construct_UClass_AFreeRunnerGameMode();
	FIRSTPERSONPROJECT_API UClass* Z_Construct_UClass_AFreeRunnerGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstPersonProject();
// End Cross Module References
	void AFreeRunnerGameMode::StaticRegisterNativesAFreeRunnerGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFreeRunnerGameMode);
	UClass* Z_Construct_UClass_AFreeRunnerGameMode_NoRegister()
	{
		return AFreeRunnerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFreeRunnerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFreeRunnerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFreeRunnerGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFreeRunnerGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FreeRunnerGameMode.h" },
		{ "ModuleRelativePath", "Public/FreeRunnerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFreeRunnerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFreeRunnerGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFreeRunnerGameMode_Statics::ClassParams = {
		&AFreeRunnerGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFreeRunnerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFreeRunnerGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AFreeRunnerGameMode()
	{
		if (!Z_Registration_Info_UClass_AFreeRunnerGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFreeRunnerGameMode.OuterSingleton, Z_Construct_UClass_AFreeRunnerGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFreeRunnerGameMode.OuterSingleton;
	}
	template<> FIRSTPERSONPROJECT_API UClass* StaticClass<AFreeRunnerGameMode>()
	{
		return AFreeRunnerGameMode::StaticClass();
	}
	AFreeRunnerGameMode::AFreeRunnerGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFreeRunnerGameMode);
	AFreeRunnerGameMode::~AFreeRunnerGameMode() {}
	struct Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFreeRunnerGameMode, AFreeRunnerGameMode::StaticClass, TEXT("AFreeRunnerGameMode"), &Z_Registration_Info_UClass_AFreeRunnerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFreeRunnerGameMode), 1881774043U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameMode_h_1114442410(TEXT("/Script/FirstPersonProject"),
		Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
