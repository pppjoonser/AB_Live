// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/ABCharacterMonster.h"

AABCharacterMonster::AABCharacterMonster()
{
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshRef(TEXT("/Script/Engine.SkeletalMesh'/Game/ABAssets/Warriors/Character/CompleteCharacters/SK_CharM_Tusk.SK_CharM_Tusk'"));

	if (MeshRef.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(MeshRef.Object);
	}
}

void AABCharacterMonster::SetDead()
{
	Super::SetDead();

	FTimerHandle DeadTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DeadTimerHandle,
		FTimerDelegate::CreateLambda(
			[&]()
			{
				Destroy();
			}
		),
		DeadEventDelayTime, false
	);
}
