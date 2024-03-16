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
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	FIRSTPERSONPROJECT_API UClass* Z_Construct_UClass_UFreerunMovementComponent();
	FIRSTPERSONPROJECT_API UClass* Z_Construct_UClass_UFreerunMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstPersonProject();
// End Cross Module References
	DEFINE_FUNCTION(UFreerunMovementComponent::execApplyGravity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyGravity(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void UFreerunMovementComponent::StaticRegisterNativesUFreerunMovementComponent()
	{
		UClass* Class = UFreerunMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyGravity", &UFreerunMovementComponent::execApplyGravity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics
	{
		struct FreerunMovementComponent_eventApplyGravity_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FreerunMovementComponent_eventApplyGravity_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FreerunMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFreerunMovementComponent, nullptr, "ApplyGravity", nullptr, nullptr, Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::FreerunMovementComponent_eventApplyGravity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::FreerunMovementComponent_eventApplyGravity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFreerunMovementComponent);
	UClass* Z_Construct_UClass_UFreerunMovementComponent_NoRegister()
	{
		return UFreerunMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UFreerunMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFreerunMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPersonProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFreerunMovementComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UFreerunMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFreerunMovementComponent_ApplyGravity, "ApplyGravity" }, // 3462999241
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFreerunMovementComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFreerunMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "FreerunMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
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
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		{ Z_Construct_UClass_UFreerunMovementComponent, UFreerunMovementComponent::StaticClass, TEXT("UFreerunMovementComponent"), &Z_Registration_Info_UClass_UFreerunMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFreerunMovementComponent), 3811741796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunMovementComponent_h_1030703492(TEXT("/Script/FirstPersonProject"),
		Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
