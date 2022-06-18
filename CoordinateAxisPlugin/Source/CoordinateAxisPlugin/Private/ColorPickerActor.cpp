// Fill out your copyright notice in the Description page of Project Settings.


#include "ColorPickerActor.h"

// Sets default values
AColorPickerActor::AColorPickerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AColorPickerActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AColorPickerActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


bool AColorPickerActor::TryOpenColorPicker()
{
	FColorPickerArgs PickerArgs;
	PickerArgs.bIsModal = bIsModal;
	PickerArgs.bUseAlpha = bUseAlpha;
	PickerArgs.bOnlyRefreshOnMouseUp = bOnlyRefreshOnMouseUp;
	PickerArgs.bOnlyRefreshOnOk = bOnlyRefreshOnMouseUp;
	PickerArgs.bExpandAdvancedSection = bExpandAdvancedSection;
	PickerArgs.bOpenAsMenu = bOpenAsMenu;
	PickerArgs.DisplayGamma = DisplayGamma;
	PickerArgs.sRGBOverride = sRGBOverride;
	//PickerArgs.ColorArray = &ColorArray;
	//PickerArgs.LinearColorArray = &LinearColorArray;
	//PickerArgs.ColorChannelsArray = &ColorChannelsArray;
	PickerArgs.OnColorCommitted = FOnLinearColorValueChanged::CreateUObject(this, &AColorPickerActor::ColorCommit);
	PickerArgs.PreColorCommitted = FOnLinearColorValueChanged::CreateUObject(this, &AColorPickerActor::ColorChange);
	PickerArgs.OnColorPickerWindowClosed = FOnWindowClosed::CreateUObject(this, &AColorPickerActor::ColorWindowClose);
	PickerArgs.OnColorPickerCancelled = FOnColorPickerCancelled::CreateUObject(this, &AColorPickerActor::ColorCancle);
	PickerArgs.OnInteractivePickBegin = FSimpleDelegate::CreateUObject(this, &AColorPickerActor::InteractivePickBegin);
	PickerArgs.OnInteractivePickEnd = FSimpleDelegate::CreateUObject(this, &AColorPickerActor::InteractivePickEnd);
	PickerArgs.InitialColorOverride = InitialColorOverride;

	return OpenColorPicker(PickerArgs);
}

void AColorPickerActor::ColorChange(FLinearColor NewColor)
{
	PreColorCommitted.Broadcast(NewColor);
}

void AColorPickerActor::ColorCommit(FLinearColor NewColor)
{
	OnColorCommitted.Broadcast(NewColor);
}

void AColorPickerActor::ColorCancle(FLinearColor NewColor)
{
	OnColorPickerCancelled.Broadcast(NewColor);
}

void AColorPickerActor::ColorWindowClose(const TSharedRef<SWindow>& window)
{
	OnColorPickerWindowClosed.Broadcast();
}

void AColorPickerActor::InteractivePickBegin()
{
	OnInteractivePickBegin.Broadcast();
}

void AColorPickerActor::InteractivePickEnd()
{
	OnInteractivePickEnd.Broadcast();
}