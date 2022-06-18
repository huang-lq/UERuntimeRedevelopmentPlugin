// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoordinateAxisPlugin/Public/CoordinateAxisUserWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoordinateAxisUserWidget() {}
// Cross Module References
	COORDINATEAXISPLUGIN_API UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_EScaleState();
	UPackage* Z_Construct_UPackage__Script_CoordinateAxisPlugin();
	COORDINATEAXISPLUGIN_API UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_EPlaneType();
	COORDINATEAXISPLUGIN_API UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_ERotationState();
	COORDINATEAXISPLUGIN_API UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_EMoveState();
	COORDINATEAXISPLUGIN_API UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_ESpaceState();
	COORDINATEAXISPLUGIN_API UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_EAxisState();
	COORDINATEAXISPLUGIN_API UClass* Z_Construct_UClass_UCoordinateAxisUserWidget_NoRegister();
	COORDINATEAXISPLUGIN_API UClass* Z_Construct_UClass_UCoordinateAxisUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* EScaleState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoordinateAxisPlugin_EScaleState, Z_Construct_UPackage__Script_CoordinateAxisPlugin(), TEXT("EScaleState"));
		}
		return Singleton;
	}
	template<> COORDINATEAXISPLUGIN_API UEnum* StaticEnum<EScaleState>()
	{
		return EScaleState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EScaleState(EScaleState_StaticEnum, TEXT("/Script/CoordinateAxisPlugin"), TEXT("EScaleState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoordinateAxisPlugin_EScaleState_Hash() { return 1093986017U; }
	UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_EScaleState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoordinateAxisPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EScaleState"), 0, Get_Z_Construct_UEnum_CoordinateAxisPlugin_EScaleState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EScaleState::None", (int64)EScaleState::None },
				{ "EScaleState::X", (int64)EScaleState::X },
				{ "EScaleState::Y", (int64)EScaleState::Y },
				{ "EScaleState::Z", (int64)EScaleState::Z },
				{ "EScaleState::XY", (int64)EScaleState::XY },
				{ "EScaleState::XZ", (int64)EScaleState::XZ },
				{ "EScaleState::YZ", (int64)EScaleState::YZ },
				{ "EScaleState::XYZ", (int64)EScaleState::XYZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//Scale state enum type\n" },
				{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EScaleState::None" },
				{ "ToolTip", "Scale state enum type" },
				{ "X.DisplayName", "X" },
				{ "X.Name", "EScaleState::X" },
				{ "XY.DisplayName", "XY" },
				{ "XY.Name", "EScaleState::XY" },
				{ "XYZ.DisplayName", "XYZ" },
				{ "XYZ.Name", "EScaleState::XYZ" },
				{ "XZ.DisplayName", "XZ" },
				{ "XZ.Name", "EScaleState::XZ" },
				{ "Y.DisplayName", "Y" },
				{ "Y.Name", "EScaleState::Y" },
				{ "YZ.DisplayName", "YZ" },
				{ "YZ.Name", "EScaleState::YZ" },
				{ "Z.DisplayName", "Z" },
				{ "Z.Name", "EScaleState::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoordinateAxisPlugin,
				nullptr,
				"EScaleState",
				"EScaleState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EPlaneType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoordinateAxisPlugin_EPlaneType, Z_Construct_UPackage__Script_CoordinateAxisPlugin(), TEXT("EPlaneType"));
		}
		return Singleton;
	}
	template<> COORDINATEAXISPLUGIN_API UEnum* StaticEnum<EPlaneType>()
	{
		return EPlaneType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlaneType(EPlaneType_StaticEnum, TEXT("/Script/CoordinateAxisPlugin"), TEXT("EPlaneType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoordinateAxisPlugin_EPlaneType_Hash() { return 4293390502U; }
	UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_EPlaneType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoordinateAxisPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlaneType"), 0, Get_Z_Construct_UEnum_CoordinateAxisPlugin_EPlaneType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlaneType::XY", (int64)EPlaneType::XY },
				{ "EPlaneType::XZ", (int64)EPlaneType::XZ },
				{ "EPlaneType::YZ", (int64)EPlaneType::YZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
				{ "XY.DisplayName", "XY" },
				{ "XY.Name", "EPlaneType::XY" },
				{ "XZ.DisplayName", "XZ" },
				{ "XZ.Name", "EPlaneType::XZ" },
				{ "YZ.DisplayName", "YZ" },
				{ "YZ.Name", "EPlaneType::YZ" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoordinateAxisPlugin,
				nullptr,
				"EPlaneType",
				"EPlaneType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERotationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoordinateAxisPlugin_ERotationState, Z_Construct_UPackage__Script_CoordinateAxisPlugin(), TEXT("ERotationState"));
		}
		return Singleton;
	}
	template<> COORDINATEAXISPLUGIN_API UEnum* StaticEnum<ERotationState>()
	{
		return ERotationState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERotationState(ERotationState_StaticEnum, TEXT("/Script/CoordinateAxisPlugin"), TEXT("ERotationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoordinateAxisPlugin_ERotationState_Hash() { return 245314036U; }
	UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_ERotationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoordinateAxisPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERotationState"), 0, Get_Z_Construct_UEnum_CoordinateAxisPlugin_ERotationState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERotationState::None", (int64)ERotationState::None },
				{ "ERotationState::Roll", (int64)ERotationState::Roll },
				{ "ERotationState::Pitch", (int64)ERotationState::Pitch },
				{ "ERotationState::Yaw", (int64)ERotationState::Yaw },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//Rotation state enum type\n" },
				{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "ERotationState::None" },
				{ "Pitch.DisplayName", "Pitch" },
				{ "Pitch.Name", "ERotationState::Pitch" },
				{ "Roll.DisplayName", "Roll" },
				{ "Roll.Name", "ERotationState::Roll" },
				{ "ToolTip", "Rotation state enum type" },
				{ "Yaw.DisplayName", "Yaw" },
				{ "Yaw.Name", "ERotationState::Yaw" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoordinateAxisPlugin,
				nullptr,
				"ERotationState",
				"ERotationState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMoveState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoordinateAxisPlugin_EMoveState, Z_Construct_UPackage__Script_CoordinateAxisPlugin(), TEXT("EMoveState"));
		}
		return Singleton;
	}
	template<> COORDINATEAXISPLUGIN_API UEnum* StaticEnum<EMoveState>()
	{
		return EMoveState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMoveState(EMoveState_StaticEnum, TEXT("/Script/CoordinateAxisPlugin"), TEXT("EMoveState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoordinateAxisPlugin_EMoveState_Hash() { return 1823628393U; }
	UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_EMoveState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoordinateAxisPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMoveState"), 0, Get_Z_Construct_UEnum_CoordinateAxisPlugin_EMoveState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMoveState::None", (int64)EMoveState::None },
				{ "EMoveState::X", (int64)EMoveState::X },
				{ "EMoveState::Y", (int64)EMoveState::Y },
				{ "EMoveState::Z", (int64)EMoveState::Z },
				{ "EMoveState::XY", (int64)EMoveState::XY },
				{ "EMoveState::XZ", (int64)EMoveState::XZ },
				{ "EMoveState::YZ", (int64)EMoveState::YZ },
				{ "EMoveState::XYZ", (int64)EMoveState::XYZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//Move state enum type\n" },
				{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EMoveState::None" },
				{ "ToolTip", "Move state enum type" },
				{ "X.DisplayName", "X" },
				{ "X.Name", "EMoveState::X" },
				{ "XY.DisplayName", "XY" },
				{ "XY.Name", "EMoveState::XY" },
				{ "XYZ.DisplayName", "XYZ" },
				{ "XYZ.Name", "EMoveState::XYZ" },
				{ "XZ.DisplayName", "XZ" },
				{ "XZ.Name", "EMoveState::XZ" },
				{ "Y.DisplayName", "Y" },
				{ "Y.Name", "EMoveState::Y" },
				{ "YZ.DisplayName", "YZ" },
				{ "YZ.Name", "EMoveState::YZ" },
				{ "Z.DisplayName", "Z" },
				{ "Z.Name", "EMoveState::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoordinateAxisPlugin,
				nullptr,
				"EMoveState",
				"EMoveState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESpaceState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoordinateAxisPlugin_ESpaceState, Z_Construct_UPackage__Script_CoordinateAxisPlugin(), TEXT("ESpaceState"));
		}
		return Singleton;
	}
	template<> COORDINATEAXISPLUGIN_API UEnum* StaticEnum<ESpaceState>()
	{
		return ESpaceState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpaceState(ESpaceState_StaticEnum, TEXT("/Script/CoordinateAxisPlugin"), TEXT("ESpaceState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoordinateAxisPlugin_ESpaceState_Hash() { return 398969722U; }
	UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_ESpaceState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoordinateAxisPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpaceState"), 0, Get_Z_Construct_UEnum_CoordinateAxisPlugin_ESpaceState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpaceState::World", (int64)ESpaceState::World },
				{ "ESpaceState::Local", (int64)ESpaceState::Local },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "//Space state enum type\n" },
				{ "Local.DisplayName", "Local" },
				{ "Local.Name", "ESpaceState::Local" },
				{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
				{ "ToolTip", "Space state enum type" },
				{ "World.DisplayName", "World" },
				{ "World.Name", "ESpaceState::World" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoordinateAxisPlugin,
				nullptr,
				"ESpaceState",
				"ESpaceState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EAxisState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CoordinateAxisPlugin_EAxisState, Z_Construct_UPackage__Script_CoordinateAxisPlugin(), TEXT("EAxisState"));
		}
		return Singleton;
	}
	template<> COORDINATEAXISPLUGIN_API UEnum* StaticEnum<EAxisState>()
	{
		return EAxisState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAxisState(EAxisState_StaticEnum, TEXT("/Script/CoordinateAxisPlugin"), TEXT("EAxisState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CoordinateAxisPlugin_EAxisState_Hash() { return 1180752811U; }
	UEnum* Z_Construct_UEnum_CoordinateAxisPlugin_EAxisState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CoordinateAxisPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAxisState"), 0, Get_Z_Construct_UEnum_CoordinateAxisPlugin_EAxisState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAxisState::Move", (int64)EAxisState::Move },
				{ "EAxisState::Rotator", (int64)EAxisState::Rotator },
				{ "EAxisState::Scale", (int64)EAxisState::Scale },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * ??????UI\n *///Axis state enum type\n" },
				{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
				{ "Move.DisplayName", "Move" },
				{ "Move.Name", "EAxisState::Move" },
				{ "Rotator.DisplayName", "Rotator" },
				{ "Rotator.Name", "EAxisState::Rotator" },
				{ "Scale.DisplayName", "Scale" },
				{ "Scale.Name", "EAxisState::Scale" },
				{ "ToolTip", "??????UI\n //Axis state enum type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CoordinateAxisPlugin,
				nullptr,
				"EAxisState",
				"EAxisState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_UCoordinateAxisUserWidget_SetAxisMoveSpeed = FName(TEXT("SetAxisMoveSpeed"));
	void UCoordinateAxisUserWidget::SetAxisMoveSpeed(int32 MoveSpeed)
	{
		CoordinateAxisUserWidget_eventSetAxisMoveSpeed_Parms Parms;
		Parms.MoveSpeed=MoveSpeed;
		ProcessEvent(FindFunctionChecked(NAME_UCoordinateAxisUserWidget_SetAxisMoveSpeed),&Parms);
	}
	static FName NAME_UCoordinateAxisUserWidget_SetAxisRotatorSpeed = FName(TEXT("SetAxisRotatorSpeed"));
	void UCoordinateAxisUserWidget::SetAxisRotatorSpeed(int32 RotatorSpeed)
	{
		CoordinateAxisUserWidget_eventSetAxisRotatorSpeed_Parms Parms;
		Parms.RotatorSpeed=RotatorSpeed;
		ProcessEvent(FindFunctionChecked(NAME_UCoordinateAxisUserWidget_SetAxisRotatorSpeed),&Parms);
	}
	static FName NAME_UCoordinateAxisUserWidget_SetAxisScaleSpeed = FName(TEXT("SetAxisScaleSpeed"));
	void UCoordinateAxisUserWidget::SetAxisScaleSpeed(float ScaleSpeed)
	{
		CoordinateAxisUserWidget_eventSetAxisScaleSpeed_Parms Parms;
		Parms.ScaleSpeed=ScaleSpeed;
		ProcessEvent(FindFunctionChecked(NAME_UCoordinateAxisUserWidget_SetAxisScaleSpeed),&Parms);
	}
	static FName NAME_UCoordinateAxisUserWidget_SetAxisState = FName(TEXT("SetAxisState"));
	void UCoordinateAxisUserWidget::SetAxisState(EAxisState AxisState)
	{
		CoordinateAxisUserWidget_eventSetAxisState_Parms Parms;
		Parms.AxisState=AxisState;
		ProcessEvent(FindFunctionChecked(NAME_UCoordinateAxisUserWidget_SetAxisState),&Parms);
	}
	static FName NAME_UCoordinateAxisUserWidget_SetCurrentActor = FName(TEXT("SetCurrentActor"));
	void UCoordinateAxisUserWidget::SetCurrentActor(AActor* CurrentActor)
	{
		CoordinateAxisUserWidget_eventSetCurrentActor_Parms Parms;
		Parms.CurrentActor=CurrentActor;
		ProcessEvent(FindFunctionChecked(NAME_UCoordinateAxisUserWidget_SetCurrentActor),&Parms);
	}
	static FName NAME_UCoordinateAxisUserWidget_SetSpaceState = FName(TEXT("SetSpaceState"));
	void UCoordinateAxisUserWidget::SetSpaceState(ESpaceState Space)
	{
		CoordinateAxisUserWidget_eventSetSpaceState_Parms Parms;
		Parms.Space=Space;
		ProcessEvent(FindFunctionChecked(NAME_UCoordinateAxisUserWidget_SetSpaceState),&Parms);
	}
	void UCoordinateAxisUserWidget::StaticRegisterNativesUCoordinateAxisUserWidget()
	{
	}
	struct Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisUserWidget_eventSetAxisMoveSpeed_Parms, MoveSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed_Statics::NewProp_MoveSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "DisplayName", "SetAxisMoveSpeed" },
		{ "Keywords", "Speed" },
		{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisUserWidget, nullptr, "SetAxisMoveSpeed", nullptr, nullptr, sizeof(CoordinateAxisUserWidget_eventSetAxisMoveSpeed_Parms), Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RotatorSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed_Statics::NewProp_RotatorSpeed = { "RotatorSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisUserWidget_eventSetAxisRotatorSpeed_Parms, RotatorSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed_Statics::NewProp_RotatorSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "DisplayName", "SetAxisRotatorSpeed" },
		{ "Keywords", "Speed" },
		{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisUserWidget, nullptr, "SetAxisRotatorSpeed", nullptr, nullptr, sizeof(CoordinateAxisUserWidget_eventSetAxisRotatorSpeed_Parms), Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed_Statics::NewProp_ScaleSpeed = { "ScaleSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisUserWidget_eventSetAxisScaleSpeed_Parms, ScaleSpeed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed_Statics::NewProp_ScaleSpeed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "DisplayName", "SetAxisScaleSpeed" },
		{ "Keywords", "Speed" },
		{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisUserWidget, nullptr, "SetAxisScaleSpeed", nullptr, nullptr, sizeof(CoordinateAxisUserWidget_eventSetAxisScaleSpeed_Parms), Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AxisState_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AxisState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics::NewProp_AxisState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics::NewProp_AxisState = { "AxisState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisUserWidget_eventSetAxisState_Parms, AxisState), Z_Construct_UEnum_CoordinateAxisPlugin_EAxisState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics::NewProp_AxisState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics::NewProp_AxisState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "DisplayName", "SetAxisState" },
		{ "Keywords", "Axis State" },
		{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisUserWidget, nullptr, "SetAxisState", nullptr, nullptr, sizeof(CoordinateAxisUserWidget_eventSetAxisState_Parms), Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor_Statics::NewProp_CurrentActor = { "CurrentActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisUserWidget_eventSetCurrentActor_Parms, CurrentActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor_Statics::NewProp_CurrentActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "DisplayName", "SetCurrentActor" },
		{ "Keywords", "CurrentActor" },
		{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisUserWidget, nullptr, "SetCurrentActor", nullptr, nullptr, sizeof(CoordinateAxisUserWidget_eventSetCurrentActor_Parms), Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CoordinateAxisUserWidget_eventSetSpaceState_Parms, Space), Z_Construct_UEnum_CoordinateAxisPlugin_ESpaceState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics::NewProp_Space_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics::NewProp_Space,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics::Function_MetaDataParams[] = {
		{ "Category", "CoordinateAxis" },
		{ "DisplayName", "SetSpaceState" },
		{ "Keywords", "Space State" },
		{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCoordinateAxisUserWidget, nullptr, "SetSpaceState", nullptr, nullptr, sizeof(CoordinateAxisUserWidget_eventSetSpaceState_Parms), Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCoordinateAxisUserWidget_NoRegister()
	{
		return UCoordinateAxisUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCoordinateAxisUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCoordinateAxisUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_CoordinateAxisPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCoordinateAxisUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisMoveSpeed, "SetAxisMoveSpeed" }, // 682300087
		{ &Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisRotatorSpeed, "SetAxisRotatorSpeed" }, // 3872176579
		{ &Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisScaleSpeed, "SetAxisScaleSpeed" }, // 3979225027
		{ &Z_Construct_UFunction_UCoordinateAxisUserWidget_SetAxisState, "SetAxisState" }, // 3431886497
		{ &Z_Construct_UFunction_UCoordinateAxisUserWidget_SetCurrentActor, "SetCurrentActor" }, // 2963259206
		{ &Z_Construct_UFunction_UCoordinateAxisUserWidget_SetSpaceState, "SetSpaceState" }, // 4191626367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCoordinateAxisUserWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CoordinateAxisUserWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CoordinateAxisUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCoordinateAxisUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoordinateAxisUserWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCoordinateAxisUserWidget_Statics::ClassParams = {
		&UCoordinateAxisUserWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCoordinateAxisUserWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCoordinateAxisUserWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCoordinateAxisUserWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCoordinateAxisUserWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCoordinateAxisUserWidget, 2048282719);
	template<> COORDINATEAXISPLUGIN_API UClass* StaticClass<UCoordinateAxisUserWidget>()
	{
		return UCoordinateAxisUserWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCoordinateAxisUserWidget(Z_Construct_UClass_UCoordinateAxisUserWidget, &UCoordinateAxisUserWidget::StaticClass, TEXT("/Script/CoordinateAxisPlugin"), TEXT("UCoordinateAxisUserWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCoordinateAxisUserWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
