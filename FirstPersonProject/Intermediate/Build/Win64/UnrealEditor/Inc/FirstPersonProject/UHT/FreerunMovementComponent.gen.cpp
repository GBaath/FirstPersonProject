// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonProject/Public/FreerunMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFreerunMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	FIRSTPERSONPROJECT_API UClass* Z_Construct_UClass_UFreerunMovementComponent();
	FIRSTPERSONPROJECT_API UClass* Z_Construct_UClass_UFreerunMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstPersonProject();
// End Cross Module References
	void UFreerunMovementComponent::StaticRegisterNativesUFreerunMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFreerunMovementComponent);
	UClass* Z_Construct_UClass_UFreerunMovementComponent_NoRegister()
	{
		return UFreerunMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFreerunMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFreerunMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFreerunMovementComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFreerunMovementComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FreerunMovementComponent.h" },
		{ "ModuleRelativePath", "Public/FreerunMovementComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFreerunMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFreerunMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFreerunMovementComponent_Statics::ClassParams = {
		&UFreerunMovementComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFreerunMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UFreerunMovementComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFreerunMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UFreerunMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFreerunMovementComponent.OuterSingleton, Z_Construct_UClass_UFreerunMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFreerunMovementComponent.OuterSingleton;
	}
	template<> FIRSTPERSONPROJECT_API UClass* StaticClass<UFreerunMovementComponent>()
	{
		return UFreerunMovementComponent::StaticClass();
	}
	UFreerunMovementComponent::UFreerunMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFreerunMovementComponent);
	UFreerunMovementComponent::~UFreerunMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFreerunMovementComponent, UFreerunMovementComponent::StaticClass, TEXT("UFreerunMovementComponent"), &Z_Registration_Info_UClass_UFreerunMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFreerunMovementComponent), 304871798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunMovementComponent_h_1310341042(TEXT("/Script/FirstPersonProject"),
		Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
