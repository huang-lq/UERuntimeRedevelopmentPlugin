// Fill out your copyright notice in the Description page of Project Settings.


#include "CoordinateAxisComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values for this component's properties
UCoordinateAxisComponent::UCoordinateAxisComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	// ...
}


// Called when the game starts
void UCoordinateAxisComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	SpawnPostActor();
	LoadCoordinateAxisWidgetClass();
	GetAllActorStartTransform(OptionalActorClasses);
}
// Called every frame
void UCoordinateAxisComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
void UCoordinateAxisComponent::SetActorSelectState(bool IsOpen)
{
	if (CurrentActor != nullptr)
	{

		TArray<USceneComponent*> AllChildComponent;
		UStaticMeshComponent* StaticMeshComponent;
		CurrentActor->GetRootComponent()->GetChildrenComponents(true, AllChildComponent);
		for (size_t i = 0; i < AllChildComponent.Num(); i++)
		{
			StaticMeshComponent = Cast<UStaticMeshComponent>(AllChildComponent[i]);
			if (StaticMeshComponent != nullptr)
			{
				StaticMeshComponent->SetRenderCustomDepth(IsOpen);				
			}
		}
		if (IsOpen==false)
		{
			CurrentActor = nullptr;
			if (CoordinateAxis != nullptr)
			{
				CoordinateAxis->RemoveFromParent();
				CoordinateAxis = nullptr;
			}
		}		
	}	
}
void UCoordinateAxisComponent::SpawnPostActor()
{
	PostProcess_Class = LoadClass<AActor>(NULL,TEXT("Blueprint'/CoordinateAxisPlugin/Blueprint/BP_ProstProcessActor.BP_ProstProcessActor_C'"));
	if (PostProcess_Class == nullptr)
	{		
		UE_LOG(LogTemp,Log,TEXT("PostProcess_Class Faild to Load !!!"));
	}
	else
	{
		PostActor = GetWorld()->SpawnActor<AActor>(PostProcess_Class);
		if (PostActor==nullptr)
		{
			UE_LOG(LogTemp, Log, TEXT("PostProcessActor Faild to Spawn !!!"));
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("PostProcessActor Spawn successful !!!"));
		}
	}
}
bool UCoordinateAxisComponent::LoadCoordinateAxisWidgetClass()
{
	CoordinateAxisWidget_Class = LoadClass<UCoordinateAxisUserWidget>(NULL, TEXT("WidgetBlueprint'/CoordinateAxisPlugin/UMG/UI_ActorAxis.UI_ActorAxis_C'"));
	if(CoordinateAxisWidget_Class!=nullptr)
	{ 
		UE_LOG(LogTemp, Log, TEXT("CoordinateAxisWidget_Class Load successful!!!"));
		return true;
	}
	return false;
}
void UCoordinateAxisComponent::GetAllActorStartTransform(TArray<TSubclassOf<AActor>> OptionalActors)
{
	TArray<AActor*> AllActorOfClass;
	AllOptionalActorsStartTransform.Empty();
	for (size_t i = 0; i < OptionalActors.Num(); i++)
	{
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), OptionalActors[i], AllActorOfClass);		
		for (size_t j = 0; j < AllActorOfClass.Num(); j++)
		{
			AllOptionalActorsStartTransform.Add(AllActorOfClass[j], AllActorOfClass[j]->GetActorTransform());
		}
	}
	if (AllOptionalActorsStartTransform.Num() == 0)
	{
		UE_LOG(LogTemp, Log, TEXT("Get actor transform faild!!!!"));
	}
}
void UCoordinateAxisComponent::SetSelectMode(bool IsSelectMode)
{
	SelectMode = IsSelectMode;
	SetActorSelectState(false);
	if (SelectMode)
	{
		UE_LOG(LogTemp, Log, TEXT("SelectMode!!"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("Not SelectMode!!"));
	}
}
bool UCoordinateAxisComponent::OnMouseLeftButtonDown(int ClassIndex)
{		
	if ((OptionalActorClasses.Num()>0) & (ClassIndex>=0) & (ClassIndex< OptionalActorClasses.Num()))
	{
		FHitResult Hit;
		TArray<AActor*> AllActors;
		APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
		SetActorSelectState(false);
		if (SelectMode)
		{
			if (PlayerController->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, true, Hit))
			{
				UGameplayStatics::GetAllActorsOfClass(GetWorld(), OptionalActorClasses[ClassIndex], AllActors);
				if (AllActors.Contains(Hit.GetActor()) & (CoordinateAxisWidget_Class != nullptr))
				{
					CurrentActor = Hit.GetActor();
					SetActorSelectState(true);
					if (CoordinateAxis == nullptr)
					{
						CoordinateAxis = CreateWidget<UCoordinateAxisUserWidget>(PlayerController, CoordinateAxisWidget_Class);
						CoordinateAxis->SetAxisState(LastAxisState);
						CoordinateAxis->SetSpaceState(LastSpaceState);
						CoordinateAxis->SetAxisMoveSpeed(LastMoveSpeed);
						CoordinateAxis->SetAxisRotatorSpeed(LastRotatorSpeed);
						CoordinateAxis->SetAxisScaleSpeed(LastScaleSpeed);
						CoordinateAxis->SetCurrentActor(CurrentActor);
						CoordinateAxis->AddToViewport();
						return true;
					}
				}
				else
				{
					SetActorSelectState(false);
					UE_LOG(LogTemp, Log, TEXT("No actor select or axis widget class faild to load !!"));
				}
			}
			else
			{
				SetActorSelectState(false);
				UE_LOG(LogTemp, Log, TEXT("No actor be hit!!"));
			}

		}
		else
		{
			SetActorSelectState(false);
			UE_LOG(LogTemp, Log, TEXT("Not SelectMode!!"));
		}
	}
	return false;
}

