#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Blueprint/UserWidget.h"
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

    FVector SceneComponentTest;

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> WidgetClass;

    // Interaction state flag
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    bool bIsInteracting;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> WidgetCheckList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> WidgetCheckList2;

    UFUNCTION(BlueprintCallable)//매크로 삭제 예정.
    void CancelInteraction();
    
private:
    UUserWidget* CurrentWidget;
    // Check for interactable objects each frame
    void CheckForInteractableObjects();

    // Manage highlighting of interactable objects
    void ManageHighlight(AActor* HitActor);

    // Find interactable actor for interaction
    AActor* FindInteractableActor() const;

    // Enable or disable custom depth rendering for an actor
    void SetCustomDepthRecursive(AActor* Actor, bool bEnable);

    // Disable player input
    UFUNCTION(BlueprintCallable)//매크로 삭제 예정.
    void DisablePlayerInput();

    // Enable player input
    UFUNCTION(BlueprintCallable)//매크로 삭제 예정.
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

   

    // Input state flag
    bool bInputDisabled;
};
