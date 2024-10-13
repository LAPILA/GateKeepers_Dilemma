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

    UFUNCTION(BlueprintImplementableEvent, Category = "UI")
    void ScanBP();

    UFUNCTION(BlueprintImplementableEvent, Category = "NPC")
    void StartMove_Event();

    UFUNCTION(BlueprintImplementableEvent, Category = "NPC")
    void EndMove_Event();

    UFUNCTION(BlueprintImplementableEvent, Category = "NPC")
    void BackMove_Event();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> WidgetClass;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    bool bIsInteracting;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    bool bIsArrest;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
    bool bIsCheckObject;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> WidgetCheckList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> WidgetInformation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> WidgetGuide;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> WidgetWarning;

    UFUNCTION(BlueprintCallable)//매크로 삭제 예정.
    void CancelInteraction();

    UFUNCTION(BlueprintCallable)
    void StartArrest();
    
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

    void ArrestButton();

    void NextButton();

    void RejectButton();

    // Input state flag
    bool bInputDisabled;
};
