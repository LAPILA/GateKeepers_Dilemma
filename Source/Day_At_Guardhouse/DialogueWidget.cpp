// Fill out your copyright notice in the Description page of Project Settings.


#include "DialogueWidget.h"
#include "Components/TextBlock.h"

void UDialogueWidget::SetNPCData(const FNPCData& NewData)
{
    NPCData = NewData;
}

void UDialogueWidget::UpdateDialogue(const FString& PlayerChoice)
{
    FString Response;

    // Constructing more expressive responses for each query
    if (PlayerChoice == "AskPurpose")
    {
        Response = FString::Printf(TEXT("Actually, I'm here because %s. It took me a while to decide, but I couldn��t miss this chance."), *NPCData.Purpose);
    }
    else if (PlayerChoice == "AskResidence")
    {
        Response = FString::Printf(TEXT("Oh, I'm from %s. Born and raised there. Every day, the same scenery comforts me."), *NPCData.Residence);
    }
    else if (PlayerChoice == "AskBirthDate")
    {
        Response = FString::Printf(TEXT("My birthday? It's %s. Being born in winter means I always spend it in the cold, but I do love it when it snows."), *NPCData.BirthDate);
    }
    else if (PlayerChoice == "AskPassport")
    {
        Response = FString::Printf(TEXT("My passport number is %s, and it's valid until %s. Renewing it is always a hassle, always has been."), *NPCData.PassportNumber, *NPCData.PassportValidityPeriod);
    }
    else if (PlayerChoice == "AskGender")
    {
        FString GenderStr = NPCData.Gender ? "male" : "female";
        Response = FString::Printf(TEXT("Well, I am %s, though I don't really think that should matter much."), *GenderStr);
    }
    else if (PlayerChoice == "AskStamp")
    {
        FString StampStr = NPCData.Stamp ? "Yes, it has been stamped. It was quite nerve-wracking during the entry." : "No, not yet stamped. I've been so anxious I could hardly sleep.";
        Response = FString::Printf(TEXT("Stamp status: %s"), *StampStr);
    }
    else if (PlayerChoice == "AskDiagnosis")
    {
        FString DiagnosisStr = NPCData.Diagnosis ? "Yes, I've been diagnosed. Health comes first, you know, I always get checked regularly." : "No, no diagnosis thankfully.";
        Response = FString::Printf(TEXT("Oh, and my health status is %s"), *DiagnosisStr);
    }
    else if (PlayerChoice == "AskPeriodStay")
    {
        Response = FString::Printf(TEXT("I plan to stay for about %d days. Not enough time to experience everything, right?"), NPCData.PeriodStay);
    }
    else
    {
        Response = "What would you like to know? I've been quite curious about many things ever since I planned my trip here.";
    }

    if (DialogueText)
    {
        DialogueText->SetText(FText::FromString(Response));
    }
}