void UCoordinateAxisComponent::SetAxisState(EAxisState AxisState)
{
	if (CoordinateAxis != nullptr)
	{
		CoordinateAxis->SetAxisState(AxisState);		
	}
	LastAxisState = AxisState;
}


void UCoordinateAxisComponent::SetAxisSpaceMode(ESpaceState Space)
{
	if (CoordinateAxis != nullptr)
	{
		CoordinateAxis->SetSpaceState(Space);
		LastSpaceState = Space;
	}	
}

void UCoordinateAxisComponent::ResetCurrentActorTransform()
{
	if (CurrentActor!=nullptr)
	{
		if (AllOptionalActorsStartTransform.Find(CurrentActor))
		{
			CurrentActor->SetActorTransform(*(AllOptionalActorsStartTransform.Find(CurrentActor)));
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("Not find actor!!!"));			
		}
	}
	else 
	{
		UE_LOG(LogTemp,Log,TEXT("CurrentActor is empty!!!"));
	}
}

void UCoordinateAxisComponent::ResetAllActorsTransform()
{
		
	if (AllOptionalActorsStartTransform.Num()!=0)
	{
		TArray<AActor*> Keys;
		TArray<FTransform> Values;
		AllOptionalActorsStartTransform.GenerateKeyArray(Keys);
		AllOptionalActorsStartTransform.GenerateValueArray(Values);
		for (size_t i = 0; i < Keys.Num(); i++)
		{
			Keys[i]->SetActorTransform(Values[i]);
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("No actor Transform information!!!"));
	}
}

void UCoordinateAxisComponent::SetMoveSpeed(int MoveSpeed)
{
	if (CoordinateAxis!=nullptr) 
	{
		CoordinateAxis->SetAxisMoveSpeed(MoveSpeed);
	}	
	LastMoveSpeed = MoveSpeed;	
}

void UCoordinateAxisComponent::SetRotatorSpeed(int RotatorSpeed)
{
	if(CoordinateAxis != nullptr)
	{
		CoordinateAxis->SetAxisRotatorSpeed(RotatorSpeed);
	}	
	LastRotatorSpeed = RotatorSpeed;
}

void UCoordinateAxisComponent::SetScaleSpeed(float ScaleSpeed)
{
	if (CoordinateAxis != nullptr)
	{
		CoordinateAxis->SetAxisScaleSpeed(ScaleSpeed);
	}	
	LastScaleSpeed = ScaleSpeed;
}
void UCoordinateAxisComponent::DelectSelectActor()
{
	if (CurrentActor != nullptr)
	{
		CurrentActor->Destroy();
		CoordinateAxis->RemoveFromParent();
		AllOptionalActorsStartTransform.Remove(CurrentActor);
	}

}
void UCoordinateAxisComponent::GetActorStartTransform(AActor* actor)
{	
	if (actor != nullptr)
	{
		AllOptionalActorsStartTransform.Add(actor, actor->GetActorTransform());
	}

	if (AllOptionalActorsStartTransform.Num() == 0)
	{
		UE_LOG(LogTemp, Log, TEXT("Get actor transform faild!!!!"));
	}
}





