// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Warrior/Public/Controllers/WarriorHeroController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorHeroController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UPackage* Z_Construct_UPackage__Script_Warrior();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeiroController();
WARRIOR_API UClass* Z_Construct_UClass_AWarriorHeiroController_NoRegister();
// End Cross Module References

// Begin Class AWarriorHeiroController
void AWarriorHeiroController::StaticRegisterNativesAWarriorHeiroController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWarriorHeiroController);
UClass* Z_Construct_UClass_AWarriorHeiroController_NoRegister()
{
	return AWarriorHeiroController::StaticClass();
}
struct Z_Construct_UClass_AWarriorHeiroController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Controllers/WarriorHeroController.h" },
		{ "ModuleRelativePath", "Public/Controllers/WarriorHeroController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWarriorHeiroController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWarriorHeiroController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Warrior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeiroController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWarriorHeiroController_Statics::ClassParams = {
	&AWarriorHeiroController::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWarriorHeiroController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWarriorHeiroController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWarriorHeiroController()
{
	if (!Z_Registration_Info_UClass_AWarriorHeiroController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWarriorHeiroController.OuterSingleton, Z_Construct_UClass_AWarriorHeiroController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWarriorHeiroController.OuterSingleton;
}
template<> WARRIOR_API UClass* StaticClass<AWarriorHeiroController>()
{
	return AWarriorHeiroController::StaticClass();
}
AWarriorHeiroController::AWarriorHeiroController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWarriorHeiroController);
AWarriorHeiroController::~AWarriorHeiroController() {}
// End Class AWarriorHeiroController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Epic_Games_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWarriorHeiroController, AWarriorHeiroController::StaticClass, TEXT("AWarriorHeiroController"), &Z_Registration_Info_UClass_AWarriorHeiroController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWarriorHeiroController), 1823883560U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Epic_Games_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h_609286194(TEXT("/Script/Warrior"),
	Z_CompiledInDeferFile_FID_Epic_Games_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Epic_Games_Warrior_Source_Warrior_Public_Controllers_WarriorHeroController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
