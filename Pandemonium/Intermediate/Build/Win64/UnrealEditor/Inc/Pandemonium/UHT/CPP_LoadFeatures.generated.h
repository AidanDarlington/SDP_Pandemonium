// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_LoadFeatures.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PANDEMONIUM_CPP_LoadFeatures_generated_h
#error "CPP_LoadFeatures.generated.h already included, missing '#pragma once' in CPP_LoadFeatures.h"
#endif
#define PANDEMONIUM_CPP_LoadFeatures_generated_h

#define FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_SPARSE_DATA
#define FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execgetNumberOfWisps); \
	DECLARE_FUNCTION(execgetFlashlightPlaybackPos); \
	DECLARE_FUNCTION(execgetPlayerHealth);


#define FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execgetNumberOfWisps); \
	DECLARE_FUNCTION(execgetFlashlightPlaybackPos); \
	DECLARE_FUNCTION(execgetPlayerHealth);


#define FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_ACCESSORS
#define FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCPP_LoadFeatures(); \
	friend struct Z_Construct_UClass_UCPP_LoadFeatures_Statics; \
public: \
	DECLARE_CLASS(UCPP_LoadFeatures, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pandemonium"), NO_API) \
	DECLARE_SERIALIZER(UCPP_LoadFeatures)


#define FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUCPP_LoadFeatures(); \
	friend struct Z_Construct_UClass_UCPP_LoadFeatures_Statics; \
public: \
	DECLARE_CLASS(UCPP_LoadFeatures, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Pandemonium"), NO_API) \
	DECLARE_SERIALIZER(UCPP_LoadFeatures)


#define FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCPP_LoadFeatures(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCPP_LoadFeatures) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_LoadFeatures); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_LoadFeatures); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPP_LoadFeatures(UCPP_LoadFeatures&&); \
	NO_API UCPP_LoadFeatures(const UCPP_LoadFeatures&); \
public: \
	NO_API virtual ~UCPP_LoadFeatures();


#define FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCPP_LoadFeatures(UCPP_LoadFeatures&&); \
	NO_API UCPP_LoadFeatures(const UCPP_LoadFeatures&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCPP_LoadFeatures); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCPP_LoadFeatures); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCPP_LoadFeatures) \
	NO_API virtual ~UCPP_LoadFeatures();


#define FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_16_PROLOG
#define FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_SPARSE_DATA \
	FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_RPC_WRAPPERS \
	FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_ACCESSORS \
	FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_INCLASS \
	FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_SPARSE_DATA \
	FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_ACCESSORS \
	FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_INCLASS_NO_PURE_DECLS \
	FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PANDEMONIUM_API UClass* StaticClass<class UCPP_LoadFeatures>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Pandemonium_Source_Pandemonium_CPP_LoadFeatures_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
