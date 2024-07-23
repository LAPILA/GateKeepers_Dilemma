#include "PlayerCharacter.h"
#include "DrawDebugHelpers.h"
#include "Components/ActorComponent.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
APlayerCharacter::APlayerCharacter()
{
    PrimaryActorTick.bCanEverTick = true;

    // Initialize camera component
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    CameraComponent->SetupAttachment(RootComponent);
}

void APlayerCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    FVector Start = CameraComponent->GetComponentLocation();
    FVector End = Start + (CameraComponent->GetForwardVector() * 500);
    FHitResult HitResult;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);
    Params.bReturnPhysicalMaterial = false;

    // Find Actor
    static AActor* HighlightedActor = nullptr;

    bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params);
    AActor* HitActor = bHit ? HitResult.GetActor() : nullptr;

    // CustomDepth Active
    if (bHit && HitActor && HitActor->ActorHasTag(FName("Interactable")))
    {
        if (HighlightedActor != HitActor)
        {
            // CustomDepth DisActive
            if (HighlightedActor)
            {
                SetCustomDepthRecursive(HighlightedActor, false);
            }

            // new Actor Highlighted
            HighlightedActor = HitActor;
            SetCustomDepthRecursive(HighlightedActor, true);
        }
    }
    else
    {
        // CustomDepth DisActive
        if (HighlightedActor)
        {
            SetCustomDepthRecursive(HighlightedActor, false);
            HighlightedActor = nullptr;
        }
    }
}

void APlayerCharacter::SetCustomDepthRecursive(AActor* Actor, bool bEnable)
{
    if (!Actor) return;

    TArray<UStaticMeshComponent*> MeshComponents;
    Actor->GetComponents<UStaticMeshComponent>(MeshComponents);
    for (UStaticMeshComponent* MeshComponent : MeshComponents)
    {
        if (MeshComponent)
        {
            MeshComponent->SetRenderCustomDepth(bEnable);
        }
    }
}


void APlayerCharacter::Interact()
{
    UE_LOG(LogTemp, Warning, TEXT("Mouse Left Clicked"));
    FVector Start = CameraComponent->GetComponentLocation();
    FVector End = Start + (CameraComponent->GetForwardVector() * 500);
    FHitResult HitResult;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);
    Params.bReturnPhysicalMaterial = false;

    static AActor* HighlightedActor = nullptr;

    bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params);
    AActor* HitActor = bHit ? HitResult.GetActor() : nullptr;


    if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params))
    {
        if (HitResult.bBlockingHit)
        {
            if (HitResult.GetActor() != nullptr && HitActor->ActorHasTag(FName("Interactable")))
            {
                UE_LOG(LogTemp, Warning, TEXT("You are interacting with: %s"), *HitResult.GetActor()->GetName());
            }
        }
    }
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAxis("LookUp", this, &APlayerCharacter::LookUp);
    PlayerInputComponent->BindAxis("Turn", this, &APlayerCharacter::Turn);
    PlayerInputComponent->BindAxis("Zoom", this, &APlayerCharacter::Zoom);
    PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &APlayerCharacter::Interact);
}

void APlayerCharacter::LookUp(float AxisValue)
{
    float NewPitch = FMath::Clamp(GetControlRotation().Pitch + AxisValue, -20.f, 20.f);
    GetController()->SetControlRotation(FRotator(NewPitch, GetControlRotation().Yaw, GetControlRotation().Roll));
}


void APlayerCharacter::Turn(float AxisValue)
{
    float NewYaw = FMath::Clamp(GetControlRotation().Yaw + AxisValue, -120.f, 120.f);
    GetController()->SetControlRotation(FRotator(GetControlRotation().Pitch, NewYaw, GetControlRotation().Roll));
}

void APlayerCharacter::Zoom(float AxisValue)
{
    float CurrentFOV = CameraComponent->FieldOfView;

    //Clamp(AddSpeed,MinFov,MaxFov)
    float NewFOV = FMath::Clamp(CurrentFOV + AxisValue * 10.0f, 60.0f, 90.0f);

    CameraComponent->SetFieldOfView(NewFOV);
}
