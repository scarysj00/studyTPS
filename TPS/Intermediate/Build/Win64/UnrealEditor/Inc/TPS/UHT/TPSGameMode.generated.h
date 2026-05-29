// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TPSGameMode.h"

#ifdef TPS_TPSGameMode_generated_h
#error "TPSGameMode.generated.h already included, missing '#pragma once' in TPSGameMode.h"
#endif
#define TPS_TPSGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATPSGameMode *************************************************************
TPS_API UClass* Z_Construct_UClass_ATPSGameMode_NoRegister();

#define FID_Users_Administrator_Desktop_GameCapstoneDesign_UEClass_studyTPS_TPS_Source_TPS_Public_TPSGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATPSGameMode(); \
	friend struct Z_Construct_UClass_ATPSGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TPS_API UClass* Z_Construct_UClass_ATPSGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ATPSGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TPS"), Z_Construct_UClass_ATPSGameMode_NoRegister) \
	DECLARE_SERIALIZER(ATPSGameMode)


#define FID_Users_Administrator_Desktop_GameCapstoneDesign_UEClass_studyTPS_TPS_Source_TPS_Public_TPSGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATPSGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATPSGameMode(ATPSGameMode&&) = delete; \
	ATPSGameMode(const ATPSGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATPSGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATPSGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATPSGameMode) \
	NO_API virtual ~ATPSGameMode();


#define FID_Users_Administrator_Desktop_GameCapstoneDesign_UEClass_studyTPS_TPS_Source_TPS_Public_TPSGameMode_h_12_PROLOG
#define FID_Users_Administrator_Desktop_GameCapstoneDesign_UEClass_studyTPS_TPS_Source_TPS_Public_TPSGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Administrator_Desktop_GameCapstoneDesign_UEClass_studyTPS_TPS_Source_TPS_Public_TPSGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Administrator_Desktop_GameCapstoneDesign_UEClass_studyTPS_TPS_Source_TPS_Public_TPSGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATPSGameMode;

// ********** End Class ATPSGameMode ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Administrator_Desktop_GameCapstoneDesign_UEClass_studyTPS_TPS_Source_TPS_Public_TPSGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
