// Fill out your copyright notice in the Description page of Project Settings.


#include "mutagen.h"
#include "mutagenPlayerController.h"





void AmutagenPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// check if the player controller is locally owned 
	if (IsLocalPlayerController())
	{
		// create the widget and assign it to the loginWidgetRef variable
		loginWidgetRef = CreateWidget<UmutagenUserWidget>(this, widgetTemplateClass);

		// chedk to make sure its not null or not assigned
		if (loginWidgetRef)
		{
			// add the widget to players viewport
			loginWidgetRef->AddToViewport();
			
			// set the player controller input mode to GameOnly
			this->SetInputMode(FInputModeGameOnly());
		}
	}
}
