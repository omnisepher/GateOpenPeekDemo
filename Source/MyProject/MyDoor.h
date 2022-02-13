// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyDoor.generated.h"

UCLASS()
class MYPROJECT_API AMyDoor : public APawn
{
	GENERATED_BODY()
	

public:
	// Sets default values for this pawn's properties
	AMyDoor();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IsLocked = false;
	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool IsOpen = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Mesh)
	UStaticMeshComponent* mesh;

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintImplementableEvent)
	void OpenDoor();

	UFUNCTION(BlueprintImplementableEvent)
	void PeekDoor();

};
