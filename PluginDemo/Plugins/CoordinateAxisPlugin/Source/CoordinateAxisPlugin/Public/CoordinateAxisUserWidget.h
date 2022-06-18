// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoordinateAxisUserWidget.generated.h"

/**
 * ×ø±êÖáUI
 */

 //Axis state enum type
UENUM(BlueprintType)
enum class EAxisState :uint8
{
	Move  UMETA(DisplayName = "Move"),
	Rotator UMETA(DisplayName = "Rotator"),
	Scale UMETA(DisplayName = "Scale"),
};

 //Space state enum type
UENUM(BlueprintType)
enum class ESpaceState :uint8
{
	World   UMETA(DisplayName = "World"),
	Local   UMETA(DisplayName = "Local"),
};


//Move state enum type
UENUM(BlueprintType)
enum class EMoveState :uint8
{
	None UMETA(DisplayName = "None"),
	X    UMETA(DisplayName = "X"),
	Y    UMETA(DisplayName = "Y"),
	Z    UMETA(DisplayName = "Z"),
	XY   UMETA(DisplayName = "XY"),
	XZ   UMETA(DisplayName = "XZ"),
	YZ   UMETA(DisplayName = "YZ"),
	XYZ  UMETA(DisplayName = "XYZ"),
};

//Rotation state enum type
UENUM(BlueprintType)
enum class ERotationState :uint8
{
	None   UMETA(DisplayName = "None"),
	Roll   UMETA(DisplayName = "Roll"),
	Pitch   UMETA(DisplayName = "Pitch"),
	Yaw   UMETA(DisplayName = "Yaw"),
};

UENUM(BlueprintType)
enum class EPlaneType :uint8
{
	XY   UMETA(DisplayName = "XY"),
	XZ   UMETA(DisplayName = "XZ"),
	YZ   UMETA(DisplayName = "YZ"),
};


//Scale state enum type
UENUM(BlueprintType)
enum class EScaleState :uint8
{
	None UMETA(DisplayName = "None"),
	X    UMETA(DisplayName = "X"),
	Y    UMETA(DisplayName = "Y"),
	Z    UMETA(DisplayName = "Z"),
	XY   UMETA(DisplayName = "XY"),
	XZ   UMETA(DisplayName = "XZ"),
	YZ   UMETA(DisplayName = "YZ"),
	XYZ  UMETA(DisplayName = "XYZ"),
};


UCLASS(Blueprintable)
class COORDINATEAXISPLUGIN_API UCoordinateAxisUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:	
	UFUNCTION(BlueprintImplementableEvent, meta = (
		DisplayName = "SetCurrentActor",
		Keywords = "CurrentActor"
		), Category="CoordinateAxis")
		void SetCurrentActor(AActor* CurrentActor);

	UFUNCTION(BlueprintImplementableEvent, meta = (
		DisplayName = "SetSpaceState",
		Keywords = "Space State"
		), Category = "CoordinateAxis")
		void SetSpaceState(ESpaceState Space);

	UFUNCTION(BlueprintImplementableEvent, meta = (
		DisplayName = "SetAxisState",
		Keywords = "Axis State"
		),Category = "CoordinateAxis")
		void SetAxisState(EAxisState AxisState);

	UFUNCTION(BlueprintImplementableEvent, meta = (
		DisplayName = "SetAxisMoveSpeed",
		Keywords = "Speed"
		), Category = "CoordinateAxis")
		void SetAxisMoveSpeed(int MoveSpeed);

	UFUNCTION(BlueprintImplementableEvent, meta = (
		DisplayName = "SetAxisRotatorSpeed",
		Keywords = "Speed"
		), Category = "CoordinateAxis")
		void SetAxisRotatorSpeed(int RotatorSpeed);

	UFUNCTION(BlueprintImplementableEvent, meta = (
		DisplayName = "SetAxisScaleSpeed",
		Keywords = "Speed"
		), Category = "CoordinateAxis")
		void SetAxisScaleSpeed(float ScaleSpeed);
	
};
