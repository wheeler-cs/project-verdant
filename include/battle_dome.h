#ifndef GUARD_BATTLE_DOME_H
#define GUARD_BATTLE_DOME_H

#ifndef EMER_REDUCED
extern u32 gPlayerPartyLostHP;
#endif

int GetDomeTrainerSelectedMons(u16 tournamentTrainerId);
int TrainerIdToDomeTournamentId(u16 trainerId);

#endif // GUARD_BATTLE_DOME_H
