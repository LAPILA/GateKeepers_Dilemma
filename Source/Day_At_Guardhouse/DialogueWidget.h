// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DialogueWidget.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FNPCData
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Data")
    FString Name;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Data")
    FString IdentifyNumber;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Data")
    FString PassportNumber;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Data")
    FString PassportValidityPeriod;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Data")
    FString BirthDate;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Data")
    FString Residence;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Data")
    FString Purpose;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Data")
    bool Gender;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Data")
    bool Stamp;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Data")
    bool Diagnosis;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Data")
    int32 NPCType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NPC Data")
    int32 PeriodStay;
};

UCLASS()
class DAY_AT_GUARDHOUSE_API UDialogueWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "NPC Management")
    void SetNPCData(const FNPCData& NewData);

    UFUNCTION(BlueprintCallable, Category = "Dialogue System")
    void UpdateDialogue(const FString& PlayerChoice);

protected:
    FNPCData NPCData;
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* DialogueText;
};
