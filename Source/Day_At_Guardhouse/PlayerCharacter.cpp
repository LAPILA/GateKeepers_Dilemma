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

    //if (WidgetClass) {//Widget ��ȿ�� �˻�
    //    CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);
    //    if (!CurrentWidget) {
    //        UE_LOG(LogTemp, Error, TEXT("CurrentWidget creation failed!"));
    //    }
    //}
    //else {//����Ŭ������ NULL�̸� ������ ��. ������ �ʿ��� ������ ����.
    //    UE_LOG(LogTemp, Error, TEXT("WidgetClass is NULL in BeginPlay!"));
    //}
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
            bIsCheckObject = true;
            UE_LOG(LogTemp, Warning, TEXT("Highlight"));
            SetCustomDepthRecursive(HighlightedActor, true);
        }
    }
    else if (HighlightedActor)
    {
        SetCustomDepthRecursive(HighlightedActor, false);
        HighlightedActor = nullptr;
        bIsCheckObject = false;
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
        float NewPitch = FMath::Clamp(GetControlRotation().Pitch + AxisValue, -20.f, 20.f);//-20,20
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

void APlayerCharacter::Zoom(float AxisValue) //zoom ��� ��ſ� ī�޶� �߰��ؼ� Ʈ���̵̽� ��ü�� interaction�� �ش� ī�޶�� ���� �̵��ϸ� ���?
{
    if (!bInputDisabled)
    {
        float CurrentFOV = CameraComponent->FieldOfView;
        float NewFOV = FMath::Clamp(CurrentFOV + AxisValue * 10.0f, 60.0f, 90.0f); //60,90
        CameraComponent->SetFieldOfView(NewFOV);
    }
}

// Interaction control
void APlayerCharacter::Interact()//WidgetCheckList
{
    AActor* InteractableActor = FindInteractableActor();
    if (InteractableActor)
    {
        TArray<USceneComponent*> SceneComponents;
        InteractableActor->GetComponents<USceneComponent>(SceneComponents);

        UE_LOG(LogTemp, Error, TEXT("interacter"));

        // ���� �������Ʈ Ŭ������ ������ ����
        //TSubclassOf<UUserWidget> ActorWidgetClass = nullptr;

        for (USceneComponent* SceneComponent : SceneComponents)
        {
            if (SceneComponent->ComponentHasTag(FName("CameraPos")) && SceneComponent->ComponentHasTag(FName("WidgetWarning"))){//�±׷� �ش� ���� �������Ʈ ����Ʈ�� ���.
                UE_LOG(LogTemp, Warning, TEXT("find WidgetWarning"));
                //ActorWidgetClass = WidgetWarning;

                //if (ActorWidgetClass) {//Widget ��ȿ�� �˻�
                //    CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), ActorWidgetClass);
                //    if (!CurrentWidget) {
                //        UE_LOG(LogTemp, Error, TEXT("WidgetWarning creation failed!"));
                //    }
                //    else {
                //        UE_LOG(LogTemp, Error, TEXT("currentwidget �������. WidgetWarning"));
                //    }
                //}
                //else {//����Ŭ������ NULL�̸� ������ ��. ������ �ʿ��� ������ ����.
                //    UE_LOG(LogTemp, Error, TEXT("WidgetWarning is NULL in BeginPlay!"));
                //}

                //UE_LOG(LogTemp, Warning, TEXT("Found CameraPos component with tag"));

                //TargetCameraLocation = SceneComponent->GetComponentLocation();
                //TargetCameraRotation = SceneComponent->GetComponentRotation();

                //bIsInteracting = true;
                //bInputDisabled = true;

                //DisablePlayerInput();
                //SetCustomDepthRecursive(InteractableActor, false);

                break;
            }//else if �����Ϸ�!  else if������ CameraPos���� NoCamera�� ��쿡 �۵��ϵ��� ����.
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("WidgetCheckList"))) {//NoCamera�� WidgetCheckList�� �±׷� ���� �ִ� ��� �ش� ���� �������Ʈ ����Ʈ�� ���.
                UE_LOG(LogTemp, Warning, TEXT("find widget "));
                CheckList();
                
                //ActorWidgetClass = WidgetCheckList;

                //if (ActorWidgetClass) {//Widget ��ȿ�� �˻�
                //    CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), ActorWidgetClass);
                //    if (!CurrentWidget) {
                //        UE_LOG(LogTemp, Error, TEXT("WidgetCheckList creation failed!"));
                //    }
                //    else {
                //        UE_LOG(LogTemp, Error, TEXT("currentwidget �������. widgetchecklist"));
                //    }
                //}
                //else {//����Ŭ������ NULL�̸� ������ ��. ������ �ʿ��� ������ ����.
                //    UE_LOG(LogTemp, Error, TEXT("WidgetCheckList is NULL in BeginPlay!"));
                //}
                //UE_LOG(LogTemp, Warning, TEXT("NoCamera component with tag"));

                //TargetCameraLocation = CameraComponent->GetComponentLocation();  //FVector(-60.0f, 60.0f, 330.0f); ī�޶� ������Ʈ ��ġ�� �̵�.
                //TargetCameraRotation = SceneComponent->GetComponentRotation();

                //bIsInteracting = true;
                //bInputDisabled = true;

                //DisablePlayerInput();
                //SetCustomDepthRecursive(InteractableActor, false);

                break;
            }
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("WidgetInformation"))) {
                UE_LOG(LogTemp, Warning, TEXT("find WidgetInformation "));
                ViewInformation();
                //ActorWidgetClass = WidgetInformation;

                //if (ActorWidgetClass) {//Widget ��ȿ�� �˻�
                //    CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), ActorWidgetClass);
                //    if (!CurrentWidget) {
                //        UE_LOG(LogTemp, Error, TEXT("WidgetInformation creation failed!"));
                //    }
                //    else {
                //        UE_LOG(LogTemp, Error, TEXT("currentwidget �������. WidgetInformation"));
                //    }
                //}
                //else {//����Ŭ������ NULL�̸� ������ ��. ������ �ʿ��� ������ ����.
                //    UE_LOG(LogTemp, Error, TEXT("WidgetInformation is NULL in BeginPlay!"));
                //}
                //UE_LOG(LogTemp, Warning, TEXT("NoCamera component with tag"));

                //TargetCameraLocation = CameraComponent->GetComponentLocation();  //FVector(-60.0f, 60.0f, 330.0f); ī�޶� ������Ʈ ��ġ�� �̵�.
                //TargetCameraRotation = SceneComponent->GetComponentRotation();

                //bIsInteracting = true;
                //bInputDisabled = true;

                //DisablePlayerInput();
                //SetCustomDepthRecursive(InteractableActor, false);

                break;
            }
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("Arrest"))) {//Arrest Button ������
                UE_LOG(LogTemp, Log, TEXT("find Arrest"));
                //arrest �ִϸ��̼� �Ϸ�Ǹ� �ڵ� �߰� ����.
                //ActorWidgetClass = WidgetInformation;
                if (SceneComponent->ComponentHasTag(FName("NPC"))) {
                    UE_LOG(LogTemp, Log, TEXT("find ArrestNPC"));
                    //Arrest
                    //bIsArrest = true;
                    StartArrest();
                }
                break;
            }
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("Next"))) {//Next Button ������
                UE_LOG(LogTemp, Log, TEXT("find Next"));
                StartMove_Event();
                break;
            }
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("Reject"))) {//Reject Button ������
                UE_LOG(LogTemp, Warning, TEXT("find Reject"));
                BackMove_Event();
                break;
            }
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("Scan"))) {//Scan Button ������
                UE_LOG(LogTemp, Log, TEXT("find Scan"));
                ScanBP();
                break;
            }
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("Pass"))) {//Next Button ������
                UE_LOG(LogTemp, Log, TEXT("find Pass"));
                EndMove_Event();
                break;
            }
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("Question"))) {
                UE_LOG(LogTemp, Log, TEXT("find Question"));
                QuestionButton();
                break;
            }
        }
    }
}

