// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPersonProject/Public/UtilityFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilityFunctions() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	FIRSTPERSONPROJECT_API UClass* Z_Construct_UClass_UUtilityFunctions();
	FIRSTPERSONPROJECT_API UClass* Z_Construct_UClass_UUtilityFunctions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstPersonProject();
// End Cross Module References
	DEFINE_FUNCTION(UUtilityFunctions::execGetWorld)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=UUtilityFunctions::GetWorld(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UUtilityFunctions::StaticRegisterNativesUUtilityFunctions()
	{
		UClass* Class = UUtilityFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWorld", &UUtilityFunctions::execGetWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics
	{
		struct UtilityFunctions_eventGetWorld_Parms
		{
			AActor* Actor;
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UtilityFunctions_eventGetWorld_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UtilityFunctions_eventGetWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UtilityFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtilityFunctions, nullptr, "GetWorld", nullptr, nullptr, Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::UtilityFunctions_eventGetWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::UtilityFunctions_eventGetWorld_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUtilityFunctions_GetWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUtilityFunctions_GetWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUtilityFunctions);
	UClass* Z_Construct_UClass_UUtilityFunctions_NoRegister()
	{
		return UUtilityFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UUtilityFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUtilityFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUtilityFunctions_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUtilityFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUtilityFunctions_GetWorld, "GetWorld" }, // 2445542670
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUtilityFunctions_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtilityFunctions_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UtilityFunctions.h" },
		{ "ModuleRelativePath", "Public/UtilityFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUtilityFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUtilityFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUtilityFunctions_Statics::ClassParams = {
		&UUtilityFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUtilityFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UUtilityFunctions_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUtilityFunctions()
	{
		if (!Z_Registration_Info_UClass_UUtilityFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUtilityFunctions.OuterSingleton, Z_Construct_UClass_UUtilityFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUtilityFunctions.OuterSingleton;
	}
	template<> FIRSTPERSONPROJECT_API UClass* StaticClass<UUtilityFunctions>()
	{
		return UUtilityFunctions::StaticClass();
	}
	UUtilityFunctions::UUtilityFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUtilityFunctions);
	UUtilityFunctions::~UUtilityFunctions() {}
	struct Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_UtilityFunctions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_UtilityFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUtilityFunctions, UUtilityFunctions::StaticClass, TEXT("UUtilityFunctions"), &Z_Registration_Info_UClass_UUtilityFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUtilityFunctions), 1179110633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_UtilityFunctions_h_3249618879(TEXT("/Script/FirstPersonProject"),
		Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_UtilityFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_UtilityFunctions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
