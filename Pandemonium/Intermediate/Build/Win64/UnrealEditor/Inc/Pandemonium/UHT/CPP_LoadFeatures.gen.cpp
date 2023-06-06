// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pandemonium/CPP_LoadFeatures.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_LoadFeatures() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	PANDEMONIUM_API UClass* Z_Construct_UClass_UCPP_LoadFeatures();
	PANDEMONIUM_API UClass* Z_Construct_UClass_UCPP_LoadFeatures_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Pandemonium();
// End Cross Module References
	DEFINE_FUNCTION(UCPP_LoadFeatures::execgetNumberOfWisps)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveSlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UCPP_LoadFeatures::getNumberOfWisps(Z_Param_SaveSlotName,Z_Param_IndexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPP_LoadFeatures::execgetFlashlightPlaybackPos)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveSlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCPP_LoadFeatures::getFlashlightPlaybackPos(Z_Param_SaveSlotName,Z_Param_IndexID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCPP_LoadFeatures::execgetPlayerHealth)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SaveSlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UCPP_LoadFeatures::getPlayerHealth(Z_Param_SaveSlotName,Z_Param_IndexID);
		P_NATIVE_END;
	}
	void UCPP_LoadFeatures::StaticRegisterNativesUCPP_LoadFeatures()
	{
		UClass* Class = UCPP_LoadFeatures::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "getFlashlightPlaybackPos", &UCPP_LoadFeatures::execgetFlashlightPlaybackPos },
			{ "getNumberOfWisps", &UCPP_LoadFeatures::execgetNumberOfWisps },
			{ "getPlayerHealth", &UCPP_LoadFeatures::execgetPlayerHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics
	{
		struct CPP_LoadFeatures_eventgetFlashlightPlaybackPos_Parms
		{
			FString SaveSlotName;
			int32 IndexID;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IndexID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_LoadFeatures_eventgetFlashlightPlaybackPos_Parms, SaveSlotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::NewProp_IndexID = { "IndexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_LoadFeatures_eventgetFlashlightPlaybackPos_Parms, IndexID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_LoadFeatures_eventgetFlashlightPlaybackPos_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::NewProp_IndexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++LoadCategory" },
		{ "Comment", "//get flashlight playback position function\n" },
		{ "ModuleRelativePath", "CPP_LoadFeatures.h" },
		{ "ToolTip", "get flashlight playback position function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_LoadFeatures, nullptr, "getFlashlightPlaybackPos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::CPP_LoadFeatures_eventgetFlashlightPlaybackPos_Parms), Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics
	{
		struct CPP_LoadFeatures_eventgetNumberOfWisps_Parms
		{
			FString SaveSlotName;
			int32 IndexID;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IndexID;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_LoadFeatures_eventgetNumberOfWisps_Parms, SaveSlotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::NewProp_IndexID = { "IndexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_LoadFeatures_eventgetNumberOfWisps_Parms, IndexID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_LoadFeatures_eventgetNumberOfWisps_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::NewProp_IndexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++LoadCategory" },
		{ "Comment", "//get number of wisps function\n" },
		{ "ModuleRelativePath", "CPP_LoadFeatures.h" },
		{ "ToolTip", "get number of wisps function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_LoadFeatures, nullptr, "getNumberOfWisps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::CPP_LoadFeatures_eventgetNumberOfWisps_Parms), Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics
	{
		struct CPP_LoadFeatures_eventgetPlayerHealth_Parms
		{
			FString SaveSlotName;
			int32 IndexID;
			float ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IndexID;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_LoadFeatures_eventgetPlayerHealth_Parms, SaveSlotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::NewProp_IndexID = { "IndexID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_LoadFeatures_eventgetPlayerHealth_Parms, IndexID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_LoadFeatures_eventgetPlayerHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::NewProp_SaveSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::NewProp_IndexID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++LoadCategory" },
		{ "Comment", "//get player health function\n" },
		{ "ModuleRelativePath", "CPP_LoadFeatures.h" },
		{ "ToolTip", "get player health function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCPP_LoadFeatures, nullptr, "getPlayerHealth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::CPP_LoadFeatures_eventgetPlayerHealth_Parms), Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCPP_LoadFeatures);
	UClass* Z_Construct_UClass_UCPP_LoadFeatures_NoRegister()
	{
		return UCPP_LoadFeatures::StaticClass();
	}
	struct Z_Construct_UClass_UCPP_LoadFeatures_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCPP_LoadFeatures_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Pandemonium,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCPP_LoadFeatures_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_LoadFeatures_getFlashlightPlaybackPos, "getFlashlightPlaybackPos" }, // 201020661
		{ &Z_Construct_UFunction_UCPP_LoadFeatures_getNumberOfWisps, "getNumberOfWisps" }, // 546628600
		{ &Z_Construct_UFunction_UCPP_LoadFeatures_getPlayerHealth, "getPlayerHealth" }, // 3146099429
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCPP_LoadFeatures_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "CPP_LoadFeatures.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CPP_LoadFeatures.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCPP_LoadFeatures_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_LoadFeatures>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_LoadFeatures_Statics::ClassParams = {
		&UCPP_LoadFeatures::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCPP_LoadFeatures_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_LoadFeatures_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCPP_LoadFeatures()
	{
		if (!Z_Registration_Info_UClass_UCPP_LoadFeatures.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_LoadFeatures.OuterSingleton, Z_Construct_UClass_UCPP_LoadFeatures_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCPP_LoadFeatures.OuterSingleton;
	}
	template<> PANDEMONIUM_API UClass* StaticClass<UCPP_LoadFeatures>()
	{
		return UCPP_LoadFeatures::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_LoadFeatures);
	UCPP_LoadFeatures::~UCPP_LoadFeatures() {}
	struct Z_CompiledInDeferFile_FID_Users_socce_Documents_GitHub_SDP_Pandemonium_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_socce_Documents_GitHub_SDP_Pandemonium_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_LoadFeatures, UCPP_LoadFeatures::StaticClass, TEXT("UCPP_LoadFeatures"), &Z_Registration_Info_UClass_UCPP_LoadFeatures, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_LoadFeatures), 1838863936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_socce_Documents_GitHub_SDP_Pandemonium_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_2113139739(TEXT("/Script/Pandemonium"),
		Z_CompiledInDeferFile_FID_Users_socce_Documents_GitHub_SDP_Pandemonium_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_socce_Documents_GitHub_SDP_Pandemonium_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
