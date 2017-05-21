// Fill out your copyright notice in the Description page of Project Settings.


#include "mutagen.h"
#include "mutagenPlayerController.h"


// constructor
AmutagenPlayerController::AmutagenPlayerController()
	:
	APlayerController()
{

}

// beginPlay function called when the game starts
void AmutagenPlayerController::BeginPlay()
{
	Super::BeginPlay();

	setupLoginWidget();
	setupScreenResolution();
}

// a function called on begin play which creates the login screen widget
void AmutagenPlayerController::setupLoginWidget()
{
	// check to see if the player controller is locally owned 
	if (IsLocalPlayerController())
	{
		// create the widget and assign it to the loginWidgetRef variable
		loginWidgetRef = CreateWidget<UmutagenUserWidget>(this, widgetTemplateClass);

		// check to make sure its not null or not assigned
		if (loginWidgetRef)
		{
			// add the widget to players viewport
			loginWidgetRef->AddToViewport();
			
			// set the player controller input mode to GameOnly
			this->SetInputMode(FInputModeGameOnly());
		}
	}
}

// a function called on beginPlay to setup the users screen resolution.
  void AmutagenPlayerController::setupScreenResolution()
{		
		// get the game user settings and assign it to our ptr userSettings
		userSettings = userSettings->GetGameUserSettings();
		
		// get the users desktop resolution and assign it to the desktopRes variable
		desktopRes = userSettings->GetDesktopResolution();

		// check to make sure that the userSettings variable is not null
		if (userSettings != nullptr)
		{
			// set the screen resolution to be equal to the desktop resolution
			userSettings->SetScreenResolution(desktopRes);

			// apply the resolution settings
			userSettings->ApplyResolutionSettings(false);

			// set the screenMode to fullscreen
			userSettings->SetFullscreenMode(EWindowMode::Fullscreen);

			// apply the users settings 
			userSettings->ApplySettings(false);
		}
		

}
