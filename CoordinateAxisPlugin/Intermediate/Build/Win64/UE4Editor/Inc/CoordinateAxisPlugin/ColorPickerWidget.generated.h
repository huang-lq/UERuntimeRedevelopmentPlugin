// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef COORDINATEAXISPLUGIN_ColorPickerWidget_generated_h
#error "ColorPickerWidget.generated.h already included, missing '#pragma once' in ColorPickerWidget.h"
#endif
#define COORDINATEAXISPLUGIN_ColorPickerWidget_generated_h

#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_12_DELEGATE \
struct _Script_CoordinateAxisPlugin_eventOnColorCancleEvent_Parms \
{ \
	FLinearColor NewColor; \
}; \
static inline void FOnColorCancleEvent_DelegateWrapper(const FMulticastScriptDelegate& OnColorCancleEvent, FLinearColor NewColor) \
{ \
	_Script_CoordinateAxisPlugin_eventOnColorCancleEvent_Parms Parms; \
	Parms.NewColor=NewColor; \
	OnColorCancleEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_11_DELEGATE \
struct _Script_CoordinateAxisPlugin_eventOnColorConfirmEvent_Parms \
{ \
	FLinearColor NewColor; \
}; \
static inline void FOnColorConfirmEvent_DelegateWrapper(const FMulticastScriptDelegate& OnColorConfirmEvent, FLinearColor NewColor) \
{ \
	_Script_CoordinateAxisPlugin_eventOnColorConfirmEvent_Parms Parms; \
	Parms.NewColor=NewColor; \
	OnColorConfirmEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_10_DELEGATE \
struct _Script_CoordinateAxisPlugin_eventOnColorChangeEvent_Parms \
{ \
	FLinearColor NewColor; \
}; \
static inline void FOnColorChangeEvent_DelegateWrapper(const FMulticastScriptDelegate& OnColorChangeEvent, FLinearColor NewColor) \
{ \
	_Script_CoordinateAxisPlugin_eventOnColorChangeEvent_Parms Parms; \
	Parms.NewColor=NewColor; \
	OnColorChangeEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_SPARSE_DATA
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_RPC_WRAPPERS
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUColorPickerWidget(); \
	friend struct Z_Construct_UClass_UColorPickerWidget_Statics; \
public: \
	DECLARE_CLASS(UColorPickerWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoordinateAxisPlugin"), NO_API) \
	DECLARE_SERIALIZER(UColorPickerWidget)


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUColorPickerWidget(); \
	friend struct Z_Construct_UClass_UColorPickerWidget_Statics; \
public: \
	DECLARE_CLASS(UColorPickerWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CoordinateAxisPlugin"), NO_API) \
	DECLARE_SERIALIZER(UColorPickerWidget)


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UColorPickerWidget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UColorPickerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorPickerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorPickerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColorPickerWidget(UColorPickerWidget&&); \
	NO_API UColorPickerWidget(const UColorPickerWidget&); \
public:


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UColorPickerWidget(UColorPickerWidget&&); \
	NO_API UColorPickerWidget(const UColorPickerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UColorPickerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UColorPickerWidget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UColorPickerWidget)


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_PRIVATE_PROPERTY_OFFSET
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_17_PROLOG
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_SPARSE_DATA \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_RPC_WRAPPERS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_INCLASS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_SPARSE_DATA \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_INCLASS_NO_PURE_DECLS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COORDINATEAXISPLUGIN_API UClass* StaticClass<class UColorPickerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_ColorPickerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
