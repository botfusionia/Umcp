// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealMCP/Public/UnrealMCPBridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealMCPBridge() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UNREALMCP_API UClass* Z_Construct_UClass_UUnrealMCPBridge();
UNREALMCP_API UClass* Z_Construct_UClass_UUnrealMCPBridge_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealMCP();
// End Cross Module References

// Begin Class UUnrealMCPBridge
void UUnrealMCPBridge::StaticRegisterNativesUUnrealMCPBridge()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealMCPBridge);
UClass* Z_Construct_UClass_UUnrealMCPBridge_NoRegister()
{
	return UUnrealMCPBridge::StaticClass();
}
struct Z_Construct_UClass_UUnrealMCPBridge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealMCPBridge.h" },
		{ "ModuleRelativePath", "Public/UnrealMCPBridge.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealMCPBridge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUnrealMCPBridge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealMCP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealMCPBridge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealMCPBridge_Statics::ClassParams = {
	&UUnrealMCPBridge::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealMCPBridge_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnrealMCPBridge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnrealMCPBridge()
{
	if (!Z_Registration_Info_UClass_UUnrealMCPBridge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealMCPBridge.OuterSingleton, Z_Construct_UClass_UUnrealMCPBridge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnrealMCPBridge.OuterSingleton;
}
template<> UNREALMCP_API UClass* StaticClass<UUnrealMCPBridge>()
{
	return UUnrealMCPBridge::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealMCPBridge);
// End Class UUnrealMCPBridge

// Begin Registration
struct Z_CompiledInDeferFile_FID_MCPGameProject_Plugins_UnrealMCP_Source_UnrealMCP_Public_UnrealMCPBridge_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealMCPBridge, UUnrealMCPBridge::StaticClass, TEXT("UUnrealMCPBridge"), &Z_Registration_Info_UClass_UUnrealMCPBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealMCPBridge), 3893871012U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MCPGameProject_Plugins_UnrealMCP_Source_UnrealMCP_Public_UnrealMCPBridge_h_75337559(TEXT("/Script/UnrealMCP"),
	Z_CompiledInDeferFile_FID_MCPGameProject_Plugins_UnrealMCP_Source_UnrealMCP_Public_UnrealMCPBridge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MCPGameProject_Plugins_UnrealMCP_Source_UnrealMCP_Public_UnrealMCPBridge_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
