// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Components/ActorComponent.h"
#include "CoordinateAxisUserWidget.h"
#include "CoordinateAxisComponent.generated.h"

/*
*	主要的控制
*/

UCLASS( Blueprintable,ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COORDINATEAXISPLUGIN_API UCoordinateAxisComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCoordinateAxisComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
private:	
	TSubclassOf<AActor> PostProcess_Class;
	AActor* PostActor;	
	bool SelectMode;
	TSubclassOf<UCoordinateAxisUserWidget> CoordinateAxisWidget_Class;
	TMap<AActor*, FTransform> AllOptionalActorsStartTransform;
	EAxisState LastAxisState;
	ESpaceState LastSpaceState;
	int LastMoveSpeed=0;
	int LastRotatorSpeed=1;
	float LastScaleSpeed=0.1f;
			
	void SetActorSelectState(bool IsOpen);
	void SpawnPostActor();
	bool LoadCoordinateAxisWidgetClass();
	void GetAllActorStartTransform(TArray<TSubclassOf<AActor>> OptionalActors);

public:
	UPROPERTY(BlueprintReadWrite,Category = "CoordinateAxis")
		TArray<TSubclassOf<AActor>> OptionalActorClasses;
	UPROPERTY(BlueprintReadOnly, Category = "CoordinateAxis")
	UCoordinateAxisUserWidget* CoordinateAxis;
	UPROPERTY(BlueprintReadOnly, Category = "CoordinateAxis")
	AActor* CurrentActor;

public:
	//Switch whether it is selection mode	
	UFUNCTION(BlueprintCallable, meta = (
		DisPlayName = "SetSelectMode",
		Keywords = "Select Mode"
		), Category = "CoordinateAxis")
		void SetSelectMode(bool IsSelectMode);

	//Called when the left mouse button is pressed
	UFUNCTION(BlueprintCallable, meta = (
		DisPlayName = "SelectObject",
		Keywords = "Select Object"
		), Category = "CoordinateAxis")
		bool OnMouseLeftButtonDown(int ClassIndex);

	//Switch the mode of coordinate axis "Move/Rotate/Scale"
	UFUNCTION(BlueprintCallable, meta = (
			DisPlayName = "SetAxisState",
			Keywords = "Axis State"
			), Category = "CoordinateAxis")
		void SetAxisState(EAxisState AxisState);

	//Toggle coordinate space type  World/Local
	UFUNCTION(BlueprintCallable, meta = (
		DisPlayName = "SetSpaceMode",
		Keywords = "Space"
		), Category = "CoordinateAxis")
		void SetAxisSpaceMode(ESpaceState Space);

	/*Reset the transformation of the current actor to the 
	state at the beginning of the game*/
	UFUNCTION(BlueprintCallable, meta = (
		DisPlayName = "ResetActorTransform",
		Keywords = "Reset"
		), Category = "CoordinateAxis")
		void ResetCurrentActorTransform();

	/*Reset the transformation of allactors of class to the
	state at the beginning of the game*/
	UFUNCTION(BlueprintCallable, meta = (
		DisPlayName = "ResetAllActorsTransform",
		Keywords = "Reset"
		), Category = "CoordinateAxis")
		void ResetAllActorsTransform();

	//Set actor move speed
	UFUNCTION(BlueprintCallable, meta = (
		DisPlayName = "SetMoveSpeed",
		Keywords = "Speed"
		), Category = "CoordinateAxis")
		void SetMoveSpeed(int MoveSpeed);

	//Set actor rotator speed
	UFUNCTION(BlueprintCallable, meta = (
		DisPlayName = "SetRotatorSpeed",
		Keywords = "Speed"
		), Category = "CoordinateAxis")
		void SetRotatorSpeed(int RotatorSpeed);

	//Set actor scale speed
	UFUNCTION(BlueprintCallable, meta = (
		DisPlayName = "SetScaleSpeed",
		Keywords = "Speed"
		), Category = "CoordinateAxis")
		void SetScaleSpeed(float ScaleSpeed);

	//Delect Select Actor
	UFUNCTION(BlueprintCallable, meta = (
		DisPlayName = "DelectSelectActor",
		Keywords = "Delect"
		), Category = "CoordinateAxis")
		void DelectSelectActor();

	/*Get Actor Start Transform, Reset the transformation of 
	the current actor to the state at the beginning of the game*/
	UFUNCTION(BlueprintCallable, meta = (
		DisPlayName = "GetActorStartTransform",
		Keywords = "GetTransform"
		), Category = "CoordinateAxis")
	void GetActorStartTransform(AActor* actor);
	
		
};
