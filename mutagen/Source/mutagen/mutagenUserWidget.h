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

	UFUNCTION(BlueprintImplementableEvent)
		void showLoginPanel2();


};




