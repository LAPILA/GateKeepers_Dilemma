#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "LevelScriptRandomData.generated.h"

/**
 * 레벨 스크립트를 통해 초기 데이터의 유효성을 랜덤하게 검증하며, 이를 블루프린트에서 쉽게 접근하고 디버깅할 수 있는 클래스
 */
UCLASS()
class DAY_AT_GUARDHOUSE_API ALevelScriptRandomData : public ALevelScriptActor
{
	GENERATED_BODY()

public:
	ALevelScriptRandomData();

protected:
	virtual void BeginPlay() override;

	// 데이터 유효성 검증 함수
	UFUNCTION(BlueprintCallable, Category = "Data Validation")
	void ValidateRandomData();

	// 데이터 확률 조정 함수
	UFUNCTION(BlueprintCallable, Category = "Data Validation")
	void SetValidationProbabilities(float NewErrorProbability, float NewNameProbability, float NewIDProbability, float NewPNProbability, float NewPVProbability, float NewGenderProbability, float NewBirthProbability);

	// 디버깅 정보 출력 함수
	UFUNCTION(BlueprintCallable, Category = "Debug")
	void DebugPrintValidationResults();

	/** 오류 데이터 존재 여부 */
	UPROPERTY(BlueprintReadOnly, Category = "Random Data")
	bool bErrorData;

	/** 각 데이터 유효성 변수 */
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
	// 확률 변수들
	float ErrorProbability;
	float NameProbability;
	float IDProbability;
	float PNProbability;
	float PVProbability;
	float GenderProbability;
	float BirthProbability;
};