void APlayerCharacter::CancelInteraction()
{
    bIsInteracting = false;
    bInputDisabled = false;

    //ī�޶� ��ġ ���󺹱� (BeginPlay���� ���� �ʱ� ��ġ�� �̵�)
    CameraComponent->SetWorldLocationAndRotation(OriginalCameraLocation, OriginalCameraRotation);

    EnablePlayerInput();

    //if (CurrentWidget) {//CancleInteraction()�� ����Ʈ�� ���� ����.
    //    CurrentWidget->RemoveFromParent();
    //    UE_LOG(LogTemp, Warning, TEXT("Widget remove to Viewport"));//debug tool
    //}
    //else {
    //    UE_LOG(LogTemp, Error, TEXT("CurrentWidget is NULL in CancelInteraction!"));
    //}
}

void APlayerCharacter::DisablePlayerInput()
{
    APlayerController* PlayerController = Cast<APlayerController>(GetController());
    if (PlayerController)
    {
        //if (CurrentWidget) {//DisablePlayerInput()�� ����Ʈ�� ���� ����
        //    CurrentWidget->AddToViewport();
        //    UE_LOG(LogTemp, Warning, TEXT("Widget Added to Viewport"));//debug tool
        //}
        //else {
        //    UE_LOG(LogTemp, Error, TEXT("currentwidget �׾���. diableplayerinput"));
        //}
        PlayerController->bShowMouseCursor = true;
        PlayerController->SetIgnoreLookInput(true);
        PlayerController->SetIgnoreMoveInput(true);
    }
    else {
        UE_LOG(LogTemp, Error, TEXT("PlayerController is NULL in DisablePlayerInput!"));
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

void APlayerCharacter::StartArrest() {
    bIsArrest = true;
}

//���Ŀ� �߰� ����.
void APlayerCharacter::ArrestButton() {

}

void APlayerCharacter::NextButton() {

}

void APlayerCharacter::RejectButton() {

}