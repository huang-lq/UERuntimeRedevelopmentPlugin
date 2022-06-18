// Fill out your copyright notice in the Description page of Project Settings.


#include "ColorPickerWidget.h"

UColorPickerWidget::UColorPickerWidget()
{

}

void UColorPickerWidget::ColorChange(FLinearColor NewColor)
{
	OnColorChange.Broadcast(NewColor);
}

void UColorPickerWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();
}

TSharedRef<SWidget> UColorPickerWidget::RebuildWidget()
{
	//TSharedRef<SColorPicker> CreatedColorPicker = SNew(SColorPicker)
	SAssignNew(ColorPicker, SColorPicker)
		.ExpandAdvancedSection(bExpandAdvancedSection)
		.PreColorCommitted(FOnLinearColorValueChanged::CreateUObject(this, &UColorPickerWidget::ColorChange))
		;

	return ColorPicker.ToSharedRef();
}

void UColorPickerWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);

	ColorPicker.Reset();
}
