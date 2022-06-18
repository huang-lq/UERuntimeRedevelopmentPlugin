// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "ColorPickerWidget.h"
#include "Widgets/SWindow.h"
#include "AppFramework/Public/Widgets/Colors/SColorPicker.h"
#include "ColorPickerActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnColorPickerCloseEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractivePickBeginEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractivePickEndEvent);

/*
*	颜色选择主要模块
*/


UCLASS()
class COORDINATEAXISPLUGIN_API AColorPickerActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AColorPickerActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
		bool bIsModal = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
		bool bUseAlpha = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
		bool bOnlyRefreshOnMouseUp = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
		bool bOnlyRefreshOnOk = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
		bool bExpandAdvancedSection = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
		bool bOpenAsMenu = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
		float DisplayGamma = 2.2f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
		bool sRGBOverride = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
		TArray<FColor> ColorArray;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
		TArray<FLinearColor> LinearColorArray;

	// 	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
	// 		TArray<FColorChannels> ColorChannelsArray;

	UPROPERTY(BlueprintAssignable)
		FOnColorConfirmEvent OnColorCommitted;

	UPROPERTY(BlueprintAssignable)
		FOnColorChangeEvent PreColorCommitted;

	UPROPERTY(BlueprintAssignable)
		FOnColorPickerCloseEvent OnColorPickerWindowClosed;

	UPROPERTY(BlueprintAssignable)
		FOnColorCancleEvent OnColorPickerCancelled;

	UPROPERTY(BlueprintAssignable)
		FOnInteractivePickBeginEvent OnInteractivePickBegin;

	UPROPERTY(BlueprintAssignable)
		FOnInteractivePickEndEvent OnInteractivePickEnd;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
		FLinearColor InitialColorOverride = FLinearColor::White;

	UFUNCTION(BlueprintCallable)
		bool TryOpenColorPicker();

	UFUNCTION()
		void ColorChange(FLinearColor NewColor);

	UFUNCTION()
		void ColorCommit(FLinearColor NewColor);

	UFUNCTION()
		void ColorCancle(FLinearColor NewColor);


	void ColorWindowClose(const TSharedRef<SWindow>& window);

	UFUNCTION()
		void InteractivePickBegin();

	UFUNCTION()
		void InteractivePickEnd();

};
