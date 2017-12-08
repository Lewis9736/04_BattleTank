// Lone Wolf Studio(L J K Pearson)

#pragma once

#include "Tank.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

private:
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaSeconds) override;

	ATank* GetControlledTank() const;
	
	ATank* GetPlayerTank() const;
};
