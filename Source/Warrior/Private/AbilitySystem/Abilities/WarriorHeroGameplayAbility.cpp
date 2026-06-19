// sNowJami


#include "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"
#include "Characters/WarriorHeroCharacter.h"
#include "Controllers/WarriorHeroController.h"
#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "WarriorGameplayTags.h"



AWarriorHeroCharacter* UWarriorHeroGameplayAbility::GetHeroCharacterFromActorInfo()
{
    if (!CachedWarriorHeroCharacter.IsValid())
    {
        CachedWarriorHeroCharacter = Cast<AWarriorHeroCharacter>(CurrentActorInfo->AvatarActor);
    }
   
    return CachedWarriorHeroCharacter.IsValid()? CachedWarriorHeroCharacter.Get():nullptr;
}
AWarriorHeiroController* UWarriorHeroGameplayAbility::GetHeroControllerFromActorInfo()
{
    if (!CachedWarriorHeiroController.IsValid())
    {
        CachedWarriorHeiroController = Cast<AWarriorHeiroController>(CurrentActorInfo->PlayerController);
    }
    return CachedWarriorHeiroController.IsValid() ? CachedWarriorHeiroController.Get() : nullptr;
}

UHeroCombatComponent* UWarriorHeroGameplayAbility::GetHeroCombatComponentFromActorInfo()
{
    return GetHeroCharacterFromActorInfo()->GetHeroCombatComponent();
}

FGameplayEffectSpecHandle UWarriorHeroGameplayAbility::MakeHeroDamageEffectSpecHandle(TSubclassOf<UGameplayEffect> EffectClass, float InWeaponBaseDamage, FGameplayTag InCurrentAttackTypeTag, int32 InUsedComboCount)
{
    check(EffectClass);

   FGameplayEffectContextHandle ContextHandle = GetWarriorAbilitySystemComponentFromActorInfo()->MakeEffectContext();
   ContextHandle.SetAbility(this);
   ContextHandle.AddSourceObject(GetAvatarActorFromActorInfo());
   ContextHandle.AddInstigator(GetAvatarActorFromActorInfo(), GetAvatarActorFromActorInfo());


   FGameplayEffectSpecHandle EffectSpecHandle = GetWarriorAbilitySystemComponentFromActorInfo()->MakeOutgoingSpec(
       EffectClass,
       GetAbilityLevel(),
       ContextHandle
       );
   EffectSpecHandle.Data->SetSetByCallerMagnitude(
       WarriorGameplayTags::Shared_SetByCaller_BaseDamage,
       InWeaponBaseDamage
   );
   if (InCurrentAttackTypeTag.IsValid())
   {
       EffectSpecHandle.Data->SetSetByCallerMagnitude(InCurrentAttackTypeTag, InUsedComboCount);

   }
   return EffectSpecHandle;
}
