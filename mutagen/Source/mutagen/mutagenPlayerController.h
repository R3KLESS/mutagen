// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "GameFramework/GameUserSettings.h"
#include "mutagenUserWidget.h"
#include "GameFramework/PlayerController.h"
#include "mutagenPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class MUTAGEN_API AmutagenPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:
	
	// variable for the UmutagenUserWidget class
		 UPROPERTY()
		TSubclassOf<UmutagenUserWidget> widgetTemplateClass;

	// variable for the loginwidget instance reference
	UPROPERTY(BlueprintReadOnly, NoClear, Category = "My Widgets")
		UmutagenUserWidget* loginWidgetRef;

public:

	AmutagenPlayerController();

	// override the begin play function
	void BeginPlay() override;


private:

	// pointer to hold the gameusersettings
	UGameUserSettings* userSettings;
	
	// variable to hold the desktop resolution structure
	FIntPoint desktopRes;
	
	// a function called on beginPlay to setup the users screen resolution.
	void setupLoginWidget();
	
	// a function called on begin play which creates the login screen widget
	void setupScreenResolution();

};
