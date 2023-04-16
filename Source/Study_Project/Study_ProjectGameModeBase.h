// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Study_ProjectGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class STUDY_PROJECT_API AStudy_ProjectGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	virtual void StartPlay() override;
};
