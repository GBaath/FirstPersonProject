// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FreerunCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTPERSONPROJECT_FreerunCharacter_generated_h
#error "FreerunCharacter.generated.h already included, missing '#pragma once' in FreerunCharacter.h"
#endif
#define FIRSTPERSONPROJECT_FreerunCharacter_generated_h

#define FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_SPARSE_DATA
#define FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_ACCESSORS
#define FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFreerunCharacter(); \
	friend struct Z_Construct_UClass_AFreerunCharacter_Statics; \
public: \
	DECLARE_CLASS(AFreerunCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPersonProject"), NO_API) \
	DECLARE_SERIALIZER(AFreerunCharacter)


#define FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFreerunCharacter(AFreerunCharacter&&); \
	NO_API AFreerunCharacter(const AFreerunCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFreerunCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFreerunCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFreerunCharacter) \
	NO_API virtual ~AFreerunCharacter();


#define FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_27_PROLOG
#define FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_SPARSE_DATA \
	FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_ACCESSORS \
	FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSONPROJECT_API UClass* StaticClass<class AFreerunCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_gvb7m_Documents_Unreal_Projects_FirstPersonProject_FirstPersonProject_Source_FirstPersonProject_Public_FreerunCharacter_h


#define FOREACH_ENUM_EPLAYERGROUNDSTATE(op) \
	op(EPlayerGroundState::Idle) \
	op(EPlayerGroundState::Walking) \
	op(EPlayerGroundState::Sprinting) \
	op(EPlayerGroundState::Crouching) \
	op(EPlayerGroundState::Sliding) 

enum class EPlayerGroundState : uint8;
template<> struct TIsUEnumClass<EPlayerGroundState> { enum { Value = true }; };
template<> FIRSTPERSONPROJECT_API UEnum* StaticEnum<EPlayerGroundState>();

#define FOREACH_ENUM_EPLAYERAIRSTATE(op) \
	op(EPlayerAirState::None) \
	op(EPlayerAirState::Jumping) \
	op(EPlayerAirState::Falling) \
	op(EPlayerAirState::Climbing) 

enum class EPlayerAirState : uint8;
template<> struct TIsUEnumClass<EPlayerAirState> { enum { Value = true }; };
template<> FIRSTPERSONPROJECT_API UEnum* StaticEnum<EPlayerAirState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
