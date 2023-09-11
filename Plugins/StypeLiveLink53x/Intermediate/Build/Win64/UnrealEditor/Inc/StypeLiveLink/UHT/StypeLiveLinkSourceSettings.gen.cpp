// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StypeLiveLink/Public/StypeLiveLinkSourceSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStypeLiveLinkSourceSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceSettings();
	STYPELIVELINK_API UClass* Z_Construct_UClass_UStypeLiveLinkSourceSettings();
	STYPELIVELINK_API UClass* Z_Construct_UClass_UStypeLiveLinkSourceSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StypeLiveLink();
// End Cross Module References
	void UStypeLiveLinkSourceSettings::StaticRegisterNativesUStypeLiveLinkSourceSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStypeLiveLinkSourceSettings);
	UClass* Z_Construct_UClass_UStypeLiveLinkSourceSettings_NoRegister()
	{
		return UStypeLiveLinkSourceSettings::StaticClass();
	}
	struct Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultFrameRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_StypeLiveLink,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StypeLiveLinkSourceSettings.h" },
		{ "ModuleRelativePath", "Public/StypeLiveLinkSourceSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::NewProp_DefaultFrameRate_MetaData[] = {
		{ "Category", "Stype Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timecode FrameRate is detected as data comes in. Before it is correctly estimated, which timecode is expected\n" },
#endif
		{ "ModuleRelativePath", "Public/StypeLiveLinkSourceSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timecode FrameRate is detected as data comes in. Before it is correctly estimated, which timecode is expected" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::NewProp_DefaultFrameRate = { "DefaultFrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStypeLiveLinkSourceSettings, DefaultFrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::NewProp_DefaultFrameRate_MetaData), Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::NewProp_DefaultFrameRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::NewProp_DefaultFrameRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStypeLiveLinkSourceSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::ClassParams = {
		&UStypeLiveLinkSourceSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UStypeLiveLinkSourceSettings()
	{
		if (!Z_Registration_Info_UClass_UStypeLiveLinkSourceSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStypeLiveLinkSourceSettings.OuterSingleton, Z_Construct_UClass_UStypeLiveLinkSourceSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStypeLiveLinkSourceSettings.OuterSingleton;
	}
	template<> STYPELIVELINK_API UClass* StaticClass<UStypeLiveLinkSourceSettings>()
	{
		return UStypeLiveLinkSourceSettings::StaticClass();
	}
	UStypeLiveLinkSourceSettings::UStypeLiveLinkSourceSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStypeLiveLinkSourceSettings);
	UStypeLiveLinkSourceSettings::~UStypeLiveLinkSourceSettings() {}
	struct Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeLiveLinkSourceSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeLiveLinkSourceSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStypeLiveLinkSourceSettings, UStypeLiveLinkSourceSettings::StaticClass, TEXT("UStypeLiveLinkSourceSettings"), &Z_Registration_Info_UClass_UStypeLiveLinkSourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStypeLiveLinkSourceSettings), 1574794388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeLiveLinkSourceSettings_h_1753763370(TEXT("/Script/StypeLiveLink"),
		Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeLiveLinkSourceSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeLiveLinkSourceSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
