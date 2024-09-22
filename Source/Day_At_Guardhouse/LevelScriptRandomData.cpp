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
	FString DebugMessage = FString::Printf(TEXT("ErrorData: %s, NameValid: %s, IDValid: %s, PNValid: %s, PVValid: %s, GenderValid: %s, BirthValid: %s"),
		bErrorData ? TEXT("True") : TEXT("False"),
		bNameValid ? TEXT("True") : TEXT("False"),
		bIDValid ? TEXT("True") : TEXT("False"),
		bPNValid ? TEXT("True") : TEXT("False"),
		bPVValid ? TEXT("True") : TEXT("False"),
		bGenderValid ? TEXT("True") : TEXT("False"),
		bBirthValid ? TEXT("True") : TEXT("False"));

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, DebugMessage); // 디버그 메시지를 화면에 표시
}
