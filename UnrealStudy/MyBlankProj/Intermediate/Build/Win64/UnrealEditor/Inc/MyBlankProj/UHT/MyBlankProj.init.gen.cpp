// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBlankProj_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MyBlankProj;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MyBlankProj()
	{
		if (!Z_Registration_Info_UPackage__Script_MyBlankProj.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MyBlankProj",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x379E5022,
				0x06EBA2F4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MyBlankProj.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MyBlankProj.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MyBlankProj(Z_Construct_UPackage__Script_MyBlankProj, TEXT("/Script/MyBlankProj"), Z_Registration_Info_UPackage__Script_MyBlankProj, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x379E5022, 0x06EBA2F4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
