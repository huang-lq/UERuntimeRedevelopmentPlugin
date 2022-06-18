// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoordinateAxisPlugin_init() {}
	COORDINATEAXISPLUGIN_API UFunction* Z_Construct_UDelegateFunction_CoordinateAxisPlugin_OnColorChangeEvent__DelegateSignature();
	COORDINATEAXISPLUGIN_API UFunction* Z_Construct_UDelegateFunction_CoordinateAxisPlugin_OnColorConfirmEvent__DelegateSignature();
	COORDINATEAXISPLUGIN_API UFunction* Z_Construct_UDelegateFunction_CoordinateAxisPlugin_OnColorCancleEvent__DelegateSignature();
	COORDINATEAXISPLUGIN_API UFunction* Z_Construct_UDelegateFunction_CoordinateAxisPlugin_OnColorPickerCloseEvent__DelegateSignature();
	COORDINATEAXISPLUGIN_API UFunction* Z_Construct_UDelegateFunction_CoordinateAxisPlugin_OnInteractivePickBeginEvent__DelegateSignature();
	COORDINATEAXISPLUGIN_API UFunction* Z_Construct_UDelegateFunction_CoordinateAxisPlugin_OnInteractivePickEndEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CoordinateAxisPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CoordinateAxisPlugin_OnColorChangeEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CoordinateAxisPlugin_OnColorConfirmEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CoordinateAxisPlugin_OnColorCancleEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CoordinateAxisPlugin_OnColorPickerCloseEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CoordinateAxisPlugin_OnInteractivePickBeginEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CoordinateAxisPlugin_OnInteractivePickEndEvent__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/CoordinateAxisPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBD9AB84C,
				0x39222ADE,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
