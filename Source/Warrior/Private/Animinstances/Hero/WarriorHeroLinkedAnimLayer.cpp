// sNowJami


#include "Animinstances/Hero/WarriorHeroLinkedAnimLayer.h"
#include "Animinstances/WarriorHeroAnimInstance.h"

UWarriorHeroAnimInstance* UWarriorHeroLinkedAnimLayer::GetHeroAnimInstance() const
{
    return Cast<UWarriorHeroAnimInstance>(GetOwningComponent()->GetAnimInstance());
}
