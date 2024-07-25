#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class DAY_AT_GUARDHOUSE_API APlayerCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    // Constructor
    APlayerCharacter();

    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Setup input bindings
    virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

    // Camera control functions
    void LookUp(float AxisValue);
    void Turn(float AxisValue);
    void Zoom(float AxisValue);

    // Interaction functions
    void Interact();
    void CancelInteraction();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

private:
    // Check for interactable objects each frame
    void CheckForInteractableObjects();

    // Manage highlighting of interactable objects
    void ManageHighlight(AActor* HitActor);

    // Find interactable actor for interaction
    AActor* FindInteractableActor() const;

    // Enable or disable custom depth rendering for an actor
    void SetCustomDepthRecursive(AActor* Actor, bool bEnable);

    // Disable player input
    void DisablePlayerInput();

    // Enable player input
    void EnablePlayerInput();

    // Camera component
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
    UCameraComponent* CameraComponent;

    // Original camera location and rotation
    FVector OriginalCameraLocation;
    FRotator OriginalCameraRotation;

    // Target camera location and rotation for interaction
    FVector TargetCameraLocation;
    FRotator TargetCameraRotation;

    // Interaction state flag
    bool bIsInteracting;

    // Input state flag
    bool bInputDisabled;
};
