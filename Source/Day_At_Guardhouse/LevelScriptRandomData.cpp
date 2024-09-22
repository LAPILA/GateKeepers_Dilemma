#include "LevelScriptRandomData.h"
#include "Kismet/KismetMathLibrary.h"

ALevelScriptRandomData::ALevelScriptRandomData()
{
	PrimaryActorTick.bCanEverTick = false;
}

// ���� ������ ������ �� ȣ��Ǵ� �Լ�
void ALevelScriptRandomData::BeginPlay()
{
	Super::BeginPlay();
	ValidateRandomData();
}

// �� �������� ��ȿ�� ���� Ȯ���� �����ϴ� �Լ�
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

// ���� �������� ��ȿ���� �����ϴ� �Լ�
void ALevelScriptRandomData::ValidateRandomData()
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

// ����� ������ ȭ�鿡 ����ϴ� �Լ�
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

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, DebugMessage); // ����� �޽����� ȭ�鿡 ǥ��
}
