// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoordinateAxisPlugin/Public/CoordinateAxisComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoordinateAxisComponent() {}
// Cross Module References
	COORDINATEAXISPLUGIN_API UClass* Z_Construct_UClass_UCoordinateAxisComponent_NoRegister();
	COORDINATEAXISPLUGIN_API UClass* Z_Construct_UClass_UCoordinateAxisComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CoordinateAxisPlugin();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COORDINATEAXISPLUGIN_API UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_ESpaceState();
	COORDINATEAXISPLUGIN_API UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_EAxisState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COORDINATEAXISPLUGIN_API UClass* Z_Construct_UClass_UCoordinateAxisUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCoordinateAxisComponent::execGetActorStartTransform)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActorStartTransform(Z_Param_actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoordinateAxisComponent::execDelectSelectActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelectSelectActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoordinateAxisComponent::execSetScaleSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScaleSpeed(Z_Param_ScaleSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoordinateAxisComponent::execSetRotatorSpeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RotatorSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRotatorSpeed(Z_Param_RotatorSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoordinateAxisComponent::execSetMoveSpeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MoveSpeed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMoveSpeed(Z_Param_MoveSpeed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoordinateAxisComponent::execResetAllActorsTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAllActorsTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoordinateAxisComponent::execResetCurrentActorTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCurrentActorTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoordinateAxisComponent::execSetAxisSpaceMode)
	{
		P_GET_ENUM(ESpaceState,Z_Param_Space);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAxisSpaceMode(ESpaceState(Z_Param_Space));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoordinateAxisComponent::execSetAxisState)
	{
		P_GET_ENUM(EAxisState,Z_Param_AxisState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAxisState(EAxisState(Z_Param_AxisState));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoordinateAxisComponent::execOnMouseLeftButtonDown)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ClassIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OnMouseLeftButtonDown(Z_Param_ClassIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCoordinateAxisComponent::execSetSelectMode)
	{
		P_GET_UBOOL(Z_Param_IsSelectMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectMode(Z_Param_IsSelectMode);
		P_NATIVE_END;
	}
	void UCoordinateAxisComponent::StaticRegisterNativesUCoordinateAxisComponent()
	{
		UClass* Class = UCoordinateAxisComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelectSelectActor", &UCoordinateAxisComponent::execDelectSelectActor },
			{ "GetActorStartTransform", &UCoordinateAxisComponent::execGetActorStartTransform },
			{ "OnMouseLeftButtonDown", &UCoordinateAxisComponent::execOnMouseLeftButtonDown },
			{ "ResetAllActorsTransform", &UCoordinateAxisComponent::execResetAllActorsTransform },
			{ "ResetCurrentActorTransform", &UCoordinateAxisComponent::execResetCurrentActorTransform },
			{ "SetAxisSpaceMode", &UCoordinateAxisComponent::execSetAxisSpaceMode },
			{ "SetAxisState", &UCoordinateAxisComponent::execSetAxisState },
			{ "SetMoveSpeed", &UCoordinateAxisComponent::execSetMoveSpeed },
			{ "SetRotatorSpeed", &UCoordinateAxisComponent::execSetRotatorSpeed },
			{ "SetScaleSpeed", &UCoordinateAxisComponent::execSetScaleSpeed },
			{ "SetSelectMode", &UCoordinateAxisComponent::execSetSelectMode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCoordinateAxisComponent_DelectSelectActor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisComponent_DelectSelectActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "Comment", "//Delect Select Actor\n" },
		{ "DisPlayName", "DelectSelectActor" },
		{ "Keywords", "Delect" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
		{ "ToolTip", "Delect Select Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisComponent_DelectSelectActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisComponent, nullptr, "DelectSelectActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisComponent_DelectSelectActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_DelectSelectActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisComponent_DelectSelectActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisComponent_DelectSelectActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform_Statics
	{
		struct CoordinateAxisComponent_eventGetActorStartTransform_Parms
		{
			AActor* actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisComponent_eventGetActorStartTransform_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "Comment", "/*Get Actor Start Transform, Reset the transformation of \n\x09the current actor to the state at the beginning of the game*/" },
		{ "DisPlayName", "GetActorStartTransform" },
		{ "Keywords", "GetTransform" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
		{ "ToolTip", "Get Actor Start Transform, Reset the transformation of\n       the current actor to the state at the beginning of the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisComponent, nullptr, "GetActorStartTransform", nullptr, nullptr, sizeof(CoordinateAxisComponent_eventGetActorStartTransform_Parms), Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics
	{
		struct CoordinateAxisComponent_eventOnMouseLeftButtonDown_Parms
		{
			int32 ClassIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ClassIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::NewProp_ClassIndex = { "ClassIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisComponent_eventOnMouseLeftButtonDown_Parms, ClassIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoordinateAxisComponent_eventOnMouseLeftButtonDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoordinateAxisComponent_eventOnMouseLeftButtonDown_Parms), &Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::NewProp_ClassIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "Comment", "//Called when the left mouse button is pressed\n" },
		{ "DisPlayName", "SelectObject" },
		{ "Keywords", "Select Object" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
		{ "ToolTip", "Called when the left mouse button is pressed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisComponent, nullptr, "OnMouseLeftButtonDown", nullptr, nullptr, sizeof(CoordinateAxisComponent_eventOnMouseLeftButtonDown_Parms), Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisComponent_ResetAllActorsTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisComponent_ResetAllActorsTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "Comment", "/*Reset the transformation of allactors of class to the\n\x09state at the beginning of the game*/" },
		{ "DisPlayName", "ResetAllActorsTransform" },
		{ "Keywords", "Reset" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
		{ "ToolTip", "Reset the transformation of allactors of class to the\n       state at the beginning of the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisComponent_ResetAllActorsTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisComponent, nullptr, "ResetAllActorsTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisComponent_ResetAllActorsTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_ResetAllActorsTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisComponent_ResetAllActorsTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisComponent_ResetAllActorsTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisComponent_ResetCurrentActorTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisComponent_ResetCurrentActorTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "Comment", "/*Reset the transformation of the current actor to the \n\x09state at the beginning of the game*/" },
		{ "DisPlayName", "ResetActorTransform" },
		{ "Keywords", "Reset" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
		{ "ToolTip", "Reset the transformation of the current actor to the\n       state at the beginning of the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisComponent_ResetCurrentActorTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisComponent, nullptr, "ResetCurrentActorTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisComponent_ResetCurrentActorTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_ResetCurrentActorTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisComponent_ResetCurrentActorTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisComponent_ResetCurrentActorTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics
	{
		struct CoordinateAxisComponent_eventSetAxisSpaceMode_Parms
		{
			ESpaceState Space;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisComponent_eventSetAxisSpaceMode_Parms, Space), Z_Construct_UEnum_CoordinateAxisPlugin_ESpaceState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics::NewProp_Space_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics::NewProp_Space,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "Comment", "//Toggle coordinate space type  World/Local\n" },
		{ "DisPlayName", "SetSpaceMode" },
		{ "Keywords", "Space" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
		{ "ToolTip", "Toggle coordinate space type  World/Local" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisComponent, nullptr, "SetAxisSpaceMode", nullptr, nullptr, sizeof(CoordinateAxisComponent_eventSetAxisSpaceMode_Parms), Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics
	{
		struct CoordinateAxisComponent_eventSetAxisState_Parms
		{
			EAxisState AxisState;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics::NewProp_AxisState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics::NewProp_AxisState = { "AxisState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisComponent_eventSetAxisState_Parms, AxisState), Z_Construct_UEnum_CoordinateAxisPlugin_EAxisState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics::NewProp_AxisState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics::NewProp_AxisState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "Comment", "//Switch the mode of coordinate axis \"Move/Rotate/Scale\"\n" },
		{ "DisPlayName", "SetAxisState" },
		{ "Keywords", "Axis State" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
		{ "ToolTip", "Switch the mode of coordinate axis \"Move/Rotate/Scale\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisComponent, nullptr, "SetAxisState", nullptr, nullptr, sizeof(CoordinateAxisComponent_eventSetAxisState_Parms), Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed_Statics
	{
		struct CoordinateAxisComponent_eventSetMoveSpeed_Parms
		{
			int32 MoveSpeed;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisComponent_eventSetMoveSpeed_Parms, MoveSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed_Statics::NewProp_MoveSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "Comment", "//Set actor move speed\n" },
		{ "DisPlayName", "SetMoveSpeed" },
		{ "Keywords", "Speed" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
		{ "ToolTip", "Set actor move speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisComponent, nullptr, "SetMoveSpeed", nullptr, nullptr, sizeof(CoordinateAxisComponent_eventSetMoveSpeed_Parms), Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed_Statics
	{
		struct CoordinateAxisComponent_eventSetRotatorSpeed_Parms
		{
			int32 RotatorSpeed;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RotatorSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed_Statics::NewProp_RotatorSpeed = { "RotatorSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisComponent_eventSetRotatorSpeed_Parms, RotatorSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed_Statics::NewProp_RotatorSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "Comment", "//Set actor rotator speed\n" },
		{ "DisPlayName", "SetRotatorSpeed" },
		{ "Keywords", "Speed" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
		{ "ToolTip", "Set actor rotator speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisComponent, nullptr, "SetRotatorSpeed", nullptr, nullptr, sizeof(CoordinateAxisComponent_eventSetRotatorSpeed_Parms), Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed_Statics
	{
		struct CoordinateAxisComponent_eventSetScaleSpeed_Parms
		{
			float ScaleSpeed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed_Statics::NewProp_ScaleSpeed = { "ScaleSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisComponent_eventSetScaleSpeed_Parms, ScaleSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed_Statics::NewProp_ScaleSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "Comment", "//Set actor scale speed\n" },
		{ "DisPlayName", "SetScaleSpeed" },
		{ "Keywords", "Speed" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
		{ "ToolTip", "Set actor scale speed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisComponent, nullptr, "SetScaleSpeed", nullptr, nullptr, sizeof(CoordinateAxisComponent_eventSetScaleSpeed_Parms), Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics
	{
		struct CoordinateAxisComponent_eventSetSelectMode_Parms
		{
			bool IsSelectMode;
		};
		static void NewProp_IsSelectMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSelectMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics::NewProp_IsSelectMode_SetBit(void* Obj)
	{
		((CoordinateAxisComponent_eventSetSelectMode_Parms*)Obj)->IsSelectMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics::NewProp_IsSelectMode = { "IsSelectMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CoordinateAxisComponent_eventSetSelectMode_Parms), &Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics::NewProp_IsSelectMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics::NewProp_IsSelectMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "Comment", "//Switch whether it is selection mode\x09\n" },
		{ "DisPlayName", "SetSelectMode" },
		{ "Keywords", "Select Mode" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
		{ "ToolTip", "Switch whether it is selection mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisComponent, nullptr, "SetSelectMode", nullptr, nullptr, sizeof(CoordinateAxisComponent_eventSetSelectMode_Parms), Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoordinateAxisComponent_NoRegister()
	{
		return UCoordinateAxisComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCoordinateAxisComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OptionalActorClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalActorClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OptionalActorClasses;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CoordinateAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CoordinateAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoordinateAxisComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CoordinateAxisPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoordinateAxisComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoordinateAxisComponent_DelectSelectActor, "DelectSelectActor" }, // 3676024106
		{ &Z_Construct_UFunction_UCoordinateAxisComponent_GetActorStartTransform, "GetActorStartTransform" }, // 4168570907
		{ &Z_Construct_UFunction_UCoordinateAxisComponent_OnMouseLeftButtonDown, "OnMouseLeftButtonDown" }, // 2305410886
		{ &Z_Construct_UFunction_UCoordinateAxisComponent_ResetAllActorsTransform, "ResetAllActorsTransform" }, // 3915089971
		{ &Z_Construct_UFunction_UCoordinateAxisComponent_ResetCurrentActorTransform, "ResetCurrentActorTransform" }, // 3269350642
		{ &Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisSpaceMode, "SetAxisSpaceMode" }, // 3750352686
		{ &Z_Construct_UFunction_UCoordinateAxisComponent_SetAxisState, "SetAxisState" }, // 1333647407
		{ &Z_Construct_UFunction_UCoordinateAxisComponent_SetMoveSpeed, "SetMoveSpeed" }, // 2670078072
		{ &Z_Construct_UFunction_UCoordinateAxisComponent_SetRotatorSpeed, "SetRotatorSpeed" }, // 3925775768
		{ &Z_Construct_UFunction_UCoordinateAxisComponent_SetScaleSpeed, "SetScaleSpeed" }, // 2008360804
		{ &Z_Construct_UFunction_UCoordinateAxisComponent_SetSelectMode, "SetSelectMode" }, // 2014424587
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoordinateAxisComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*\n*\x09??\xd2\xaa?\xc4\xbf???\n*/" },
		{ "IncludePath", "CoordinateAxisComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
		{ "ToolTip", "*      ??\xd2\xaa?\xc4\xbf???" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_OptionalActorClasses_Inner = { "OptionalActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_OptionalActorClasses_MetaData[] = {
		{ "Category", "CoordinateAxis" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_OptionalActorClasses = { "OptionalActorClasses", nullptr, (EPropertyFlags)0x0014000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoordinateAxisComponent, OptionalActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_OptionalActorClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_OptionalActorClasses_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_CoordinateAxis_MetaData[] = {
		{ "Category", "CoordinateAxis" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_CoordinateAxis = { "CoordinateAxis", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoordinateAxisComponent, CoordinateAxis), Z_Construct_UClass_UCoordinateAxisUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_CoordinateAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_CoordinateAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_CurrentActor_MetaData[] = {
		{ "Category", "CoordinateAxis" },
		{ "ModuleRelativePath", "Public/CoordinateAxisComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_CurrentActor = { "CurrentActor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCoordinateAxisComponent, CurrentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_CurrentActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_CurrentActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoordinateAxisComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_OptionalActorClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_OptionalActorClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_CoordinateAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoordinateAxisComponent_Statics::NewProp_CurrentActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoordinateAxisComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoordinateAxisComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoordinateAxisComponent_Statics::ClassParams = {
		&UCoordinateAxisComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCoordinateAxisComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCoordinateAxisComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCoordinateAxisComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoordinateAxisComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoordinateAxisComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoordinateAxisComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoordinateAxisComponent, 2771293177);
	template<> COORDINATEAXISPLUGIN_API UClass* StaticClass<UCoordinateAxisComponent>()
	{
		return UCoordinateAxisComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoordinateAxisComponent(Z_Construct_UClass_UCoordinateAxisComponent, &UCoordinateAxisComponent::StaticClass, TEXT("/Script/CoordinateAxisPlugin"), TEXT("UCoordinateAxisComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoordinateAxisComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
