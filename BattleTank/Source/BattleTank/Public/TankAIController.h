// Lone Wolf Studio(L J K Pearson)

#pragma once


#include "AIController.h"
#include "TankAIController.generated.h"

class ATank;

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
};
