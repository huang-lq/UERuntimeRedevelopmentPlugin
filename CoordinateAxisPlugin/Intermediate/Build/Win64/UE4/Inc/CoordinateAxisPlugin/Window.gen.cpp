// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoordinateAxisPlugin/Public/Window.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindow() {}
// Cross Module References
	COORDINATEAXISPLUGIN_API UClass* Z_Construct_UClass_AWindow_NoRegister();
	COORDINATEAXISPLUGIN_API UClass* Z_Construct_UClass_AWindow();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoordinateAxisPlugin();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	DEFINE_FUNCTION(AWindow::execCloseWindow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseWindow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execResize)
	{
		P_GET_STRUCT(FVector2D,Z_Param_NewSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Resize(Z_Param_NewSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execIsVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execReplaceUserWidget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_ShowWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReplaceUserWidget(Z_Param_ShowWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execHideWindow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideWindow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execShowWindow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowWindow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWindow::execCreateWindow)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_ShowWidget);
		P_GET_PROPERTY(FStrProperty,Z_Param_title);
		P_GET_STRUCT(FVector2D,Z_Param_WindowPositon);
		P_GET_STRUCT(FVector2D,Z_Param_WindowSize);
		P_GET_UBOOL(Z_Param_bAutoCenter);
		P_GET_UBOOL(Z_Param_bHasCloseButton);
		P_GET_UBOOL(Z_Param_bHasMinimizeButton);
		P_GET_UBOOL(Z_Param_bHasMaximizeButton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateWindow(Z_Param_ShowWidget,Z_Param_title,Z_Param_WindowPositon,Z_Param_WindowSize,Z_Param_bAutoCenter,Z_Param_bHasCloseButton,Z_Param_bHasMinimizeButton,Z_Param_bHasMaximizeButton);
		P_NATIVE_END;
	}
	void AWindow::StaticRegisterNativesAWindow()
	{
		UClass* Class = AWindow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseWindow", &AWindow::execCloseWindow },
			{ "CreateWindow", &AWindow::execCreateWindow },
			{ "HideWindow", &AWindow::execHideWindow },
			{ "IsVisible", &AWindow::execIsVisible },
			{ "ReplaceUserWidget", &AWindow::execReplaceUserWidget },
			{ "Resize", &AWindow::execResize },
			{ "ShowWindow", &AWindow::execShowWindow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWindow_CloseWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_CloseWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_CloseWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "CloseWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_CloseWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_CloseWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_CloseWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_CloseWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_CreateWindow_Statics
	{
		struct Window_eventCreateWindow_Parms
		{
			UUserWidget* ShowWidget;
			FString title;
			FVector2D WindowPositon;
			FVector2D WindowSize;
			bool bAutoCenter;
			bool bHasCloseButton;
			bool bHasMinimizeButton;
			bool bHasMaximizeButton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShowWidget;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_title;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindowPositon;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindowSize;
		static void NewProp_bAutoCenter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoCenter;
		static void NewProp_bHasCloseButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCloseButton;
		static void NewProp_bHasMinimizeButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasMinimizeButton;
		static void NewProp_bHasMaximizeButton_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasMaximizeButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_ShowWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_ShowWidget = { "ShowWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventCreateWindow_Parms, ShowWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_ShowWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_ShowWidget_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventCreateWindow_Parms, title), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_WindowPositon = { "WindowPositon", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventCreateWindow_Parms, WindowPositon), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_WindowSize = { "WindowSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventCreateWindow_Parms, WindowSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bAutoCenter_SetBit(void* Obj)
	{
		((Window_eventCreateWindow_Parms*)Obj)->bAutoCenter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bAutoCenter = { "bAutoCenter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Window_eventCreateWindow_Parms), &Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bAutoCenter_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bHasCloseButton_SetBit(void* Obj)
	{
		((Window_eventCreateWindow_Parms*)Obj)->bHasCloseButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bHasCloseButton = { "bHasCloseButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Window_eventCreateWindow_Parms), &Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bHasCloseButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bHasMinimizeButton_SetBit(void* Obj)
	{
		((Window_eventCreateWindow_Parms*)Obj)->bHasMinimizeButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bHasMinimizeButton = { "bHasMinimizeButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Window_eventCreateWindow_Parms), &Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bHasMinimizeButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bHasMaximizeButton_SetBit(void* Obj)
	{
		((Window_eventCreateWindow_Parms*)Obj)->bHasMaximizeButton = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bHasMaximizeButton = { "bHasMaximizeButton", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Window_eventCreateWindow_Parms), &Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bHasMaximizeButton_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_CreateWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_ShowWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_WindowPositon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_WindowSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bAutoCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bHasCloseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bHasMinimizeButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_CreateWindow_Statics::NewProp_bHasMaximizeButton,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_CreateWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Window" },
		{ "CPP_Default_bAutoCenter", "true" },
		{ "CPP_Default_bHasCloseButton", "false" },
		{ "CPP_Default_bHasMaximizeButton", "false" },
		{ "CPP_Default_bHasMinimizeButton", "false" },
		{ "CPP_Default_title", "title" },
		{ "CPP_Default_WindowPositon", "(X=200.000,Y=200.000)" },
		{ "CPP_Default_WindowSize", "(X=200.000,Y=200.000)" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_CreateWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "CreateWindow", nullptr, nullptr, sizeof(Window_eventCreateWindow_Parms), Z_Construct_UFunction_AWindow_CreateWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_CreateWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_CreateWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_CreateWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_CreateWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_CreateWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_HideWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_HideWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_HideWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "HideWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_HideWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_HideWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_HideWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_HideWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_IsVisible_Statics
	{
		struct Window_eventIsVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWindow_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Window_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWindow_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Window_eventIsVisible_Parms), &Z_Construct_UFunction_AWindow_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_IsVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_IsVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_IsVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "IsVisible", nullptr, nullptr, sizeof(Window_eventIsVisible_Parms), Z_Construct_UFunction_AWindow_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_IsVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_IsVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_IsVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_IsVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_IsVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics
	{
		struct Window_eventReplaceUserWidget_Parms
		{
			UUserWidget* ShowWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShowWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::NewProp_ShowWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::NewProp_ShowWidget = { "ShowWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventReplaceUserWidget_Parms, ShowWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::NewProp_ShowWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::NewProp_ShowWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::NewProp_ShowWidget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "ReplaceUserWidget", nullptr, nullptr, sizeof(Window_eventReplaceUserWidget_Parms), Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_ReplaceUserWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_ReplaceUserWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_Resize_Statics
	{
		struct Window_eventResize_Parms
		{
			FVector2D NewSize;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWindow_Resize_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Window_eventResize_Parms, NewSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWindow_Resize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWindow_Resize_Statics::NewProp_NewSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_Resize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_Resize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "Resize", nullptr, nullptr, sizeof(Window_eventResize_Parms), Z_Construct_UFunction_AWindow_Resize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_Resize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_Resize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_Resize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_Resize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_Resize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWindow_ShowWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWindow_ShowWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Window" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWindow_ShowWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWindow, nullptr, "ShowWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWindow_ShowWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWindow_ShowWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWindow_ShowWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWindow_ShowWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWindow_NoRegister()
	{
		return AWindow::StaticClass();
	}
	struct Z_Construct_UClass_AWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoordinateAxisPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWindow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWindow_CloseWindow, "CloseWindow" }, // 2226423379
		{ &Z_Construct_UFunction_AWindow_CreateWindow, "CreateWindow" }, // 58863669
		{ &Z_Construct_UFunction_AWindow_HideWindow, "HideWindow" }, // 1331558814
		{ &Z_Construct_UFunction_AWindow_IsVisible, "IsVisible" }, // 1640519749
		{ &Z_Construct_UFunction_AWindow_ReplaceUserWidget, "ReplaceUserWidget" }, // 2425526281
		{ &Z_Construct_UFunction_AWindow_Resize, "Resize" }, // 2590217013
		{ &Z_Construct_UFunction_AWindow_ShowWindow, "ShowWindow" }, // 2563986239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWindow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Window.h" },
		{ "ModuleRelativePath", "Public/Window.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWindow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWindow_Statics::ClassParams = {
		&AWindow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWindow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWindow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWindow, 3783887658);
	template<> COORDINATEAXISPLUGIN_API UClass* StaticClass<AWindow>()
	{
		return AWindow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWindow(Z_Construct_UClass_AWindow, &AWindow::StaticClass, TEXT("/Script/CoordinateAxisPlugin"), TEXT("AWindow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWindow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
