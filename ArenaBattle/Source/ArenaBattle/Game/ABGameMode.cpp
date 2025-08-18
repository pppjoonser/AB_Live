// Fill out your copyright notice in the Description page of Project Settings.


#include "ArenaBattle/Game/ABGameMode.h"
#include "Player/ABPlayerController.h"

AABGameMode::AABGameMode()
{
	// PlayerControllerClass
	PlayerControllerClass = AABPlayerController::StaticClass();

	//Default Pawn Class

}
