// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class UUserWidget;
#ifdef COORDINATEAXISPLUGIN_Window_generated_h
#error "Window.generated.h already included, missing '#pragma once' in Window.h"
#endif
#define COORDINATEAXISPLUGIN_Window_generated_h

#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_SPARSE_DATA
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseWindow); \
	DECLARE_FUNCTION(execResize); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execReplaceUserWidget); \
	DECLARE_FUNCTION(execHideWindow); \
	DECLARE_FUNCTION(execShowWindow); \
	DECLARE_FUNCTION(execCreateWindow);


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseWindow); \
	DECLARE_FUNCTION(execResize); \
	DECLARE_FUNCTION(execIsVisible); \
	DECLARE_FUNCTION(execReplaceUserWidget); \
	DECLARE_FUNCTION(execHideWindow); \
	DECLARE_FUNCTION(execShowWindow); \
	DECLARE_FUNCTION(execCreateWindow);


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWindow(); \
	friend struct Z_Construct_UClass_AWindow_Statics; \
public: \
	DECLARE_CLASS(AWindow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoordinateAxisPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWindow)


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWindow(); \
	friend struct Z_Construct_UClass_AWindow_Statics; \
public: \
	DECLARE_CLASS(AWindow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoordinateAxisPlugin"), NO_API) \
	DECLARE_SERIALIZER(AWindow)


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWindow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWindow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWindow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWindow(AWindow&&); \
	NO_API AWindow(const AWindow&); \
public:


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWindow(AWindow&&); \
	NO_API AWindow(const AWindow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWindow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWindow)


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_PRIVATE_PROPERTY_OFFSET
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_11_PROLOG
#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_PRIVATE_PROPERTY_OFFSET \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_SPARSE_DATA \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_RPC_WRAPPERS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_INCLASS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_PRIVATE_PROPERTY_OFFSET \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_SPARSE_DATA \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_INCLASS_NO_PURE_DECLS \
	PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COORDINATEAXISPLUGIN_API UClass* StaticClass<class AWindow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginDemo_Plugins_CoordinateAxisPlugin_Source_CoordinateAxisPlugin_Public_Window_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
