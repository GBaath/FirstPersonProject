// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonProject/Public/FreerunCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFreerunCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	FIRSTPERSONPROJECT_API UClass* Z_Construct_UClass_AFreerunCharacter();
	FIRSTPERSONPROJECT_API UClass* Z_Construct_UClass_AFreerunCharacter_NoRegister();
	FIRSTPERSONPROJECT_API UEnum* Z_Construct_UEnum_FirstPersonProject_EPlayerAirState();
	FIRSTPERSONPROJECT_API UEnum* Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState();
	UPackage* Z_Construct_UPackage__Script_FirstPersonProject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerGroundState;
	static UEnum* EPlayerGroundState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerGroundState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerGroundState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState, (UObject*)Z_Construct_UPackage__Script_FirstPersonProject(), TEXT("EPlayerGroundState"));
		}
		return Z_Registration_Info_UEnum_EPlayerGroundState.OuterSingleton;
	}
	template<> FIRSTPERSONPROJECT_API UEnum* StaticEnum<EPlayerGroundState>()
	{
		return EPlayerGroundState_StaticEnum();
	}
	struct Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState_Statics::Enumerators[] = {
		{ "EPlayerGroundState::Idle", (int64)EPlayerGroundState::Idle },
		{ "EPlayerGroundState::Walking", (int64)EPlayerGroundState::Walking },
		{ "EPlayerGroundState::Sprinting", (int64)EPlayerGroundState::Sprinting },
		{ "EPlayerGroundState::Crouching", (int64)EPlayerGroundState::Crouching },
		{ "EPlayerGroundState::Sliding", (int64)EPlayerGroundState::Sliding },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Crouching.Name", "EPlayerGroundState::Crouching" },
		{ "Idle.Name", "EPlayerGroundState::Idle" },
		{ "ModuleRelativePath", "Public/FreerunCharacter.h" },
		{ "Sliding.Name", "EPlayerGroundState::Sliding" },
		{ "Sprinting.Name", "EPlayerGroundState::Sprinting" },
		{ "Walking.Name", "EPlayerGroundState::Walking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FirstPersonProject,
		nullptr,
		"EPlayerGroundState",
		"EPlayerGroundState",
		Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState()
	{
		if (!Z_Registration_Info_UEnum_EPlayerGroundState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerGroundState.InnerSingleton, Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerGroundState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerAirState;
	static UEnum* EPlayerAirState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerAirState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerAirState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FirstPersonProject_EPlayerAirState, (UObject*)Z_Construct_UPackage__Script_FirstPersonProject(), TEXT("EPlayerAirState"));
		}
		return Z_Registration_Info_UEnum_EPlayerAirState.OuterSingleton;
	}
	template<> FIRSTPERSONPROJECT_API UEnum* StaticEnum<EPlayerAirState>()
	{
		return EPlayerAirState_StaticEnum();
	}
	struct Z_Construct_UEnum_FirstPersonProject_EPlayerAirState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FirstPersonProject_EPlayerAirState_Statics::Enumerators[] = {
		{ "EPlayerAirState::None", (int64)EPlayerAirState::None },
		{ "EPlayerAirState::Jumping", (int64)EPlayerAirState::Jumping },
		{ "EPlayerAirState::Falling", (int64)EPlayerAirState::Falling },
		{ "EPlayerAirState::Climbing", (int64)EPlayerAirState::Climbing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FirstPersonProject_EPlayerAirState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Climbing.Name", "EPlayerAirState::Climbing" },
		{ "Falling.Name", "EPlayerAirState::Falling" },
		{ "Jumping.Name", "EPlayerAirState::Jumping" },
		{ "ModuleRelativePath", "Public/FreerunCharacter.h" },
		{ "None.Name", "EPlayerAirState::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FirstPersonProject_EPlayerAirState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FirstPersonProject,
		nullptr,
		"EPlayerAirState",
		"EPlayerAirState",
		Z_Construct_UEnum_FirstPersonProject_EPlayerAirState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FirstPersonProject_EPlayerAirState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FirstPersonProject_EPlayerAirState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FirstPersonProject_EPlayerAirState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_FirstPersonProject_EPlayerAirState()
	{
		if (!Z_Registration_Info_UEnum_EPlayerAirState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerAirState.InnerSingleton, Z_Construct_UEnum_FirstPersonProject_EPlayerAirState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerAirState.InnerSingleton;
	}
	void AFreerunCharacter::StaticRegisterNativesAFreerunCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFreerunCharacter);
	UClass* Z_Construct_UClass_AFreerunCharacter_NoRegister()
	{
		return AFreerunCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFreerunCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroundState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroundState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AirState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AirState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AirState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFreerunCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFreerunCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFreerunCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FreerunCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FreerunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_GroundState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_GroundState_MetaData[] = {
		{ "Category", "FreerunCharacter" },
		{ "ModuleRelativePath", "Public/FreerunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_GroundState = { "GroundState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreerunCharacter, GroundState), Z_Construct_UEnum_FirstPersonProject_EPlayerGroundState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_GroundState_MetaData), Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_GroundState_MetaData) }; // 3444908820
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_AirState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_AirState_MetaData[] = {
		{ "Category", "FreerunCharacter" },
		{ "ModuleRelativePath", "Public/FreerunCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_AirState = { "AirState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFreerunCharacter, AirState), Z_Construct_UEnum_FirstPersonProject_EPlayerAirState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_AirState_MetaData), Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_AirState_MetaData) }; // 1026842690
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFreerunCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_GroundState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_GroundState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_AirState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFreerunCharacter_Statics::NewProp_AirState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFreerunCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFreerunCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFreerunCharacter_Statics::ClassParams = {
		&AFreerunCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFreerunCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFreerunCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFreerunCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFreerunCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFreerunCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFreerunCharacter()
	{
		if (!Z_Registration_Info_UClass_AFreerunCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFreerunCharacter.OuterSingleton, Z_Construct_UClass_AFreerunCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFreerunCharacter.OuterSingleton;
	}
	template<> FIRSTPERSONPROJECT_API UClass* StaticClass<AFreerunCharacter>()
	{
		return AFreerunCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFreerunCharacter);
	AFreerunCharacter::~AFreerunCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_Statics::EnumInfo[] = {
		{ EPlayerGroundState_StaticEnum, TEXT("EPlayerGroundState"), &Z_Registration_Info_UEnum_EPlayerGroundState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3444908820U) },
		{ EPlayerAirState_StaticEnum, TEXT("EPlayerAirState"), &Z_Registration_Info_UEnum_EPlayerAirState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1026842690U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFreerunCharacter, AFreerunCharacter::StaticClass, TEXT("AFreerunCharacter"), &Z_Registration_Info_UClass_AFreerunCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFreerunCharacter), 555322231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_2304944507(TEXT("/Script/FirstPersonProject"),
		Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
