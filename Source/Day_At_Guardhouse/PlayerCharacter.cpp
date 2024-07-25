#include "PlayerCharacter.h"
#include "DrawDebugHelpers.h"
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Default constructor
APlayerCharacter::APlayerCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // Initialize camera component
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(RootComponent);

    // Initialize flags
    bIsInteracting = false;
    bInputDisabled = false;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
    Super::BeginPlay();

    // Store the original camera location and rotation at the start
    OriginalCameraLocation = CameraComponent->GetComponentLocation();
    OriginalCameraRotation = CameraComponent->GetComponentRotation();
}

// Tick function called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Tick LineTrace : Find Interactable Objects for Highlight
    CheckForInteractableObjects();

    // Smooth camera transition if interacting
    if (bIsInteracting || bInputDisabled)
    {
        CameraComponent->SetWorldLocationAndRotation(
            FMath::VInterpTo(CameraComponent->GetComponentLocation(), TargetCameraLocation, DeltaTime, 5.0f),
            FMath::RInterpTo(CameraComponent->GetComponentRotation(), TargetCameraRotation, DeltaTime, 5.0f)
        );
    }
}

// Tick LineTrace : Find Interactable Objects for Highlight
void APlayerCharacter::CheckForInteractableObjects()
{
    FVector Start = CameraComponent->GetComponentLocation();
    FVector End = Start + (CameraComponent->GetForwardVector() * 500);
    FHitResult HitResult;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);
    Params.bReturnPhysicalMaterial = false;

    bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params);
    AActor* HitActor = bHit ? HitResult.GetActor() : nullptr;

    ManageHighlight(HitActor);
}

// Once LineTrace : Find Interactable Objects for Interact
AActor* APlayerCharacter::FindInteractableActor() const
{
    FVector Start = CameraComponent->GetComponentLocation();
    FVector End = Start + (CameraComponent->GetForwardVector() * 500);
    FHitResult HitResult;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);
    Params.bReturnPhysicalMaterial = false;

    if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params) && HitResult.GetActor())
    {
        return HitResult.GetActor()->ActorHasTag(FName("Interactable")) ? HitResult.GetActor() : nullptr;
    }
    return nullptr;
}

// Actor Highlight
void APlayerCharacter::ManageHighlight(AActor* HitActor)
{
    static AActor* HighlightedActor = nullptr;

    if (HitActor && HitActor->ActorHasTag(FName("Interactable")))
    {
        if (HighlightedActor != HitActor)
        {
            if (HighlightedActor)
            {
                SetCustomDepthRecursive(HighlightedActor, false);
            }
            HighlightedActor = HitActor;
            SetCustomDepthRecursive(HighlightedActor, true);
        }
    }
    else if (HighlightedActor)
    {
        SetCustomDepthRecursive(HighlightedActor, false);
        HighlightedActor = nullptr;
    }
}

// Recursive Custom Depth
void APlayerCharacter::SetCustomDepthRecursive(AActor* Actor, bool bEnable)
{
    if (!Actor) return;

    TArray<UStaticMeshComponent*> MeshComponents;
    Actor->GetComponents<UStaticMeshComponent>(MeshComponents);

    for (UStaticMeshComponent* MeshComponent : MeshComponents)
    {
        if (MeshComponent && MeshComponent->GetName() == "MainMesh")
        {
            MeshComponent->SetRenderCustomDepth(bEnable);
        }
    }
}

// Setup player input components
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::LookUp);
    PlayerInputComponent->BindAxis("Turn", this, &APlayerCharacter::Turn);
    PlayerInputComponent->BindAxis("Zoom", this, &APlayerCharacter::Zoom);
    PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APlayerCharacter::Interact);
    PlayerInputComponent->BindAction("CancelInteraction", IE_Pressed, this, &APlayerCharacter::CancelInteraction);
}

// Camera control
void APlayerCharacter::LookUp(float AxisValue)
{
    if (!bInputDisabled)
    {
        float NewPitch = FMath::Clamp(GetControlRotation().Pitch + AxisValue, -20.f, 20.f);
        GetController()->SetControlRotation(FRotator(NewPitch, GetControlRotation().Yaw, GetControlRotation().Roll));
    }
}

void APlayerCharacter::Turn(float AxisValue)
{
    if (!bInputDisabled)
    {
        float NewYaw = FMath::Clamp(GetControlRotation().Yaw + AxisValue, -120.f, 120.f);
        GetController()->SetControlRotation(FRotator(GetControlRotation().Pitch, NewYaw, GetControlRotation().Roll));
    }
}

void APlayerCharacter::Zoom(float AxisValue)
{
    if (!bInputDisabled)
    {
        float CurrentFOV = CameraComponent->FieldOfView;
        float NewFOV = FMath::Clamp(CurrentFOV + AxisValue * 10.0f, 60.0f, 90.0f);
        CameraComponent->SetFieldOfView(NewFOV);
    }
}

// Interaction control
void APlayerCharacter::Interact()
{
    AActor* InteractableActor = FindInteractableActor();
    if (InteractableActor)
    {
        TArray<USceneComponent*> SceneComponents;
        InteractableActor->GetComponents<USceneComponent>(SceneComponents);

        for (USceneComponent* SceneComponent : SceneComponents)
        {
            if (SceneComponent->ComponentHasTag(FName("CameraPos")))
            {
                UE_LOG(LogTemp, Warning, TEXT("Found CameraPos component with tag"));

                TargetCameraLocation = SceneComponent->GetComponentLocation();
                TargetCameraRotation = SceneComponent->GetComponentRotation();

                bIsInteracting = true;
                bInputDisabled = true;

                DisablePlayerInput();
                SetCustomDepthRecursive(InteractableActor, false);

                break;
            }
        }
    }
}

void APlayerCharacter::CancelInteraction()
{
    bIsInteracting = false;
    bInputDisabled = false;

    //카메라 위치 원상복귀 (BeginPlay에서 받은 초기 위치로 이동)
    CameraComponent->SetWorldLocationAndRotation(OriginalCameraLocation, OriginalCameraRotation);

    EnablePlayerInput();
}

void APlayerCharacter::DisablePlayerInput()
{
    APlayerController* PlayerController = Cast<APlayerController>(GetController());
    if (PlayerController)
    {
        PlayerController->bShowMouseCursor = true;
        PlayerController->SetIgnoreLookInput(true);
        PlayerController->SetIgnoreMoveInput(true);
    }
}

void APlayerCharacter::EnablePlayerInput()
{
    APlayerController* PlayerController = Cast<APlayerController>(GetController());
    if (PlayerController)
    {
        PlayerController->bShowMouseCursor = false;

        FInputModeGameOnly InputMode;
        PlayerController->SetInputMode(InputMode);

        PlayerController->SetIgnoreLookInput(false);
        PlayerController->SetIgnoreMoveInput(false);

        PlayerController->bEnableClickEvents = true;
        PlayerController->bEnableMouseOverEvents = true;
    }
}
