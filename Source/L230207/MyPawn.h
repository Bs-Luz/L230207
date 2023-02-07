// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

class UBoxComponent;
class UArrowComponent;

UCLASS()

class L230207_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UBoxComponent* Box;

	UArrowComponent* Arrow;

	class UStaticMeshComponent* Body;

	class UStaticMeshComponent* Left;

	class UStaticMeshComponent* Right;

	class USpringArmComponent* SpringArm;

	class UCameraComponent* Camera;

	class UFloatingPawnMovement* Movement;

};
