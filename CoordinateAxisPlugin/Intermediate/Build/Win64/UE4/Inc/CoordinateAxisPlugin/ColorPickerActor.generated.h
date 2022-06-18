// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef COORDINATEAXISPLUGIN_ColorPickerActor_generated_h
#error "ColorPickerActor.generated.h already included, missing '#pragma once' in ColorPickerActor.h"
#endif
#define COORDINATEAXISPLUGIN_ColorPickerActor_generated_h

#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_15_DELEGATE \
static inline void FOnInteractivePickEndEvent_DelegateWrapper(const FMulticastScriptDelegate& OnInteractivePickEndEvent) \
{ \
	OnInteractivePickEndEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_14_DELEGATE \
static inline void FOnInteractivePickBeginEvent_DelegateWrapper(const FMulticastScriptDelegate& OnInteractivePickBeginEvent) \
{ \
	OnInteractivePickBeginEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_13_DELEGATE \
static inline void FOnColorPickerCloseEvent_DelegateWrapper(const FMulticastScriptDelegate& OnColorPickerCloseEvent) \
{ \
	OnColorPickerCloseEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_SPARSE_DATA
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInteractivePickEnd); \
	DECLARE_FUNCTION(execInteractivePickBegin); \
	DECLARE_FUNCTION(execColorCancle); \
	DECLARE_FUNCTION(execColorCommit); \
	DECLARE_FUNCTION(execColorChange); \
	DECLARE_FUNCTION(execTryOpenColorPicker);


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteractivePickEnd); \
	DECLARE_FUNCTION(execInteractivePickBegin); \
	DECLARE_FUNCTION(execColorCancle); \
	DECLARE_FUNCTION(execColorCommit); \
	DECLARE_FUNCTION(execColorChange); \
	DECLARE_FUNCTION(execTryOpenColorPicker);


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAColorPickerActor(); \
	friend struct Z_Construct_UClass_AColorPickerActor_Statics; \
public: \
	DECLARE_CLASS(AColorPickerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoordinateAxisPlugin"), NO_API) \
	DECLARE_SERIALIZER(AColorPickerActor)


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAColorPickerActor(); \
	friend struct Z_Construct_UClass_AColorPickerActor_Statics; \
public: \
	DECLARE_CLASS(AColorPickerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoordinateAxisPlugin"), NO_API) \
	DECLARE_SERIALIZER(AColorPickerActor)


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AColorPickerActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AColorPickerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AColorPickerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AColorPickerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AColorPickerActor(AColorPickerActor&&); \
	NO_API AColorPickerActor(const AColorPickerActor&); \
public:


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AColorPickerActor(AColorPickerActor&&); \
	NO_API AColorPickerActor(const AColorPickerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AColorPickerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AColorPickerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AColorPickerActor)


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_PRIVATE_PROPERTY_OFFSET
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_22_PROLOG
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_PRIVATE_PROPERTY_OFFSET \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_SPARSE_DATA \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_RPC_WRAPPERS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_INCLASS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_PRIVATE_PROPERTY_OFFSET \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_SPARSE_DATA \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_INCLASS_NO_PURE_DECLS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COORDINATEAXISPLUGIN_API UClass* StaticClass<class AColorPickerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
