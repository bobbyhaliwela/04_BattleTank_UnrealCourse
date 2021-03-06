// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

// Forward declarations
class UTankBarrel;
class UTankTurret;

// Holds barrel's and turret's properties
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();

	void SetBarrelReference(UTankBarrel* BarrelToSet); // Set a barrel reference

	void SetTurretReference(UTankTurret* TurretToSet); // Set a turret reference

	void AimAt(FVector HitLocation, float LaunchSpeed);
	
private:
	UTankBarrel* Barrel = nullptr;

	UTankTurret* Turret = nullptr;

	void MoveBarrelAndTurretTowards(FVector AimDirection);
};
