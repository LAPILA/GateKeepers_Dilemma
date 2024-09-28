#include "LevelScriptRandomData.h"
#include "Kismet/KismetMathLibrary.h"

ALevelScriptRandomData::ALevelScriptRandomData()
{
	PrimaryActorTick.bCanEverTick = false;
}

// 게임 레벨이 시작할 때 호출되는 함수
void ALevelScriptRandomData::BeginPlay()
{
	Super::BeginPlay();
	ValidateRandomData();
}

// 각 데이터의 유효성 검증 확률을 설정하는 함수
void ALevelScriptRandomData::SetValidationProbabilities(float NewErrorProbability, float NewNameProbability, float NewIDProbability, float NewPNProbability, float NewPVProbability, float NewGenderProbability, float NewBirthProbability)
{
	ErrorProbability = NewErrorProbability;

	NameProbability = NewNameProbability;
	IDProbability = NewIDProbability;
	PNProbability = NewPNProbability;
	PVProbability = NewPVProbability;
	GenderProbability = NewGenderProbability;
	BirthProbability = NewBirthProbability;
}

// 랜덤 데이터의 유효성을 검증하는 함수
void ALevelScriptRandomData::ValidateRandomData()
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

// 디버그 정보를 화면에 출력하는 함수
void ALevelScriptRandomData::DebugPrintValidationResults()
{
    // 각각의 변수 상태에 따른 색상 지정
    FColor ErrorColor = bErrorData ? FColor::Red : FColor::Green;
    FColor NameColor = bNameValid ? FColor::Red : FColor::Green;
    FColor IDColor = bIDValid ? FColor::Red : FColor::Green;
    FColor PNColor = bPNValid ? FColor::Red : FColor::Green;
    FColor PVColor = bPVValid ? FColor::Red : FColor::Green;
    FColor GenderColor = bGenderValid ? FColor::Red : FColor::Green;
    FColor BirthColor = bBirthValid ? FColor::Red : FColor::Green;

    // 디버그 메시지를 각각의 변수 상태에 맞게 출력
    FString DebugMessage = FString::Printf(TEXT("ErrorData: %s, NameValid: %s, IDValid: %s, PNValid: %s, PVValid: %s, GenderValid: %s, BirthValid: %s"),
        bErrorData ? TEXT("True") : TEXT("False"),
        bNameValid ? TEXT("True") : TEXT("False"),
        bIDValid ? TEXT("True") : TEXT("False"),
        bPNValid ? TEXT("True") : TEXT("False"),
        bPVValid ? TEXT("True") : TEXT("False"),
        bGenderValid ? TEXT("True") : TEXT("False"),
        bBirthValid ? TEXT("True") : TEXT("False"));

    // 각 항목에 대해 개별 메시지 출력 (색상 적용)
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, ErrorColor, FString::Printf(TEXT("ErrorData: %s"), bErrorData ? TEXT("True") : TEXT("False")));
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, NameColor, FString::Printf(TEXT("NameValid: %s"), bNameValid ? TEXT("True") : TEXT("False")));
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, IDColor, FString::Printf(TEXT("IDValid: %s"), bIDValid ? TEXT("True") : TEXT("False")));
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, PNColor, FString::Printf(TEXT("PNValid: %s"), bPNValid ? TEXT("True") : TEXT("False")));
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, PVColor, FString::Printf(TEXT("PVValid: %s"), bPVValid ? TEXT("True") : TEXT("False")));
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, GenderColor, FString::Printf(TEXT("GenderValid: %s"), bGenderValid ? TEXT("True") : TEXT("False")));
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, BirthColor, FString::Printf(TEXT("BirthValid: %s"), bBirthValid ? TEXT("True") : TEXT("False")));
}

