#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "LevelScriptRandomData.generated.h"

/**
 * ���� ��ũ��Ʈ�� ���� �ʱ� �������� ��ȿ���� �����ϰ� �����ϸ�, �̸� �������Ʈ���� ���� �����ϰ� ������� �� �ִ� Ŭ����
 */
UCLASS()
class DAY_AT_GUARDHOUSE_API ALevelScriptRandomData : public ALevelScriptActor
{
	GENERATED_BODY()

public:
	ALevelScriptRandomData();

protected:
	virtual void BeginPlay() override;

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
