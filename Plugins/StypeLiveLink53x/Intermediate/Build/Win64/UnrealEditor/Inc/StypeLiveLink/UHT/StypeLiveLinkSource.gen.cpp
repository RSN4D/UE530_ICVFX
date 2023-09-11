// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StypeLiveLink/Public/StypeLiveLinkSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStypeLiveLinkSource() {}
// Cross Module References
	STYPELIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings();
	UPackage* Z_Construct_UPackage__Script_StypeLiveLink();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StypeLiveLinkConnectionSettings;
class UScriptStruct* FStypeLiveLinkConnectionSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StypeLiveLinkConnectionSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StypeLiveLinkConnectionSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings, (UObject*)Z_Construct_UPackage__Script_StypeLiveLink(), TEXT("StypeLiveLinkConnectionSettings"));
	}
	return Z_Registration_Info_UScriptStruct_StypeLiveLinkConnectionSettings.OuterSingleton;
}
template<> STYPELIVELINK_API UScriptStruct* StaticStruct<FStypeLiveLinkConnectionSettings>()
{
	return FStypeLiveLinkConnectionSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUInt16PropertyParams NewProp_PortNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StypeLiveLinkSource.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStypeLiveLinkConnectionSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::NewProp_PortNumber_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/StypeLiveLinkSource.h" },
	};
#endif
	const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::NewProp_PortNumber = { "PortNumber", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkConnectionSettings, PortNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::NewProp_PortNumber_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::NewProp_PortNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/StypeLiveLinkSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkConnectionSettings, SubjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::NewProp_SubjectName_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::NewProp_SubjectName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::NewProp_PortNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::NewProp_SubjectName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StypeLiveLink,
		nullptr,
		&NewStructOps,
		"StypeLiveLinkConnectionSettings",
		Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::PropPointers),
		sizeof(FStypeLiveLinkConnectionSettings),
		alignof(FStypeLiveLinkConnectionSettings),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_StypeLiveLinkConnectionSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StypeLiveLinkConnectionSettings.InnerSingleton, Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StypeLiveLinkConnectionSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeLiveLinkSource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeLiveLinkSource_h_Statics::ScriptStructInfo[] = {
		{ FStypeLiveLinkConnectionSettings::StaticStruct, Z_Construct_UScriptStruct_FStypeLiveLinkConnectionSettings_Statics::NewStructOps, TEXT("StypeLiveLinkConnectionSettings"), &Z_Registration_Info_UScriptStruct_StypeLiveLinkConnectionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStypeLiveLinkConnectionSettings), 2599253109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeLiveLinkSource_h_230504890(TEXT("/Script/StypeLiveLink"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeLiveLinkSource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeLiveLinkSource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
