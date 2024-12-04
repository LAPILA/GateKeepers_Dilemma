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

    //if (WidgetClass) {//Widget 유효성 검사
    //    CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), WidgetClass);
    //    if (!CurrentWidget) {
    //        UE_LOG(LogTemp, Error, TEXT("CurrentWidget creation failed!"));
    //    }
    //}
    //else {//위젯클래스가 NULL이면 에러가 뜸. 수정이 필요할 것으로 보임.
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

void APlayerCharacter::Zoom(float AxisValue) //zoom 기능 대신에 카메라 추가해서 트레이싱된 물체와 interaction시 해당 카메라로 시점 이동하면 어떨까?
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

        // 위젯 블루프린트 클래스를 저장할 변수
        //TSubclassOf<UUserWidget> ActorWidgetClass = nullptr;

        for (USceneComponent* SceneComponent : SceneComponents)
        {
            if (SceneComponent->ComponentHasTag(FName("CameraPos")) && SceneComponent->ComponentHasTag(FName("WidgetWarning"))){//태그로 해당 위젯 블루프린트 뷰포트에 출력.
                UE_LOG(LogTemp, Warning, TEXT("find WidgetWarning"));
                //ActorWidgetClass = WidgetWarning;

                //if (ActorWidgetClass) {//Widget 유효성 검사
                //    CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), ActorWidgetClass);
                //    if (!CurrentWidget) {
                //        UE_LOG(LogTemp, Error, TEXT("WidgetWarning creation failed!"));
                //    }
                //    else {
                //        UE_LOG(LogTemp, Error, TEXT("currentwidget 살아있음. WidgetWarning"));
                //    }
                //}
                //else {//위젯클래스가 NULL이면 에러가 뜸. 수정이 필요할 것으로 보임.
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
            }//else if 수정완료!  else if문으로 CameraPos말고 NoCamera인 경우에 작동하도록 수정.
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("WidgetCheckList"))) {//NoCamera와 WidgetCheckList를 태그로 갖고 있는 경우 해당 위젯 블루프린트 뷰포트에 출력.
                UE_LOG(LogTemp, Warning, TEXT("find widget "));
                CheckList();
                
                //ActorWidgetClass = WidgetCheckList;

                //if (ActorWidgetClass) {//Widget 유효성 검사
                //    CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), ActorWidgetClass);
                //    if (!CurrentWidget) {
                //        UE_LOG(LogTemp, Error, TEXT("WidgetCheckList creation failed!"));
                //    }
                //    else {
                //        UE_LOG(LogTemp, Error, TEXT("currentwidget 살아있음. widgetchecklist"));
                //    }
                //}
                //else {//위젯클래스가 NULL이면 에러가 뜸. 수정이 필요할 것으로 보임.
                //    UE_LOG(LogTemp, Error, TEXT("WidgetCheckList is NULL in BeginPlay!"));
                //}
                //UE_LOG(LogTemp, Warning, TEXT("NoCamera component with tag"));

                //TargetCameraLocation = CameraComponent->GetComponentLocation();  //FVector(-60.0f, 60.0f, 330.0f); 카메라 컴포넌트 위치로 이동.
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

                //if (ActorWidgetClass) {//Widget 유효성 검사
                //    CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), ActorWidgetClass);
                //    if (!CurrentWidget) {
                //        UE_LOG(LogTemp, Error, TEXT("WidgetInformation creation failed!"));
                //    }
                //    else {
                //        UE_LOG(LogTemp, Error, TEXT("currentwidget 살아있음. WidgetInformation"));
                //    }
                //}
                //else {//위젯클래스가 NULL이면 에러가 뜸. 수정이 필요할 것으로 보임.
                //    UE_LOG(LogTemp, Error, TEXT("WidgetInformation is NULL in BeginPlay!"));
                //}
                //UE_LOG(LogTemp, Warning, TEXT("NoCamera component with tag"));

                //TargetCameraLocation = CameraComponent->GetComponentLocation();  //FVector(-60.0f, 60.0f, 330.0f); 카메라 컴포넌트 위치로 이동.
                //TargetCameraRotation = SceneComponent->GetComponentRotation();

                //bIsInteracting = true;
                //bInputDisabled = true;

                //DisablePlayerInput();
                //SetCustomDepthRecursive(InteractableActor, false);

                break;
            }
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("Arrest"))) {//Arrest Button 구현부
                UE_LOG(LogTemp, Log, TEXT("find Arrest"));
                //arrest 애니메이션 완료되면 코드 추가 예정.
                //ActorWidgetClass = WidgetInformation;
                if (SceneComponent->ComponentHasTag(FName("NPC"))) {
                    UE_LOG(LogTemp, Log, TEXT("find ArrestNPC"));
                    //Arrest
                    //bIsArrest = true;
                    StartArrest();
                }
                break;
            }
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("Next"))) {//Next Button 구현부
                UE_LOG(LogTemp, Log, TEXT("find Next"));
                StartMove_Event();
                break;
            }
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("Reject"))) {//Reject Button 구현부
                UE_LOG(LogTemp, Warning, TEXT("find Reject"));
                BackMove_Event();
                break;
            }
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("Scan"))) {//Scan Button 구현부
                UE_LOG(LogTemp, Log, TEXT("find Scan"));
                ScanBP();
                break;
            }
            else if (SceneComponent->ComponentHasTag(FName("NoCamera")) && SceneComponent->ComponentHasTag(FName("Pass"))) {//Next Button 구현부
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

    //카메라 위치 원상복귀 (BeginPlay에서 받은 초기 위치로 이동)
    CameraComponent->SetWorldLocationAndRotation(OriginalCameraLocation, OriginalCameraRotation);

    EnablePlayerInput();

    //if (CurrentWidget) {//CancleInteraction()시 뷰포트에 위젯 삭제.
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
        //if (CurrentWidget) {//DisablePlayerInput()시 뷰포트에 위젯 띄우기
        //    CurrentWidget->AddToViewport();
        //    UE_LOG(LogTemp, Warning, TEXT("Widget Added to Viewport"));//debug tool
        //}
        //else {
        //    UE_LOG(LogTemp, Error, TEXT("currentwidget 죽었음. diableplayerinput"));
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

//추후에 추가 예정.
void APlayerCharacter::ArrestButton() {

}

void APlayerCharacter::NextButton() {

}

void APlayerCharacter::RejectButton() {

}