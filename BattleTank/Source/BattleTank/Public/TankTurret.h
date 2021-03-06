// Lone Wolf Studio(L J K Pearson)

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankTurret.generated.h"

/**
*
*/
UCLASS(meta = (BlueprintSpawnableComponent)) //, hidecategories = ("Collision"))
class BATTLETANK_API UTankTurret : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	// -1 is max downward speed, and +1 is max up movement
	void UTankTurret::Rotate(float RelativeSpeed);

private:
	UPROPERTY(EditDefaultsOnly, Category = Setup)
		float MaxDegreesPerSecond = 25;
};