// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StypeLiveLink/Public/StypeLiveLinkFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStypeLiveLinkFactory() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	STYPELIVELINK_API UClass* Z_Construct_UClass_UStypeLiveLinkSourceFactory();
	STYPELIVELINK_API UClass* Z_Construct_UClass_UStypeLiveLinkSourceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_StypeLiveLink();
// End Cross Module References
	void UStypeLiveLinkSourceFactory::StaticRegisterNativesUStypeLiveLinkSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStypeLiveLinkSourceFactory);
	UClass* Z_Construct_UClass_UStypeLiveLinkSourceFactory_NoRegister()
	{
		return UStypeLiveLinkSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStypeLiveLinkSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStypeLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_StypeLiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStypeLiveLinkSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StypeLiveLinkFactory.h" },
		{ "ModuleRelativePath", "Public/StypeLiveLinkFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStypeLiveLinkSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStypeLiveLinkSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStypeLiveLinkSourceFactory_Statics::ClassParams = {
		&UStypeLiveLinkSourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStypeLiveLinkSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStypeLiveLinkSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStypeLiveLinkSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UStypeLiveLinkSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStypeLiveLinkSourceFactory.OuterSingleton, Z_Construct_UClass_UStypeLiveLinkSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStypeLiveLinkSourceFactory.OuterSingleton;
	}
	template<> STYPELIVELINK_API UClass* StaticClass<UStypeLiveLinkSourceFactory>()
	{
		return UStypeLiveLinkSourceFactory::StaticClass();
	}
	UStypeLiveLinkSourceFactory::UStypeLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStypeLiveLinkSourceFactory);
	UStypeLiveLinkSourceFactory::~UStypeLiveLinkSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FreeLiveLinkForStypeHFprotocol_Source_StypeLiveLink_Public_StypeLiveLinkFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FreeLiveLinkForStypeHFprotocol_Source_StypeLiveLink_Public_StypeLiveLinkFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStypeLiveLinkSourceFactory, UStypeLiveLinkSourceFactory::StaticClass, TEXT("UStypeLiveLinkSourceFactory"), &Z_Registration_Info_UClass_UStypeLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStypeLiveLinkSourceFactory), 3701865354U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FreeLiveLinkForStypeHFprotocol_Source_StypeLiveLink_Public_StypeLiveLinkFactory_h_1741293596(TEXT("/Script/StypeLiveLink"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FreeLiveLinkForStypeHFprotocol_Source_StypeLiveLink_Public_StypeLiveLinkFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FreeLiveLinkForStypeHFprotocol_Source_StypeLiveLink_Public_StypeLiveLinkFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
