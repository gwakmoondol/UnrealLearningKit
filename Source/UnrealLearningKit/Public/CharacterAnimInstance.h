// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimInstance.generated.h"


class ACharacterBase;
class UCharacterMovementComponent;
/**
 * 
 */
UCLASS()
class UNREALLEARNINGKIT_API UCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UPROPERTY(BlueprintReadOnly)
	ACharacterBase* Character;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	UCharacterMovementComponent* Movement;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	float GroundSpeed = 0.f;
	UPROPERTY(BlueprintReadOnly, Category = Movement)
	bool isFalling;
};
