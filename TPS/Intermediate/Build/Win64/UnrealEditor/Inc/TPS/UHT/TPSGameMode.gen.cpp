// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPSGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTPSGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TPS_API UClass* Z_Construct_UClass_ATPSGameMode();
TPS_API UClass* Z_Construct_UClass_ATPSGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_TPS();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATPSGameMode *************************************************************
void ATPSGameMode::StaticRegisterNativesATPSGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATPSGameMode;
UClass* ATPSGameMode::GetPrivateStaticClass()
{
	using TClass = ATPSGameMode;
	if (!Z_Registration_Info_UClass_ATPSGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TPSGameMode"),
			Z_Registration_Info_UClass_ATPSGameMode.InnerSingleton,
			StaticRegisterNativesATPSGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATPSGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATPSGameMode_NoRegister()
{
	return ATPSGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATPSGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TPSGameMode.h" },
		{ "ModuleRelativePath", "Public/TPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATPSGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATPSGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_TPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATPSGameMode_Statics::ClassParams = {
	&ATPSGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATPSGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATPSGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATPSGameMode()
{
	if (!Z_Registration_Info_UClass_ATPSGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATPSGameMode.OuterSingleton, Z_Construct_UClass_ATPSGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATPSGameMode.OuterSingleton;
}
ATPSGameMode::ATPSGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATPSGameMode);
ATPSGameMode::~ATPSGameMode() {}
// ********** End Class ATPSGameMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_GameCapstoneDesign_UEClass_studyTPS_TPS_Source_TPS_Public_TPSGameMode_h__Script_TPS_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATPSGameMode, ATPSGameMode::StaticClass, TEXT("ATPSGameMode"), &Z_Registration_Info_UClass_ATPSGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATPSGameMode), 569330274U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_GameCapstoneDesign_UEClass_studyTPS_TPS_Source_TPS_Public_TPSGameMode_h__Script_TPS_2384617536(TEXT("/Script/TPS"),
	Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_GameCapstoneDesign_UEClass_studyTPS_TPS_Source_TPS_Public_TPSGameMode_h__Script_TPS_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Administrator_Desktop_GameCapstoneDesign_UEClass_studyTPS_TPS_Source_TPS_Public_TPSGameMode_h__Script_TPS_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
