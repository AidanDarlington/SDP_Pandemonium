// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pandemonium/StaminaCalc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaminaCalc() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	PANDEMONIUM_API UClass* Z_Construct_UClass_UStaminaCalc();
	PANDEMONIUM_API UClass* Z_Construct_UClass_UStaminaCalc_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Pandemonium();
// End Cross Module References
	DEFINE_FUNCTION(UStaminaCalc::execFullStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Stamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStaminaCalc::FullStamina(Z_Param_Stamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaminaCalc::execChargingStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Stamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UStaminaCalc::ChargingStamina(Z_Param_Stamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaminaCalc::execNoStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Stamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UStaminaCalc::NoStamina(Z_Param_Stamina);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStaminaCalc::execUsingStamina)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Stamina);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UStaminaCalc::UsingStamina(Z_Param_Stamina);
		P_NATIVE_END;
	}
	void UStaminaCalc::StaticRegisterNativesUStaminaCalc()
	{
		UClass* Class = UStaminaCalc::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChargingStamina", &UStaminaCalc::execChargingStamina },
			{ "FullStamina", &UStaminaCalc::execFullStamina },
			{ "NoStamina", &UStaminaCalc::execNoStamina },
			{ "UsingStamina", &UStaminaCalc::execUsingStamina },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics
	{
		struct StaminaCalc_eventChargingStamina_Parms
		{
			float Stamina;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaminaCalc_eventChargingStamina_Parms, Stamina), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaminaCalc_eventChargingStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++StaminaCat" },
		{ "ModuleRelativePath", "StaminaCalc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaCalc, nullptr, "ChargingStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::StaminaCalc_eventChargingStamina_Parms), Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaminaCalc_ChargingStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaCalc_ChargingStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics
	{
		struct StaminaCalc_eventFullStamina_Parms
		{
			float Stamina;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaminaCalc_eventFullStamina_Parms, Stamina), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaminaCalc_eventFullStamina_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaminaCalc_eventFullStamina_Parms), &Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++StaminaCat" },
		{ "ModuleRelativePath", "StaminaCalc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaCalc, nullptr, "FullStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::StaminaCalc_eventFullStamina_Parms), Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaminaCalc_FullStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaCalc_FullStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics
	{
		struct StaminaCalc_eventNoStamina_Parms
		{
			float Stamina;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaminaCalc_eventNoStamina_Parms, Stamina), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StaminaCalc_eventNoStamina_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StaminaCalc_eventNoStamina_Parms), &Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++StaminaCat" },
		{ "ModuleRelativePath", "StaminaCalc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaCalc, nullptr, "NoStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::StaminaCalc_eventNoStamina_Parms), Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaminaCalc_NoStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaCalc_NoStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics
	{
		struct StaminaCalc_eventUsingStamina_Parms
		{
			float Stamina;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stamina;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::NewProp_Stamina = { "Stamina", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaminaCalc_eventUsingStamina_Parms, Stamina), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaminaCalc_eventUsingStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::NewProp_Stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "C++StaminaCat" },
		{ "ModuleRelativePath", "StaminaCalc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStaminaCalc, nullptr, "UsingStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::StaminaCalc_eventUsingStamina_Parms), Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStaminaCalc_UsingStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStaminaCalc_UsingStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaminaCalc);
	UClass* Z_Construct_UClass_UStaminaCalc_NoRegister()
	{
		return UStaminaCalc::StaticClass();
	}
	struct Z_Construct_UClass_UStaminaCalc_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaminaCalc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Pandemonium,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStaminaCalc_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStaminaCalc_ChargingStamina, "ChargingStamina" }, // 3470698181
		{ &Z_Construct_UFunction_UStaminaCalc_FullStamina, "FullStamina" }, // 733269495
		{ &Z_Construct_UFunction_UStaminaCalc_NoStamina, "NoStamina" }, // 1426666633
		{ &Z_Construct_UFunction_UStaminaCalc_UsingStamina, "UsingStamina" }, // 204612330
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaminaCalc_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "StaminaCalc.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "StaminaCalc.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaminaCalc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaminaCalc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaminaCalc_Statics::ClassParams = {
		&UStaminaCalc::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStaminaCalc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaminaCalc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaminaCalc()
	{
		if (!Z_Registration_Info_UClass_UStaminaCalc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaminaCalc.OuterSingleton, Z_Construct_UClass_UStaminaCalc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaminaCalc.OuterSingleton;
	}
	template<> PANDEMONIUM_API UClass* StaticClass<UStaminaCalc>()
	{
		return UStaminaCalc::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaminaCalc);
	UStaminaCalc::~UStaminaCalc() {}
	struct Z_CompiledInDeferFile_FID_Users_socce_Documents_GitHub_SDP_Pandemonium_Pandemonium_Source_Pandemonium_StaminaCalc_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_socce_Documents_GitHub_SDP_Pandemonium_Pandemonium_Source_Pandemonium_StaminaCalc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStaminaCalc, UStaminaCalc::StaticClass, TEXT("UStaminaCalc"), &Z_Registration_Info_UClass_UStaminaCalc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaminaCalc), 458193131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_socce_Documents_GitHub_SDP_Pandemonium_Pandemonium_Source_Pandemonium_StaminaCalc_h_4024282006(TEXT("/Script/Pandemonium"),
		Z_CompiledInDeferFile_FID_Users_socce_Documents_GitHub_SDP_Pandemonium_Pandemonium_Source_Pandemonium_StaminaCalc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_socce_Documents_GitHub_SDP_Pandemonium_Pandemonium_Source_Pandemonium_StaminaCalc_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
