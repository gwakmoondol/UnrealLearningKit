// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealLearningKit/Public/CharacterAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
UNREALLEARNINGKIT_API UClass* Z_Construct_UClass_ACharacterBase_NoRegister();
UNREALLEARNINGKIT_API UClass* Z_Construct_UClass_UCharacterAnimInstance();
UNREALLEARNINGKIT_API UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealLearningKit();
// End Cross Module References

// Begin Class UCharacterAnimInstance
void UCharacterAnimInstance::StaticRegisterNativesUCharacterAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterAnimInstance);
UClass* Z_Construct_UClass_UCharacterAnimInstance_NoRegister()
{
	return UCharacterAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UCharacterAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "CharacterAnimInstance.h" },
		{ "ModuleRelativePath", "Public/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[] = {
		{ "Category", "CharacterAnimInstance" },
		{ "ModuleRelativePath", "Public/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/CharacterAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isFalling_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/CharacterAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Movement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static void NewProp_isFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isFalling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, Character), Z_Construct_UClass_ACharacterBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Character_MetaData), NewProp_Character_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, Movement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Movement_MetaData), NewProp_Movement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCharacterAnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
void Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_isFalling_SetBit(void* Obj)
{
	((UCharacterAnimInstance*)Obj)->isFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_isFalling = { "isFalling", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCharacterAnimInstance), &Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_isFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isFalling_MetaData), NewProp_isFalling_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Character,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_Movement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterAnimInstance_Statics::NewProp_isFalling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCharacterAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealLearningKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterAnimInstance_Statics::ClassParams = {
	&UCharacterAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterAnimInstance()
{
	if (!Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton, Z_Construct_UClass_UCharacterAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterAnimInstance.OuterSingleton;
}
template<> UNREALLEARNINGKIT_API UClass* StaticClass<UCharacterAnimInstance>()
{
	return UCharacterAnimInstance::StaticClass();
}
UCharacterAnimInstance::UCharacterAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterAnimInstance);
UCharacterAnimInstance::~UCharacterAnimInstance() {}
// End Class UCharacterAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_MoonJu_Documents_Unreal_Projects_UnrealLearningKit_Source_UnrealLearningKit_Public_CharacterAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterAnimInstance, UCharacterAnimInstance::StaticClass, TEXT("UCharacterAnimInstance"), &Z_Registration_Info_UClass_UCharacterAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterAnimInstance), 3101866186U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_MoonJu_Documents_Unreal_Projects_UnrealLearningKit_Source_UnrealLearningKit_Public_CharacterAnimInstance_h_470664007(TEXT("/Script/UnrealLearningKit"),
	Z_CompiledInDeferFile_FID_Users_MoonJu_Documents_Unreal_Projects_UnrealLearningKit_Source_UnrealLearningKit_Public_CharacterAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_MoonJu_Documents_Unreal_Projects_UnrealLearningKit_Source_UnrealLearningKit_Public_CharacterAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
