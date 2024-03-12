// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonProject/Public/FreeRunnerGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFreeRunnerGameInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	FIRSTPERSONPROJECT_API UClass* Z_Construct_UClass_UFreeRunnerGameInstance();
	FIRSTPERSONPROJECT_API UClass* Z_Construct_UClass_UFreeRunnerGameInstance_NoRegister();
	FIRSTPERSONPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGameAssets();
	GAMEPLAYCAMERAS_API UClass* Z_Construct_UClass_ULegacyCameraShake_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstPersonProject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameAssets;
class UScriptStruct* FGameAssets::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameAssets.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameAssets.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameAssets, (UObject*)Z_Construct_UPackage__Script_FirstPersonProject(), TEXT("GameAssets"));
	}
	return Z_Registration_Info_UScriptStruct_GameAssets.OuterSingleton;
}
template<> FIRSTPERSONPROJECT_API UScriptStruct* StaticStruct<FGameAssets>()
{
	return FGameAssets::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameAssets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakeActiveAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeActiveAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraShakeActiveAssets;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraShakePassiveAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakePassiveAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraShakePassiveAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAssets_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/FreeRunnerGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameAssets_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameAssets>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakeActiveAssets_Inner = { "CameraShakeActiveAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULegacyCameraShake_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakeActiveAssets_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Public/FreeRunnerGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakeActiveAssets = { "CameraShakeActiveAssets", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAssets, CameraShakeActiveAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakeActiveAssets_MetaData), Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakeActiveAssets_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakePassiveAssets_Inner = { "CameraShakePassiveAssets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakePassiveAssets_MetaData[] = {
		{ "Category", "CameraShake" },
		{ "ModuleRelativePath", "Public/FreeRunnerGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakePassiveAssets = { "CameraShakePassiveAssets", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGameAssets, CameraShakePassiveAssets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakePassiveAssets_MetaData), Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakePassiveAssets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakeActiveAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakeActiveAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakePassiveAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameAssets_Statics::NewProp_CameraShakePassiveAssets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameAssets_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonProject,
		nullptr,
		&NewStructOps,
		"GameAssets",
		Z_Construct_UScriptStruct_FGameAssets_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAssets_Statics::PropPointers),
		sizeof(FGameAssets),
		alignof(FGameAssets),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAssets_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGameAssets_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameAssets_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FGameAssets()
	{
		if (!Z_Registration_Info_UScriptStruct_GameAssets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameAssets.InnerSingleton, Z_Construct_UScriptStruct_FGameAssets_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameAssets.InnerSingleton;
	}
	void UFreeRunnerGameInstance::StaticRegisterNativesUFreeRunnerGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFreeRunnerGameInstance);
	UClass* Z_Construct_UClass_UFreeRunnerGameInstance_NoRegister()
	{
		return UFreeRunnerGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFreeRunnerGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameAssets_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFreeRunnerGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFreeRunnerGameInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFreeRunnerGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FreeRunnerGameInstance.h" },
		{ "ModuleRelativePath", "Public/FreeRunnerGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFreeRunnerGameInstance_Statics::NewProp_GameAssets_MetaData[] = {
		{ "Category", "Structs" },
		{ "ModuleRelativePath", "Public/FreeRunnerGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFreeRunnerGameInstance_Statics::NewProp_GameAssets = { "GameAssets", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFreeRunnerGameInstance, GameAssets), Z_Construct_UScriptStruct_FGameAssets, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFreeRunnerGameInstance_Statics::NewProp_GameAssets_MetaData), Z_Construct_UClass_UFreeRunnerGameInstance_Statics::NewProp_GameAssets_MetaData) }; // 3084900831
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFreeRunnerGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFreeRunnerGameInstance_Statics::NewProp_GameAssets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFreeRunnerGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFreeRunnerGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFreeRunnerGameInstance_Statics::ClassParams = {
		&UFreeRunnerGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFreeRunnerGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFreeRunnerGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFreeRunnerGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UFreeRunnerGameInstance_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFreeRunnerGameInstance_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFreeRunnerGameInstance()
	{
		if (!Z_Registration_Info_UClass_UFreeRunnerGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFreeRunnerGameInstance.OuterSingleton, Z_Construct_UClass_UFreeRunnerGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFreeRunnerGameInstance.OuterSingleton;
	}
	template<> FIRSTPERSONPROJECT_API UClass* StaticClass<UFreeRunnerGameInstance>()
	{
		return UFreeRunnerGameInstance::StaticClass();
	}
	UFreeRunnerGameInstance::UFreeRunnerGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFreeRunnerGameInstance);
	UFreeRunnerGameInstance::~UFreeRunnerGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameInstance_h_Statics::ScriptStructInfo[] = {
		{ FGameAssets::StaticStruct, Z_Construct_UScriptStruct_FGameAssets_Statics::NewStructOps, TEXT("GameAssets"), &Z_Registration_Info_UScriptStruct_GameAssets, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameAssets), 3084900831U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFreeRunnerGameInstance, UFreeRunnerGameInstance::StaticClass, TEXT("UFreeRunnerGameInstance"), &Z_Registration_Info_UClass_UFreeRunnerGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFreeRunnerGameInstance), 3645046492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameInstance_h_936761475(TEXT("/Script/FirstPersonProject"),
		Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreeRunnerGameInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
