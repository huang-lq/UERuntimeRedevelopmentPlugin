// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Window.generated.h"

class UUserWidget;

UCLASS()
class COORDINATEAXISPLUGIN_API AWindow : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWindow();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, Category = "Window")
		void CreateWindow(
			UUserWidget* ShowWidget,
			FString title = FString(TEXT("title")),
			FVector2D WindowPositon = FVector2D(200, 200),
			FVector2D WindowSize = FVector2D(200, 200),
			bool bAutoCenter = true,
			bool bHasCloseButton = false,
			bool bHasMinimizeButton = false,
			bool bHasMaximizeButton = false);

	UFUNCTION(BlueprintCallable, Category = "Window")
		void ShowWindow();

	UFUNCTION(BlueprintCallable, Category = "Window")
		void HideWindow();

	UFUNCTION(BlueprintCallable, Category = "Window")
		void ReplaceUserWidget(UUserWidget* ShowWidget);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Window")
		bool IsVisible();

	UFUNCTION(BlueprintCallable, Category = "Window")
		void Resize(FVector2D NewSize);
	
	UFUNCTION(BlueprintCallable, Category = "Window")
		void CloseWindow();

	TSharedPtr<SWindow> window = nullptr;

};
