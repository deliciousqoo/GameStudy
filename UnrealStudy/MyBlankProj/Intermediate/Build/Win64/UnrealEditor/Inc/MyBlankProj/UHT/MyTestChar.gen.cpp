// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyBlankProj/MyTestChar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyTestChar() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	MYBLANKPROJ_API UClass* Z_Construct_UClass_AMyTestChar();
	MYBLANKPROJ_API UClass* Z_Construct_UClass_AMyTestChar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyBlankProj();
// End Cross Module References
	void AMyTestChar::StaticRegisterNativesAMyTestChar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyTestChar);
	UClass* Z_Construct_UClass_AMyTestChar_NoRegister()
	{
		return AMyTestChar::StaticClass();
	}
	struct Z_Construct_UClass_AMyTestChar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyTestChar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MyBlankProj,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestChar_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestChar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyTestChar.h" },
		{ "ModuleRelativePath", "MyTestChar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestChar_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyTPS_Cam" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyTestChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTestChar_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTestChar, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestChar_Statics::NewProp_CameraBoom_MetaData), Z_Construct_UClass_AMyTestChar_Statics::NewProp_CameraBoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyTestChar_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MyTPS_Cam" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyTestChar.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyTestChar_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyTestChar, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestChar_Statics::NewProp_FollowCamera_MetaData), Z_Construct_UClass_AMyTestChar_Statics::NewProp_FollowCamera_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyTestChar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestChar_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyTestChar_Statics::NewProp_FollowCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyTestChar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyTestChar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyTestChar_Statics::ClassParams = {
		&AMyTestChar::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyTestChar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestChar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestChar_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyTestChar_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyTestChar_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AMyTestChar()
	{
		if (!Z_Registration_Info_UClass_AMyTestChar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyTestChar.OuterSingleton, Z_Construct_UClass_AMyTestChar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyTestChar.OuterSingleton;
	}
	template<> MYBLANKPROJ_API UClass* StaticClass<AMyTestChar>()
	{
		return AMyTestChar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyTestChar);
	AMyTestChar::~AMyTestChar() {}
	struct Z_CompiledInDeferFile_FID_Users_JIHAN_Desktop_GameDev_UnrealStudy_MyBlankProj_Source_MyBlankProj_MyTestChar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JIHAN_Desktop_GameDev_UnrealStudy_MyBlankProj_Source_MyBlankProj_MyTestChar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyTestChar, AMyTestChar::StaticClass, TEXT("AMyTestChar"), &Z_Registration_Info_UClass_AMyTestChar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyTestChar), 1944661946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_JIHAN_Desktop_GameDev_UnrealStudy_MyBlankProj_Source_MyBlankProj_MyTestChar_h_322669360(TEXT("/Script/MyBlankProj"),
		Z_CompiledInDeferFile_FID_Users_JIHAN_Desktop_GameDev_UnrealStudy_MyBlankProj_Source_MyBlankProj_MyTestChar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_JIHAN_Desktop_GameDev_UnrealStudy_MyBlankProj_Source_MyBlankProj_MyTestChar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
