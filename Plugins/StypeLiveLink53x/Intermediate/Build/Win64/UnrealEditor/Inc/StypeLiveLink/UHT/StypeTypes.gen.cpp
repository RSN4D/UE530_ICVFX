// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StypeLiveLink/Public/StypeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStypeTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	LIVELINKLENS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData();
	LIVELINKLENS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLensFrameData();
	LIVELINKLENS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLensStaticData();
	STYPELIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData();
	STYPELIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FStypeLiveLinkFrameData();
	STYPELIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FStypeLiveLinkStaticData();
	UPackage* Z_Construct_UPackage__Script_StypeLiveLink();
// End Cross Module References

static_assert(std::is_polymorphic<FStypeLiveLinkStaticData>() == std::is_polymorphic<FLiveLinkLensStaticData>(), "USTRUCT FStypeLiveLinkStaticData cannot be polymorphic unless super FLiveLinkLensStaticData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StypeLiveLinkStaticData;
class UScriptStruct* FStypeLiveLinkStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StypeLiveLinkStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StypeLiveLinkStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStypeLiveLinkStaticData, (UObject*)Z_Construct_UPackage__Script_StypeLiveLink(), TEXT("StypeLiveLinkStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_StypeLiveLinkStaticData.OuterSingleton;
}
template<> STYPELIVELINK_API UScriptStruct* StaticStruct<FStypeLiveLinkStaticData>()
{
	return FStypeLiveLinkStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStypeLiveLinkStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Static data for Camera data.\n */" },
#endif
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static data for Camera data." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FStypeLiveLinkStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStypeLiveLinkStaticData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStypeLiveLinkStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StypeLiveLink,
		Z_Construct_UScriptStruct_FLiveLinkLensStaticData,
		&NewStructOps,
		"StypeLiveLinkStaticData",
		nullptr,
		0,
		sizeof(FStypeLiveLinkStaticData),
		alignof(FStypeLiveLinkStaticData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkStaticData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStypeLiveLinkStaticData_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStypeLiveLinkStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_StypeLiveLinkStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StypeLiveLinkStaticData.InnerSingleton, Z_Construct_UScriptStruct_FStypeLiveLinkStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StypeLiveLinkStaticData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStypeLiveLinkFrameData>() == std::is_polymorphic<FLiveLinkLensFrameData>(), "USTRUCT FStypeLiveLinkFrameData cannot be polymorphic unless super FLiveLinkLensFrameData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StypeLiveLinkFrameData;
class UScriptStruct* FStypeLiveLinkFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StypeLiveLinkFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StypeLiveLinkFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData, (UObject*)Z_Construct_UPackage__Script_StypeLiveLink(), TEXT("StypeLiveLinkFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_StypeLiveLinkFrameData.OuterSingleton;
}
template<> STYPELIVELINK_API UScriptStruct* StaticStruct<FStypeLiveLinkFrameData>()
{
	return FStypeLiveLinkFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Command;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PacketNumber_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PacketNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Frames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Seconds_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Seconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Minutes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Minutes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hours_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Hours;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Focus_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Focus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Zoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K1_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_K1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_K2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_K2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterShift_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionAreaWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAreaWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dynamic data for camera\n */" },
#endif
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic data for camera" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStypeLiveLinkFrameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Command_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkFrameData, Command), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Command_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Command_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_PacketNumber_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_PacketNumber = { "PacketNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkFrameData, PacketNumber), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_PacketNumber_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_PacketNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Frames_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkFrameData, Frames), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Frames_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Frames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Seconds_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkFrameData, Seconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Seconds_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Seconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Minutes_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Minutes = { "Minutes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkFrameData, Minutes), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Minutes_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Minutes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Hours_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Hours = { "Hours", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkFrameData, Hours), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Hours_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Hours_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Focus_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkFrameData, Focus), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Focus_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Focus_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Zoom_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkFrameData, Zoom), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Zoom_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Zoom_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_K1_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_K1 = { "K1", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkFrameData, K1), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_K1_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_K1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_K2_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_K2 = { "K2", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkFrameData, K2), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_K2_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_K2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_CenterShift_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_CenterShift = { "CenterShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkFrameData, CenterShift), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_CenterShift_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_CenterShift_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_ProjectionAreaWidth_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_ProjectionAreaWidth = { "ProjectionAreaWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkFrameData, ProjectionAreaWidth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_ProjectionAreaWidth_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_ProjectionAreaWidth_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Command,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_PacketNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Minutes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Hours,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Focus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_Zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_K1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_K2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_CenterShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewProp_ProjectionAreaWidth,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StypeLiveLink,
		Z_Construct_UScriptStruct_FLiveLinkLensFrameData,
		&NewStructOps,
		"StypeLiveLinkFrameData",
		Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::PropPointers),
		sizeof(FStypeLiveLinkFrameData),
		alignof(FStypeLiveLinkFrameData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStypeLiveLinkFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_StypeLiveLinkFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StypeLiveLinkFrameData.InnerSingleton, Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StypeLiveLinkFrameData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FStypeLiveLinkBlueprintData>() == std::is_polymorphic<FLiveLinkLensBlueprintData>(), "USTRUCT FStypeLiveLinkBlueprintData cannot be polymorphic unless super FLiveLinkLensBlueprintData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StypeLiveLinkBlueprintData;
class UScriptStruct* FStypeLiveLinkBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StypeLiveLinkBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StypeLiveLinkBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData, (UObject*)Z_Construct_UPackage__Script_StypeLiveLink(), TEXT("StypeLiveLinkBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_StypeLiveLinkBlueprintData.OuterSingleton;
}
template<> STYPELIVELINK_API UScriptStruct* StaticStruct<FStypeLiveLinkBlueprintData>()
{
	return FStypeLiveLinkBlueprintData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StypeStaticData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StypeStaticData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StypeFrameData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StypeFrameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Facility structure to handle camera data in blueprint\n */" },
#endif
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Facility structure to handle camera data in blueprint" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStypeLiveLinkBlueprintData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::NewProp_StypeStaticData_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static data that should not change every frame\n" },
#endif
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static data that should not change every frame" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::NewProp_StypeStaticData = { "StypeStaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkBlueprintData, StypeStaticData), Z_Construct_UScriptStruct_FStypeLiveLinkStaticData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::NewProp_StypeStaticData_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::NewProp_StypeStaticData_MetaData) }; // 4089481172
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::NewProp_StypeFrameData_MetaData[] = {
		{ "Category", "LiveLink" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Dynamic data that can change every frame\n" },
#endif
		{ "ModuleRelativePath", "Public/StypeTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dynamic data that can change every frame" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::NewProp_StypeFrameData = { "StypeFrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStypeLiveLinkBlueprintData, StypeFrameData), Z_Construct_UScriptStruct_FStypeLiveLinkFrameData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::NewProp_StypeFrameData_MetaData), Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::NewProp_StypeFrameData_MetaData) }; // 3640920135
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::NewProp_StypeStaticData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::NewProp_StypeFrameData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StypeLiveLink,
		Z_Construct_UScriptStruct_FLiveLinkLensBlueprintData,
		&NewStructOps,
		"StypeLiveLinkBlueprintData",
		Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::PropPointers),
		sizeof(FStypeLiveLinkBlueprintData),
		alignof(FStypeLiveLinkBlueprintData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData()
	{
		if (!Z_Registration_Info_UScriptStruct_StypeLiveLinkBlueprintData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StypeLiveLinkBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StypeLiveLinkBlueprintData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeTypes_h_Statics::ScriptStructInfo[] = {
		{ FStypeLiveLinkStaticData::StaticStruct, Z_Construct_UScriptStruct_FStypeLiveLinkStaticData_Statics::NewStructOps, TEXT("StypeLiveLinkStaticData"), &Z_Registration_Info_UScriptStruct_StypeLiveLinkStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStypeLiveLinkStaticData), 4089481172U) },
		{ FStypeLiveLinkFrameData::StaticStruct, Z_Construct_UScriptStruct_FStypeLiveLinkFrameData_Statics::NewStructOps, TEXT("StypeLiveLinkFrameData"), &Z_Registration_Info_UScriptStruct_StypeLiveLinkFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStypeLiveLinkFrameData), 3640920135U) },
		{ FStypeLiveLinkBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FStypeLiveLinkBlueprintData_Statics::NewStructOps, TEXT("StypeLiveLinkBlueprintData"), &Z_Registration_Info_UScriptStruct_StypeLiveLinkBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStypeLiveLinkBlueprintData), 3643915127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeTypes_h_1389687087(TEXT("/Script/StypeLiveLink"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE53x_CPP_Plugins_StypeLiveLink53x_Source_StypeLiveLink_Public_StypeTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
