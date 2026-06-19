// sNowJami

#pragma once

#include "CoreMinimal.h"
#include "Animinstances/WarriorBaseAnimInstance.h"
#include "WarriorHeroLinkedAnimLayer.generated.h"

class UWarriorHeroAnimInstance;

/**
 * 
 */
UCLASS()
class WARRIOR_API UWarriorHeroLinkedAnimLayer : public UWarriorBaseAnimInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure,meta=(BlueprintThreadSafe))
	UWarriorHeroAnimInstance* GetHeroAnimInstance() const;

};
