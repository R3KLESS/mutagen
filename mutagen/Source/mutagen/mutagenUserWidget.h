// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "mutagenUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class MUTAGEN_API UmutagenUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	// this is a custom event called from c++ but implemented in BP to show the login panel
	UFUNCTION(BlueprintImplementableEvent, Category = " My custom events" )
		void showLoginPanelEvent();

};




