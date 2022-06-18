// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAxisState : uint8;
class AActor;
enum class ESpaceState : uint8;
#ifdef COORDINATEAXISPLUGIN_CoordinateAxisUserWidget_generated_h
#error "CoordinateAxisUserWidget.generated.h already included, missing '#pragma once' in CoordinateAxisUserWidget.h"
#endif
#define COORDINATEAXISPLUGIN_CoordinateAxisUserWidget_generated_h

#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_SPARSE_DATA
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_RPC_WRAPPERS
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_EVENT_PARMS \
	struct CoordinateAxisUserWidget_eventSetAxisMoveSpeed_Parms \
	{ \
		int32 MoveSpeed; \
	}; \
	struct CoordinateAxisUserWidget_eventSetAxisRotatorSpeed_Parms \
	{ \
		int32 RotatorSpeed; \
	}; \
	struct CoordinateAxisUserWidget_eventSetAxisScaleSpeed_Parms \
	{ \
		float ScaleSpeed; \
	}; \
	struct CoordinateAxisUserWidget_eventSetAxisState_Parms \
	{ \
		EAxisState AxisState; \
	}; \
	struct CoordinateAxisUserWidget_eventSetCurrentActor_Parms \
	{ \
		AActor* CurrentActor; \
	}; \
	struct CoordinateAxisUserWidget_eventSetSpaceState_Parms \
	{ \
		ESpaceState Space; \
	};


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_CALLBACK_WRAPPERS
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoordinateAxisUserWidget(); \
	friend struct Z_Construct_UClass_UCoordinateAxisUserWidget_Statics; \
public: \
	DECLARE_CLASS(UCoordinateAxisUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoordinateAxisPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoordinateAxisUserWidget)


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUCoordinateAxisUserWidget(); \
	friend struct Z_Construct_UClass_UCoordinateAxisUserWidget_Statics; \
public: \
	DECLARE_CLASS(UCoordinateAxisUserWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoordinateAxisPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCoordinateAxisUserWidget)


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoordinateAxisUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoordinateAxisUserWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoordinateAxisUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoordinateAxisUserWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoordinateAxisUserWidget(UCoordinateAxisUserWidget&&); \
	NO_API UCoordinateAxisUserWidget(const UCoordinateAxisUserWidget&); \
public:


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoordinateAxisUserWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCoordinateAxisUserWidget(UCoordinateAxisUserWidget&&); \
	NO_API UCoordinateAxisUserWidget(const UCoordinateAxisUserWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoordinateAxisUserWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoordinateAxisUserWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoordinateAxisUserWidget)


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_PRIVATE_PROPERTY_OFFSET
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_79_PROLOG \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_EVENT_PARMS


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_PRIVATE_PROPERTY_OFFSET \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_SPARSE_DATA \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_RPC_WRAPPERS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_CALLBACK_WRAPPERS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_INCLASS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_PRIVATE_PROPERTY_OFFSET \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_SPARSE_DATA \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_CALLBACK_WRAPPERS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_INCLASS_NO_PURE_DECLS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h_82_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COORDINATEAXISPLUGIN_API UClass* StaticClass<class UCoordinateAxisUserWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_CoordinateAxisUserWidget_h


#define FOREACH_ENUM_ESCALESTATE(op) \
	op(EScaleState::None) \
	op(EScaleState::X) \
	op(EScaleState::Y) \
	op(EScaleState::Z) \
	op(EScaleState::XY) \
	op(EScaleState::XZ) \
	op(EScaleState::YZ) \
	op(EScaleState::XYZ) 

enum class EScaleState : uint8;
template<> COORDINATEAXISPLUGIN_API UEnum* StaticEnum<EScaleState>();

#define FOREACH_ENUM_EPLANETYPE(op) \
	op(EPlaneType::XY) \
	op(EPlaneType::XZ) \
	op(EPlaneType::YZ) 

enum class EPlaneType : uint8;
template<> COORDINATEAXISPLUGIN_API UEnum* StaticEnum<EPlaneType>();

#define FOREACH_ENUM_EROTATIONSTATE(op) \
	op(ERotationState::None) \
	op(ERotationState::Roll) \
	op(ERotationState::Pitch) \
	op(ERotationState::Yaw) 

enum class ERotationState : uint8;
template<> COORDINATEAXISPLUGIN_API UEnum* StaticEnum<ERotationState>();

#define FOREACH_ENUM_EMOVESTATE(op) \
	op(EMoveState::None) \
	op(EMoveState::X) \
	op(EMoveState::Y) \
	op(EMoveState::Z) \
	op(EMoveState::XY) \
	op(EMoveState::XZ) \
	op(EMoveState::YZ) \
	op(EMoveState::XYZ) 

enum class EMoveState : uint8;
template<> COORDINATEAXISPLUGIN_API UEnum* StaticEnum<EMoveState>();

#define FOREACH_ENUM_ESPACESTATE(op) \
	op(ESpaceState::World) \
	op(ESpaceState::Local) 

enum class ESpaceState : uint8;
template<> COORDINATEAXISPLUGIN_API UEnum* StaticEnum<ESpaceState>();

#define FOREACH_ENUM_EAXISSTATE(op) \
	op(EAxisState::Move) \
	op(EAxisState::Rotator) \
	op(EAxisState::Scale) 

enum class EAxisState : uint8;
template<> COORDINATEAXISPLUGIN_API UEnum* StaticEnum<EAxisState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
