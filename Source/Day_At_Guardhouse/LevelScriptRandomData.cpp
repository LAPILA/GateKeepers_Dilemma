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
    // ������ ���� ���¿� ���� ���� ����
    FColor ErrorColor = bErrorData ? FColor::Red : FColor::Green;
    FColor NameColor = bNameValid ? FColor::Red : FColor::Green;
    FColor IDColor = bIDValid ? FColor::Red : FColor::Green;
    FColor PNColor = bPNValid ? FColor::Red : FColor::Green;
    FColor PVColor = bPVValid ? FColor::Red : FColor::Green;
    FColor GenderColor = bGenderValid ? FColor::Red : FColor::Green;
    FColor BirthColor = bBirthValid ? FColor::Red : FColor::Green;

    // ����� �޽����� ������ ���� ���¿� �°� ���
    FString DebugMessage = FString::Printf(TEXT("ErrorData: %s, NameValid: %s, IDValid: %s, PNValid: %s, PVValid: %s, GenderValid: %s, BirthValid: %s"),
        bErrorData ? TEXT("True") : TEXT("False"),
        bNameValid ? TEXT("True") : TEXT("False"),
        bIDValid ? TEXT("True") : TEXT("False"),
        bPNValid ? TEXT("True") : TEXT("False"),
        bPVValid ? TEXT("True") : TEXT("False"),
        bGenderValid ? TEXT("True") : TEXT("False"),
        bBirthValid ? TEXT("True") : TEXT("False"));

    // �� �׸� ���� ���� �޽��� ��� (���� ����)
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, ErrorColor, FString::Printf(TEXT("ErrorData: %s"), bErrorData ? TEXT("True") : TEXT("False")));
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, NameColor, FString::Printf(TEXT("NameValid: %s"), bNameValid ? TEXT("True") : TEXT("False")));
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, IDColor, FString::Printf(TEXT("IDValid: %s"), bIDValid ? TEXT("True") : TEXT("False")));
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, PNColor, FString::Printf(TEXT("PNValid: %s"), bPNValid ? TEXT("True") : TEXT("False")));
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, PVColor, FString::Printf(TEXT("PVValid: %s"), bPVValid ? TEXT("True") : TEXT("False")));
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, GenderColor, FString::Printf(TEXT("GenderValid: %s"), bGenderValid ? TEXT("True") : TEXT("False")));
    GEngine->AddOnScreenDebugMessage(-1, 15.0f, BirthColor, FString::Printf(TEXT("BirthValid: %s"), bBirthValid ? TEXT("True") : TEXT("False")));
}

