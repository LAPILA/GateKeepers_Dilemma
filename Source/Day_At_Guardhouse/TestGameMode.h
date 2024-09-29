// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TestGameMode.generated.h"

/**
 * 
 */
UCLASS()
class DAY_AT_GUARDHOUSE_API ATestGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ATestGameMode();

    virtual void StartPlay() override;

    // ������ ��ȿ�� ���� �Լ�
    UFUNCTION(BlueprintCallable, Category = "Data Validation")
    void ValidateRandomData();

    // ������ Ȯ�� ���� �Լ�
    UFUNCTION(BlueprintCallable, Category = "Data Validation")
    void SetValidationProbabilities(float NewErrorProbability, float NewNameProbability, float NewIDProbability, float NewPNProbability, float NewPVProbability, float NewGenderProbability, float NewBirthProbability);

    // ����� ���� ��� �Լ�
    UFUNCTION(BlueprintCallable, Category = "Debug")
    void DebugPrintValidationResults();

    /** ���� ������ ���� ���� */
    UPROPERTY(BlueprintReadOnly, Category = "Random Data")
    bool bErrorData;

    /** �� ������ ��ȿ�� ���� */
    UPROPERTY(BlueprintReadOnly, Category = "Random Data")
    bool bNameValid;
    UPROPERTY(BlueprintReadOnly, Category = "Random Data")
    bool bIDValid;
    UPROPERTY(BlueprintReadOnly, Category = "Random Data")
    bool bPNValid;
    UPROPERTY(BlueprintReadOnly, Category = "Random Data")
    bool bPVValid;
    UPROPERTY(BlueprintReadOnly, Category = "Random Data")
    bool bGenderValid;
    UPROPERTY(BlueprintReadOnly, Category = "Random Data")
    bool bBirthValid;

private:
    // Ȯ�� ������
    float ErrorProbability;
    float NameProbability;
    float IDProbability;
    float PNProbability;
    float PVProbability;
    float GenderProbability;
    float BirthProbability;
};