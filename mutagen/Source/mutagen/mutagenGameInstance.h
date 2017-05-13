// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "mutagenGameInstance.generated.h"


/**
 * 
 */
UCLASS()
class MUTAGEN_API UmutagenGameInstance : public UGameInstance
{
	GENERATED_BODY()

protected:
		
		/* create a variable to store a reference to the loginWidget
		   which is created in the player controller */
		UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "References|login" )
		class UuserWidget* loginWidgetRef;



	
};
