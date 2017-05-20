// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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

	// override the begin play function
	void BeginPlay() override;


private:

	void setupLoginWidget();


	
};
