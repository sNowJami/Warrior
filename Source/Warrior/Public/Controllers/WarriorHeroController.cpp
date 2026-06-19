#include "WarriorHeroController.h"




AWarriorHeiroController::AWarriorHeiroController()
{
	HeroTeamID = FGenericTeamId(0);
}

FGenericTeamId AWarriorHeiroController::GetGenericTeamId() const
{
	return HeroTeamID;
}
