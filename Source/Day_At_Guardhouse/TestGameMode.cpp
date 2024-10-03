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
    bErrorData = UKismetMathLibrary::RandomBoolWithWeight(ErrorProbability); // 오류 데이터 확률 적용

    // 오류 데이터가 없는 경우 모든 검증 변수를 false로 설정
    bNameValid = bErrorData ? UKismetMathLibrary::RandomBoolWithWeight(NameProbability) : false;
    bIDValid = bErrorData ? UKismetMathLibrary::RandomBoolWithWeight(IDProbability) : false;
    bPNValid = bErrorData ? UKismetMathLibrary::RandomBoolWithWeight(PNProbability) : false;
    bPVValid = bErrorData ? UKismetMathLibrary::RandomBoolWithWeight(PVProbability) : false;
    bGenderValid = bErrorData ? UKismetMathLibrary::RandomBoolWithWeight(GenderProbability) : false;
    bBirthValid = bErrorData ? UKismetMathLibrary::RandomBoolWithWeight(BirthProbability) : false;
}

void ATestGameMode::DebugPrintValidationResults()
{
    // 디버그 정보 출력
    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, FString::Printf(TEXT("Debug Information: ErrorData=%s, NameValid=%s, IDValid=%s, PNValid=%s, PVValid=%s, GenderValid=%s, BirthValid=%s"),
        bErrorData ? TEXT("True") : TEXT("False"),
        bNameValid ? TEXT("True") : TEXT("False"),
        bIDValid ? TEXT("True") : TEXT("False"),
        bPNValid ? TEXT("True") : TEXT("False"),
        bPVValid ? TEXT("True") : TEXT("False"),
        bGenderValid ? TEXT("True") : TEXT("False"),
        bBirthValid ? TEXT("True") : TEXT("False")));
}