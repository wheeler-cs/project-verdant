#ifndef GUARD_WILD_ENCOUNTER_H
#define GUARD_WILD_ENCOUNTER_H

#include "constants/wild_encounter.h"

struct WildPokemon
{
    u8 minLevel;
    u8 maxLevel;
    u16 species;
};

struct WildPokemonInfo
{
    u8 encounterRate;
    const struct WildPokemon *wildPokemon;
};

struct WildPokemonHeader
{
    u8 mapGroup;
    u8 mapNum;
    const struct WildPokemonInfo *landMonsInfo;
    const struct WildPokemonInfo *waterMonsInfo;
    const struct WildPokemonInfo *rockSmashMonsInfo;
    const struct WildPokemonInfo *fishingMonsInfo;
    const struct WildPokemonInfo *altLandMonsInfo;
};

extern const struct WildPokemonHeader gWildMonHeaders[];

#ifdef CHAIN_FISHING
extern u8 gChainFishingStreak;
extern bool8 gIsFishingEncounter;
#endif

// Variable forces all tiles on map to have chance of initiating an encounter
extern bool8 gForceEnableEncounters;
// NOTE: This global variable was implemented to allow for creating maps that have regular but also allow for encounters
// to occur. Essentially, any tile the player steps on will have a chance of generating an encounter.

void DisableWildEncounters(bool8 disabled);
bool8 StandardWildEncounter(u16 currMetaTileBehavior, u16 previousMetaTileBehavior);
bool8 SweetScentWildEncounter(void);
bool8 DoesCurrentMapHaveFishingMons(void);
void FishingWildEncounter(u8 rod);
u16 GetLocalWildMon(bool8 *isWaterMon);
u16 GetLocalWaterMon(void);
bool8 UpdateRepelCounter(void);
void SetForceEnableEncounters(void);

#endif // GUARD_WILD_ENCOUNTER_H
