#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

class USphereComponent;

enum class EItemState : uint8
{
	EIS_Hovering,
	EIS_Equipped
};

UCLASS()
class UNREALLEARNINGKIT_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	AItem();

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;


	/*
	*  Floating Effect
	*/
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "SineParameters")
	float Ampitude = 3.f;
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "SineParameters")
	float TimeConstant = 3.f;

	UFUNCTION(BluePrintPure)
	float GetTransformedSin();
	UFUNCTION(BluePrintPure)
	float GetTransformedCos();


	UFUNCTION()
	virtual void OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	virtual void OnSphereOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UPROPERTY(Visibleanywhere)
	USceneComponent* Root;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UStaticMeshComponent* ItemMesh;
	UPROPERTY(VisibleAnywhere)
	USphereComponent* Sphere;

	EItemState ItemState = EItemState::EIS_Hovering;

private:
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, meta = (AllowPrivateAccess = "true"))
	float RunningTime = 0.f;
};
