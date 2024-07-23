// PlayerCharacter.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/ActorComponent.h" 
#include "PlayerCharacter.generated.h"

UCLASS()
class DAY_AT_GUARDHOUSE_API APlayerCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    // Constructor - Sets default values for this character's properties
    APlayerCharacter();
    void SetCustomDepthRecursive(AActor* Actor, bool bEnable);
public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Input function bindings
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    // Camera control functions
    void LookUp(float AxisValue);
    void Turn(float AxisValue);
    void Zoom(float Zoom);

    // Interaction function triggered by 'Mouse Left' key
    void Interact();

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
    UCameraComponent* CameraComponent;
};