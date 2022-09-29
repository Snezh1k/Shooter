// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Shooter1GameModeBase.h"
#include "killEmAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER1_API AkillEmAllGameMode : public AShooter1GameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled) override;

private:
	void EndGame(bool bIsPlayerWinner);
};
