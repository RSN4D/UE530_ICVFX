// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StypeLiveLink/Public/StypeRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStypeRole() {}
// Cross Module References
	LIVELINKLENS_API UClass* Z_Construct_UClass_ULiveLinkLensRole();
	STYPELIVELINK_API UClass* Z_Construct_UClass_ULiveLinkStypeRole();
	STYPELIVELINK_API UClass* Z_Construct_UClass_ULiveLinkStypeRole_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StypeLiveLink();
// End Cross Module References
	void ULiveLinkStypeRole::StaticRegisterNativesULiveLinkStypeRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkStypeRole);
	UClass* Z_Construct_UClass_ULiveLinkStypeRole_NoRegister()
	{
		return ULiveLinkStypeRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkStypeRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkStypeRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkLensRole,
		(UObject* (*)())Z_Construct_UPackage__Script_StypeLiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkStypeRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Stype Camera data.\n */" },
		{ "DisplayName", "Stype Camera Role" },
		{ "IncludePath", "StypeRole.h" },
		{ "ModuleRelativePath", "Public/StypeRole.h" },
		{ "ToolTip", "Role associated for Stype Camera data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkStypeRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkStypeRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkStypeRole_Statics::ClassParams = {
		&ULiveLinkStypeRole::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkStypeRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkStypeRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkStypeRole()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkStypeRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkStypeRole.OuterSingleton, Z_Construct_UClass_ULiveLinkStypeRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkStypeRole.OuterSingleton;
	}
	template<> STYPELIVELINK_API UClass* StaticClass<ULiveLinkStypeRole>()
	{
		return ULiveLinkStypeRole::StaticClass();
	}
	ULiveLinkStypeRole::ULiveLinkStypeRole(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkStypeRole);
	ULiveLinkStypeRole::~ULiveLinkStypeRole() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FreeLiveLinkForStypeHFprotocol_Source_StypeLiveLink_Public_StypeRole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FreeLiveLinkForStypeHFprotocol_Source_StypeLiveLink_Public_StypeRole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkStypeRole, ULiveLinkStypeRole::StaticClass, TEXT("ULiveLinkStypeRole"), &Z_Registration_Info_UClass_ULiveLinkStypeRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkStypeRole), 1920361692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FreeLiveLinkForStypeHFprotocol_Source_StypeLiveLink_Public_StypeRole_h_693013572(TEXT("/Script/StypeLiveLink"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FreeLiveLinkForStypeHFprotocol_Source_StypeLiveLink_Public_StypeRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FreeLiveLinkForStypeHFprotocol_Source_StypeLiveLink_Public_StypeRole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
