// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"

#include "BaseAttributeSet.h"

#include "PlayerExecutionCalculation.generated.h"

/**
 * 
 */
UCLASS()
class GASPROJECT_API UPlayerExecutionCalculation : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()
	
public:
	UPlayerExecutionCalculation();

	void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExcutionParams,
		FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const;

	DECLARE_ATTRIBUTE_CAPTUREDEF(Attack)

	DECLARE_ATTRIBUTE_CAPTUREDEF(Armor)

	DECLARE_ATTRIBUTE_CAPTUREDEF(Health)
};
