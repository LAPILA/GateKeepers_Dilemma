#include "TestGameMode.h"
#include "Kismet/KismetMathLibrary.h"

ATestGameMode::ATestGameMode()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ATestGameMode::StartPlay()
{
    Super::StartPlay();
    ValidateRandomData();
}

void ATestGameMode::SetValidationProbabilities(float NewErrorProbability, float NewNameProbability, float NewIDProbability, float NewPNProbability, float NewPVProbability, float NewGenderProbability, float NewBirthProbability)
{
    ErrorProbability = NewErrorProbability;
    NameProbability = NewNameProbability;
    IDProbability = NewIDProbability;
    PNProbability = NewPNProbability;
    PVProbability = NewPVProbability;
    GenderProbability = NewGenderProbability;
    BirthProbability = NewBirthProbability;
}

void ATestGameMode::ValidateRandomData()
{
    bErrorData = UKismetMathLibrary::RandomBoolWithWeight(ErrorProbability); // ���� ������ Ȯ�� ����

    // ���� �����Ͱ� ���� ��� ��� ���� ������ false�� ����
    bNameValid = bErrorData ? UKismetMathLibrary::RandomBoolWithWeight(NameProbability) : false;
    bIDValid = bErrorData ? UKismetMathLibrary::RandomBoolWithWeight(IDProbability) : false;
    bPNValid = bErrorData ? UKismetMathLibrary::RandomBoolWithWeight(PNProbability) : false;
    bPVValid = bErrorData ? UKismetMathLibrary::RandomBoolWithWeight(PVProbability) : false;
    bGenderValid = bErrorData ? UKismetMathLibrary::RandomBoolWithWeight(GenderProbability) : false;
    bBirthValid = bErrorData ? UKismetMathLibrary::RandomBoolWithWeight(BirthProbability) : false;
}

void ATestGameMode::DebugPrintValidationResults()
{
    // ����� ���� ���
    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, FString::Printf(TEXT("Debug Information: ErrorData=%s, NameValid=%s, IDValid=%s, PNValid=%s, PVValid=%s, GenderValid=%s, BirthValid=%s"),
        bErrorData ? TEXT("True") : TEXT("False"),
        bNameValid ? TEXT("True") : TEXT("False"),
        bIDValid ? TEXT("True") : TEXT("False"),
        bPNValid ? TEXT("True") : TEXT("False"),
        bPVValid ? TEXT("True") : TEXT("False"),
        bGenderValid ? TEXT("True") : TEXT("False"),
        bBirthValid ? TEXT("True") : TEXT("False")));
}