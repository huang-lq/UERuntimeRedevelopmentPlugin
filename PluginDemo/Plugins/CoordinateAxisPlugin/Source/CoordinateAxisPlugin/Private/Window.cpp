// Fill out your copyright notice in the Description page of Project Settings.


#include "Window.h"

// Sets default values
AWindow::AWindow()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWindow::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWindow::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
}

// Called every frame
void AWindow::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWindow::CreateWindow(
	UUserWidget* ShowWidget,
	FString title /*= FString(TEXT("title"))*/,
	FVector2D WindowPositon /*= FVector2D(200, 200)*/,
	FVector2D WindowSize /*= FVector2D(200, 200)*/,
	bool bAutoCenter /*= true*/,
	bool bHasCloseButton /*= false*/,
	bool bHasMinimizeButton /*= false*/,
	bool bHasMaximizeButton /*= false*/)
{
	window = SNew(SWindow)
		.Title(FText::FromString(title))
		.ScreenPosition(WindowPositon)
		.ClientSize(WindowSize)
		.FocusWhenFirstShown(true)
		.CreateTitleBar(true)
		.HasCloseButton(bHasCloseButton)
		.SupportsMinimize(bHasMinimizeButton)
		.SupportsMaximize(bHasMaximizeButton)
		.AutoCenter(bAutoCenter ? (EAutoCenter::PrimaryWorkArea) : (EAutoCenter::None))
		.SizingRule(ESizingRule::UserSized);

	if (window.IsValid())
	{
		window->SetViewportSizeDrivenByWindow(true);
		FSlateApplication& slateApp = FSlateApplication::Get();

		if (TSharedPtr<SWindow> TopWindow = slateApp.GetActiveTopLevelWindow())
		{
			slateApp.AddWindowAsNativeChild(window.ToSharedRef(), TopWindow.ToSharedRef());
		}
		else
		{
			slateApp.AddWindow(window.ToSharedRef(), true);
		}
		if (ShowWidget)
		{
			//UUserWidget* ShowWidget = ory<UUserWidget>(GetWorld(), AdditionalUserWidget);
			window->SetContent(ShowWidget->TakeWidget());
		}

		window->SetWindowMode(EWindowMode::Windowed);
		window->ShowWindow();
	}
}

void AWindow::ShowWindow()
{
	if (window.IsValid())
	{
		window->ShowWindow();
	}
}

void AWindow::HideWindow()
{
	if (window.IsValid())
	{
		window->HideWindow();
	}
}

void AWindow::ReplaceUserWidget(UUserWidget* ShowWidget)
{
	if (ShowWidget && window.IsValid())
	{
		window->SetContent(ShowWidget->TakeWidget());
	}
}

bool AWindow::IsVisible()
{
	if (window)
	{
		return window->IsVisible();
	}
	return false;
}

void AWindow::Resize(FVector2D NewSize)
{
	if (window)
	{
		window->Resize(NewSize);
	}
}

void AWindow::CloseWindow()
{
	if (window)
	{
		window->DestroyWindowImmediately();
		window = nullptr;
	}
}