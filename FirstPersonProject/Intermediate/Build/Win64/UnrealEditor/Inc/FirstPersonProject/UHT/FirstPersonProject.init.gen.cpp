// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FirstPersonProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FirstPersonProject()
	{
		if (!Z_Registration_Info_UPackage__Script_FirstPersonProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FirstPersonProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xA996D895,
				0xED00640C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FirstPersonProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FirstPersonProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FirstPersonProject(Z_Construct_UPackage__Script_FirstPersonProject, TEXT("/Script/FirstPersonProject"), Z_Registration_Info_UPackage__Script_FirstPersonProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA996D895, 0xED00640C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
