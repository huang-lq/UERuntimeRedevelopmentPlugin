// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "AppFramework/Public/Widgets/Colors/SColorPicker.h"
#include "ColorPickerWidget.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnColorChangeEvent, FLinearColor, NewColor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnColorConfirmEvent, FLinearColor, NewColor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnColorCancleEvent, FLinearColor, NewColor);

/**
 *    ��ɫѡ��UI
 */
UCLASS()
class COORDINATEAXISPLUGIN_API UColorPickerWidget : public UWidget
{
	GENERATED_BODY()
	
public:
	UColorPickerWidget();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ColorPicker")
		bool bExpandAdvancedSection = false;

	void ColorChange(FLinearColor NewColor);

	UPROPERTY(BlueprintAssignable)
		FOnColorChangeEvent OnColorChange;

	// UWidget interface
	virtual void SynchronizeProperties() override;
	// End of UWidget interface
protected:
	//��д��������������slate����
	virtual TSharedRef< SWidget > RebuildWidget() override;
	//~ Begin UVisual Interface  �ͷ�slate���õ���Դ
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	//~ End UVisual Interface

private:
	//ָ��
	TSharedPtr<SColorPicker> ColorPicker;
};
