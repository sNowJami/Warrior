// sNowJami

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "WarriorHeroController.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API AWarriorHeiroController : public APlayerController,public IGenericTeamAgentInterface
{
	GENERATED_BODY()
public:
	AWarriorHeiroController();
	//~ Begin IGenericTeamAgentInterface Interface.
	virtual FGenericTeamId GetGenericTeamId() const override;
	//~ End IGenericTeamAgentInterface Interface.
private:
	FGenericTeamId HeroTeamID;
};
