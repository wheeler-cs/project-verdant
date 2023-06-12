#ifndef GUARD_CONSTANTS_FLAGS_H
#define GUARD_CONSTANTS_FLAGS_H

#include "constants/opponents.h"

// Temporary Flags ================================================================================
// These temporary flags are are cleared every time a map is loaded. They are used
// for things like shortening an NPCs introduction text if the player already spoke
// to them once.
#define TEMP_FLAGS_START 0x0
#define FLAG_TEMP_1      (TEMP_FLAGS_START + 0x1)
#define FLAG_TEMP_2      (TEMP_FLAGS_START + 0x2)
#define FLAG_TEMP_3      (TEMP_FLAGS_START + 0x3)
#define FLAG_TEMP_4      (TEMP_FLAGS_START + 0x4)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define TEMP_FLAG_BLOCK_01      FLAG_TEMP_4   // 0x04
#else
    #define FLAG_TEMP_5      (TEMP_FLAGS_START + 0x5)  // Unused Flag
    #define FLAG_TEMP_6      (TEMP_FLAGS_START + 0x6)  // Unused Flag
    #define FLAG_TEMP_7      (TEMP_FLAGS_START + 0x7)  // Unused Flag
    #define FLAG_TEMP_8      (TEMP_FLAGS_START + 0x8)  // Unused Flag
    #define FLAG_TEMP_9      (TEMP_FLAGS_START + 0x9)  // Unused Flag
    #define FLAG_TEMP_A      (TEMP_FLAGS_START + 0xA)  // Unused Flag
    #define FLAG_TEMP_B      (TEMP_FLAGS_START + 0xB)  // Unused Flag
    #define FLAG_TEMP_C      (TEMP_FLAGS_START + 0xC)  // Unused Flag
    #define FLAG_TEMP_D      (TEMP_FLAGS_START + 0xD)  // Unused Flag
    #define FLAG_TEMP_E      (TEMP_FLAGS_START + 0xE)  // Unused Flag
    #define FLAG_TEMP_F      (TEMP_FLAGS_START + 0xF)  // Unused Flag
    #define FLAG_TEMP_10     (TEMP_FLAGS_START + 0x10) // Unused Flag

    #define TEMP_FLAG_BLOCK_01      FLAG_TEMP_10  //0x10
#endif


#define FLAG_TEMP_11     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x01)
#define FLAG_TEMP_12     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x02)
#define FLAG_TEMP_13     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x03)
#define FLAG_TEMP_14     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x04)
#define FLAG_TEMP_15     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x05)
#define FLAG_TEMP_16     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x06)
#define FLAG_TEMP_17     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x07)
#define FLAG_TEMP_18     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x08)
#define FLAG_TEMP_19     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x09)
#define FLAG_TEMP_1A     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x0A)
#define FLAG_TEMP_1B     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x0B)
#define FLAG_TEMP_1C     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x0C)
#define FLAG_TEMP_1D     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x0D)
#define FLAG_TEMP_1E     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x0E)
#define FLAG_TEMP_1F     (TEMP_FLAGS_START + TEMP_FLAG_BLOCK_01 + 0x0F)
#define TEMP_FLAGS_END   FLAG_TEMP_1F


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define LAST_TEMP_FLAG       TEMP_FLAGS_END
#else
    #define FLAG_UNUSED_0x020    (TEMP_FLAGS_END + 0x01) // Unused Flag
    #define FLAG_UNUSED_0x021    (TEMP_FLAGS_END + 0x02) // Unused Flag
    #define FLAG_UNUSED_0x022    (TEMP_FLAGS_END + 0x03) // Unused Flag
    #define FLAG_UNUSED_0x023    (TEMP_FLAGS_END + 0x04) // Unused Flag
    #define FLAG_UNUSED_0x024    (TEMP_FLAGS_END + 0x05) // Unused Flag
    #define FLAG_UNUSED_0x025    (TEMP_FLAGS_END + 0x06) // Unused Flag
    #define FLAG_UNUSED_0x026    (TEMP_FLAGS_END + 0x07) // Unused Flag
    #define FLAG_UNUSED_0x027    (TEMP_FLAGS_END + 0x08) // Unused Flag
    #define FLAG_UNUSED_0x028    (TEMP_FLAGS_END + 0x09) // Unused Flag
    #define FLAG_UNUSED_0x029    (TEMP_FLAGS_END + 0x0A) // Unused Flag
    #define FLAG_UNUSED_0x02A    (TEMP_FLAGS_END + 0x0B) // Unused Flag
    #define FLAG_UNUSED_0x02B    (TEMP_FLAGS_END + 0x0C) // Unused Flag
    #define FLAG_UNUSED_0x02C    (TEMP_FLAGS_END + 0x0D) // Unused Flag
    #define FLAG_UNUSED_0x02D    (TEMP_FLAGS_END + 0x0E) // Unused Flag
    #define FLAG_UNUSED_0x02E    (TEMP_FLAGS_END + 0x0F) // Unused Flag
    #define FLAG_UNUSED_0x02F    (TEMP_FLAGS_END + 0x10) // Unused Flag
    #define FLAG_UNUSED_0x030    (TEMP_FLAGS_END + 0x11) // Unused Flag
    #define FLAG_UNUSED_0x031    (TEMP_FLAGS_END + 0x12) // Unused Flag
    #define FLAG_UNUSED_0x032    (TEMP_FLAGS_END + 0x13) // Unused Flag
    #define FLAG_UNUSED_0x033    (TEMP_FLAGS_END + 0x14) // Unused Flag
    #define FLAG_UNUSED_0x034    (TEMP_FLAGS_END + 0x15) // Unused Flag
    #define FLAG_UNUSED_0x035    (TEMP_FLAGS_END + 0x16) // Unused Flag
    #define FLAG_UNUSED_0x036    (TEMP_FLAGS_END + 0x17) // Unused Flag
    #define FLAG_UNUSED_0x037    (TEMP_FLAGS_END + 0x18) // Unused Flag
    #define FLAG_UNUSED_0x038    (TEMP_FLAGS_END + 0x19) // Unused Flag
    #define FLAG_UNUSED_0x039    (TEMP_FLAGS_END + 0x1A) // Unused Flag
    #define FLAG_UNUSED_0x03A    (TEMP_FLAGS_END + 0x1B) // Unused Flag
    #define FLAG_UNUSED_0x03B    (TEMP_FLAGS_END + 0x1C) // Unused Flag
    #define FLAG_UNUSED_0x03C    (TEMP_FLAGS_END + 0x1D) // Unused Flag
    #define FLAG_UNUSED_0x03D    (TEMP_FLAGS_END + 0x1E) // Unused Flag
    #define FLAG_UNUSED_0x03E    (TEMP_FLAGS_END + 0x1F) // Unused Flag
    #define FLAG_UNUSED_0x03F    (TEMP_FLAGS_END + 0x20) // Unused Flag
    #define FLAG_UNUSED_0x040    (TEMP_FLAGS_END + 0x21) // Unused Flag
    #define FLAG_UNUSED_0x041    (TEMP_FLAGS_END + 0x22) // Unused Flag
    #define FLAG_UNUSED_0x042    (TEMP_FLAGS_END + 0x23) // Unused Flag
    #define FLAG_UNUSED_0x043    (TEMP_FLAGS_END + 0x24) // Unused Flag
    #define FLAG_UNUSED_0x044    (TEMP_FLAGS_END + 0x25) // Unused Flag
    #define FLAG_UNUSED_0x045    (TEMP_FLAGS_END + 0x26) // Unused Flag
    #define FLAG_UNUSED_0x046    (TEMP_FLAGS_END + 0x27) // Unused Flag
    #define FLAG_UNUSED_0x047    (TEMP_FLAGS_END + 0x28) // Unused Flag
    #define FLAG_UNUSED_0x048    (TEMP_FLAGS_END + 0x29) // Unused Flag
    #define FLAG_UNUSED_0x049    (TEMP_FLAGS_END + 0x2A) // Unused Flag
    #define FLAG_UNUSED_0x04A    (TEMP_FLAGS_END + 0x2B) // Unused Flag
    #define FLAG_UNUSED_0x04B    (TEMP_FLAGS_END + 0x2C) // Unused Flag
    #define FLAG_UNUSED_0x04C    (TEMP_FLAGS_END + 0x2D) // Unused Flag
    #define FLAG_UNUSED_0x04D    (TEMP_FLAGS_END + 0x2E) // Unused Flag
    #define FLAG_UNUSED_0x04E    (TEMP_FLAGS_END + 0x2F) // Unused Flag
    #define FLAG_UNUSED_0x04F    (TEMP_FLAGS_END + 0x30) // Unused Flag

    #define LAST_TEMP_FLAG       FLAG_UNUSED_0x04F
#endif



// Scripts ========================================================================================
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA_STILL  (LAST_TEMP_FLAG + 0x01)
#define FLAG_SET_WALL_CLOCK                      (LAST_TEMP_FLAG + 0x02)
#define FLAG_RESCUED_BIRCH                       (LAST_TEMP_FLAG + 0x03)
#define FLAG_LEGENDARIES_IN_SOOTOPOLIS           (LAST_TEMP_FLAG + 0x04)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define SCRIPT_FLAG_BLOCK_01            FLAG_LEGENDARIES_IN_SOOTOPOLIS
#else
    #define FLAG_UNUSED_0x054                    (FLAG_LEGENDARIES_IN_SOOTOPOLIS + 0x01)  // Unused Flag
    #define FLAG_UNUSED_0x055                    (FLAG_LEGENDARIES_IN_SOOTOPOLIS + 0x02)  // Unused Flag

    #define SCRIPT_FLAG_BLOCK_01            FLAG_UNUSED_0x055
#endif


#define FLAG_HIDE_CONTEST_POKE_BALL          (SCRIPT_FLAG_BLOCK_01 + 0x01)  // Always set after new game, object it hides is added directly
#define FLAG_MET_RIVAL_MOM                   (SCRIPT_FLAG_BLOCK_01 + 0x02)
#define FLAG_BIRCH_AIDE_MET                  (SCRIPT_FLAG_BLOCK_01 + 0x03)
#define FLAG_DECLINED_BIKE                   (SCRIPT_FLAG_BLOCK_01 + 0x04)
#define FLAG_RECEIVED_BIKE                   (SCRIPT_FLAG_BLOCK_01 + 0x05)
#define FLAG_WATTSON_REMATCH_AVAILABLE       (SCRIPT_FLAG_BLOCK_01 + 0x06)
#define FLAG_COLLECTED_ALL_SILVER_SYMBOLS    (SCRIPT_FLAG_BLOCK_01 + 0x07)
#define FLAG_GOOD_LUCK_SAFARI_ZONE           (SCRIPT_FLAG_BLOCK_01 + 0x08) // Set after talking to NPC blocking Safari Zone entrance/exit once.
#define FLAG_RECEIVED_WAILMER_PAIL           (SCRIPT_FLAG_BLOCK_01 + 0x09)
#define FLAG_RECEIVED_POKEBLOCK_CASE         (SCRIPT_FLAG_BLOCK_01 + 0x0A)
#define FLAG_RECEIVED_SECRET_POWER           (SCRIPT_FLAG_BLOCK_01 + 0x0B)
#define FLAG_MET_TEAM_AQUA_HARBOR            (SCRIPT_FLAG_BLOCK_01 + 0x0C)
#define FLAG_TV_EXPLAINED                    (SCRIPT_FLAG_BLOCK_01 + 0x0D)
#define FLAG_MAUVILLE_GYM_BARRIERS_STATE     (SCRIPT_FLAG_BLOCK_01 + 0x0E)
#define FLAG_MOSSDEEP_GYM_SWITCH_1           (SCRIPT_FLAG_BLOCK_01 + 0x0F) // Leftover from the RS version of Mossdeep Gym, functionally unused
#define FLAG_MOSSDEEP_GYM_SWITCH_2           (SCRIPT_FLAG_BLOCK_01 + 0x10) // NOTE: For the PROJECT_VERDANT + EMER_REDUCED defines, this remains here
#define FLAG_MOSSDEEP_GYM_SWITCH_3           (SCRIPT_FLAG_BLOCK_01 + 0x11) // because removing it is a bit more involved than simply adding an ifndef
#define FLAG_MOSSDEEP_GYM_SWITCH_4           (SCRIPT_FLAG_BLOCK_01 + 0x12) //


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define SCRIPT_FLAG_BLOCK_02            FLAG_MOSSDEEP_GYM_SWITCH_1
#else
    #define FLAG_UNUSED_0x068                (FLAG_MOSSDEEP_GYM_SWITCH_4 + 0x01)  // Unused Flag

    #define SCRIPT_FLAG_BLOCK_02            FLAG_UNUSED_0x068
#endif


#define FLAG_OCEANIC_MUSEUM_MET_REPORTER     (SCRIPT_FLAG_BLOCK_02 + 0x01)
#define FLAG_RECEIVED_HM04                   (SCRIPT_FLAG_BLOCK_02 + 0x02)
#define FLAG_RECEIVED_HM06                   (SCRIPT_FLAG_BLOCK_02 + 0x03)
#define FLAG_WHITEOUT_TO_LAVARIDGE           (SCRIPT_FLAG_BLOCK_02 + 0x04) // Set after defeating Flannery, so the player cant white out from poison before receiving Go Goggles
#define FLAG_RECEIVED_HM05                   (SCRIPT_FLAG_BLOCK_02 + 0x05)
#define FLAG_RECEIVED_HM02                   (SCRIPT_FLAG_BLOCK_02 + 0x06)
#define FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT  (SCRIPT_FLAG_BLOCK_02 + 0x07)
#define FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE  (SCRIPT_FLAG_BLOCK_02 + 0x08)
#define FLAG_UNUSED_RS_LEGENDARY_BATTLE_DONE (SCRIPT_FLAG_BLOCK_02 + 0x09) // Unused Flag. Used in R/S to indicate whether player defeated or caught Groudon/Kyogre in Cave of Origin.
#define FLAG_SCOTT_CALL_BATTLE_FRONTIER      (SCRIPT_FLAG_BLOCK_02 + 0x0A) // Used in order to activate a phone call from Scott, inviting the player to the SS Tidal.
#define FLAG_RECEIVED_METEORITE              (SCRIPT_FLAG_BLOCK_02 + 0x0B)
#define FLAG_ADVENTURE_STARTED               (SCRIPT_FLAG_BLOCK_02 + 0x0C) // RECEIVED Pokédex.
#define FLAG_DEFEATED_MAGMA_SPACE_CENTER     (SCRIPT_FLAG_BLOCK_02 + 0x0D) // Set when Team Magma is defeated at Mossdeep's Space Center.
#define FLAG_MET_HIDDEN_POWER_GIVER          (SCRIPT_FLAG_BLOCK_02 + 0x0E)

#define FLAG_CANCEL_BATTLE_ROOM_CHALLENGE    (SCRIPT_FLAG_BLOCK_02 + 0x0F)

#define FLAG_LANDMARK_MIRAGE_TOWER           (SCRIPT_FLAG_BLOCK_02 + 0x10)
#define FLAG_RECEIVED_TM31                   (SCRIPT_FLAG_BLOCK_02 + 0x11)
#define FLAG_RECEIVED_HM03                   (SCRIPT_FLAG_BLOCK_02 + 0x12)
#define FLAG_RECEIVED_HM08                   (SCRIPT_FLAG_BLOCK_02 + 0x13)
#define FLAG_REGISTER_RIVAL_POKENAV          (SCRIPT_FLAG_BLOCK_02 + 0x14)
#define FLAG_DEFEATED_RIVAL_ROUTE_104        (SCRIPT_FLAG_BLOCK_02 + 0x15)
#define FLAG_DEFEATED_WALLY_VICTORY_ROAD     (SCRIPT_FLAG_BLOCK_02 + 0x16)
#define FLAG_MET_PRETTY_PETAL_SHOP_OWNER     (SCRIPT_FLAG_BLOCK_02 + 0x17)
#define FLAG_ENABLE_ROXANNE_FIRST_CALL       (SCRIPT_FLAG_BLOCK_02 + 0x18) // Set after defeating Brawly. This will activate a call with Roxanne in order to register her.
#define FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN  (SCRIPT_FLAG_BLOCK_02 + 0x19)
#define FLAG_DEFEATED_RIVAL_ROUTE103         (SCRIPT_FLAG_BLOCK_02 + 0x1A)
#define FLAG_RECEIVED_DOLL_LANETTE           (SCRIPT_FLAG_BLOCK_02 + 0x1B)
#define FLAG_RECEIVED_POTION_OLDALE          (SCRIPT_FLAG_BLOCK_02 + 0x1C)
#define FLAG_RECEIVED_AMULET_COIN            (SCRIPT_FLAG_BLOCK_02 + 0x1D)
#define FLAG_PENDING_DAYCARE_EGG             (SCRIPT_FLAG_BLOCK_02 + 0x1E)
#define FLAG_THANKED_FOR_PLAYING_WITH_WALLY  (SCRIPT_FLAG_BLOCK_02 + 0x1F)
#define FLAG_ENABLE_FIRST_WALLY_POKENAV_CALL (SCRIPT_FLAG_BLOCK_02 + 0x20) // Set after defeating Wally outside Mauville Gym. Will activate a call later to register Wally.
#define FLAG_RECEIVED_HM01                   (SCRIPT_FLAG_BLOCK_02 + 0x21)
#define FLAG_SCOTT_CALL_FORTREE_GYM          (SCRIPT_FLAG_BLOCK_02 + 0x22) // Triggers call from Scott after defeating Winona
#define FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY   (SCRIPT_FLAG_BLOCK_02 + 0x23)
#define FLAG_RECEIVED_6_SODA_POP             (SCRIPT_FLAG_BLOCK_02 + 0x24)
#define FLAG_DEFEATED_SEASHORE_HOUSE         (SCRIPT_FLAG_BLOCK_02 + 0x25)
#define FLAG_DEVON_GOODS_STOLEN              (SCRIPT_FLAG_BLOCK_02 + 0x26)
#define FLAG_RECOVERED_DEVON_GOODS           (SCRIPT_FLAG_BLOCK_02 + 0x27)
#define FLAG_RETURNED_DEVON_GOODS            (SCRIPT_FLAG_BLOCK_02 + 0x28)
#define FLAG_CAUGHT_LUGIA                    (SCRIPT_FLAG_BLOCK_02 + 0x29)
#define FLAG_CAUGHT_HO_OH                    (SCRIPT_FLAG_BLOCK_02 + 0x2A)
#define FLAG_MR_BRINEY_SAILING_INTRO         (SCRIPT_FLAG_BLOCK_02 + 0x2B)
#define FLAG_DOCK_REJECTED_DEVON_GOODS       (SCRIPT_FLAG_BLOCK_02 + 0x2C)
#define FLAG_DELIVERED_DEVON_GOODS           (SCRIPT_FLAG_BLOCK_02 + 0x2D)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define SCRIPT_FLAG_BLOCK_03             (FLAG_DELIVERED_DEVON_GOODS)
#else
    #define FLAG_RECEIVED_CONTEST_PASS       (FLAG_DELIVERED_DEVON_GOODS + 0x01) // Unused, leftover from R/S

    #define SCRIPT_FLAG_BLOCK_03             (FLAG_RECEIVED_CONTEST_PASS)
#endif


#define FLAG_RECEIVED_CASTFORM                              (SCRIPT_FLAG_BLOCK_03 + 0x01)
#define FLAG_RECEIVED_SUPER_ROD                             (SCRIPT_FLAG_BLOCK_03 + 0x02)
#define FLAG_RUSTBORO_NPC_TRADE_COMPLETED                   (SCRIPT_FLAG_BLOCK_03 + 0x03)
#define FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED                 (SCRIPT_FLAG_BLOCK_03 + 0x04)
#define FLAG_FORTREE_NPC_TRADE_COMPLETED                    (SCRIPT_FLAG_BLOCK_03 + 0x05)
#define FLAG_BATTLE_FRONTIER_TRADE_DONE                     (SCRIPT_FLAG_BLOCK_03 + 0x06)
#define FLAG_FORCE_MIRAGE_TOWER_VISIBLE                     (SCRIPT_FLAG_BLOCK_03 + 0x07)
#define FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE                  (SCRIPT_FLAG_BLOCK_03 + 0x08)
#define FLAG_INTERACTED_WITH_DEVON_EMPLOYEE_GOODS_STOLEN    (SCRIPT_FLAG_BLOCK_03 + 0x09)
#define FLAG_COOL_PAINTING_MADE                             (SCRIPT_FLAG_BLOCK_03 + 0x0A)
#define FLAG_BEAUTY_PAINTING_MADE                           (SCRIPT_FLAG_BLOCK_03 + 0x0B)
#define FLAG_CUTE_PAINTING_MADE                             (SCRIPT_FLAG_BLOCK_03 + 0x0C)
#define FLAG_SMART_PAINTING_MADE                            (SCRIPT_FLAG_BLOCK_03 + 0x0D)
#define FLAG_TOUGH_PAINTING_MADE                            (SCRIPT_FLAG_BLOCK_03 + 0x0E)
#define FLAG_RECEIVED_TM39                                  (SCRIPT_FLAG_BLOCK_03 + 0x0F)
#define FLAG_RECEIVED_TM08                                  (SCRIPT_FLAG_BLOCK_03 + 0x10)
#define FLAG_RECEIVED_TM34                                  (SCRIPT_FLAG_BLOCK_03 + 0x11)
#define FLAG_RECEIVED_TM50                                  (SCRIPT_FLAG_BLOCK_03 + 0x12)
#define FLAG_RECEIVED_TM42                                  (SCRIPT_FLAG_BLOCK_03 + 0x13)
#define FLAG_RECEIVED_TM40                                  (SCRIPT_FLAG_BLOCK_03 + 0x14)
#define FLAG_RECEIVED_TM04                                  (SCRIPT_FLAG_BLOCK_03 + 0x15)
#define FLAG_RECEIVED_TM03                                  (SCRIPT_FLAG_BLOCK_03 + 0x16)
#define FLAG_HIDE_SECRET_BASE_TRAINER                       (SCRIPT_FLAG_BLOCK_03 + 0x17)
#define FLAG_DECORATION_1                                   (SCRIPT_FLAG_BLOCK_03 + 0x18)
#define FLAG_DECORATION_2                                   (SCRIPT_FLAG_BLOCK_03 + 0x19)
#define FLAG_DECORATION_3                                   (SCRIPT_FLAG_BLOCK_03 + 0x1A)
#define FLAG_DECORATION_4                                   (SCRIPT_FLAG_BLOCK_03 + 0x1B)
#define FLAG_DECORATION_5                                   (SCRIPT_FLAG_BLOCK_03 + 0x1C)
#define FLAG_DECORATION_6                                   (SCRIPT_FLAG_BLOCK_03 + 0x1D)
#define FLAG_DECORATION_7                                   (SCRIPT_FLAG_BLOCK_03 + 0x1E)
#define FLAG_DECORATION_8                                   (SCRIPT_FLAG_BLOCK_03 + 0x1F)
#define FLAG_DECORATION_9                                   (SCRIPT_FLAG_BLOCK_03 + 0x20)
#define FLAG_DECORATION_10                                  (SCRIPT_FLAG_BLOCK_03 + 0x21)
#define FLAG_DECORATION_11                                  (SCRIPT_FLAG_BLOCK_03 + 0x22)
#define FLAG_DECORATION_12                                  (SCRIPT_FLAG_BLOCK_03 + 0x23)
#define FLAG_DECORATION_13                                  (SCRIPT_FLAG_BLOCK_03 + 0x24)
#define FLAG_DECORATION_14                                  (SCRIPT_FLAG_BLOCK_03 + 0x25)
#define FLAG_RECEIVED_POKENAV                               (SCRIPT_FLAG_BLOCK_03 + 0x26)
#define FLAG_DELIVERED_STEVEN_LETTER                        (SCRIPT_FLAG_BLOCK_03 + 0x27)
#define FLAG_DEFEATED_WALLY_MAUVILLE                        (SCRIPT_FLAG_BLOCK_03 + 0x28)
#define FLAG_DEFEATED_GRUNT_SPACE_CENTER_1F                 (SCRIPT_FLAG_BLOCK_03 + 0x29)
#define FLAG_RECEIVED_SUN_STONE_MOSSDEEP                    (SCRIPT_FLAG_BLOCK_03 + 0x2A)
#define FLAG_WALLY_SPEECH                                   (SCRIPT_FLAG_BLOCK_03 + 0x2B)
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_1                  (SCRIPT_FLAG_BLOCK_03 + 0x2C) // Leftover from the RS version of Puzzle Room 7, functionally unused
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_2                  (SCRIPT_FLAG_BLOCK_03 + 0x2D) //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_3                  (SCRIPT_FLAG_BLOCK_03 + 0x2E) //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_4                  (SCRIPT_FLAG_BLOCK_03 + 0x2F) //
#define FLAG_TRICK_HOUSE_PUZZLE_7_SWITCH_5                  (SCRIPT_FLAG_BLOCK_03 + 0x30) //
#define FLAG_RUSTURF_TUNNEL_OPENED                          (SCRIPT_FLAG_BLOCK_03 + 0x31)
#define FLAG_RECEIVED_RED_SCARF                             (SCRIPT_FLAG_BLOCK_03 + 0x32)
#define FLAG_RECEIVED_BLUE_SCARF                            (SCRIPT_FLAG_BLOCK_03 + 0x33)
#define FLAG_RECEIVED_PINK_SCARF                            (SCRIPT_FLAG_BLOCK_03 + 0x34)
#define FLAG_RECEIVED_GREEN_SCARF                           (SCRIPT_FLAG_BLOCK_03 + 0x35)
#define FLAG_RECEIVED_YELLOW_SCARF                          (SCRIPT_FLAG_BLOCK_03 + 0x36)
#define FLAG_INTERACTED_WITH_STEVEN_SPACE_CENTER            (SCRIPT_FLAG_BLOCK_03 + 0x37)
#define FLAG_ENCOUNTERED_LATIAS_OR_LATIOS                   (SCRIPT_FLAG_BLOCK_03 + 0x38)
#define FLAG_MET_ARCHIE_METEOR_FALLS                        (SCRIPT_FLAG_BLOCK_03 + 0x39)
#define FLAG_GOT_BASEMENT_KEY_FROM_WATTSON                  (SCRIPT_FLAG_BLOCK_03 + 0x3A)
#define FLAG_GOT_TM24_FROM_WATTSON                          (SCRIPT_FLAG_BLOCK_03 + 0x3B)
#define FLAG_FAN_CLUB_STRENGTH_SHARED                       (SCRIPT_FLAG_BLOCK_03 + 0x3C) // Set when you rate the strength of another trainer in Lilycove's Trainer Fan Club.
#define FLAG_DEFEATED_RIVAL_RUSTBORO                        (SCRIPT_FLAG_BLOCK_03 + 0x3D)
#define FLAG_RECEIVED_RED_OR_BLUE_ORB                       (SCRIPT_FLAG_BLOCK_03 + 0x3E)
#define FLAG_RECEIVED_PREMIER_BALL_RUSTBORO                 (SCRIPT_FLAG_BLOCK_03 + 0x3F)
#define FLAG_ENABLE_WALLY_MATCH_CALL                        (SCRIPT_FLAG_BLOCK_03 + 0x40)
#define FLAG_ENABLE_SCOTT_MATCH_CALL                        (SCRIPT_FLAG_BLOCK_03 + 0x41)
#define FLAG_ENABLE_MOM_MATCH_CALL                          (SCRIPT_FLAG_BLOCK_03 + 0x42)
#define FLAG_MET_DIVING_TREASURE_HUNTER                     (SCRIPT_FLAG_BLOCK_03 + 0x43)
#define FLAG_MET_WAILMER_TRAINER                            (SCRIPT_FLAG_BLOCK_03 + 0x44)
#define FLAG_EVIL_LEADER_PLEASE_STOP                        (SCRIPT_FLAG_BLOCK_03 + 0x45)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define SCRIPT_FLAG_BLOCK_04            FLAG_EVIL_LEADER_PLEASE_STOP
#else
    #define FLAG_NEVER_SET_0x0DC            (SCRIPT_FLAG_BLOCK_03 + 0x01) // This flag is read, but never written to

    #define SCRIPT_FLAG_BLOCK_04            FLAG_NEVER_SET_0x0DC
#endif

#define FLAG_RECEIVED_GO_GOGGLES             (SCRIPT_FLAG_BLOCK_04 + 0x01)
#define FLAG_WINGULL_SENT_ON_ERRAND          (SCRIPT_FLAG_BLOCK_04 + 0x02)
#define FLAG_RECEIVED_MENTAL_HERB            (SCRIPT_FLAG_BLOCK_04 + 0x03)
#define FLAG_WINGULL_DELIVERED_MAIL          (SCRIPT_FLAG_BLOCK_04 + 0x04)
#define FLAG_RECEIVED_20_COINS               (SCRIPT_FLAG_BLOCK_04 + 0x05)
#define FLAG_RECEIVED_STARTER_DOLL           (SCRIPT_FLAG_BLOCK_04 + 0x06)
#define FLAG_RECEIVED_GOOD_ROD               (SCRIPT_FLAG_BLOCK_04 + 0x07)
#define FLAG_REGI_DOORS_OPENED               (SCRIPT_FLAG_BLOCK_04 + 0x08)
#define FLAG_RECEIVED_TM27                   (SCRIPT_FLAG_BLOCK_04 + 0x09)
#define FLAG_RECEIVED_TM36                   (SCRIPT_FLAG_BLOCK_04 + 0x0A)
#define FLAG_RECEIVED_TM05                   (SCRIPT_FLAG_BLOCK_04 + 0x0B)
#define FLAG_RECEIVED_TM19                   (SCRIPT_FLAG_BLOCK_04 + 0x0C)

#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define SCRIPT_FLAG_BLOCK_05            FLAG_RECEIVED_TM19
#else
    #define FLAG_UNUSED_0x0E9               (FLAG_RECEIVED_TM19 + 0x01) // Unused Flag

    #define SCRIPT_FLAG_BLOCK_05            FLAG_UNUSED_0x0E9
#endif

#define FLAG_RECEIVED_TM44                   (SCRIPT_FLAG_BLOCK_05 + 0x01)
#define FLAG_RECEIVED_TM45                   (SCRIPT_FLAG_BLOCK_05 + 0x02)
#define FLAG_RECEIVED_GLASS_ORNAMENT         (SCRIPT_FLAG_BLOCK_05 + 0x03)
#define FLAG_RECEIVED_SILVER_SHIELD          (SCRIPT_FLAG_BLOCK_05 + 0x04)
#define FLAG_RECEIVED_GOLD_SHIELD            (SCRIPT_FLAG_BLOCK_05 + 0x05)
#define FLAG_USED_STORAGE_KEY                (SCRIPT_FLAG_BLOCK_05 + 0x06)
#define FLAG_USED_ROOM_1_KEY                 (SCRIPT_FLAG_BLOCK_05 + 0x07)
#define FLAG_USED_ROOM_2_KEY                 (SCRIPT_FLAG_BLOCK_05 + 0x08)
#define FLAG_USED_ROOM_4_KEY                 (SCRIPT_FLAG_BLOCK_05 + 0x09)
#define FLAG_USED_ROOM_6_KEY                 (SCRIPT_FLAG_BLOCK_05 + 0x0A)
#define FLAG_MET_PROF_COZMO                  (SCRIPT_FLAG_BLOCK_05 + 0x0B)
#define FLAG_RECEIVED_WAILMER_DOLL           (SCRIPT_FLAG_BLOCK_05 + 0x0C)
#define FLAG_RECEIVED_CHESTO_BERRY_ROUTE_104 (SCRIPT_FLAG_BLOCK_05 + 0x0D)
#define FLAG_DEFEATED_SS_TIDAL_TRAINERS      (SCRIPT_FLAG_BLOCK_05 + 0x0E)
#define FLAG_RECEIVED_SPELON_BERRY           (SCRIPT_FLAG_BLOCK_05 + 0x0F)
#define FLAG_RECEIVED_PAMTRE_BERRY           (SCRIPT_FLAG_BLOCK_05 + 0x10)
#define FLAG_RECEIVED_WATMEL_BERRY           (SCRIPT_FLAG_BLOCK_05 + 0x11)
#define FLAG_RECEIVED_DURIN_BERRY            (SCRIPT_FLAG_BLOCK_05 + 0x12)
#define FLAG_RECEIVED_BELUE_BERRY            (SCRIPT_FLAG_BLOCK_05 + 0x13)
#define FLAG_ENABLE_RIVAL_MATCH_CALL         (SCRIPT_FLAG_BLOCK_05 + 0x14)
#define FLAG_RECEIVED_CHARCOAL               (SCRIPT_FLAG_BLOCK_05 + 0x15)
#define FLAG_LATIOS_OR_LATIAS_ROAMING        (SCRIPT_FLAG_BLOCK_05 + 0x16)
#define FLAG_RECEIVED_REPEAT_BALL            (SCRIPT_FLAG_BLOCK_05 + 0x17)
#define FLAG_RECEIVED_OLD_ROD                (SCRIPT_FLAG_BLOCK_05 + 0x18)
#define FLAG_RECEIVED_COIN_CASE              (SCRIPT_FLAG_BLOCK_05 + 0x19)
#define FLAG_RETURNED_RED_OR_BLUE_ORB        (SCRIPT_FLAG_BLOCK_05 + 0x1A)
#define FLAG_RECEIVED_TM49                   (SCRIPT_FLAG_BLOCK_05 + 0x1B)
#define FLAG_RECEIVED_TM28                   (SCRIPT_FLAG_BLOCK_05 + 0x1C)
#define FLAG_RECEIVED_TM09                   (SCRIPT_FLAG_BLOCK_05 + 0x1D)
#define FLAG_ENTERED_ELITE_FOUR              (SCRIPT_FLAG_BLOCK_05 + 0x1E)
#define FLAG_RECEIVED_TM10                   (SCRIPT_FLAG_BLOCK_05 + 0x1F)
#define FLAG_RECEIVED_TM41                   (SCRIPT_FLAG_BLOCK_05 + 0x20)
#define FLAG_RECEIVED_LAVARIDGE_EGG          (SCRIPT_FLAG_BLOCK_05 + 0x21)
#define FLAG_RECEIVED_REVIVED_FOSSIL_MON     (SCRIPT_FLAG_BLOCK_05 + 0x22)
#define FLAG_SECRET_BASE_REGISTRY_ENABLED    (SCRIPT_FLAG_BLOCK_05 + 0x23)
#define FLAG_RECEIVED_TM46                   (SCRIPT_FLAG_BLOCK_05 + 0x24)
#define FLAG_CONTEST_SKETCH_CREATED          (SCRIPT_FLAG_BLOCK_05 + 0x25)  // Set but never read
#define FLAG_EVIL_TEAM_ESCAPED_STERN_SPOKE   (SCRIPT_FLAG_BLOCK_05 + 0x26)
#define FLAG_RECEIVED_EXP_SHARE              (SCRIPT_FLAG_BLOCK_05 + 0x27)
#define FLAG_POKERUS_EXPLAINED               (SCRIPT_FLAG_BLOCK_05 + 0x28)
#define FLAG_RECEIVED_RUNNING_SHOES          (SCRIPT_FLAG_BLOCK_05 + 0x29)
#define FLAG_RECEIVED_QUICK_CLAW             (SCRIPT_FLAG_BLOCK_05 + 0x2A)
#define FLAG_RECEIVED_KINGS_ROCK             (SCRIPT_FLAG_BLOCK_05 + 0x2B)
#define FLAG_RECEIVED_MACHO_BRACE            (SCRIPT_FLAG_BLOCK_05 + 0x2C)
#define FLAG_RECEIVED_SOOTHE_BELL            (SCRIPT_FLAG_BLOCK_05 + 0x2D)
#define FLAG_RECEIVED_WHITE_HERB             (SCRIPT_FLAG_BLOCK_05 + 0x2E)
#define FLAG_RECEIVED_SOFT_SAND              (SCRIPT_FLAG_BLOCK_05 + 0x2F)
#define FLAG_ENABLE_PROF_BIRCH_MATCH_CALL    (SCRIPT_FLAG_BLOCK_05 + 0x30)
#define FLAG_RECEIVED_CLEANSE_TAG            (SCRIPT_FLAG_BLOCK_05 + 0x31)
#define FLAG_RECEIVED_FOCUS_BAND             (SCRIPT_FLAG_BLOCK_05 + 0x32)
#define FLAG_DECLINED_WALLY_BATTLE_MAUVILLE  (SCRIPT_FLAG_BLOCK_05 + 0x33)
#define FLAG_RECEIVED_DEVON_SCOPE            (SCRIPT_FLAG_BLOCK_05 + 0x34)
#define FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE  (SCRIPT_FLAG_BLOCK_05 + 0x35)
#define FLAG_MET_DEVON_EMPLOYEE              (SCRIPT_FLAG_BLOCK_05 + 0x36)
#define FLAG_MET_RIVAL_RUSTBORO              (SCRIPT_FLAG_BLOCK_05 + 0x37)
#define FLAG_RECEIVED_SILK_SCARF             (SCRIPT_FLAG_BLOCK_05 + 0x38)
#define FLAG_NOT_READY_FOR_BATTLE_ROUTE_120  (SCRIPT_FLAG_BLOCK_05 + 0x39)
#define FLAG_RECEIVED_SS_TICKET              (SCRIPT_FLAG_BLOCK_05 + 0x3A)
#define FLAG_MET_RIVAL_LILYCOVE              (SCRIPT_FLAG_BLOCK_05 + 0x3B)
#define FLAG_MET_RIVAL_IN_HOUSE_AFTER_LILYCOVE (SCRIPT_FLAG_BLOCK_05 + 0x3C)
#define FLAG_EXCHANGED_SCANNER               (SCRIPT_FLAG_BLOCK_05 + 0x3D)
#define FLAG_KECLEON_FLED_FORTREE            (SCRIPT_FLAG_BLOCK_05 + 0x3E)
#define FLAG_PETALBURG_MART_EXPANDED_ITEMS   (SCRIPT_FLAG_BLOCK_05 + 0x3F)
#define FLAG_RECEIVED_MIRACLE_SEED           (SCRIPT_FLAG_BLOCK_05 + 0x40)
#define FLAG_RECEIVED_BELDUM                 (SCRIPT_FLAG_BLOCK_05 + 0x41)
#define FLAG_RECEIVED_FANCLUB_TM_THIS_WEEK   (SCRIPT_FLAG_BLOCK_05 + 0x42)
#define FLAG_MET_FANCLUB_YOUNGER_BROTHER     (SCRIPT_FLAG_BLOCK_05 + 0x43)
#define FLAG_RIVAL_LEFT_FOR_ROUTE103         (SCRIPT_FLAG_BLOCK_05 + 0x44)
#define FLAG_OMIT_DIVE_FROM_STEVEN_LETTER    (SCRIPT_FLAG_BLOCK_05 + 0x45)
#define FLAG_HAS_MATCH_CALL                  (SCRIPT_FLAG_BLOCK_05 + 0x46)
#define FLAG_ADDED_MATCH_CALL_TO_POKENAV     (SCRIPT_FLAG_BLOCK_05 + 0x47)
#define FLAG_REGISTERED_STEVEN_POKENAV       (SCRIPT_FLAG_BLOCK_05 + 0x48)
#define FLAG_ENABLE_NORMAN_MATCH_CALL        (SCRIPT_FLAG_BLOCK_05 + 0x49)
#define FLAG_STEVEN_GUIDES_TO_CAVE_OF_ORIGIN (SCRIPT_FLAG_BLOCK_05 + 0x4A) // Set after you follow Steven to the entrance of the Cave of Origin.
#define FLAG_MET_ARCHIE_SOOTOPOLIS           (SCRIPT_FLAG_BLOCK_05 + 0x4B)
#define FLAG_MET_MAXIE_SOOTOPOLIS            (SCRIPT_FLAG_BLOCK_05 + 0x4C)
#define FLAG_MET_SCOTT_RUSTBORO              (SCRIPT_FLAG_BLOCK_05 + 0x4D)
#define FLAG_WALLACE_GOES_TO_SKY_PILLAR      (SCRIPT_FLAG_BLOCK_05 + 0x4E) // Set after speaking to Wallace within the Cave of Origin.
#define FLAG_RECEIVED_HM07                   (SCRIPT_FLAG_BLOCK_05 + 0x4F)
#define FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS    (SCRIPT_FLAG_BLOCK_05 + 0x50)

#define LAST_SCRIPT_FLAG                    FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS



// Wonder Card Flags ==============================================================================
#define FLAG_RECEIVED_AURORA_TICKET          (LAST_SCRIPT_FLAG + 0x01)
#define FLAG_RECEIVED_MYSTIC_TICKET          (LAST_SCRIPT_FLAG + 0x02)
#define FLAG_RECEIVED_OLD_SEA_MAP            (LAST_SCRIPT_FLAG + 0x03)
#define FLAG_WONDER_CARD_UNUSED_1            (LAST_SCRIPT_FLAG + 0x04) // These Wonder Card flags are referenced but never set
#define FLAG_WONDER_CARD_UNUSED_2            (LAST_SCRIPT_FLAG + 0x05)
#define FLAG_WONDER_CARD_UNUSED_3            (LAST_SCRIPT_FLAG + 0x06)
#define FLAG_WONDER_CARD_UNUSED_4            (LAST_SCRIPT_FLAG + 0x07)
#define FLAG_WONDER_CARD_UNUSED_5            (LAST_SCRIPT_FLAG + 0x08)
#define FLAG_WONDER_CARD_UNUSED_6            (LAST_SCRIPT_FLAG + 0x09)
#define FLAG_WONDER_CARD_UNUSED_7            (LAST_SCRIPT_FLAG + 0x0A)
#define FLAG_WONDER_CARD_UNUSED_8            (LAST_SCRIPT_FLAG + 0x0B)
#define FLAG_WONDER_CARD_UNUSED_9            (LAST_SCRIPT_FLAG + 0x0C)
#define FLAG_WONDER_CARD_UNUSED_10           (LAST_SCRIPT_FLAG + 0x0D)
#define FLAG_WONDER_CARD_UNUSED_11           (LAST_SCRIPT_FLAG + 0x0E)
#define FLAG_WONDER_CARD_UNUSED_12           (LAST_SCRIPT_FLAG + 0x0F)
#define FLAG_WONDER_CARD_UNUSED_13           (LAST_SCRIPT_FLAG + 0x10)
#define FLAG_WONDER_CARD_UNUSED_14           (LAST_SCRIPT_FLAG + 0x11)
#define FLAG_WONDER_CARD_UNUSED_15           (LAST_SCRIPT_FLAG + 0x12)
#define FLAG_WONDER_CARD_UNUSED_16           (LAST_SCRIPT_FLAG + 0x13)
#define FLAG_WONDER_CARD_UNUSED_17           (LAST_SCRIPT_FLAG + 0x14)
#define NUM_WONDER_CARD_FLAGS                (1 + FLAG_WONDER_CARD_UNUSED_17 - FLAG_RECEIVED_AURORA_TICKET)

#define LAST_WONDER_CARD_FLAG                FLAG_WONDER_CARD_UNUSED_17



// Miscellaneous Flags 01 =========================================================================
#define FLAG_MIRAGE_TOWER_VISIBLE            (LAST_WONDER_CARD_FLAG + 0x01)
#define FLAG_CHOSE_ROOT_FOSSIL               (LAST_WONDER_CARD_FLAG + 0x02)
#define FLAG_CHOSE_CLAW_FOSSIL               (LAST_WONDER_CARD_FLAG + 0x03)
#define FLAG_RECEIVED_POWDER_JAR             (LAST_WONDER_CARD_FLAG + 0x04)

#define FLAG_CHOSEN_MULTI_BATTLE_NPC_PARTNER (LAST_WONDER_CARD_FLAG + 0x05)

#define FLAG_MET_BATTLE_FRONTIER_BREEDER     (LAST_WONDER_CARD_FLAG + 0x06)
#define FLAG_MET_BATTLE_FRONTIER_MANIAC      (LAST_WONDER_CARD_FLAG + 0x07)
#define FLAG_ENTERED_CONTEST                 (LAST_WONDER_CARD_FLAG + 0x08)
#define FLAG_MET_SLATEPORT_FANCLUB_CHAIRMAN  (LAST_WONDER_CARD_FLAG + 0x09)
#define FLAG_MET_BATTLE_FRONTIER_GAMBLER     (LAST_WONDER_CARD_FLAG + 0x0A)
#define FLAG_ENABLE_MR_STONE_POKENAV         (LAST_WONDER_CARD_FLAG + 0x0B)
#define FLAG_NURSE_MENTIONS_GOLD_CARD        (LAST_WONDER_CARD_FLAG + 0x0C)
#define FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR  (LAST_WONDER_CARD_FLAG + 0x0D)
#define FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR (LAST_WONDER_CARD_FLAG + 0x0E)

#define LAST_MISCELLANEOUS_01_FLAG           FLAG_MET_FRONTIER_SWIMMER_MOVE_TUTOR



// Trainer Rematch Flags ==========================================================================
#define FLAG_MATCH_CALL_REGISTERED           (LAST_MISCELLANEOUS_01_FLAG + 0x01)
#define FLAG_REMATCH_ROSE                    (LAST_MISCELLANEOUS_01_FLAG + 0x02)
#define FLAG_REMATCH_ANDRES                  (LAST_MISCELLANEOUS_01_FLAG + 0x03)
#define FLAG_REMATCH_DUSTY                   (LAST_MISCELLANEOUS_01_FLAG + 0x04)
#define FLAG_REMATCH_LOLA                    (LAST_MISCELLANEOUS_01_FLAG + 0x05)
#define FLAG_REMATCH_RICKY                   (LAST_MISCELLANEOUS_01_FLAG + 0x06)
#define FLAG_REMATCH_LILA_AND_ROY            (LAST_MISCELLANEOUS_01_FLAG + 0x07)
#define FLAG_REMATCH_CRISTIN                 (LAST_MISCELLANEOUS_01_FLAG + 0x08)
#define FLAG_REMATCH_BROOKE                  (LAST_MISCELLANEOUS_01_FLAG + 0x09)
#define FLAG_REMATCH_WILTON                  (LAST_MISCELLANEOUS_01_FLAG + 0x0A)
#define FLAG_REMATCH_VALERIE                 (LAST_MISCELLANEOUS_01_FLAG + 0x0B)
#define FLAG_REMATCH_CINDY                   (LAST_MISCELLANEOUS_01_FLAG + 0x0C)
#define FLAG_REMATCH_THALIA                  (LAST_MISCELLANEOUS_01_FLAG + 0x0D)
#define FLAG_REMATCH_JESSICA                 (LAST_MISCELLANEOUS_01_FLAG + 0x0E)
#define FLAG_REMATCH_WINSTON                 (LAST_MISCELLANEOUS_01_FLAG + 0x0F)
#define FLAG_REMATCH_STEVE                   (LAST_MISCELLANEOUS_01_FLAG + 0x10)
#define FLAG_REMATCH_TONY                    (LAST_MISCELLANEOUS_01_FLAG + 0x11)
#define FLAG_REMATCH_NOB                     (LAST_MISCELLANEOUS_01_FLAG + 0x12)
#define FLAG_REMATCH_KOJI                    (LAST_MISCELLANEOUS_01_FLAG + 0x13)
#define FLAG_REMATCH_FERNANDO                (LAST_MISCELLANEOUS_01_FLAG + 0x14)
#define FLAG_REMATCH_DALTON                  (LAST_MISCELLANEOUS_01_FLAG + 0x15)
#define FLAG_REMATCH_BERNIE                  (LAST_MISCELLANEOUS_01_FLAG + 0x16)
#define FLAG_REMATCH_ETHAN                   (LAST_MISCELLANEOUS_01_FLAG + 0x17)
#define FLAG_REMATCH_JOHN_AND_JAY            (LAST_MISCELLANEOUS_01_FLAG + 0x18)
#define FLAG_REMATCH_JEFFREY                 (LAST_MISCELLANEOUS_01_FLAG + 0x19)
#define FLAG_REMATCH_CAMERON                 (LAST_MISCELLANEOUS_01_FLAG + 0x1A)
#define FLAG_REMATCH_JACKI                   (LAST_MISCELLANEOUS_01_FLAG + 0x1B)
#define FLAG_REMATCH_WALTER                  (LAST_MISCELLANEOUS_01_FLAG + 0x1C)
#define FLAG_REMATCH_KAREN                   (LAST_MISCELLANEOUS_01_FLAG + 0x1D)
#define FLAG_REMATCH_JERRY                   (LAST_MISCELLANEOUS_01_FLAG + 0x1E)
#define FLAG_REMATCH_ANNA_AND_MEG            (LAST_MISCELLANEOUS_01_FLAG + 0x1F)
#define FLAG_REMATCH_ISABEL                  (LAST_MISCELLANEOUS_01_FLAG + 0x20)
#define FLAG_REMATCH_MIGUEL                  (LAST_MISCELLANEOUS_01_FLAG + 0x21)
#define FLAG_REMATCH_TIMOTHY                 (LAST_MISCELLANEOUS_01_FLAG + 0x22)
#define FLAG_REMATCH_SHELBY                  (LAST_MISCELLANEOUS_01_FLAG + 0x23)
#define FLAG_REMATCH_CALVIN                  (LAST_MISCELLANEOUS_01_FLAG + 0x24)
#define FLAG_REMATCH_ELLIOT                  (LAST_MISCELLANEOUS_01_FLAG + 0x25)
#define FLAG_REMATCH_ISAIAH                  (LAST_MISCELLANEOUS_01_FLAG + 0x26)
#define FLAG_REMATCH_MARIA                   (LAST_MISCELLANEOUS_01_FLAG + 0x27)
#define FLAG_REMATCH_ABIGAIL                 (LAST_MISCELLANEOUS_01_FLAG + 0x28)
#define FLAG_REMATCH_DYLAN                   (LAST_MISCELLANEOUS_01_FLAG + 0x29)
#define FLAG_REMATCH_KATELYN                 (LAST_MISCELLANEOUS_01_FLAG + 0x2A)
#define FLAG_REMATCH_BENJAMIN                (LAST_MISCELLANEOUS_01_FLAG + 0x2B)
#define FLAG_REMATCH_PABLO                   (LAST_MISCELLANEOUS_01_FLAG + 0x2C)
#define FLAG_REMATCH_NICOLAS                 (LAST_MISCELLANEOUS_01_FLAG + 0x2D)
#define FLAG_REMATCH_ROBERT                  (LAST_MISCELLANEOUS_01_FLAG + 0x2E)
#define FLAG_REMATCH_LAO                     (LAST_MISCELLANEOUS_01_FLAG + 0x2F)
#define FLAG_REMATCH_CYNDY                   (LAST_MISCELLANEOUS_01_FLAG + 0x30)
#define FLAG_REMATCH_MADELINE                (LAST_MISCELLANEOUS_01_FLAG + 0x31)
#define FLAG_REMATCH_JENNY                   (LAST_MISCELLANEOUS_01_FLAG + 0x32)
#define FLAG_REMATCH_DIANA                   (LAST_MISCELLANEOUS_01_FLAG + 0x33)
#define FLAG_REMATCH_AMY_AND_LIV             (LAST_MISCELLANEOUS_01_FLAG + 0x34)
#define FLAG_REMATCH_ERNEST                  (LAST_MISCELLANEOUS_01_FLAG + 0x35)
#define FLAG_REMATCH_CORY                    (LAST_MISCELLANEOUS_01_FLAG + 0x36)
#define FLAG_REMATCH_EDWIN                   (LAST_MISCELLANEOUS_01_FLAG + 0x37)
#define FLAG_REMATCH_LYDIA                   (LAST_MISCELLANEOUS_01_FLAG + 0x38)
#define FLAG_REMATCH_ISAAC                   (LAST_MISCELLANEOUS_01_FLAG + 0x39)
#define FLAG_REMATCH_GABRIELLE               (LAST_MISCELLANEOUS_01_FLAG + 0x3A)
#define FLAG_REMATCH_CATHERINE               (LAST_MISCELLANEOUS_01_FLAG + 0x3B)
#define FLAG_REMATCH_JACKSON                 (LAST_MISCELLANEOUS_01_FLAG + 0x3C)
#define FLAG_REMATCH_HALEY                   (LAST_MISCELLANEOUS_01_FLAG + 0x3D)
#define FLAG_REMATCH_JAMES                   (LAST_MISCELLANEOUS_01_FLAG + 0x3E)
#define FLAG_REMATCH_TRENT                   (LAST_MISCELLANEOUS_01_FLAG + 0x3F)
#define FLAG_REMATCH_SAWYER                  (LAST_MISCELLANEOUS_01_FLAG + 0x40)
#define FLAG_REMATCH_KIRA_AND_DAN            (LAST_MISCELLANEOUS_01_FLAG + 0x41)
#define FLAG_REMATCH_WALLY                   (LAST_MISCELLANEOUS_01_FLAG + 0x42)
#define FLAG_REMATCH_ROXANNE                 (LAST_MISCELLANEOUS_01_FLAG + 0x43)
#define FLAG_REMATCH_BRAWLY                  (LAST_MISCELLANEOUS_01_FLAG + 0x44)
#define FLAG_REMATCH_WATTSON                 (LAST_MISCELLANEOUS_01_FLAG + 0x45)
#define FLAG_REMATCH_FLANNERY                (LAST_MISCELLANEOUS_01_FLAG + 0x46)
#define FLAG_REMATCH_NORMAN                  (LAST_MISCELLANEOUS_01_FLAG + 0x47)
#define FLAG_REMATCH_WINONA                  (LAST_MISCELLANEOUS_01_FLAG + 0x48)
#define FLAG_REMATCH_TATE_AND_LIZA           (LAST_MISCELLANEOUS_01_FLAG + 0x49)
// Note: FLAG_REMATCH_JUAN is handled by FLAG_ENABLE_JUAN_MATCH_CALL instead.
#define FLAG_REMATCH_SIDNEY                  (LAST_MISCELLANEOUS_01_FLAG + 0x4A)
#define FLAG_REMATCH_PHOEBE                  (LAST_MISCELLANEOUS_01_FLAG + 0x4B)
#define FLAG_REMATCH_GLACIA                  (LAST_MISCELLANEOUS_01_FLAG + 0x4C)
#define FLAG_REMATCH_DRAKE                   (LAST_MISCELLANEOUS_01_FLAG + 0x4D)
#define FLAG_REMATCH_WALLACE                 (LAST_MISCELLANEOUS_01_FLAG + 0x4E)

#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define LAST_REMATCH_FLAG                FLAG_REMATCH_WALLACE
#else
    #define FLAG_UNUSED_0x1AA                (LAST_MISCELLANEOUS_01_FLAG + 0x4F) // Unused Flag
    #define FLAG_UNUSED_0x1AB                (LAST_MISCELLANEOUS_01_FLAG + 0x50) // Unused Flag

    #define LAST_REMATCH_FLAG                FLAG_UNUSED_0x1AB
#endif


// Miscellaneous Flags 02 =========================================================================
#define FLAG_DEFEATED_DEOXYS                          (LAST_REMATCH_FLAG + 0x01)
#define FLAG_BATTLED_DEOXYS                           (LAST_REMATCH_FLAG + 0x02)
#define FLAG_SHOWN_EON_TICKET                         (LAST_REMATCH_FLAG + 0x03)
#define FLAG_SHOWN_AURORA_TICKET                      (LAST_REMATCH_FLAG + 0x04)
#define FLAG_SHOWN_OLD_SEA_MAP                        (LAST_REMATCH_FLAG + 0x05)
#define FLAG_MOVE_TUTOR_TAUGHT_SWAGGER                (LAST_REMATCH_FLAG + 0x06)
#define FLAG_MOVE_TUTOR_TAUGHT_ROLLOUT                (LAST_REMATCH_FLAG + 0x07)
#define FLAG_MOVE_TUTOR_TAUGHT_FURY_CUTTER            (LAST_REMATCH_FLAG + 0x08)
#define FLAG_MOVE_TUTOR_TAUGHT_MIMIC                  (LAST_REMATCH_FLAG + 0x09)
#define FLAG_MOVE_TUTOR_TAUGHT_METRONOME              (LAST_REMATCH_FLAG + 0x0A)
#define FLAG_MOVE_TUTOR_TAUGHT_SLEEP_TALK             (LAST_REMATCH_FLAG + 0x0B)
#define FLAG_MOVE_TUTOR_TAUGHT_SUBSTITUTE             (LAST_REMATCH_FLAG + 0x0C)
#define FLAG_MOVE_TUTOR_TAUGHT_DYNAMICPUNCH           (LAST_REMATCH_FLAG + 0x0D)
#define FLAG_MOVE_TUTOR_TAUGHT_DOUBLE_EDGE            (LAST_REMATCH_FLAG + 0x0E)
#define FLAG_MOVE_TUTOR_TAUGHT_EXPLOSION              (LAST_REMATCH_FLAG + 0x0F)
#define FLAG_DEFEATED_REGIROCK                        (LAST_REMATCH_FLAG + 0x10)
#define FLAG_DEFEATED_REGICE                          (LAST_REMATCH_FLAG + 0x11)
#define FLAG_DEFEATED_REGISTEEL                       (LAST_REMATCH_FLAG + 0x12)
#define FLAG_DEFEATED_KYOGRE                          (LAST_REMATCH_FLAG + 0x13)
#define FLAG_DEFEATED_GROUDON                         (LAST_REMATCH_FLAG + 0x14)
#define FLAG_DEFEATED_RAYQUAZA                        (LAST_REMATCH_FLAG + 0x15)
#define FLAG_DEFEATED_VOLTORB_1_NEW_MAUVILLE          (LAST_REMATCH_FLAG + 0x16)
#define FLAG_DEFEATED_VOLTORB_2_NEW_MAUVILLE          (LAST_REMATCH_FLAG + 0x17)
#define FLAG_DEFEATED_VOLTORB_3_NEW_MAUVILLE          (LAST_REMATCH_FLAG + 0x18)
#define FLAG_DEFEATED_ELECTRODE_1_AQUA_HIDEOUT        (LAST_REMATCH_FLAG + 0x19)
#define FLAG_DEFEATED_ELECTRODE_2_AQUA_HIDEOUT        (LAST_REMATCH_FLAG + 0x1A)
#define FLAG_DEFEATED_SUDOWOODO                       (LAST_REMATCH_FLAG + 0x1B)
#define FLAG_DEFEATED_MEW                             (LAST_REMATCH_FLAG + 0x1C)
#define FLAG_DEFEATED_LATIAS_OR_LATIOS                (LAST_REMATCH_FLAG + 0x1D)
#define FLAG_CAUGHT_LATIAS_OR_LATIOS                  (LAST_REMATCH_FLAG + 0x1E)
#define FLAG_CAUGHT_MEW                               (LAST_REMATCH_FLAG + 0x1F)
#define FLAG_MET_SCOTT_AFTER_OBTAINING_STONE_BADGE    (LAST_REMATCH_FLAG + 0x20)
#define FLAG_MET_SCOTT_IN_VERDANTURF                  (LAST_REMATCH_FLAG + 0x21)
#define FLAG_MET_SCOTT_IN_FALLARBOR                   (LAST_REMATCH_FLAG + 0x22)
#define FLAG_MET_SCOTT_IN_LILYCOVE                    (LAST_REMATCH_FLAG + 0x23)
#define FLAG_MET_SCOTT_IN_EVERGRANDE                  (LAST_REMATCH_FLAG + 0x24)
#define FLAG_MET_SCOTT_ON_SS_TIDAL                    (LAST_REMATCH_FLAG + 0x25)
#define FLAG_SCOTT_GIVES_BATTLE_POINTS                (LAST_REMATCH_FLAG + 0x26)
#define FLAG_COLLECTED_ALL_GOLD_SYMBOLS               (LAST_REMATCH_FLAG + 0x27)
#define FLAG_ENABLE_ROXANNE_MATCH_CALL                (LAST_REMATCH_FLAG + 0x28)
#define FLAG_ENABLE_BRAWLY_MATCH_CALL                 (LAST_REMATCH_FLAG + 0x29)
#define FLAG_ENABLE_WATTSON_MATCH_CALL                (LAST_REMATCH_FLAG + 0x2A)
#define FLAG_ENABLE_FLANNERY_MATCH_CALL               (LAST_REMATCH_FLAG + 0x2B)
#define FLAG_ENABLE_WINONA_MATCH_CALL                 (LAST_REMATCH_FLAG + 0x2C)
#define FLAG_ENABLE_TATE_AND_LIZA_MATCH_CALL          (LAST_REMATCH_FLAG + 0x2D)
#define FLAG_ENABLE_JUAN_MATCH_CALL                   (LAST_REMATCH_FLAG + 0x2E)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define MISCELLANEOUS_02_BLOCK_01                 FLAG_ENABLE_BRAWLY_MATCH_CALL
#else
    #define FLAG_UNUSED_0x1DA                         (LAST_REMATCH_FLAG + 0x2F) // Unused Flag

    #define MISCELLANEOUS_02_BLOCK_01                  FLAG_UNUSED_0x1DA
#endif


#define FLAG_SHOWN_MYSTIC_TICKET                      (MISCELLANEOUS_02_BLOCK_01 + 0x01)
#define FLAG_DEFEATED_HO_OH                           (MISCELLANEOUS_02_BLOCK_01 + 0x02)
#define FLAG_DEFEATED_LUGIA                           (MISCELLANEOUS_02_BLOCK_01 + 0x03)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define LAST_MISCELLANEOUS_02_FLAG                FLAG_DEFEATED_LUGIA
#else
    #define FLAG_UNUSED_0x1DE                         (MISCELLANEOUS_02_BLOCK_01 + 0x04) // Unused Flag
    #define FLAG_UNUSED_0x1DF                         (MISCELLANEOUS_02_BLOCK_01 + 0x05) // Unused Flag
    #define FLAG_UNUSED_0x1E0                         (MISCELLANEOUS_02_BLOCK_01 + 0x06) // Unused Flag
    #define FLAG_UNUSED_0x1E1                         (MISCELLANEOUS_02_BLOCK_01 + 0x07) // Unused Flag
    #define FLAG_UNUSED_0x1E2                         (MISCELLANEOUS_02_BLOCK_01 + 0x08) // Unused Flag
    #define FLAG_UNUSED_0x1E3                         (MISCELLANEOUS_02_BLOCK_01 + 0x09) // Unused Flag

    #define LAST_MISCELLANEOUS_02_FLAG                FLAG_UNUSED_0x1DE
#endif



// Mystery Gift Flags (Unknown) ===================================================================
#define FLAG_MYSTERY_GIFT_DONE               (LAST_MISCELLANEOUS_02_FLAG + 0x01)
#define FLAG_MYSTERY_GIFT_1                  (LAST_MISCELLANEOUS_02_FLAG + 0x02)
#define FLAG_MYSTERY_GIFT_2                  (LAST_MISCELLANEOUS_02_FLAG + 0x03)
#define FLAG_MYSTERY_GIFT_3                  (LAST_MISCELLANEOUS_02_FLAG + 0x04)
#define FLAG_MYSTERY_GIFT_4                  (LAST_MISCELLANEOUS_02_FLAG + 0x05)
#define FLAG_MYSTERY_GIFT_5                  (LAST_MISCELLANEOUS_02_FLAG + 0x06)
#define FLAG_MYSTERY_GIFT_6                  (LAST_MISCELLANEOUS_02_FLAG + 0x07)
#define FLAG_MYSTERY_GIFT_7                  (LAST_MISCELLANEOUS_02_FLAG + 0x08)
#define FLAG_MYSTERY_GIFT_8                  (LAST_MISCELLANEOUS_02_FLAG + 0x09)
#define FLAG_MYSTERY_GIFT_9                  (LAST_MISCELLANEOUS_02_FLAG + 0x0A)
#define FLAG_MYSTERY_GIFT_10                 (LAST_MISCELLANEOUS_02_FLAG + 0x0B)
#define FLAG_MYSTERY_GIFT_11                 (LAST_MISCELLANEOUS_02_FLAG + 0x0C)
#define FLAG_MYSTERY_GIFT_12                 (LAST_MISCELLANEOUS_02_FLAG + 0x0D)
#define FLAG_MYSTERY_GIFT_13                 (LAST_MISCELLANEOUS_02_FLAG + 0x0E)
#define FLAG_MYSTERY_GIFT_14                 (LAST_MISCELLANEOUS_02_FLAG + 0x0F)
#define FLAG_MYSTERY_GIFT_15                 (LAST_MISCELLANEOUS_02_FLAG + 0x10)

#define LAST_MYSTERY_GIFT_FLAG               FLAG_MYSTERY_GIFT_15



// Hidden Items ===================================================================================
#define FLAG_HIDDEN_ITEMS_START                              (LAST_MYSTERY_GIFT_FLAG + 0x01)

#define FLAG_HIDDEN_ITEM_LAVARIDGE_TOWN_ICE_HEAL             (FLAG_HIDDEN_ITEMS_START + 0x00)
#define FLAG_HIDDEN_ITEM_TRICK_HOUSE_NUGGET                  (FLAG_HIDDEN_ITEMS_START + 0x01)
#define FLAG_HIDDEN_ITEM_ROUTE_111_STARDUST                  (FLAG_HIDDEN_ITEMS_START + 0x02)
#define FLAG_HIDDEN_ITEM_ROUTE_113_ETHER                     (FLAG_HIDDEN_ITEMS_START + 0x03)
#define FLAG_HIDDEN_ITEM_ROUTE_114_CARBOS                    (FLAG_HIDDEN_ITEMS_START + 0x04)
#define FLAG_HIDDEN_ITEM_ROUTE_119_CALCIUM                   (FLAG_HIDDEN_ITEMS_START + 0x05)
#define FLAG_HIDDEN_ITEM_ROUTE_119_ULTRA_BALL                (FLAG_HIDDEN_ITEMS_START + 0x06)
#define FLAG_HIDDEN_ITEM_ROUTE_123_SUPER_REPEL               (FLAG_HIDDEN_ITEMS_START + 0x07)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_CARBOS               (FLAG_HIDDEN_ITEMS_START + 0x08)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_GREEN_SHARD          (FLAG_HIDDEN_ITEMS_START + 0x09)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x0A)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_BIG_PEARL            (FLAG_HIDDEN_ITEMS_START + 0x0B)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BLUE_SHARD           (FLAG_HIDDEN_ITEMS_START + 0x0C)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_1        (FLAG_HIDDEN_ITEMS_START + 0x0D)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_HEART_SCALE          (FLAG_HIDDEN_ITEMS_START + 0x0E)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_ULTRA_BALL           (FLAG_HIDDEN_ITEMS_START + 0x0F)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_STARDUST             (FLAG_HIDDEN_ITEMS_START + 0x10)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x11)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_YELLOW_SHARD         (FLAG_HIDDEN_ITEMS_START + 0x12)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_IRON                 (FLAG_HIDDEN_ITEMS_START + 0x13)
#define FLAG_HIDDEN_ITEM_UNDERWATER_126_BIG_PEARL            (FLAG_HIDDEN_ITEMS_START + 0x14)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_STAR_PIECE           (FLAG_HIDDEN_ITEMS_START + 0x15)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_HP_UP                (FLAG_HIDDEN_ITEMS_START + 0x16)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_HEART_SCALE          (FLAG_HIDDEN_ITEMS_START + 0x17)
#define FLAG_HIDDEN_ITEM_UNDERWATER_127_RED_SHARD            (FLAG_HIDDEN_ITEMS_START + 0x18)
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_PROTEIN              (FLAG_HIDDEN_ITEMS_START + 0x19)
#define FLAG_HIDDEN_ITEM_UNDERWATER_128_PEARL                (FLAG_HIDDEN_ITEMS_START + 0x1A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_HEART_SCALE           (FLAG_HIDDEN_ITEMS_START + 0x1B)
#define FLAG_HIDDEN_ITEM_FALLARBOR_TOWN_NUGGET               (FLAG_HIDDEN_ITEMS_START + 0x1C)
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_ULTRA_BALL         (FLAG_HIDDEN_ITEMS_START + 0x1D)
#define FLAG_HIDDEN_ITEM_ROUTE_113_TM32                      (FLAG_HIDDEN_ITEMS_START + 0x1E)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_1_KEY             (FLAG_HIDDEN_ITEMS_START + 0x1F)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_2_KEY             (FLAG_HIDDEN_ITEMS_START + 0x20)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_4_KEY             (FLAG_HIDDEN_ITEMS_START + 0x21)
#define FLAG_HIDDEN_ITEM_ABANDONED_SHIP_RM_6_KEY             (FLAG_HIDDEN_ITEMS_START + 0x22)
#define FLAG_HIDDEN_ITEM_SS_TIDAL_LOWER_DECK_LEFTOVERS       (FLAG_HIDDEN_ITEMS_START + 0x23)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_CALCIUM              (FLAG_HIDDEN_ITEMS_START + 0x24)
#define FLAG_HIDDEN_ITEM_ROUTE_104_POTION                    (FLAG_HIDDEN_ITEMS_START + 0x25)
#define FLAG_HIDDEN_ITEM_UNDERWATER_124_HEART_SCALE_2        (FLAG_HIDDEN_ITEMS_START + 0x26)
#define FLAG_HIDDEN_ITEM_ROUTE_121_HP_UP                     (FLAG_HIDDEN_ITEMS_START + 0x27)
#define FLAG_HIDDEN_ITEM_ROUTE_121_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x28)
#define FLAG_HIDDEN_ITEM_ROUTE_123_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x29)
#define FLAG_HIDDEN_ITEM_ROUTE_114_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x2A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_PP_UP                 (FLAG_HIDDEN_ITEMS_START + 0x2B)
#define FLAG_HIDDEN_ITEM_ROUTE_104_SUPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x2C)
#define FLAG_HIDDEN_ITEM_ROUTE_116_SUPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x2D)
#define FLAG_HIDDEN_ITEM_ROUTE_106_STARDUST                  (FLAG_HIDDEN_ITEMS_START + 0x2E)
#define FLAG_HIDDEN_ITEM_ROUTE_106_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x2F)
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_1        (FLAG_HIDDEN_ITEMS_START + 0x30)
#define FLAG_HIDDEN_ITEM_GRANITE_CAVE_B2F_EVERSTONE_2        (FLAG_HIDDEN_ITEMS_START + 0x31)
#define FLAG_HIDDEN_ITEM_ROUTE_109_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x32)
#define FLAG_HIDDEN_ITEM_ROUTE_109_GREAT_BALL                (FLAG_HIDDEN_ITEMS_START + 0x33)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x34)
#define FLAG_HIDDEN_ITEM_ROUTE_110_GREAT_BALL                (FLAG_HIDDEN_ITEMS_START + 0x35)
#define FLAG_HIDDEN_ITEM_ROUTE_110_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x36)
#define FLAG_HIDDEN_ITEM_ROUTE_110_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x37)
#define FLAG_HIDDEN_ITEM_ROUTE_111_PROTEIN                   (FLAG_HIDDEN_ITEMS_START + 0x38)
#define FLAG_HIDDEN_ITEM_ROUTE_111_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x39)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POTION              (FLAG_HIDDEN_ITEMS_START + 0x3A)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_1     (FLAG_HIDDEN_ITEMS_START + 0x3B)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_TINY_MUSHROOM_2     (FLAG_HIDDEN_ITEMS_START + 0x3C)
#define FLAG_HIDDEN_ITEM_PETALBURG_WOODS_POKE_BALL           (FLAG_HIDDEN_ITEMS_START + 0x3D)
#define FLAG_HIDDEN_ITEM_ROUTE_104_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x3E)
#define FLAG_HIDDEN_ITEM_ROUTE_106_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x3F)
#define FLAG_HIDDEN_ITEM_ROUTE_109_ETHER                     (FLAG_HIDDEN_ITEMS_START + 0x40)
#define FLAG_HIDDEN_ITEM_ROUTE_110_POKE_BALL                 (FLAG_HIDDEN_ITEMS_START + 0x41)
#define FLAG_HIDDEN_ITEM_ROUTE_118_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x42)
#define FLAG_HIDDEN_ITEM_ROUTE_118_IRON                      (FLAG_HIDDEN_ITEMS_START + 0x43)
#define FLAG_HIDDEN_ITEM_ROUTE_119_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x44)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_2              (FLAG_HIDDEN_ITEMS_START + 0x45)
#define FLAG_HIDDEN_ITEM_ROUTE_120_ZINC                      (FLAG_HIDDEN_ITEMS_START + 0x46)
#define FLAG_HIDDEN_ITEM_ROUTE_120_RARE_CANDY_1              (FLAG_HIDDEN_ITEMS_START + 0x47)
#define FLAG_HIDDEN_ITEM_ROUTE_117_REPEL                     (FLAG_HIDDEN_ITEMS_START + 0x48)
#define FLAG_HIDDEN_ITEM_ROUTE_121_FULL_HEAL                 (FLAG_HIDDEN_ITEMS_START + 0x49)
#define FLAG_HIDDEN_ITEM_ROUTE_123_HYPER_POTION              (FLAG_HIDDEN_ITEMS_START + 0x4A)
#define FLAG_HIDDEN_ITEM_LILYCOVE_CITY_POKE_BALL             (FLAG_HIDDEN_ITEMS_START + 0x4B)
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_GREAT_BALL              (FLAG_HIDDEN_ITEMS_START + 0x4C)
#define FLAG_HIDDEN_ITEM_JAGGED_PASS_FULL_HEAL               (FLAG_HIDDEN_ITEMS_START + 0x4D)
#define FLAG_HIDDEN_ITEM_MT_PYRE_EXTERIOR_MAX_ETHER          (FLAG_HIDDEN_ITEMS_START + 0x4E)
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_ZINC                 (FLAG_HIDDEN_ITEMS_START + 0x4F)
#define FLAG_HIDDEN_ITEM_MT_PYRE_SUMMIT_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x50)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_1F_ULTRA_BALL          (FLAG_HIDDEN_ITEMS_START + 0x51)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_ELIXIR             (FLAG_HIDDEN_ITEMS_START + 0x52)
#define FLAG_HIDDEN_ITEM_VICTORY_ROAD_B2F_MAX_REPEL          (FLAG_HIDDEN_ITEMS_START + 0x53)
#define FLAG_HIDDEN_ITEM_ROUTE_120_REVIVE                    (FLAG_HIDDEN_ITEMS_START + 0x54)
#define FLAG_HIDDEN_ITEM_ROUTE_104_ANTIDOTE                  (FLAG_HIDDEN_ITEMS_START + 0x55)
#define FLAG_HIDDEN_ITEM_ROUTE_108_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x56)
#define FLAG_HIDDEN_ITEM_ROUTE_119_MAX_ETHER                 (FLAG_HIDDEN_ITEMS_START + 0x57)
#define FLAG_HIDDEN_ITEM_ROUTE_104_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x58)
#define FLAG_HIDDEN_ITEM_ROUTE_105_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x59)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x5A)
#define FLAG_HIDDEN_ITEM_ROUTE_109_HEART_SCALE_3             (FLAG_HIDDEN_ITEMS_START + 0x5B)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_1             (FLAG_HIDDEN_ITEMS_START + 0x5C)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_2             (FLAG_HIDDEN_ITEMS_START + 0x5D)
#define FLAG_HIDDEN_ITEM_ROUTE_128_HEART_SCALE_3             (FLAG_HIDDEN_ITEMS_START + 0x5E)
#define FLAG_HIDDEN_ITEM_PETALBURG_CITY_RARE_CANDY           (FLAG_HIDDEN_ITEMS_START + 0x5F)
#define FLAG_HIDDEN_ITEM_ROUTE_116_BLACK_GLASSES             (FLAG_HIDDEN_ITEMS_START + 0x60)
#define FLAG_HIDDEN_ITEM_ROUTE_115_HEART_SCALE               (FLAG_HIDDEN_ITEMS_START + 0x61)
#define FLAG_HIDDEN_ITEM_ROUTE_113_NUGGET                    (FLAG_HIDDEN_ITEMS_START + 0x62)
#define FLAG_HIDDEN_ITEM_ROUTE_123_PP_UP                     (FLAG_HIDDEN_ITEMS_START + 0x63)
#define FLAG_HIDDEN_ITEM_ROUTE_121_MAX_REVIVE                (FLAG_HIDDEN_ITEMS_START + 0x64)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_CALCIUM            (FLAG_HIDDEN_ITEMS_START + 0x65)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_ZINC               (FLAG_HIDDEN_ITEMS_START + 0x66)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_PROTEIN            (FLAG_HIDDEN_ITEMS_START + 0x67)
#define FLAG_HIDDEN_ITEM_ARTISAN_CAVE_B1F_IRON               (FLAG_HIDDEN_ITEMS_START + 0x68)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_FULL_RESTORE (FLAG_HIDDEN_ITEMS_START + 0x69)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_RARE_CANDY   (FLAG_HIDDEN_ITEMS_START + 0x6A)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_NORTH_EAST_ZINC         (FLAG_HIDDEN_ITEMS_START + 0x6B)
#define FLAG_HIDDEN_ITEM_SAFARI_ZONE_SOUTH_EAST_PP_UP        (FLAG_HIDDEN_ITEMS_START + 0x6C)
#define FLAG_HIDDEN_ITEM_NAVEL_ROCK_TOP_SACRED_ASH           (FLAG_HIDDEN_ITEMS_START + 0x6D)
#define FLAG_HIDDEN_ITEM_ROUTE_123_RARE_CANDY                (FLAG_HIDDEN_ITEMS_START + 0x6E)
#define FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL                 (FLAG_HIDDEN_ITEMS_START + 0x6F)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define LAST_HIDDEN_ITEM_FLAG           FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL
#else
    #define LAST_USED_HIDDEN_ITEM_FLAG      FLAG_HIDDEN_ITEM_ROUTE_105_BIG_PEARL

    #define FLAG_UNUSED_0x264  (LAST_USED_HIDDEN_ITEM_FLAG + 0x01) // Unused Flag
    #define FLAG_UNUSED_0x265  (LAST_USED_HIDDEN_ITEM_FLAG + 0x02) // Unused Flag
    #define FLAG_UNUSED_0x266  (LAST_USED_HIDDEN_ITEM_FLAG + 0x03) // Unused Flag
    #define FLAG_UNUSED_0x267  (LAST_USED_HIDDEN_ITEM_FLAG + 0x04) // Unused Flag
    #define FLAG_UNUSED_0x268  (LAST_USED_HIDDEN_ITEM_FLAG + 0x05) // Unused Flag
    #define FLAG_UNUSED_0x269  (LAST_USED_HIDDEN_ITEM_FLAG + 0x06) // Unused Flag
    #define FLAG_UNUSED_0x26A  (LAST_USED_HIDDEN_ITEM_FLAG + 0x07) // Unused Flag
    #define FLAG_UNUSED_0x26B  (LAST_USED_HIDDEN_ITEM_FLAG + 0x08) // Unused Flag
    #define FLAG_UNUSED_0x26C  (LAST_USED_HIDDEN_ITEM_FLAG + 0x09) // Unused Flag
    #define FLAG_UNUSED_0x26D  (LAST_USED_HIDDEN_ITEM_FLAG + 0x0A) // Unused Flag
    #define FLAG_UNUSED_0x26E  (LAST_USED_HIDDEN_ITEM_FLAG + 0x0B) // Unused Flag
    #define FLAG_UNUSED_0x26F  (LAST_USED_HIDDEN_ITEM_FLAG + 0x0C) // Unused Flag
    #define FLAG_UNUSED_0x270  (LAST_USED_HIDDEN_ITEM_FLAG + 0x0D) // Unused Flag
    #define FLAG_UNUSED_0x271  (LAST_USED_HIDDEN_ITEM_FLAG + 0x0E) // Unused Flag
    #define FLAG_UNUSED_0x272  (LAST_USED_HIDDEN_ITEM_FLAG + 0x0F) // Unused Flag
    #define FLAG_UNUSED_0x273  (LAST_USED_HIDDEN_ITEM_FLAG + 0x10) // Unused Flag
    #define FLAG_UNUSED_0x274  (LAST_USED_HIDDEN_ITEM_FLAG + 0x11) // Unused Flag
    #define FLAG_UNUSED_0x275  (LAST_USED_HIDDEN_ITEM_FLAG + 0x12) // Unused Flag
    #define FLAG_UNUSED_0x276  (LAST_USED_HIDDEN_ITEM_FLAG + 0x13) // Unused Flag
    #define FLAG_UNUSED_0x277  (LAST_USED_HIDDEN_ITEM_FLAG + 0x14) // Unused Flag
    #define FLAG_UNUSED_0x278  (LAST_USED_HIDDEN_ITEM_FLAG + 0x15) // Unused Flag
    #define FLAG_UNUSED_0x279  (LAST_USED_HIDDEN_ITEM_FLAG + 0x16) // Unused Flag
    #define FLAG_UNUSED_0x27A  (LAST_USED_HIDDEN_ITEM_FLAG + 0x17) // Unused Flag
    #define FLAG_UNUSED_0x27B  (LAST_USED_HIDDEN_ITEM_FLAG + 0x18) // Unused Flag
    #define FLAG_UNUSED_0x27C  (LAST_USED_HIDDEN_ITEM_FLAG + 0x19) // Unused Flag
    #define FLAG_UNUSED_0x27D  (LAST_USED_HIDDEN_ITEM_FLAG + 0x1A) // Unused Flag
    #define FLAG_UNUSED_0x27E  (LAST_USED_HIDDEN_ITEM_FLAG + 0x1B) // Unused Flag
    #define FLAG_UNUSED_0x27F  (LAST_USED_HIDDEN_ITEM_FLAG + 0x1C) // Unused Flag
    #define FLAG_UNUSED_0x280  (LAST_USED_HIDDEN_ITEM_FLAG + 0x1D) // Unused Flag
    #define FLAG_UNUSED_0x281  (LAST_USED_HIDDEN_ITEM_FLAG + 0x1E) // Unused Flag
    #define FLAG_UNUSED_0x282  (LAST_USED_HIDDEN_ITEM_FLAG + 0x1F) // Unused Flag
    #define FLAG_UNUSED_0x283  (LAST_USED_HIDDEN_ITEM_FLAG + 0x20) // Unused Flag
    #define FLAG_UNUSED_0x284  (LAST_USED_HIDDEN_ITEM_FLAG + 0x21) // Unused Flag
    #define FLAG_UNUSED_0x285  (LAST_USED_HIDDEN_ITEM_FLAG + 0x22) // Unused Flag
    #define FLAG_UNUSED_0x286  (LAST_USED_HIDDEN_ITEM_FLAG + 0x23) // Unused Flag
    #define FLAG_UNUSED_0x287  (LAST_USED_HIDDEN_ITEM_FLAG + 0x24) // Unused Flag
    #define FLAG_UNUSED_0x288  (LAST_USED_HIDDEN_ITEM_FLAG + 0x25) // Unused Flag
    #define FLAG_UNUSED_0x289  (LAST_USED_HIDDEN_ITEM_FLAG + 0x26) // Unused Flag
    #define FLAG_UNUSED_0x28A  (LAST_USED_HIDDEN_ITEM_FLAG + 0x27) // Unused Flag
    #define FLAG_UNUSED_0x28B  (LAST_USED_HIDDEN_ITEM_FLAG + 0x28) // Unused Flag
    #define FLAG_UNUSED_0x28C  (LAST_USED_HIDDEN_ITEM_FLAG + 0x29) // Unused Flag
    #define FLAG_UNUSED_0x28D  (LAST_USED_HIDDEN_ITEM_FLAG + 0x2A) // Unused Flag
    #define FLAG_UNUSED_0x28E  (LAST_USED_HIDDEN_ITEM_FLAG + 0x2B) // Unused Flag
    #define FLAG_UNUSED_0x28F  (LAST_USED_HIDDEN_ITEM_FLAG + 0x2C) // Unused Flag
    #define FLAG_UNUSED_0x290  (LAST_USED_HIDDEN_ITEM_FLAG + 0x2D) // Unused Flag
    #define FLAG_UNUSED_0x291  (LAST_USED_HIDDEN_ITEM_FLAG + 0x2E) // Unused Flag
    #define FLAG_UNUSED_0x292  (LAST_USED_HIDDEN_ITEM_FLAG + 0x2F) // Unused Flag
    #define FLAG_UNUSED_0x293  (LAST_USED_HIDDEN_ITEM_FLAG + 0x30) // Unused Flag
    #define FLAG_UNUSED_0x294  (LAST_USED_HIDDEN_ITEM_FLAG + 0x31) // Unused Flag
    #define FLAG_UNUSED_0x295  (LAST_USED_HIDDEN_ITEM_FLAG + 0x32) // Unused Flag
    #define FLAG_UNUSED_0x296  (LAST_USED_HIDDEN_ITEM_FLAG + 0x33) // Unused Flag
    #define FLAG_UNUSED_0x297  (LAST_USED_HIDDEN_ITEM_FLAG + 0x34) // Unused Flag
    #define FLAG_UNUSED_0x298  (LAST_USED_HIDDEN_ITEM_FLAG + 0x35) // Unused Flag
    #define FLAG_UNUSED_0x299  (LAST_USED_HIDDEN_ITEM_FLAG + 0x36) // Unused Flag
    #define FLAG_UNUSED_0x29A  (LAST_USED_HIDDEN_ITEM_FLAG + 0x37) // Unused Flag
    #define FLAG_UNUSED_0x29B  (LAST_USED_HIDDEN_ITEM_FLAG + 0x38) // Unused Flag
    #define FLAG_UNUSED_0x29C  (LAST_USED_HIDDEN_ITEM_FLAG + 0x39) // Unused Flag
    #define FLAG_UNUSED_0x29D  (LAST_USED_HIDDEN_ITEM_FLAG + 0x3A) // Unused Flag
    #define FLAG_UNUSED_0x29E  (LAST_USED_HIDDEN_ITEM_FLAG + 0x3B) // Unused Flag
    #define FLAG_UNUSED_0x29F  (LAST_USED_HIDDEN_ITEM_FLAG + 0x3C) // Unused Flag
    #define FLAG_UNUSED_0x2A0  (LAST_USED_HIDDEN_ITEM_FLAG + 0x3D) // Unused Flag
    #define FLAG_UNUSED_0x2A1  (LAST_USED_HIDDEN_ITEM_FLAG + 0x3E) // Unused Flag
    #define FLAG_UNUSED_0x2A2  (LAST_USED_HIDDEN_ITEM_FLAG + 0x3F) // Unused Flag
    #define FLAG_UNUSED_0x2A3  (LAST_USED_HIDDEN_ITEM_FLAG + 0x40) // Unused Flag
    #define FLAG_UNUSED_0x2A4  (LAST_USED_HIDDEN_ITEM_FLAG + 0x41) // Unused Flag
    #define FLAG_UNUSED_0x2A5  (LAST_USED_HIDDEN_ITEM_FLAG + 0x42) // Unused Flag
    #define FLAG_UNUSED_0x2A6  (LAST_USED_HIDDEN_ITEM_FLAG + 0x43) // Unused Flag
    #define FLAG_UNUSED_0x2A7  (LAST_USED_HIDDEN_ITEM_FLAG + 0x44) // Unused Flag
    #define FLAG_UNUSED_0x2A8  (LAST_USED_HIDDEN_ITEM_FLAG + 0x45) // Unused Flag
    #define FLAG_UNUSED_0x2A9  (LAST_USED_HIDDEN_ITEM_FLAG + 0x46) // Unused Flag
    #define FLAG_UNUSED_0x2AA  (LAST_USED_HIDDEN_ITEM_FLAG + 0x47) // Unused Flag
    #define FLAG_UNUSED_0x2AB  (LAST_USED_HIDDEN_ITEM_FLAG + 0x48) // Unused Flag
    #define FLAG_UNUSED_0x2AC  (LAST_USED_HIDDEN_ITEM_FLAG + 0x49) // Unused Flag
    #define FLAG_UNUSED_0x2AD  (LAST_USED_HIDDEN_ITEM_FLAG + 0x4A) // Unused Flag
    #define FLAG_UNUSED_0x2AE  (LAST_USED_HIDDEN_ITEM_FLAG + 0x4B) // Unused Flag
    #define FLAG_UNUSED_0x2AF  (LAST_USED_HIDDEN_ITEM_FLAG + 0x4C) // Unused Flag
    #define FLAG_UNUSED_0x2B0  (LAST_USED_HIDDEN_ITEM_FLAG + 0x4D) // Unused Flag
    #define FLAG_UNUSED_0x2B1  (LAST_USED_HIDDEN_ITEM_FLAG + 0x4E) // Unused Flag
    #define FLAG_UNUSED_0x2B2  (LAST_USED_HIDDEN_ITEM_FLAG + 0x4F) // Unused Flag
    #define FLAG_UNUSED_0x2B3  (LAST_USED_HIDDEN_ITEM_FLAG + 0x50) // Unused Flag
    #define FLAG_UNUSED_0x2B4  (LAST_USED_HIDDEN_ITEM_FLAG + 0x51) // Unused Flag
    #define FLAG_UNUSED_0x2B5  (LAST_USED_HIDDEN_ITEM_FLAG + 0x52) // Unused Flag
    #define FLAG_UNUSED_0x2B6  (LAST_USED_HIDDEN_ITEM_FLAG + 0x53) // Unused Flag
    #define FLAG_UNUSED_0x2B7  (LAST_USED_HIDDEN_ITEM_FLAG + 0x54) // Unused Flag
    #define FLAG_UNUSED_0x2B8  (LAST_USED_HIDDEN_ITEM_FLAG + 0x55) // Unused Flag
    #define FLAG_UNUSED_0x2B9  (LAST_USED_HIDDEN_ITEM_FLAG + 0x56) // Unused Flag
    #define FLAG_UNUSED_0x2BA  (LAST_USED_HIDDEN_ITEM_FLAG + 0x57) // Unused Flag
    #define FLAG_UNUSED_0x2BB  (LAST_USED_HIDDEN_ITEM_FLAG + 0x58) // Unused Flag

    #define LAST_HIDDEN_ITEM_FLAG       FLAG_UNUSED_0x2BB
#endif



// Event Flags ====================================================================================
#define FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG                      (LAST_HIDDEN_ITEM_FLAG + 0x1)
#define FLAG_HIDE_APPRENTICE                                        (LAST_HIDDEN_ITEM_FLAG + 0x2)
#define FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN                (LAST_HIDDEN_ITEM_FLAG + 0x3)
#define FLAG_HIDE_UNION_ROOM_PLAYER_1                               (LAST_HIDDEN_ITEM_FLAG + 0x4)
#define FLAG_HIDE_UNION_ROOM_PLAYER_2                               (LAST_HIDDEN_ITEM_FLAG + 0x5)
#define FLAG_HIDE_UNION_ROOM_PLAYER_3                               (LAST_HIDDEN_ITEM_FLAG + 0x6)
#define FLAG_HIDE_UNION_ROOM_PLAYER_4                               (LAST_HIDDEN_ITEM_FLAG + 0x7)
#define FLAG_HIDE_UNION_ROOM_PLAYER_5                               (LAST_HIDDEN_ITEM_FLAG + 0x8)
#define FLAG_HIDE_UNION_ROOM_PLAYER_6                               (LAST_HIDDEN_ITEM_FLAG + 0x9)
#define FLAG_HIDE_UNION_ROOM_PLAYER_7                               (LAST_HIDDEN_ITEM_FLAG + 0xA)
#define FLAG_HIDE_UNION_ROOM_PLAYER_8                               (LAST_HIDDEN_ITEM_FLAG + 0xB)
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1               (LAST_HIDDEN_ITEM_FLAG + 0xC)
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2               (LAST_HIDDEN_ITEM_FLAG + 0xD)
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3               (LAST_HIDDEN_ITEM_FLAG + 0xE)
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4               (LAST_HIDDEN_ITEM_FLAG + 0xF)
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5               (LAST_HIDDEN_ITEM_FLAG + 0x10)
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6               (LAST_HIDDEN_ITEM_FLAG + 0x11)
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS            (LAST_HIDDEN_ITEM_FLAG + 0x12)
#define FLAG_HIDE_MEW                                               (LAST_HIDDEN_ITEM_FLAG + 0x13)
#define FLAG_HIDE_ROUTE_104_RIVAL                                   (LAST_HIDDEN_ITEM_FLAG + 0x14)
#define FLAG_HIDE_ROUTE_101_BIRCH_ZIGZAGOON_BATTLE                  (LAST_HIDDEN_ITEM_FLAG + 0x15)
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_BIRCH                  (LAST_HIDDEN_ITEM_FLAG + 0x16)
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM          (LAST_HIDDEN_ITEM_FLAG + 0x17)
#define FLAG_HIDE_ROUTE_103_RIVAL                                   (LAST_HIDDEN_ITEM_FLAG + 0x18)
#define FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE                    (LAST_HIDDEN_ITEM_FLAG + 0x19)
#define FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT                        (LAST_HIDDEN_ITEM_FLAG + 0x1A)
#define FLAG_HIDE_PETALBURG_CITY_WALLY                              (LAST_HIDDEN_ITEM_FLAG + 0x1B)
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY   (LAST_HIDDEN_ITEM_FLAG + 0x1C)
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM                         (LAST_HIDDEN_ITEM_FLAG + 0x1D)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define EVENT_FLAG_BLOCK_01                                     FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
#else
    #define FLAG_UNUSED_0x2D9                                       (LAST_HIDDEN_ITEM_FLAG + 0x1E) // Unused Flag

    #define EVENT_FLAG_BLOCK_01                                     FLAG_UNUSED_0x2D9
#endif


#define FLAG_HIDE_LILYCOVE_FAN_CLUB_INTERVIEWER                     (EVENT_FLAG_BLOCK_01 + 0x01)
#define FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT                          (EVENT_FLAG_BLOCK_01 + 0x02)
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1                    (EVENT_FLAG_BLOCK_01 + 0x03)
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE_ASLEEP              (EVENT_FLAG_BLOCK_01 + 0x04)
#define FLAG_HIDE_PLAYERS_HOUSE_DAD                                 (EVENT_FLAG_BLOCK_01 + 0x05)
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING      (EVENT_FLAG_BLOCK_01 + 0x06)
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_SIBLING          (EVENT_FLAG_BLOCK_01 + 0x07)
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE             (EVENT_FLAG_BLOCK_01 + 0x08)
#define FLAG_HIDE_ROUTE_104_MR_BRINEY                               (EVENT_FLAG_BLOCK_01 + 0x09)
#define FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY                           (EVENT_FLAG_BLOCK_01 + 0x0A)
#define FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN                            (EVENT_FLAG_BLOCK_01 + 0x0B)
#define FLAG_HIDE_ROUTE_109_MR_BRINEY                               (EVENT_FLAG_BLOCK_01 + 0x0C)
#define FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT                          (EVENT_FLAG_BLOCK_01 + 0x0D)
#define FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN                       (EVENT_FLAG_BLOCK_01 + 0x0E)
#define FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT                          (EVENT_FLAG_BLOCK_01 + 0x0F)
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN            (EVENT_FLAG_BLOCK_01 + 0x10)
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY                    (EVENT_FLAG_BLOCK_01 + 0x11)
#define FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION                  (EVENT_FLAG_BLOCK_01 + 0x12)
#define FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER                (EVENT_FLAG_BLOCK_01 + 0x13)
#define FLAG_HIDE_SLATEPORT_CITY_SCOTT                              (EVENT_FLAG_BLOCK_01 + 0x14)
#define FLAG_HIDE_ROUTE_101_ZIGZAGOON                               (EVENT_FLAG_BLOCK_01 + 0x15)
#define FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY                           (EVENT_FLAG_BLOCK_01 + 0x16)
#define FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE                       (EVENT_FLAG_BLOCK_01 + 0x17)
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN              (EVENT_FLAG_BLOCK_01 + 0x18)
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_1          (EVENT_FLAG_BLOCK_01 + 0x19)
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_HOUSE_VIGOROTH_2          (EVENT_FLAG_BLOCK_01 + 0x1A)
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_TEAM_MAGMA          (EVENT_FLAG_BLOCK_01 + 0x1B)
#define FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM               (EVENT_FLAG_BLOCK_01 + 0x1C)
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM                (EVENT_FLAG_BLOCK_01 + 0x1D)
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MOM                    (EVENT_FLAG_BLOCK_01 + 0x1E)
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM      (EVENT_FLAG_BLOCK_01 + 0x1F)
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK              (EVENT_FLAG_BLOCK_01 + 0x20)
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK                  (EVENT_FLAG_BLOCK_01 + 0x21)
#define FLAG_HIDE_DEOXYS                                            (EVENT_FLAG_BLOCK_01 + 0x22)
#define FLAG_HIDE_BIRTH_ISLAND_DEOXYS_TRIANGLE                      (EVENT_FLAG_BLOCK_01 + 0x23)
#define FLAG_HIDE_MAUVILLE_CITY_SCOTT                               (EVENT_FLAG_BLOCK_01 + 0x24)
#define FLAG_HIDE_VERDANTURF_TOWN_SCOTT                             (EVENT_FLAG_BLOCK_01 + 0x25)
#define FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT                  (EVENT_FLAG_BLOCK_01 + 0x26)
#define FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE                        (EVENT_FLAG_BLOCK_01 + 0x27)
#define FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE                      (EVENT_FLAG_BLOCK_01 + 0x28)
#define FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE                          (EVENT_FLAG_BLOCK_01 + 0x29)
#define FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE                         (EVENT_FLAG_BLOCK_01 + 0x2A)
#define FLAG_HIDE_PETALBURG_GYM_NORMAN                              (EVENT_FLAG_BLOCK_01 + 0x2B)
#define FLAG_HIDE_SKY_PILLAR_TOP_RAYQUAZA                           (EVENT_FLAG_BLOCK_01 + 0x2C)
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_1         (EVENT_FLAG_BLOCK_01 + 0x2D)
#define FLAG_HIDE_LILYCOVE_MUSEUM_CURATOR                           (EVENT_FLAG_BLOCK_01 + 0x2E)
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1                          (EVENT_FLAG_BLOCK_01 + 0x2F)
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2                          (EVENT_FLAG_BLOCK_01 + 0x30)
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_3                          (EVENT_FLAG_BLOCK_01 + 0x31)
#define FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_4                          (EVENT_FLAG_BLOCK_01 + 0x32)
#define FLAG_HIDE_LILYCOVE_MUSEUM_TOURISTS                          (EVENT_FLAG_BLOCK_01 + 0x33)
#define FLAG_HIDE_PETALBURG_GYM_GREETER                             (EVENT_FLAG_BLOCK_01 + 0x34)
#define FLAG_HIDE_MARINE_CAVE_KYOGRE                                (EVENT_FLAG_BLOCK_01 + 0x35)
#define FLAG_HIDE_TERRA_CAVE_GROUDON                                (EVENT_FLAG_BLOCK_01 + 0x36)
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM          (EVENT_FLAG_BLOCK_01 + 0x37)
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_MOM              (EVENT_FLAG_BLOCK_01 + 0x38)
#define FLAG_HIDE_ROUTE_119_SCOTT                                   (EVENT_FLAG_BLOCK_01 + 0x39)
#define FLAG_HIDE_LILYCOVE_MOTEL_SCOTT                              (EVENT_FLAG_BLOCK_01 + 0x3A)
#define FLAG_HIDE_MOSSDEEP_CITY_SCOTT                               (EVENT_FLAG_BLOCK_01 + 0x3B)
#define FLAG_HIDE_FANCLUB_OLD_LADY                                  (EVENT_FLAG_BLOCK_01 + 0x3C)
#define FLAG_HIDE_FANCLUB_BOY                                       (EVENT_FLAG_BLOCK_01 + 0x3D)
#define FLAG_HIDE_FANCLUB_LITTLE_BOY                                (EVENT_FLAG_BLOCK_01 + 0x3E)
#define FLAG_HIDE_FANCLUB_LADY                                      (EVENT_FLAG_BLOCK_01 + 0x3F)
#define FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT               (EVENT_FLAG_BLOCK_01 + 0x40)
#define FLAG_HIDE_LITTLEROOT_TOWN_RIVAL                             (EVENT_FLAG_BLOCK_01 + 0x41)
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCH                             (EVENT_FLAG_BLOCK_01 + 0x42)
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1                          (EVENT_FLAG_BLOCK_01 + 0x43)
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1                          (EVENT_FLAG_BLOCK_01 + 0x44)
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1                          (EVENT_FLAG_BLOCK_01 + 0x45)
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3                          (EVENT_FLAG_BLOCK_01 + 0x46)
#define FLAG_HIDE_LUGIA                                             (EVENT_FLAG_BLOCK_01 + 0x47)
#define FLAG_HIDE_HO_OH                                             (EVENT_FLAG_BLOCK_01 + 0x48)
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER                    (EVENT_FLAG_BLOCK_01 + 0x49)
#define FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER                   (EVENT_FLAG_BLOCK_01 + 0x4A)
#define FLAG_HIDE_MAUVILLE_CITY_WALLY                               (EVENT_FLAG_BLOCK_01 + 0x4B)
#define FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE                        (EVENT_FLAG_BLOCK_01 + 0x4C)
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY                (EVENT_FLAG_BLOCK_01 + 0x4D)
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND                   (EVENT_FLAG_BLOCK_01 + 0x4E)
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND     (EVENT_FLAG_BLOCK_01 + 0x4F)
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE         (EVENT_FLAG_BLOCK_01 + 0x50)
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT                           (EVENT_FLAG_BLOCK_01 + 0x51)
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CYNDAQUIL     (EVENT_FLAG_BLOCK_01 + 0x52)
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_TOTODILE      (EVENT_FLAG_BLOCK_01 + 0x53)
#define FLAG_HIDE_ROUTE_116_DROPPED_GLASSES_MAN                     (EVENT_FLAG_BLOCK_01 + 0x54)
#define FLAG_HIDE_RUSTBORO_CITY_RIVAL                               (EVENT_FLAG_BLOCK_01 + 0x55)
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL     (EVENT_FLAG_BLOCK_01 + 0x56)
#define FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE                           (EVENT_FLAG_BLOCK_01 + 0x57)
#define FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL       (EVENT_FLAG_BLOCK_01 + 0x58)
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL           (EVENT_FLAG_BLOCK_01 + 0x59)
#define FLAG_HIDE_ROUTE_112_TEAM_MAGMA                              (EVENT_FLAG_BLOCK_01 + 0x5A)
#define FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE                        (EVENT_FLAG_BLOCK_01 + 0x5B)
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE         (EVENT_FLAG_BLOCK_01 + 0x5C)
#define FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE         (EVENT_FLAG_BLOCK_01 + 0x5D)
#define FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA                          (EVENT_FLAG_BLOCK_01 + 0x5E)
#define FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD                          (EVENT_FLAG_BLOCK_01 + 0x5F)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define EVENT_FLAG_BLOCK_02                                     FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
#else
    #define FLAG_HIDE_LEGEND_MON_CAVE_OF_ORIGIN                     (EVENT_FLAG_BLOCK_01 + 0x60) // Unused, leftover from R/S

    #define EVENT_FLAG_BLOCK_02                                     FLAG_HIDE_LEGEND_MON_CAVE_OF_ORIGIN
#endif


#define FLAG_HIDE_SOOTOPOLIS_CITY_ARCHIE                            (EVENT_FLAG_BLOCK_02 + 0x01)
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAXIE                             (EVENT_FLAG_BLOCK_02 + 0x02)
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE                     (EVENT_FLAG_BLOCK_02 + 0x03)
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE                      (EVENT_FLAG_BLOCK_02 + 0x04)
#define FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD                         (EVENT_FLAG_BLOCK_02 + 0x05)
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS               (EVENT_FLAG_BLOCK_02 + 0x06)
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER                (EVENT_FLAG_BLOCK_02 + 0x07)
#define FLAG_HIDE_GRANITE_CAVE_STEVEN                               (EVENT_FLAG_BLOCK_02 + 0x08)
#define FLAG_HIDE_ROUTE_128_STEVEN                                  (EVENT_FLAG_BLOCK_02 + 0x09)
#define FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY                       (EVENT_FLAG_BLOCK_02 + 0x0A)
#define FLAG_HIDE_BATTLE_FRONTIER_RECEPTION_GATE_SCOTT              (EVENT_FLAG_BLOCK_02 + 0x0B)
#define FLAG_HIDE_ROUTE_110_BIRCH                                   (EVENT_FLAG_BLOCK_02 + 0x0C)
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA     (EVENT_FLAG_BLOCK_02 + 0x0D)
#define FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1                             (EVENT_FLAG_BLOCK_02 + 0x0E)
#define FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN                      (EVENT_FLAG_BLOCK_02 + 0x0F)
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN               (EVENT_FLAG_BLOCK_02 + 0x10)
#define FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO                         (EVENT_FLAG_BLOCK_02 + 0x11)
#define FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY                      (EVENT_FLAG_BLOCK_02 + 0x12)
#define FLAG_HIDE_RUSTBORO_CITY_SCIENTIST                           (EVENT_FLAG_BLOCK_02 + 0x13)
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT                  (EVENT_FLAG_BLOCK_02 + 0x14)
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE                      (EVENT_FLAG_BLOCK_02 + 0x15)
#define FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD                           (EVENT_FLAG_BLOCK_02 + 0x16)
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW            (EVENT_FLAG_BLOCK_02 + 0x17)
#define FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL          (EVENT_FLAG_BLOCK_02 + 0x18)
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON_ASLEEP                   (EVENT_FLAG_BLOCK_02 + 0x19)
#define FLAG_HIDE_ROUTE_119_RIVAL                                   (EVENT_FLAG_BLOCK_02 + 0x1A)
#define FLAG_HIDE_LILYCOVE_CITY_AQUA_GRUNTS                         (EVENT_FLAG_BLOCK_02 + 0x1B)
#define FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON                          (EVENT_FLAG_BLOCK_02 + 0x1C)
#define FLAG_HIDE_SOOTOPOLIS_CITY_RESIDENTS                         (EVENT_FLAG_BLOCK_02 + 0x1D)
#define FLAG_HIDE_SKY_PILLAR_WALLACE                                (EVENT_FLAG_BLOCK_02 + 0x1E)
#define FLAG_HIDE_MT_PYRE_SUMMIT_MAXIE                              (EVENT_FLAG_BLOCK_02 + 0x1F)
#define FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS                              (EVENT_FLAG_BLOCK_02 + 0x20)
#define FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY                       (EVENT_FLAG_BLOCK_02 + 0x21)
#define FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_KYOGRE                     (EVENT_FLAG_BLOCK_02 + 0x22)
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_SS_TIDAL                    (EVENT_FLAG_BLOCK_02 + 0x23)
#define FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL                           (EVENT_FLAG_BLOCK_02 + 0x24)
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA          (EVENT_FLAG_BLOCK_02 + 0x25)
#define FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_STEVEN              (EVENT_FLAG_BLOCK_02 + 0x26)
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1           (EVENT_FLAG_BLOCK_02 + 0x27)
#define FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2           (EVENT_FLAG_BLOCK_02 + 0x28)
#define FLAG_HIDE_PETALBURG_GYM_WALLY                               (EVENT_FLAG_BLOCK_02 + 0x29)
#define FLAG_UNKNOWN_0x363                                          (EVENT_FLAG_BLOCK_02 + 0x2A) // Set, however has no purpose.
#define FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN                           (EVENT_FLAG_BLOCK_02 + 0x2B)
#define FLAG_HIDE_SLATEPORT_CITY_STERNS_SHIPYARD_MR_BRINEY          (EVENT_FLAG_BLOCK_02 + 0x2C)
#define FLAG_HIDE_LANETTES_HOUSE_LANETTE                            (EVENT_FLAG_BLOCK_02 + 0x2D)
#define FLAG_HIDE_FALLORBOR_POKEMON_CENTER_LANETTE                  (EVENT_FLAG_BLOCK_02 + 0x2E)
#define FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN                          (EVENT_FLAG_BLOCK_02 + 0x2F)
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT    (EVENT_FLAG_BLOCK_02 + 0x30)
#define FLAG_HIDE_DESERT_UNDERPASS_FOSSIL                           (EVENT_FLAG_BLOCK_02 + 0x31)
#define FLAG_HIDE_ROUTE_111_PLAYER_DESCENT                          (EVENT_FLAG_BLOCK_02 + 0x32)
#define FLAG_HIDE_ROUTE_111_DESERT_FOSSIL                           (EVENT_FLAG_BLOCK_02 + 0x33)
#define FLAG_HIDE_MT_CHIMNEY_TRAINERS                               (EVENT_FLAG_BLOCK_02 + 0x34)
#define FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT                         (EVENT_FLAG_BLOCK_02 + 0x35)
#define FLAG_HIDE_RUSTURF_TUNNEL_BRINEY                             (EVENT_FLAG_BLOCK_02 + 0x36)
#define FLAG_HIDE_RUSTURF_TUNNEL_PEEKO                              (EVENT_FLAG_BLOCK_02 + 0x37)
#define FLAG_HIDE_BRINEYS_HOUSE_PEEKO                               (EVENT_FLAG_BLOCK_02 + 0x38)
#define FLAG_HIDE_SLATEPORT_CITY_TEAM_AQUA                          (EVENT_FLAG_BLOCK_02 + 0x39)
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_AQUA_GRUNTS         (EVENT_FLAG_BLOCK_02 + 0x3A)
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_1     (EVENT_FLAG_BLOCK_02 + 0x3B)
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2     (EVENT_FLAG_BLOCK_02 + 0x3C)
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE           (EVENT_FLAG_BLOCK_02 + 0x3D)
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_CAPTAIN_STERN    (EVENT_FLAG_BLOCK_02 + 0x3E)
#define FLAG_HIDE_BATTLE_TOWER_OPPONENT                             (EVENT_FLAG_BLOCK_02 + 0x3F)
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL                  (EVENT_FLAG_BLOCK_02 + 0x40)
#define FLAG_HIDE_ROUTE_119_TEAM_AQUA                               (EVENT_FLAG_BLOCK_02 + 0x41)
#define FLAG_HIDE_ROUTE_116_MR_BRINEY                               (EVENT_FLAG_BLOCK_02 + 0x42)
#define FLAG_HIDE_WEATHER_INSTITUTE_1F_WORKERS                      (EVENT_FLAG_BLOCK_02 + 0x43)
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_WORKERS                      (EVENT_FLAG_BLOCK_02 + 0x44)
#define FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND                        (EVENT_FLAG_BLOCK_02 + 0x45)
#define FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2         (EVENT_FLAG_BLOCK_02 + 0x46)
#define FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_UNKNOWN_0x380          (EVENT_FLAG_BLOCK_02 + 0x47)
#define FLAG_HIDE_ROUTE_101_BIRCH                                   (EVENT_FLAG_BLOCK_02 + 0x48)
#define FLAG_HIDE_ROUTE_103_BIRCH                                   (EVENT_FLAG_BLOCK_02 + 0x49)
#define FLAG_HIDE_TRICK_HOUSE_END_MAN                               (EVENT_FLAG_BLOCK_02 + 0x4A)
#define FLAG_HIDE_ROUTE_110_TEAM_AQUA                               (EVENT_FLAG_BLOCK_02 + 0x4B)
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_2                          (EVENT_FLAG_BLOCK_02 + 0x4C)
#define FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2                          (EVENT_FLAG_BLOCK_02 + 0x4D)
#define FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2                          (EVENT_FLAG_BLOCK_02 + 0x4E)
#define FLAG_HIDE_ROUTE_118_GABBY_AND_TY_3                          (EVENT_FLAG_BLOCK_02 + 0x4F)
#define FLAG_HIDE_SLATEPORT_CITY_HARBOR_PATRONS                     (EVENT_FLAG_BLOCK_02 + 0x50)
#define FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST                      (EVENT_FLAG_BLOCK_02 + 0x51)
#define FLAG_HIDE_FALLARBOR_AZURILL                                 (EVENT_FLAG_BLOCK_02 + 0x52)
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_ATTENDANT                   (EVENT_FLAG_BLOCK_02 + 0x53)
#define FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR                      (EVENT_FLAG_BLOCK_02 + 0x54)
#define FLAG_HIDE_SOUTHERN_ISLAND_EON_STONE                         (EVENT_FLAG_BLOCK_02 + 0x55)
#define FLAG_HIDE_SOUTHERN_ISLAND_UNCHOSEN_EON_DUO_MON              (EVENT_FLAG_BLOCK_02 + 0x56)
#define FLAG_HIDE_MAUVILLE_CITY_WATTSON                             (EVENT_FLAG_BLOCK_02 + 0x57)
#define FLAG_HIDE_MAUVILLE_GYM_WATTSON                              (EVENT_FLAG_BLOCK_02 + 0x58)
#define FLAG_HIDE_ROUTE_121_TEAM_AQUA_GRUNTS                        (EVENT_FLAG_BLOCK_02 + 0x59)
#define FLAG_UNKNOWN_0x393                                          (EVENT_FLAG_BLOCK_02 + 0x5A) // Set, however has no purpose.
#define FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE                             (EVENT_FLAG_BLOCK_02 + 0x5B)
#define FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA                          (EVENT_FLAG_BLOCK_02 + 0x5C)
#define FLAG_HIDE_BATTLE_TOWER_REPORTER                             (EVENT_FLAG_BLOCK_02 + 0x5D)
#define FLAG_HIDE_ROUTE_110_RIVAL                                   (EVENT_FLAG_BLOCK_02 + 0x5E)
#define FLAG_HIDE_CHAMPIONS_ROOM_RIVAL                              (EVENT_FLAG_BLOCK_02 + 0x5F)
#define FLAG_HIDE_CHAMPIONS_ROOM_BIRCH                              (EVENT_FLAG_BLOCK_02 + 0x60)
#define FLAG_HIDE_ROUTE_110_RIVAL_ON_BIKE                           (EVENT_FLAG_BLOCK_02 + 0x61)
#define FLAG_HIDE_ROUTE_119_RIVAL_ON_BIKE                           (EVENT_FLAG_BLOCK_02 + 0x62)
#define FLAG_HIDE_AQUA_HIDEOUT_GRUNTS                               (EVENT_FLAG_BLOCK_02 + 0x63)
#define FLAG_HIDE_LILYCOVE_MOTEL_GAME_DESIGNERS                     (EVENT_FLAG_BLOCK_02 + 0x64)
#define FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA                              (EVENT_FLAG_BLOCK_02 + 0x65)
#define FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA                             (EVENT_FLAG_BLOCK_02 + 0x66)
#define FLAG_HIDE_FALLARBOR_HOUSE_PROF_COZMO                        (EVENT_FLAG_BLOCK_02 + 0x67)
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL                              (EVENT_FLAG_BLOCK_02 + 0x68)
#define FLAG_HIDE_LAVARIDGE_TOWN_RIVAL_ON_BIKE                      (EVENT_FLAG_BLOCK_02 + 0x69)
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_1                             (EVENT_FLAG_BLOCK_02 + 0x6A)
#define FLAG_HIDE_RUSTURF_TUNNEL_ROCK_2                             (EVENT_FLAG_BLOCK_02 + 0x6B)
#define FLAG_HIDE_FORTREE_CITY_HOUSE_4_WINGULL                      (EVENT_FLAG_BLOCK_02 + 0x6C)
#define FLAG_HIDE_MOSSDEEP_CITY_HOUSE_2_WINGULL                     (EVENT_FLAG_BLOCK_02 + 0x6D)
#define FLAG_HIDE_REGIROCK                                          (EVENT_FLAG_BLOCK_02 + 0x6E)
#define FLAG_HIDE_REGICE                                            (EVENT_FLAG_BLOCK_02 + 0x6F)
#define FLAG_HIDE_REGISTEEL                                         (EVENT_FLAG_BLOCK_02 + 0x70)
#define FLAG_HIDE_METEOR_FALLS_TEAM_AQUA                            (EVENT_FLAG_BLOCK_02 + 0x71)
#define FLAG_HIDE_METEOR_FALLS_TEAM_MAGMA                           (EVENT_FLAG_BLOCK_02 + 0x72)
#define FLAG_HIDE_DEWFORD_HALL_SLUDGE_BOMB_MAN                      (EVENT_FLAG_BLOCK_02 + 0x73)
#define FLAG_HIDE_SEAFLOOR_CAVERN_ENTRANCE_AQUA_GRUNT               (EVENT_FLAG_BLOCK_02 + 0x74)
#define FLAG_HIDE_METEOR_FALLS_1F_1R_COZMO                          (EVENT_FLAG_BLOCK_02 + 0x75)
#define FLAG_HIDE_AQUA_HIDEOUT_B2F_SUBMARINE_SHADOW                 (EVENT_FLAG_BLOCK_02 + 0x76)
#define FLAG_HIDE_ROUTE_128_ARCHIE                                  (EVENT_FLAG_BLOCK_02 + 0x77)
#define FLAG_HIDE_ROUTE_128_MAXIE                                   (EVENT_FLAG_BLOCK_02 + 0x78)
#define FLAG_HIDE_SEAFLOOR_CAVERN_AQUA_GRUNTS                       (EVENT_FLAG_BLOCK_02 + 0x79)
#define FLAG_HIDE_ROUTE_116_DEVON_EMPLOYEE                          (EVENT_FLAG_BLOCK_02 + 0x7A)
#define FLAG_HIDE_SLATEPORT_CITY_TM_SALESMAN                        (EVENT_FLAG_BLOCK_02 + 0x7B)
#define FLAG_HIDE_RUSTBORO_CITY_DEVON_CORP_3F_EMPLOYEE              (EVENT_FLAG_BLOCK_02 + 0x7C)
#define FLAG_HIDE_SS_TIDAL_CORRIDOR_MR_BRINEY                       (EVENT_FLAG_BLOCK_02 + 0x7D)
#define FLAG_HIDE_SS_TIDAL_ROOMS_SNATCH_GIVER                       (EVENT_FLAG_BLOCK_02 + 0x7E)
#define FLAG_RECEIVED_SHOAL_SALT_1                                  (EVENT_FLAG_BLOCK_02 + 0x7F)
#define FLAG_RECEIVED_SHOAL_SALT_2                                  (EVENT_FLAG_BLOCK_02 + 0x80)
#define FLAG_RECEIVED_SHOAL_SALT_3                                  (EVENT_FLAG_BLOCK_02 + 0x81)
#define FLAG_RECEIVED_SHOAL_SALT_4                                  (EVENT_FLAG_BLOCK_02 + 0x82)
#define FLAG_RECEIVED_SHOAL_SHELL_1                                 (EVENT_FLAG_BLOCK_02 + 0x83)
#define FLAG_RECEIVED_SHOAL_SHELL_2                                 (EVENT_FLAG_BLOCK_02 + 0x84)
#define FLAG_RECEIVED_SHOAL_SHELL_3                                 (EVENT_FLAG_BLOCK_02 + 0x85)
#define FLAG_RECEIVED_SHOAL_SHELL_4                                 (EVENT_FLAG_BLOCK_02 + 0x86)
#define FLAG_HIDE_ROUTE_111_SECRET_POWER_MAN                        (EVENT_FLAG_BLOCK_02 + 0x87)
#define FLAG_HIDE_SLATEPORT_MUSEUM_POPULATION                       (EVENT_FLAG_BLOCK_02 + 0x88)
#define FLAG_HIDE_LILYCOVE_DEPARTMENT_STORE_ROOFTOP_SALE_WOMAN      (EVENT_FLAG_BLOCK_02 + 0x89)
#define FLAG_HIDE_MIRAGE_TOWER_ROOT_FOSSIL                          (EVENT_FLAG_BLOCK_02 + 0x8A)
#define FLAG_HIDE_MIRAGE_TOWER_CLAW_FOSSIL                          (EVENT_FLAG_BLOCK_02 + 0x8B)
#define FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_FAMILIAR_AQUA_GRUNT (EVENT_FLAG_BLOCK_02 + 0x8C)
#define FLAG_HIDE_ROUTE_118_STEVEN                                  (EVENT_FLAG_BLOCK_02 + 0x8D)
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_STEVEN                (EVENT_FLAG_BLOCK_02 + 0x8E)
#define FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_BELDUM_POKEBALL       (EVENT_FLAG_BLOCK_02 + 0x8F)
#define FLAG_HIDE_FORTREE_CITY_KECLEON                              (EVENT_FLAG_BLOCK_02 + 0x90)
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE                          (EVENT_FLAG_BLOCK_02 + 0x91)
#define FLAG_HIDE_LILYCOVE_CITY_RIVAL                               (EVENT_FLAG_BLOCK_02 + 0x92)
#define FLAG_HIDE_ROUTE_120_STEVEN                                  (EVENT_FLAG_BLOCK_02 + 0x93)
#define FLAG_HIDE_SOOTOPOLIS_CITY_STEVEN                            (EVENT_FLAG_BLOCK_02 + 0x94)
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_1                            (EVENT_FLAG_BLOCK_02 + 0x95)
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_2                            (EVENT_FLAG_BLOCK_02 + 0x96)
#define FLAG_HIDE_NEW_MAUVILLE_VOLTORB_3                            (EVENT_FLAG_BLOCK_02 + 0x97)
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_1                      (EVENT_FLAG_BLOCK_02 + 0x98)
#define FLAG_HIDE_AQUA_HIDEOUT_B1F_ELECTRODE_2                      (EVENT_FLAG_BLOCK_02 + 0x99)
#define FLAG_HIDE_OLDALE_TOWN_RIVAL                                 (EVENT_FLAG_BLOCK_02 + 0x9A)
#define FLAG_HIDE_UNDERWATER_SEA_FLOOR_CAVERN_STOLEN_SUBMARINE      (EVENT_FLAG_BLOCK_02 + 0x9B)
#define FLAG_HIDE_ROUTE_120_KECLEON_BRIDGE_SHADOW                   (EVENT_FLAG_BLOCK_02 + 0x9C)
#define FLAG_HIDE_ROUTE_120_KECLEON_1                               (EVENT_FLAG_BLOCK_02 + 0x9D)
#define FLAG_HIDE_RUSTURF_TUNNEL_WANDA                              (EVENT_FLAG_BLOCK_02 + 0x9E)
#define FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDA                (EVENT_FLAG_BLOCK_02 + 0x9F)
#define FLAG_HIDE_ROUTE_120_KECLEON_2                               (EVENT_FLAG_BLOCK_02 + 0xA0)
#define FLAG_HIDE_ROUTE_120_KECLEON_3                               (EVENT_FLAG_BLOCK_02 + 0xA1)
#define FLAG_HIDE_ROUTE_120_KECLEON_4                               (EVENT_FLAG_BLOCK_02 + 0xA2)
#define FLAG_HIDE_ROUTE_120_KECLEON_5                               (EVENT_FLAG_BLOCK_02 + 0xA3)
#define FLAG_HIDE_ROUTE_119_KECLEON_1                               (EVENT_FLAG_BLOCK_02 + 0xA4)
#define FLAG_HIDE_ROUTE_119_KECLEON_2                               (EVENT_FLAG_BLOCK_02 + 0xA5)
#define FLAG_HIDE_ROUTE_101_BOY                                     (EVENT_FLAG_BLOCK_02 + 0xA6)
#define FLAG_HIDE_WEATHER_INSTITUTE_2F_AQUA_GRUNT_M                 (EVENT_FLAG_BLOCK_02 + 0xA7)
#define FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON          (EVENT_FLAG_BLOCK_02 + 0xA8)
#define FLAG_HIDE_MT_CHIMNEY_LAVA_COOKIE_LADY                       (EVENT_FLAG_BLOCK_02 + 0xA9)
#define FLAG_HIDE_PETALBURG_CITY_SCOTT                              (EVENT_FLAG_BLOCK_02 + 0xAA)
#define FLAG_HIDE_SOOTOPOLIS_CITY_RAYQUAZA                          (EVENT_FLAG_BLOCK_02 + 0xAB)
#define FLAG_HIDE_SOOTOPOLIS_CITY_KYOGRE                            (EVENT_FLAG_BLOCK_02 + 0xAC)
#define FLAG_HIDE_SOOTOPOLIS_CITY_GROUDON                           (EVENT_FLAG_BLOCK_02 + 0xAD)
#define FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT                (EVENT_FLAG_BLOCK_02 + 0xAE)

#define LAST_EVENT_FLAG                                             FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT



// Item Ball Flags ================================================================================
#define FLAG_ITEM_ROUTE_102_POTION                                  (LAST_EVENT_FLAG + 0x01)
#define FLAG_ITEM_ROUTE_116_X_SPECIAL                               (LAST_EVENT_FLAG + 0x02)
#define FLAG_ITEM_ROUTE_104_PP_UP                                   (LAST_EVENT_FLAG + 0x03)
#define FLAG_ITEM_ROUTE_105_IRON                                    (LAST_EVENT_FLAG + 0x04)
#define FLAG_ITEM_ROUTE_106_PROTEIN                                 (LAST_EVENT_FLAG + 0x05)
#define FLAG_ITEM_ROUTE_109_PP_UP                                   (LAST_EVENT_FLAG + 0x06)
#define FLAG_ITEM_ROUTE_110_RARE_CANDY                              (LAST_EVENT_FLAG + 0x07)
#define FLAG_ITEM_ROUTE_110_DIRE_HIT                                (LAST_EVENT_FLAG + 0x08)
#define FLAG_ITEM_ROUTE_111_TM37                                    (LAST_EVENT_FLAG + 0x09)
#define FLAG_ITEM_ROUTE_111_STARDUST                                (LAST_EVENT_FLAG + 0x0A)
#define FLAG_ITEM_ROUTE_111_HP_UP                                   (LAST_EVENT_FLAG + 0x0B)
#define FLAG_ITEM_ROUTE_112_NUGGET                                  (LAST_EVENT_FLAG + 0x0C)
#define FLAG_ITEM_ROUTE_113_MAX_ETHER                               (LAST_EVENT_FLAG + 0x0D)
#define FLAG_ITEM_ROUTE_113_SUPER_REPEL                             (LAST_EVENT_FLAG + 0x0E)
#define FLAG_ITEM_ROUTE_114_RARE_CANDY                              (LAST_EVENT_FLAG + 0x0F)
#define FLAG_ITEM_ROUTE_114_PROTEIN                                 (LAST_EVENT_FLAG + 0x10)
#define FLAG_ITEM_ROUTE_115_SUPER_POTION                            (LAST_EVENT_FLAG + 0x11)
#define FLAG_ITEM_ROUTE_115_TM01                                    (LAST_EVENT_FLAG + 0x12)
#define FLAG_ITEM_ROUTE_115_IRON                                    (LAST_EVENT_FLAG + 0x13)
#define FLAG_ITEM_ROUTE_116_ETHER                                   (LAST_EVENT_FLAG + 0x14)
#define FLAG_ITEM_ROUTE_116_REPEL                                   (LAST_EVENT_FLAG + 0x15)
#define FLAG_ITEM_ROUTE_116_HP_UP                                   (LAST_EVENT_FLAG + 0x16)
#define FLAG_ITEM_ROUTE_117_GREAT_BALL                              (LAST_EVENT_FLAG + 0x17)
#define FLAG_ITEM_ROUTE_117_REVIVE                                  (LAST_EVENT_FLAG + 0x18)
#define FLAG_ITEM_ROUTE_119_SUPER_REPEL                             (LAST_EVENT_FLAG + 0x19)
#define FLAG_ITEM_ROUTE_119_ZINC                                    (LAST_EVENT_FLAG + 0x1A)
#define FLAG_ITEM_ROUTE_119_ELIXIR_1                                (LAST_EVENT_FLAG + 0x1B)
#define FLAG_ITEM_ROUTE_119_LEAF_STONE                              (LAST_EVENT_FLAG + 0x1C)
#define FLAG_ITEM_ROUTE_119_RARE_CANDY                              (LAST_EVENT_FLAG + 0x1D)
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_1                          (LAST_EVENT_FLAG + 0x1E)
#define FLAG_ITEM_ROUTE_120_NUGGET                                  (LAST_EVENT_FLAG + 0x1F)
#define FLAG_ITEM_ROUTE_120_FULL_HEAL                               (LAST_EVENT_FLAG + 0x20)
#define FLAG_ITEM_ROUTE_123_CALCIUM                                 (LAST_EVENT_FLAG + 0x21)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define ITEM_FLAG_BLOCK_01                                      FLAG_ITEM_ROUTE_123_CALCIUM
#else
    #define FLAG_ITEM_ROUTE_123_RARE_CANDY                          (LAST_EVENT_FLAG + 0x22) // Unused Flag, leftover from R/S. In Emerald this is a hidden item and uses a different flag

    #define ITEM_FLAG_BLOCK_01                                      FLAG_ITEM_ROUTE_123_RARE_CANDY
#endif


#define FLAG_ITEM_ROUTE_127_ZINC                                    (ITEM_FLAG_BLOCK_01 + 0x01)
#define FLAG_ITEM_ROUTE_127_CARBOS                                  (ITEM_FLAG_BLOCK_01 + 0x02)
#define FLAG_ITEM_ROUTE_132_RARE_CANDY                              (ITEM_FLAG_BLOCK_01 + 0x03)
#define FLAG_ITEM_ROUTE_133_BIG_PEARL                               (ITEM_FLAG_BLOCK_01 + 0x04)
#define FLAG_ITEM_ROUTE_133_STAR_PIECE                              (ITEM_FLAG_BLOCK_01 + 0x05)
#define FLAG_ITEM_PETALBURG_CITY_MAX_REVIVE                         (ITEM_FLAG_BLOCK_01 + 0x06)
#define FLAG_ITEM_PETALBURG_CITY_ETHER                              (ITEM_FLAG_BLOCK_01 + 0x07)
#define FLAG_ITEM_RUSTBORO_CITY_X_DEFEND                            (ITEM_FLAG_BLOCK_01 + 0x08)
#define FLAG_ITEM_LILYCOVE_CITY_MAX_REPEL                           (ITEM_FLAG_BLOCK_01 + 0x09)
#define FLAG_ITEM_MOSSDEEP_CITY_NET_BALL                            (ITEM_FLAG_BLOCK_01 + 0x0A)
#define FLAG_ITEM_METEOR_FALLS_1F_1R_TM23                           (ITEM_FLAG_BLOCK_01 + 0x0B)
#define FLAG_ITEM_METEOR_FALLS_1F_1R_FULL_HEAL                      (ITEM_FLAG_BLOCK_01 + 0x0C)
#define FLAG_ITEM_METEOR_FALLS_1F_1R_MOON_STONE                     (ITEM_FLAG_BLOCK_01 + 0x0D)
#define FLAG_ITEM_METEOR_FALLS_1F_1R_PP_UP                          (ITEM_FLAG_BLOCK_01 + 0x0E)
#define FLAG_ITEM_RUSTURF_TUNNEL_POKE_BALL                          (ITEM_FLAG_BLOCK_01 + 0x0F)
#define FLAG_ITEM_RUSTURF_TUNNEL_MAX_ETHER                          (ITEM_FLAG_BLOCK_01 + 0x10)
#define FLAG_ITEM_GRANITE_CAVE_1F_ESCAPE_ROPE                       (ITEM_FLAG_BLOCK_01 + 0x11)
#define FLAG_ITEM_GRANITE_CAVE_B1F_POKE_BALL                        (ITEM_FLAG_BLOCK_01 + 0x12)
#define FLAG_ITEM_MT_PYRE_5F_LAX_INCENSE                            (ITEM_FLAG_BLOCK_01 + 0x13)
#define FLAG_ITEM_GRANITE_CAVE_B2F_REPEL                            (ITEM_FLAG_BLOCK_01 + 0x14)
#define FLAG_ITEM_GRANITE_CAVE_B2F_RARE_CANDY                       (ITEM_FLAG_BLOCK_01 + 0x15)
#define FLAG_ITEM_PETALBURG_WOODS_X_ATTACK                          (ITEM_FLAG_BLOCK_01 + 0x16)
#define FLAG_ITEM_PETALBURG_WOODS_GREAT_BALL                        (ITEM_FLAG_BLOCK_01 + 0x17)
#define FLAG_ITEM_ROUTE_104_POKE_BALL                               (ITEM_FLAG_BLOCK_01 + 0x18)
#define FLAG_ITEM_PETALBURG_WOODS_ETHER                             (ITEM_FLAG_BLOCK_01 + 0x19)
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_3R_ECAPE_ROPE                    (ITEM_FLAG_BLOCK_01 + 0x1A)
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_1_ORANGE_MAIL                  (ITEM_FLAG_BLOCK_01 + 0x1B)
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_HARBOR_MAIL                  (ITEM_FLAG_BLOCK_01 + 0x1C)
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_2_WAVE_MAIL                    (ITEM_FLAG_BLOCK_01 + 0x1D)
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_SHADOW_MAIL                  (ITEM_FLAG_BLOCK_01 + 0x1E)
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_3_WOOD_MAIL                    (ITEM_FLAG_BLOCK_01 + 0x1F)
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_4_MECH_MAIL                    (ITEM_FLAG_BLOCK_01 + 0x20)
#define FLAG_ITEM_ROUTE_124_YELLOW_SHARD                            (ITEM_FLAG_BLOCK_01 + 0x21)
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_6_GLITTER_MAIL                 (ITEM_FLAG_BLOCK_01 + 0x22)
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_7_TROPIC_MAIL                  (ITEM_FLAG_BLOCK_01 + 0x23)
#define FLAG_ITEM_TRICK_HOUSE_PUZZLE_8_BEAD_MAIL                    (ITEM_FLAG_BLOCK_01 + 0x24)
#define FLAG_ITEM_JAGGED_PASS_BURN_HEAL                             (ITEM_FLAG_BLOCK_01 + 0x25)
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MAX_ELIXIR                       (ITEM_FLAG_BLOCK_01 + 0x26)
#define FLAG_ITEM_AQUA_HIDEOUT_B2F_NEST_BALL                        (ITEM_FLAG_BLOCK_01 + 0x27)
#define FLAG_ITEM_MT_PYRE_EXTERIOR_MAX_POTION                       (ITEM_FLAG_BLOCK_01 + 0x28)
#define FLAG_ITEM_MT_PYRE_EXTERIOR_TM48                             (ITEM_FLAG_BLOCK_01 + 0x29)
#define FLAG_ITEM_NEW_MAUVILLE_ULTRA_BALL                           (ITEM_FLAG_BLOCK_01 + 0x2A)
#define FLAG_ITEM_NEW_MAUVILLE_ESCAPE_ROPE                          (ITEM_FLAG_BLOCK_01 + 0x2B)
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_6_LUXURY_BALL    (ITEM_FLAG_BLOCK_01 + 0x2C)
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER        (ITEM_FLAG_BLOCK_01 + 0x2D)
#define FLAG_ITEM_SCORCHED_SLAB_TM11                                (ITEM_FLAG_BLOCK_01 + 0x2E)
#define FLAG_ITEM_METEOR_FALLS_B1F_2R_TM02                          (ITEM_FLAG_BLOCK_01 + 0x2F)
#define FLAG_ITEM_SHOAL_CAVE_ENTRANCE_BIG_PEARL                     (ITEM_FLAG_BLOCK_01 + 0x30)
#define FLAG_ITEM_SHOAL_CAVE_INNER_ROOM_RARE_CANDY                  (ITEM_FLAG_BLOCK_01 + 0x31)
#define FLAG_ITEM_SHOAL_CAVE_STAIRS_ROOM_ICE_HEAL                   (ITEM_FLAG_BLOCK_01 + 0x32)
#define FLAG_ITEM_VICTORY_ROAD_1F_MAX_ELIXIR                        (ITEM_FLAG_BLOCK_01 + 0x33)
#define FLAG_ITEM_VICTORY_ROAD_1F_PP_UP                             (ITEM_FLAG_BLOCK_01 + 0x34)
#define FLAG_ITEM_VICTORY_ROAD_B1F_TM29                             (ITEM_FLAG_BLOCK_01 + 0x35)
#define FLAG_ITEM_VICTORY_ROAD_B1F_FULL_RESTORE                     (ITEM_FLAG_BLOCK_01 + 0x36)
#define FLAG_ITEM_VICTORY_ROAD_B2F_FULL_HEAL                        (ITEM_FLAG_BLOCK_01 + 0x37)
#define FLAG_ITEM_MT_PYRE_6F_TM30                                   (ITEM_FLAG_BLOCK_01 + 0x38)
#define FLAG_ITEM_SEAFLOOR_CAVERN_ROOM_9_TM26                       (ITEM_FLAG_BLOCK_01 + 0x39)
#define FLAG_ITEM_FIERY_PATH_TM06                                   (ITEM_FLAG_BLOCK_01 + 0x3A)
#define FLAG_ITEM_ROUTE_124_RED_SHARD                               (ITEM_FLAG_BLOCK_01 + 0x3B)
#define FLAG_ITEM_ROUTE_124_BLUE_SHARD                              (ITEM_FLAG_BLOCK_01 + 0x3C)
#define FLAG_ITEM_SAFARI_ZONE_NORTH_WEST_TM22                       (ITEM_FLAG_BLOCK_01 + 0x3D)
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_1F_HARBOR_MAIL               (ITEM_FLAG_BLOCK_01 + 0x3E)
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_ESCAPE_ROPE              (ITEM_FLAG_BLOCK_01 + 0x3F)
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_B1F_DIVE_BALL              (ITEM_FLAG_BLOCK_01 + 0x40)
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_B1F_TM13                     (ITEM_FLAG_BLOCK_01 + 0x41)
#define FLAG_ITEM_ABANDONED_SHIP_ROOMS_2_1F_REVIVE                  (ITEM_FLAG_BLOCK_01 + 0x42)
#define FLAG_ITEM_ABANDONED_SHIP_CAPTAINS_OFFICE_STORAGE_KEY        (ITEM_FLAG_BLOCK_01 + 0x43)
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_3_WATER_STONE    (ITEM_FLAG_BLOCK_01 + 0x44)
#define FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_1_TM18           (ITEM_FLAG_BLOCK_01 + 0x45)
#define FLAG_ITEM_ROUTE_121_CARBOS                                  (ITEM_FLAG_BLOCK_01 + 0x46)
#define FLAG_ITEM_ROUTE_123_ULTRA_BALL                              (ITEM_FLAG_BLOCK_01 + 0x47)
#define FLAG_ITEM_ROUTE_126_GREEN_SHARD                             (ITEM_FLAG_BLOCK_01 + 0x48)
#define FLAG_ITEM_ROUTE_119_HYPER_POTION_2                          (ITEM_FLAG_BLOCK_01 + 0x49)
#define FLAG_ITEM_ROUTE_120_HYPER_POTION                            (ITEM_FLAG_BLOCK_01 + 0x4A)
#define FLAG_ITEM_ROUTE_120_NEST_BALL                               (ITEM_FLAG_BLOCK_01 + 0x4B)
#define FLAG_ITEM_ROUTE_123_ELIXIR                                  (ITEM_FLAG_BLOCK_01 + 0x4C)
#define FLAG_ITEM_NEW_MAUVILLE_THUNDER_STONE                        (ITEM_FLAG_BLOCK_01 + 0x4D)
#define FLAG_ITEM_FIERY_PATH_FIRE_STONE                             (ITEM_FLAG_BLOCK_01 + 0x4E)
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_TM07                          (ITEM_FLAG_BLOCK_01 + 0x4F)
#define FLAG_ITEM_SHOAL_CAVE_ICE_ROOM_NEVER_MELT_ICE                (ITEM_FLAG_BLOCK_01 + 0x50)
#define FLAG_ITEM_ROUTE_103_GUARD_SPEC                              (ITEM_FLAG_BLOCK_01 + 0x51)
#define FLAG_ITEM_ROUTE_104_X_ACCURACY                              (ITEM_FLAG_BLOCK_01 + 0x52)
#define FLAG_ITEM_MAUVILLE_CITY_X_SPEED                             (ITEM_FLAG_BLOCK_01 + 0x53)
#define FLAG_ITEM_PETALBURG_WOODS_PARALYZE_HEAL                     (ITEM_FLAG_BLOCK_01 + 0x54)
#define FLAG_ITEM_ROUTE_115_GREAT_BALL                              (ITEM_FLAG_BLOCK_01 + 0x55)
#define FLAG_ITEM_SAFARI_ZONE_NORTH_CALCIUM                         (ITEM_FLAG_BLOCK_01 + 0x56)
#define FLAG_ITEM_MT_PYRE_3F_SUPER_REPEL                            (ITEM_FLAG_BLOCK_01 + 0x57)
#define FLAG_ITEM_ROUTE_118_HYPER_POTION                            (ITEM_FLAG_BLOCK_01 + 0x58)
#define FLAG_ITEM_NEW_MAUVILLE_FULL_HEAL                            (ITEM_FLAG_BLOCK_01 + 0x59)
#define FLAG_ITEM_NEW_MAUVILLE_PARALYZE_HEAL                        (ITEM_FLAG_BLOCK_01 + 0x5A)
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_MASTER_BALL                      (ITEM_FLAG_BLOCK_01 + 0x5B)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define ITEM_FLAG_BLOCK_02                                      FLAG_ITEM_AQUA_HIDEOUT_B1F_MASTER_BALL
#else
    #define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MASTER_BALL             (ITEM_FLAG_BLOCK_01 + 0x5C) // Unused Flag, leftover from the Ruby Magma hideout
    #define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B1F_MAX_ELIXIR              (ITEM_FLAG_BLOCK_01 + 0x5D) // Unused Flag, leftover from the Ruby Magma hideout
    #define FLAG_ITEM_OLD_MAGMA_HIDEOUT_B2F_NEST_BALL               (ITEM_FLAG_BLOCK_01 + 0x5E) // Unused Flag, leftover from the Ruby Magma hideout
    #define FLAG_UNUSED_0x468                                       (ITEM_FLAG_BLOCK_01 + 0x5F) // Unused Flag

    #define ITEM_FLAG_BLOCK_02                                      FLAG_UNUSED_0x468
#endif


#define FLAG_ITEM_MT_PYRE_2F_ULTRA_BALL                             (ITEM_FLAG_BLOCK_02 + 0x01)
#define FLAG_ITEM_MT_PYRE_4F_SEA_INCENSE                            (ITEM_FLAG_BLOCK_02 + 0x02)
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_WEST_MAX_REVIVE                 (ITEM_FLAG_BLOCK_02 + 0x03)
#define FLAG_ITEM_AQUA_HIDEOUT_B1F_NUGGET                           (ITEM_FLAG_BLOCK_02 + 0x04)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define ITEM_FLAG_BLOCK_03                                      FLAG_ITEM_AQUA_HIDEOUT_B1F_NUGGET
#else
    #define FLAG_ITEM_MOSSDEEP_STEVENS_HOUSE_HM08                   (ITEM_FLAG_BLOCK_02 + 0x05) // Unused Flag, leftover from R/S. HM08 is given to the player directly in Emerald

    #define ITEM_FLAG_BLOCK_03                                      FLAG_ITEM_MOSSDEEP_STEVENS_HOUSE_HM08
#endif


#define FLAG_ITEM_ROUTE_119_NUGGET                                  (ITEM_FLAG_BLOCK_03 + 0x01)
#define FLAG_ITEM_ROUTE_104_POTION                                  (ITEM_FLAG_BLOCK_03 + 0x02)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define ITEM_FLAG_BLOCK_04                                      FLAG_ITEM_ROUTE_104_POTION
#else
    #define FLAG_UNUSED_0x470                                       (ITEM_FLAG_BLOCK_03 + 0x03) // Unused Flag

    #define ITEM_FLAG_BLOCK_04                                      FLAG_UNUSED_0x470
#endif


#define FLAG_ITEM_ROUTE_103_PP_UP                                   (ITEM_FLAG_BLOCK_04 + 0x01)

#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define ITEM_FLAG_BLOCK_05                                      FLAG_ITEM_ROUTE_103_PP_UP
#else
    #define FLAG_UNUSED_0x472                                       (ITEM_FLAG_BLOCK_04 + 0x02) // Unused Flag

    #define ITEM_FLAG_BLOCK_05                                      FLAG_UNUSED_0x472
#endif


#define FLAG_ITEM_ROUTE_108_STAR_PIECE                              (ITEM_FLAG_BLOCK_05 + 0x01)
#define FLAG_ITEM_ROUTE_109_POTION                                  (ITEM_FLAG_BLOCK_05 + 0x02)
#define FLAG_ITEM_ROUTE_110_ELIXIR                                  (ITEM_FLAG_BLOCK_05 + 0x03)
#define FLAG_ITEM_ROUTE_111_ELIXIR                                  (ITEM_FLAG_BLOCK_05 + 0x04)
#define FLAG_ITEM_ROUTE_113_HYPER_POTION                            (ITEM_FLAG_BLOCK_05 + 0x05)
#define FLAG_ITEM_ROUTE_115_HEAL_POWDER                             (ITEM_FLAG_BLOCK_05 + 0x06)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define ITEM_FLAG_BLOCK_06                                      FLAG_ITEM_ROUTE_115_HEAL_POWDER
#else
    #define FLAG_UNUSED_0x479                                       (ITEM_FLAG_BLOCK_05 + 0x07) // Unused Flag

    #define ITEM_FLAG_BLOCK_06                                      FLAG_UNUSED_0x479
#endif


#define FLAG_ITEM_ROUTE_116_POTION                                  (ITEM_FLAG_BLOCK_06 + 0x01)
#define FLAG_ITEM_ROUTE_119_ELIXIR_2                                (ITEM_FLAG_BLOCK_06 + 0x02)
#define FLAG_ITEM_ROUTE_120_REVIVE                                  (ITEM_FLAG_BLOCK_06 + 0x03)
#define FLAG_ITEM_ROUTE_121_REVIVE                                  (ITEM_FLAG_BLOCK_06 + 0x04)
#define FLAG_ITEM_ROUTE_121_ZINC                                    (ITEM_FLAG_BLOCK_06 + 0x05)
#define FLAG_ITEM_MAGMA_HIDEOUT_1F_RARE_CANDY                       (ITEM_FLAG_BLOCK_06 + 0x06)
#define FLAG_ITEM_ROUTE_123_PP_UP                                   (ITEM_FLAG_BLOCK_06 + 0x07)
#define FLAG_ITEM_ROUTE_123_REVIVAL_HERB                            (ITEM_FLAG_BLOCK_06 + 0x08)
#define FLAG_ITEM_ROUTE_125_BIG_PEARL                               (ITEM_FLAG_BLOCK_06 + 0x09)
#define FLAG_ITEM_ROUTE_127_RARE_CANDY                              (ITEM_FLAG_BLOCK_06 + 0x0A)
#define FLAG_ITEM_ROUTE_132_PROTEIN                                 (ITEM_FLAG_BLOCK_06 + 0x0B)
#define FLAG_ITEM_ROUTE_133_MAX_REVIVE                              (ITEM_FLAG_BLOCK_06 + 0x0C)
#define FLAG_ITEM_ROUTE_134_CARBOS                                  (ITEM_FLAG_BLOCK_06 + 0x0D)
#define FLAG_ITEM_ROUTE_134_STAR_PIECE                              (ITEM_FLAG_BLOCK_06 + 0x0E)
#define FLAG_ITEM_ROUTE_114_ENERGY_POWDER                           (ITEM_FLAG_BLOCK_06 + 0x0F)
#define FLAG_ITEM_ROUTE_115_PP_UP                                   (ITEM_FLAG_BLOCK_06 + 0x10)
#define FLAG_ITEM_ARTISAN_CAVE_B1F_HP_UP                            (ITEM_FLAG_BLOCK_06 + 0x11)
#define FLAG_ITEM_ARTISAN_CAVE_1F_CARBOS                            (ITEM_FLAG_BLOCK_06 + 0x12)
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_MAX_ELIXIR                    (ITEM_FLAG_BLOCK_06 + 0x13)
#define FLAG_ITEM_MAGMA_HIDEOUT_2F_2R_FULL_RESTORE                  (ITEM_FLAG_BLOCK_06 + 0x14)
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_1R_NUGGET                        (ITEM_FLAG_BLOCK_06 + 0x15)
#define FLAG_ITEM_MAGMA_HIDEOUT_3F_2R_PP_MAX                        (ITEM_FLAG_BLOCK_06 + 0x16)
#define FLAG_ITEM_MAGMA_HIDEOUT_4F_MAX_REVIVE                       (ITEM_FLAG_BLOCK_06 + 0x17)
#define FLAG_ITEM_SAFARI_ZONE_NORTH_EAST_NUGGET                     (ITEM_FLAG_BLOCK_06 + 0x18)
#define FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL                  (ITEM_FLAG_BLOCK_06 + 0x19)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define LAST_ITEM_FLAG                                          FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL

#else
    #define LAST_USED_ITEM_FLAG                                     FLAG_ITEM_SAFARI_ZONE_SOUTH_EAST_BIG_PEARL

    #define FLAG_UNUSED_0x493                                       (LAST_USED_ITEM_FLAG + 0x01) // Unused Flag
    #define FLAG_UNUSED_0x494                                       (LAST_USED_ITEM_FLAG + 0x02) // Unused Flag
    #define FLAG_UNUSED_0x495                                       (LAST_USED_ITEM_FLAG + 0x03) // Unused Flag
    #define FLAG_UNUSED_0x496                                       (LAST_USED_ITEM_FLAG + 0x04) // Unused Flag
    #define FLAG_UNUSED_0x497                                       (LAST_USED_ITEM_FLAG + 0x05) // Unused Flag
    #define FLAG_UNUSED_0x498                                       (LAST_USED_ITEM_FLAG + 0x06) // Unused Flag
    #define FLAG_UNUSED_0x499                                       (LAST_USED_ITEM_FLAG + 0x07) // Unused Flag
    #define FLAG_UNUSED_0x49A                                       (LAST_USED_ITEM_FLAG + 0x08) // Unused Flag
    #define FLAG_UNUSED_0x49B                                       (LAST_USED_ITEM_FLAG + 0x09) // Unused Flag
    #define FLAG_UNUSED_0x49C                                       (LAST_USED_ITEM_FLAG + 0x0A) // Unused Flag
    #define FLAG_UNUSED_0x49D                                       (LAST_USED_ITEM_FLAG + 0x0B) // Unused Flag
    #define FLAG_UNUSED_0x49E                                       (LAST_USED_ITEM_FLAG + 0x0C) // Unused Flag
    #define FLAG_UNUSED_0x49F                                       (LAST_USED_ITEM_FLAG + 0x0D) // Unused Flag
    #define FLAG_UNUSED_0x4A0                                       (LAST_USED_ITEM_FLAG + 0x0E) // Unused Flag
    #define FLAG_UNUSED_0x4A1                                       (LAST_USED_ITEM_FLAG + 0x0F) // Unused Flag
    #define FLAG_UNUSED_0x4A2                                       (LAST_USED_ITEM_FLAG + 0x10) // Unused Flag
    #define FLAG_UNUSED_0x4A3                                       (LAST_USED_ITEM_FLAG + 0x11) // Unused Flag
    #define FLAG_UNUSED_0x4A4                                       (LAST_USED_ITEM_FLAG + 0x12) // Unused Flag
    #define FLAG_UNUSED_0x4A5                                       (LAST_USED_ITEM_FLAG + 0x13) // Unused Flag
    #define FLAG_UNUSED_0x4A6                                       (LAST_USED_ITEM_FLAG + 0x14) // Unused Flag
    #define FLAG_UNUSED_0x4A7                                       (LAST_USED_ITEM_FLAG + 0x15) // Unused Flag
    #define FLAG_UNUSED_0x4A8                                       (LAST_USED_ITEM_FLAG + 0x16) // Unused Flag
    #define FLAG_UNUSED_0x4A9                                       (LAST_USED_ITEM_FLAG + 0x17) // Unused Flag
    #define FLAG_UNUSED_0x4AA                                       (LAST_USED_ITEM_FLAG + 0x18) // Unused Flag
    #define FLAG_UNUSED_0x4AB                                       (LAST_USED_ITEM_FLAG + 0x19) // Unused Flag
    #define FLAG_UNUSED_0x4AC                                       (LAST_USED_ITEM_FLAG + 0x1A) // Unused Flag
    #define FLAG_UNUSED_0x4AD                                       (LAST_USED_ITEM_FLAG + 0x1B) // Unused Flag
    #define FLAG_UNUSED_0x4AE                                       (LAST_USED_ITEM_FLAG + 0x1C) // Unused Flag
    #define FLAG_UNUSED_0x4AF                                       (LAST_USED_ITEM_FLAG + 0x1D) // Unused Flag
    #define FLAG_UNUSED_0x4B0                                       (LAST_USED_ITEM_FLAG + 0x1E) // Unused Flag
    #define FLAG_UNUSED_0x4B1                                       (LAST_USED_ITEM_FLAG + 0x1F) // Unused Flag
    #define FLAG_UNUSED_0x4B2                                       (LAST_USED_ITEM_FLAG + 0x20) // Unused Flag
    #define FLAG_UNUSED_0x4B3                                       (LAST_USED_ITEM_FLAG + 0x21) // Unused Flag
    #define FLAG_UNUSED_0x4B4                                       (LAST_USED_ITEM_FLAG + 0x22) // Unused Flag
    #define FLAG_UNUSED_0x4B5                                       (LAST_USED_ITEM_FLAG + 0x23) // Unused Flag
    #define FLAG_UNUSED_0x4B6                                       (LAST_USED_ITEM_FLAG + 0x24) // Unused Flag
    #define FLAG_UNUSED_0x4B7                                       (LAST_USED_ITEM_FLAG + 0x25) // Unused Flag
    #define FLAG_UNUSED_0x4B8                                       (LAST_USED_ITEM_FLAG + 0x26) // Unused Flag
    #define FLAG_UNUSED_0x4B9                                       (LAST_USED_ITEM_FLAG + 0x27) // Unused Flag
    #define FLAG_UNUSED_0x4BA                                       (LAST_USED_ITEM_FLAG + 0x28) // Unused Flag
    #define FLAG_UNUSED_0x4BB                                       (LAST_USED_ITEM_FLAG + 0x29) // Unused Flag
    #define FLAG_UNUSED_0x4BC                                       (LAST_USED_ITEM_FLAG + 0x2A) // Unused Flag
    #define FLAG_UNUSED_0x4BD                                       (LAST_USED_ITEM_FLAG + 0x2B) // Unused Flag
    #define FLAG_UNUSED_0x4BE                                       (LAST_USED_ITEM_FLAG + 0x2C) // Unused Flag
    #define FLAG_UNUSED_0x4BF                                       (LAST_USED_ITEM_FLAG + 0x2D) // Unused Flag
    #define FLAG_UNUSED_0x4C0                                       (LAST_USED_ITEM_FLAG + 0x2E) // Unused Flag
    #define FLAG_UNUSED_0x4C1                                       (LAST_USED_ITEM_FLAG + 0x2F) // Unused Flag
    #define FLAG_UNUSED_0x4C2                                       (LAST_USED_ITEM_FLAG + 0x30) // Unused Flag
    #define FLAG_UNUSED_0x4C3                                       (LAST_USED_ITEM_FLAG + 0x31) // Unused Flag
    #define FLAG_UNUSED_0x4C4                                       (LAST_USED_ITEM_FLAG + 0x32) // Unused Flag
    #define FLAG_UNUSED_0x4C5                                       (LAST_USED_ITEM_FLAG + 0x33) // Unused Flag
    #define FLAG_UNUSED_0x4C6                                       (LAST_USED_ITEM_FLAG + 0x34) // Unused Flag
    #define FLAG_UNUSED_0x4C7                                       (LAST_USED_ITEM_FLAG + 0x35) // Unused Flag
    #define FLAG_UNUSED_0x4C8                                       (LAST_USED_ITEM_FLAG + 0x36) // Unused Flag
    #define FLAG_UNUSED_0x4C9                                       (LAST_USED_ITEM_FLAG + 0x37) // Unused Flag
    #define FLAG_UNUSED_0x4CA                                       (LAST_USED_ITEM_FLAG + 0x38) // Unused Flag
    #define FLAG_UNUSED_0x4CB                                       (LAST_USED_ITEM_FLAG + 0x39) // Unused Flag
    #define FLAG_UNUSED_0x4CC                                       (LAST_USED_ITEM_FLAG + 0x3A) // Unused Flag
    #define FLAG_UNUSED_0x4CD                                       (LAST_USED_ITEM_FLAG + 0x3B) // Unused Flag
    #define FLAG_UNUSED_0x4CE                                       (LAST_USED_ITEM_FLAG + 0x3C) // Unused Flag
    #define FLAG_UNUSED_0x4CF                                       (LAST_USED_ITEM_FLAG + 0x3D) // Unused Flag
    #define FLAG_UNUSED_0x4D0                                       (LAST_USED_ITEM_FLAG + 0x3E) // Unused Flag
    #define FLAG_UNUSED_0x4D1                                       (LAST_USED_ITEM_FLAG + 0x3F) // Unused Flag
    #define FLAG_UNUSED_0x4D2                                       (LAST_USED_ITEM_FLAG + 0x40) // Unused Flag
    #define FLAG_UNUSED_0x4D3                                       (LAST_USED_ITEM_FLAG + 0x41) // Unused Flag
    #define FLAG_UNUSED_0x4D4                                       (LAST_USED_ITEM_FLAG + 0x42) // Unused Flag
    #define FLAG_UNUSED_0x4D5                                       (LAST_USED_ITEM_FLAG + 0x43) // Unused Flag
    #define FLAG_UNUSED_0x4D6                                       (LAST_USED_ITEM_FLAG + 0x44) // Unused Flag
    #define FLAG_UNUSED_0x4D7                                       (LAST_USED_ITEM_FLAG + 0x45) // Unused Flag
    #define FLAG_UNUSED_0x4D8                                       (LAST_USED_ITEM_FLAG + 0x46) // Unused Flag
    #define FLAG_UNUSED_0x4D9                                       (LAST_USED_ITEM_FLAG + 0x47) // Unused Flag
    #define FLAG_UNUSED_0x4DA                                       (LAST_USED_ITEM_FLAG + 0x48) // Unused Flag
    #define FLAG_UNUSED_0x4DB                                       (LAST_USED_ITEM_FLAG + 0x49) // Unused Flag
    #define FLAG_UNUSED_0x4DC                                       (LAST_USED_ITEM_FLAG + 0x4A) // Unused Flag
    #define FLAG_UNUSED_0x4DD                                       (LAST_USED_ITEM_FLAG + 0x4B) // Unused Flag
    #define FLAG_UNUSED_0x4DE                                       (LAST_USED_ITEM_FLAG + 0x4C) // Unused Flag
    #define FLAG_UNUSED_0x4DF                                       (LAST_USED_ITEM_FLAG + 0x4D) // Unused Flag
    #define FLAG_UNUSED_0x4E0                                       (LAST_USED_ITEM_FLAG + 0x4E) // Unused Flag
    #define FLAG_UNUSED_0x4E1                                       (LAST_USED_ITEM_FLAG + 0x4F) // Unused Flag
    #define FLAG_UNUSED_0x4E2                                       (LAST_USED_ITEM_FLAG + 0x50) // Unused Flag
    #define FLAG_UNUSED_0x4E3                                       (LAST_USED_ITEM_FLAG + 0x51) // Unused Flag
    #define FLAG_UNUSED_0x4E4                                       (LAST_USED_ITEM_FLAG + 0x52) // Unused Flag
    #define FLAG_UNUSED_0x4E5                                       (LAST_USED_ITEM_FLAG + 0x53) // Unused Flag
    #define FLAG_UNUSED_0x4E6                                       (LAST_USED_ITEM_FLAG + 0x54) // Unused Flag
    #define FLAG_UNUSED_0x4E7                                       (LAST_USED_ITEM_FLAG + 0x55) // Unused Flag
    #define FLAG_UNUSED_0x4E8                                       (LAST_USED_ITEM_FLAG + 0x56) // Unused Flag
    #define FLAG_UNUSED_0x4E9                                       (LAST_USED_ITEM_FLAG + 0x57) // Unused Flag
    #define FLAG_UNUSED_0x4EA                                       (LAST_USED_ITEM_FLAG + 0x58) // Unused Flag
    #define FLAG_UNUSED_0x4EB                                       (LAST_USED_ITEM_FLAG + 0x59) // Unused Flag
    #define FLAG_UNUSED_0x4EC                                       (LAST_USED_ITEM_FLAG + 0x5A) // Unused Flag
    #define FLAG_UNUSED_0x4ED                                       (LAST_USED_ITEM_FLAG + 0x5B) // Unused Flag
    #define FLAG_UNUSED_0x4EE                                       (LAST_USED_ITEM_FLAG + 0x5C) // Unused Flag
    #define FLAG_UNUSED_0x4EF                                       (LAST_USED_ITEM_FLAG + 0x5D) // Unused Flag
    
    #define LAST_ITEM_FLAG                                          FLAG_UNUSED_0x4EF
#endif



// Boss Flags =====================================================================================
#define FLAG_DEFEATED_RUSTBORO_GYM                                  (LAST_ITEM_FLAG + 0x01)
#define FLAG_DEFEATED_DEWFORD_GYM                                   (LAST_ITEM_FLAG + 0x02)
#define FLAG_DEFEATED_MAUVILLE_GYM                                  (LAST_ITEM_FLAG + 0x03)
#define FLAG_DEFEATED_LAVARIDGE_GYM                                 (LAST_ITEM_FLAG + 0x04)
#define FLAG_DEFEATED_PETALBURG_GYM                                 (LAST_ITEM_FLAG + 0x05)
#define FLAG_DEFEATED_FORTREE_GYM                                   (LAST_ITEM_FLAG + 0x06)
#define FLAG_DEFEATED_MOSSDEEP_GYM                                  (LAST_ITEM_FLAG + 0x07)
#define FLAG_DEFEATED_SOOTOPOLIS_GYM                                (LAST_ITEM_FLAG + 0x08)
#define FLAG_DEFEATED_METEOR_FALLS_STEVEN                           (LAST_ITEM_FLAG + 0x09)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define BOSS_FLAG_BLOCK_01                                      FLAG_DEFEATED_METEOR_FALLS_STEVEN
#else
    #define FLAG_UNUSED_0x4F9                                       (LAST_ITEM_FLAG + 0x0A) // Unused Flag
    #define FLAG_UNUSED_0x4FA                                       (LAST_ITEM_FLAG + 0x0B) // Unused Flag

    #define BOSS_FLAG_BLOCK_01                                      FLAG_UNUSED_0x4FA
#endif

#define FLAG_DEFEATED_ELITE_4_SIDNEY                                (BOSS_FLAG_BLOCK_01 + 0x01)
#define FLAG_DEFEATED_ELITE_4_PHOEBE                                (BOSS_FLAG_BLOCK_01 + 0x02)
#define FLAG_DEFEATED_ELITE_4_GLACIA                                (BOSS_FLAG_BLOCK_01 + 0x03)
#define FLAG_DEFEATED_ELITE_4_DRAKE                                 (BOSS_FLAG_BLOCK_01 + 0x04)


#if defined(PROJECT_VERDANT) && defined(EMER_REDUCED)
    #define LAST_BOSS_FLAG                                          FLAG_DEFEATED_ELITE_4_DRAKE
#else
    #define FLAG_UNUSED_0x4FF                                       (BOSS_FLAG_BLOCK_01 + 0x05) // Unused Flag

    #define LAST_BOSS_FLAG                                          FLAG_UNUSED_0x4FF
#endif



// Trainer Flags ==================================================================================
// Trainer flags occupy 0x500 - 0x85F, the last 9 of which are unused
// See constants/opponents.h. The values there + FLAG_TRAINER_FLAG_START are the flag IDs

#define TRAINER_FLAGS_START                                         LAST_BOSS_FLAG + 0x01
#define TRAINER_FLAGS_END                                           (TRAINER_FLAGS_START + MAX_TRAINERS_COUNT - 1) // 0x85F



// System Flags ===================================================================================
#define SYSTEM_FLAGS                                 (TRAINER_FLAGS_END + 1) // 0x860

#define FLAG_SYS_POKEMON_GET                         (SYSTEM_FLAGS + 0x0) // FLAG_0x860
#define FLAG_SYS_POKEDEX_GET                         (SYSTEM_FLAGS + 0x1)
#define FLAG_SYS_POKENAV_GET                         (SYSTEM_FLAGS + 0x2)
#define FLAG_UNUSED_0x863                            (SYSTEM_FLAGS + 0x3) // Unused Flag
#define FLAG_SYS_GAME_CLEAR                          (SYSTEM_FLAGS + 0x4)
#define FLAG_SYS_CHAT_USED                           (SYSTEM_FLAGS + 0x5)
#define FLAG_UNLOCKED_TRENDY_SAYINGS                 (SYSTEM_FLAGS + 0x6)

// Badges
#define FLAG_BADGE01_GET                             (SYSTEM_FLAGS + 0x7)
#define FLAG_BADGE02_GET                             (SYSTEM_FLAGS + 0x8)
#define FLAG_BADGE03_GET                             (SYSTEM_FLAGS + 0x9)
#define FLAG_BADGE04_GET                             (SYSTEM_FLAGS + 0xA)
#define FLAG_BADGE05_GET                             (SYSTEM_FLAGS + 0xB)
#define FLAG_BADGE06_GET                             (SYSTEM_FLAGS + 0xC)
#define FLAG_BADGE07_GET                             (SYSTEM_FLAGS + 0xD)
#define FLAG_BADGE08_GET                             (SYSTEM_FLAGS + 0xE)
#define NUM_BADGES                                   (1 + FLAG_BADGE08_GET - FLAG_BADGE01_GET)

// Towns and Cities
#define FLAG_VISITED_LITTLEROOT_TOWN                (SYSTEM_FLAGS + 0xF)
#define FLAG_VISITED_OLDALE_TOWN                    (SYSTEM_FLAGS + 0x10)
#define FLAG_VISITED_DEWFORD_TOWN                   (SYSTEM_FLAGS + 0x11)
#define FLAG_VISITED_LAVARIDGE_TOWN                 (SYSTEM_FLAGS + 0x12)
#define FLAG_VISITED_FALLARBOR_TOWN                 (SYSTEM_FLAGS + 0x13)
#define FLAG_VISITED_VERDANTURF_TOWN                (SYSTEM_FLAGS + 0x14)
#define FLAG_VISITED_PACIFIDLOG_TOWN                (SYSTEM_FLAGS + 0x15)
#define FLAG_VISITED_PETALBURG_CITY                 (SYSTEM_FLAGS + 0x16)
#define FLAG_VISITED_SLATEPORT_CITY                 (SYSTEM_FLAGS + 0x17)
#define FLAG_VISITED_MAUVILLE_CITY                  (SYSTEM_FLAGS + 0x18)
#define FLAG_VISITED_RUSTBORO_CITY                  (SYSTEM_FLAGS + 0x19)
#define FLAG_VISITED_FORTREE_CITY                   (SYSTEM_FLAGS + 0x1A)
#define FLAG_VISITED_LILYCOVE_CITY                  (SYSTEM_FLAGS + 0x1B)
#define FLAG_VISITED_MOSSDEEP_CITY                  (SYSTEM_FLAGS + 0x1C)
#define FLAG_VISITED_SOOTOPOLIS_CITY                (SYSTEM_FLAGS + 0x1D)
#define FLAG_VISITED_EVER_GRANDE_CITY               (SYSTEM_FLAGS + 0x1E)

#define FLAG_IS_CHAMPION                            (SYSTEM_FLAGS + 0x1F) // Seems to be related to linking.
#define FLAG_NURSE_UNION_ROOM_REMINDER              (SYSTEM_FLAGS + 0x20)

#define FLAG_UNUSED_0x881                           (SYSTEM_FLAGS + 0x21) // Unused Flag
#define FLAG_UNUSED_0x882                           (SYSTEM_FLAGS + 0x22) // Unused Flag
#define FLAG_UNUSED_0x883                           (SYSTEM_FLAGS + 0x23) // Unused Flag
#define FLAG_UNUSED_0x884                           (SYSTEM_FLAGS + 0x24) // Unused Flag
#define FLAG_UNUSED_0x885                           (SYSTEM_FLAGS + 0x25) // Unused Flag
#define FLAG_UNUSED_0x886                           (SYSTEM_FLAGS + 0x26) // Unused Flag
#define FLAG_UNUSED_0x887                           (SYSTEM_FLAGS + 0x27) // Unused Flag

#define FLAG_SYS_USE_FLASH                          (SYSTEM_FLAGS + 0x28)
#define FLAG_SYS_USE_STRENGTH                       (SYSTEM_FLAGS + 0x29)
#define FLAG_SYS_WEATHER_CTRL                       (SYSTEM_FLAGS + 0x2A)
#define FLAG_SYS_CYCLING_ROAD                       (SYSTEM_FLAGS + 0x2B)
#define FLAG_SYS_SAFARI_MODE                        (SYSTEM_FLAGS + 0x2C)
#define FLAG_SYS_CRUISE_MODE                        (SYSTEM_FLAGS + 0x2D)

#define FLAG_UNUSED_0x88E                           (SYSTEM_FLAGS + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x88F                           (SYSTEM_FLAGS + 0x2F) // Unused Flag

#define FLAG_SYS_TV_HOME                            (SYSTEM_FLAGS + 0x30)
#define FLAG_SYS_TV_WATCH                           (SYSTEM_FLAGS + 0x31)
#define FLAG_SYS_TV_START                           (SYSTEM_FLAGS + 0x32)
#define FLAG_SYS_CHANGED_DEWFORD_TREND              (SYSTEM_FLAGS + 0x33)
#define FLAG_SYS_MIX_RECORD                         (SYSTEM_FLAGS + 0x34)
#define FLAG_SYS_CLOCK_SET                          (SYSTEM_FLAGS + 0x35)
#define FLAG_SYS_NATIONAL_DEX                       (SYSTEM_FLAGS + 0x36)
#define FLAG_SYS_CAVE_SHIP                          (SYSTEM_FLAGS + 0x37) // Unused Flag, leftover from R/S debug, presumably used by Emerald's debug too
#define FLAG_SYS_CAVE_WONDER                        (SYSTEM_FLAGS + 0x38) // Unused Flag, same as above
#define FLAG_SYS_CAVE_BATTLE                        (SYSTEM_FLAGS + 0x39) // Unused Flag, same as above
#define FLAG_SYS_SHOAL_TIDE                         (SYSTEM_FLAGS + 0x3A)
#define FLAG_SYS_RIBBON_GET                         (SYSTEM_FLAGS + 0x3B)

#define FLAG_LANDMARK_FLOWER_SHOP                   (SYSTEM_FLAGS + 0x3C)
#define FLAG_LANDMARK_MR_BRINEY_HOUSE               (SYSTEM_FLAGS + 0x3D)
#define FLAG_LANDMARK_ABANDONED_SHIP                (SYSTEM_FLAGS + 0x3E)
#define FLAG_LANDMARK_SEASHORE_HOUSE                (SYSTEM_FLAGS + 0x3F)
#define FLAG_LANDMARK_NEW_MAUVILLE                  (SYSTEM_FLAGS + 0x40)
#define FLAG_LANDMARK_OLD_LADY_REST_SHOP            (SYSTEM_FLAGS + 0x41)
#define FLAG_LANDMARK_TRICK_HOUSE                   (SYSTEM_FLAGS + 0x42)
#define FLAG_LANDMARK_WINSTRATE_FAMILY              (SYSTEM_FLAGS + 0x43)
#define FLAG_LANDMARK_GLASS_WORKSHOP                (SYSTEM_FLAGS + 0x44)
#define FLAG_LANDMARK_LANETTES_HOUSE                (SYSTEM_FLAGS + 0x45)
#define FLAG_LANDMARK_POKEMON_DAYCARE               (SYSTEM_FLAGS + 0x46)
#define FLAG_LANDMARK_SEAFLOOR_CAVERN               (SYSTEM_FLAGS + 0x47)
#define FLAG_LANDMARK_BATTLE_FRONTIER               (SYSTEM_FLAGS + 0x48)
#define FLAG_LANDMARK_SOUTHERN_ISLAND               (SYSTEM_FLAGS + 0x49)
#define FLAG_LANDMARK_FIERY_PATH                    (SYSTEM_FLAGS + 0x4A)

#define FLAG_SYS_PC_LANETTE                         (SYSTEM_FLAGS + 0x4B)
#define FLAG_SYS_MYSTERY_EVENT_ENABLE               (SYSTEM_FLAGS + 0x4C)
#define FLAG_SYS_ENC_UP_ITEM                        (SYSTEM_FLAGS + 0x4D)
#define FLAG_SYS_ENC_DOWN_ITEM                      (SYSTEM_FLAGS + 0x4E)
#define FLAG_SYS_BRAILLE_DIG                        (SYSTEM_FLAGS + 0x4F)
#define FLAG_SYS_REGIROCK_PUZZLE_COMPLETED          (SYSTEM_FLAGS + 0x50)
#define FLAG_SYS_BRAILLE_REGICE_COMPLETED           (SYSTEM_FLAGS + 0x51)
#define FLAG_SYS_REGISTEEL_PUZZLE_COMPLETED         (SYSTEM_FLAGS + 0x52)
#define FLAG_ENABLE_SHIP_SOUTHERN_ISLAND            (SYSTEM_FLAGS + 0x53)

#define FLAG_LANDMARK_POKEMON_LEAGUE                (SYSTEM_FLAGS + 0x54)
#define FLAG_LANDMARK_ISLAND_CAVE                   (SYSTEM_FLAGS + 0x55)
#define FLAG_LANDMARK_DESERT_RUINS                  (SYSTEM_FLAGS + 0x56)
#define FLAG_LANDMARK_FOSSIL_MANIACS_HOUSE          (SYSTEM_FLAGS + 0x57)
#define FLAG_LANDMARK_SCORCHED_SLAB                 (SYSTEM_FLAGS + 0x58)
#define FLAG_LANDMARK_ANCIENT_TOMB                  (SYSTEM_FLAGS + 0x59)
#define FLAG_LANDMARK_TUNNELERS_REST_HOUSE          (SYSTEM_FLAGS + 0x5A)
#define FLAG_LANDMARK_HUNTERS_HOUSE                 (SYSTEM_FLAGS + 0x5B)
#define FLAG_LANDMARK_SEALED_CHAMBER                (SYSTEM_FLAGS + 0x5C)

#define FLAG_SYS_TV_LATIAS_LATIOS                   (SYSTEM_FLAGS + 0x5D)

#define FLAG_LANDMARK_SKY_PILLAR                    (SYSTEM_FLAGS + 0x5E)

#define FLAG_SYS_SHOAL_ITEM                         (SYSTEM_FLAGS + 0x5F)
#define FLAG_SYS_B_DASH                             (SYSTEM_FLAGS + 0x60) // RECEIVED Running Shoes
#define FLAG_SYS_CTRL_OBJ_DELETE                    (SYSTEM_FLAGS + 0x61)
#define FLAG_SYS_RESET_RTC_ENABLE                   (SYSTEM_FLAGS + 0x62)

#define FLAG_LANDMARK_BERRY_MASTERS_HOUSE           (SYSTEM_FLAGS + 0x63)

#define FLAG_SYS_TOWER_SILVER                       (SYSTEM_FLAGS + 0x64)
#define FLAG_SYS_TOWER_GOLD                         (SYSTEM_FLAGS + 0x65)
#define FLAG_SYS_DOME_SILVER                        (SYSTEM_FLAGS + 0x66)
#define FLAG_SYS_DOME_GOLD                          (SYSTEM_FLAGS + 0x67)
#define FLAG_SYS_PALACE_SILVER                      (SYSTEM_FLAGS + 0x68)
#define FLAG_SYS_PALACE_GOLD                        (SYSTEM_FLAGS + 0x69)
#define FLAG_SYS_ARENA_SILVER                       (SYSTEM_FLAGS + 0x6A)
#define FLAG_SYS_ARENA_GOLD                         (SYSTEM_FLAGS + 0x6B)
#define FLAG_SYS_FACTORY_SILVER                     (SYSTEM_FLAGS + 0x6C)
#define FLAG_SYS_FACTORY_GOLD                       (SYSTEM_FLAGS + 0x6D)
#define FLAG_SYS_PIKE_SILVER                        (SYSTEM_FLAGS + 0x6E)
#define FLAG_SYS_PIKE_GOLD                          (SYSTEM_FLAGS + 0x6F)
#define FLAG_SYS_PYRAMID_SILVER                     (SYSTEM_FLAGS + 0x70)
#define FLAG_SYS_PYRAMID_GOLD                       (SYSTEM_FLAGS + 0x71)
#define FLAG_SYS_FRONTIER_PASS                      (SYSTEM_FLAGS + 0x72)

#define FLAG_MAP_SCRIPT_CHECKED_DEOXYS              (SYSTEM_FLAGS + 0x73)
#define FLAG_DEOXYS_ROCK_COMPLETE                   (SYSTEM_FLAGS + 0x74)
#define FLAG_ENABLE_SHIP_BIRTH_ISLAND               (SYSTEM_FLAGS + 0x75)
#define FLAG_ENABLE_SHIP_FARAWAY_ISLAND             (SYSTEM_FLAGS + 0x76)

#define FLAG_SHOWN_BOX_WAS_FULL_MESSAGE             (SYSTEM_FLAGS + 0x77)

#define FLAG_ARRIVED_ON_FARAWAY_ISLAND              (SYSTEM_FLAGS + 0x78)
#define FLAG_ARRIVED_AT_MARINE_CAVE_EMERGE_SPOT     (SYSTEM_FLAGS + 0x79)
#define FLAG_ARRIVED_AT_TERRA_CAVE_ENTRANCE         (SYSTEM_FLAGS + 0x7A)

#define FLAG_SYS_MYSTERY_GIFT_ENABLE                (SYSTEM_FLAGS + 0x7B)

#define FLAG_ENTERED_MIRAGE_TOWER                   (SYSTEM_FLAGS + 0x7C)
#define FLAG_LANDMARK_ALTERING_CAVE                 (SYSTEM_FLAGS + 0x7D)
#define FLAG_LANDMARK_DESERT_UNDERPASS              (SYSTEM_FLAGS + 0x7E)
#define FLAG_LANDMARK_ARTISAN_CAVE                  (SYSTEM_FLAGS + 0x7F)
#define FLAG_ENABLE_SHIP_NAVEL_ROCK                 (SYSTEM_FLAGS + 0x80)
#define FLAG_ARRIVED_AT_NAVEL_ROCK                  (SYSTEM_FLAGS + 0x81)
#define FLAG_LANDMARK_TRAINER_HILL                  (SYSTEM_FLAGS + 0x82)

#define FLAG_UNUSED_0x8E3                           (SYSTEM_FLAGS + 0x83) // Unused Flag

#define FLAG_RECEIVED_POKEDEX_FROM_BIRCH            (SYSTEM_FLAGS + 0x84)

#define FLAG_UNUSED_0x8E5                           (SYSTEM_FLAGS + 0x85) // Unused Flag
#define FLAG_UNUSED_0x8E6                           (SYSTEM_FLAGS + 0x86) // Unused Flag
#define FLAG_UNUSED_0x8E7                           (SYSTEM_FLAGS + 0x87) // Unused Flag
#define FLAG_UNUSED_0x8E8                           (SYSTEM_FLAGS + 0x88) // Unused Flag
#define FLAG_UNUSED_0x8E9                           (SYSTEM_FLAGS + 0x89) // Unused Flag
#define FLAG_UNUSED_0x8EA                           (SYSTEM_FLAGS + 0x8A) // Unused Flag
#define FLAG_UNUSED_0x8EB                           (SYSTEM_FLAGS + 0x8B) // Unused Flag
#define FLAG_UNUSED_0x8EC                           (SYSTEM_FLAGS + 0x8C) // Unused Flag
#define FLAG_UNUSED_0x8ED                           (SYSTEM_FLAGS + 0x8D) // Unused Flag
#define FLAG_UNUSED_0x8EE                           (SYSTEM_FLAGS + 0x8E) // Unused Flag
#define FLAG_UNUSED_0x8EF                           (SYSTEM_FLAGS + 0x8F) // Unused Flag
#define FLAG_UNUSED_0x8F0                           (SYSTEM_FLAGS + 0x90) // Unused Flag
#define FLAG_UNUSED_0x8F1                           (SYSTEM_FLAGS + 0x91) // Unused Flag
#define FLAG_UNUSED_0x8F2                           (SYSTEM_FLAGS + 0x92) // Unused Flag
#define FLAG_UNUSED_0x8F3                           (SYSTEM_FLAGS + 0x93) // Unused Flag
#define FLAG_UNUSED_0x8F4                           (SYSTEM_FLAGS + 0x94) // Unused Flag
#define FLAG_UNUSED_0x8F5                           (SYSTEM_FLAGS + 0x95) // Unused Flag
#define FLAG_UNUSED_0x8F6                           (SYSTEM_FLAGS + 0x96) // Unused Flag
#define FLAG_UNUSED_0x8F7                           (SYSTEM_FLAGS + 0x97) // Unused Flag
#define FLAG_UNUSED_0x8F8                           (SYSTEM_FLAGS + 0x98) // Unused Flag
#define FLAG_UNUSED_0x8F9                           (SYSTEM_FLAGS + 0x99) // Unused Flag
#define FLAG_UNUSED_0x8FA                           (SYSTEM_FLAGS + 0x9A) // Unused Flag
#define FLAG_UNUSED_0x8FB                           (SYSTEM_FLAGS + 0x9B) // Unused Flag
#define FLAG_UNUSED_0x8FC                           (SYSTEM_FLAGS + 0x9C) // Unused Flag
#define FLAG_UNUSED_0x8FD                           (SYSTEM_FLAGS + 0x9D) // Unused Flag
#define FLAG_UNUSED_0x8FE                           (SYSTEM_FLAGS + 0x9E) // Unused Flag
#define FLAG_UNUSED_0x8FF                           (SYSTEM_FLAGS + 0x9F) // Unused Flag
#define FLAG_UNUSED_0x900                           (SYSTEM_FLAGS + 0xA0) // Unused Flag
#define FLAG_UNUSED_0x901                           (SYSTEM_FLAGS + 0xA1) // Unused Flag
#define FLAG_UNUSED_0x902                           (SYSTEM_FLAGS + 0xA2) // Unused Flag
#define FLAG_UNUSED_0x903                           (SYSTEM_FLAGS + 0xA3) // Unused Flag
#define FLAG_UNUSED_0x904                           (SYSTEM_FLAGS + 0xA4) // Unused Flag
#define FLAG_UNUSED_0x905                           (SYSTEM_FLAGS + 0xA5) // Unused Flag
#define FLAG_UNUSED_0x906                           (SYSTEM_FLAGS + 0xA6) // Unused Flag
#define FLAG_UNUSED_0x907                           (SYSTEM_FLAGS + 0xA7) // Unused Flag
#define FLAG_UNUSED_0x908                           (SYSTEM_FLAGS + 0xA8) // Unused Flag
#define FLAG_UNUSED_0x909                           (SYSTEM_FLAGS + 0xA9) // Unused Flag
#define FLAG_UNUSED_0x90A                           (SYSTEM_FLAGS + 0xAA) // Unused Flag
#define FLAG_UNUSED_0x90B                           (SYSTEM_FLAGS + 0xAB) // Unused Flag
#define FLAG_UNUSED_0x90C                           (SYSTEM_FLAGS + 0xAC) // Unused Flag
#define FLAG_UNUSED_0x90D                           (SYSTEM_FLAGS + 0xAD) // Unused Flag
#define FLAG_UNUSED_0x90E                           (SYSTEM_FLAGS + 0xAE) // Unused Flag
#define FLAG_UNUSED_0x90F                           (SYSTEM_FLAGS + 0xAF) // Unused Flag
#define FLAG_UNUSED_0x910                           (SYSTEM_FLAGS + 0xB0) // Unused Flag
#define FLAG_UNUSED_0x911                           (SYSTEM_FLAGS + 0xB1) // Unused Flag
#define FLAG_UNUSED_0x912                           (SYSTEM_FLAGS + 0xB2) // Unused Flag
#define FLAG_UNUSED_0x913                           (SYSTEM_FLAGS + 0xB3) // Unused Flag
#define FLAG_UNUSED_0x914                           (SYSTEM_FLAGS + 0xB4) // Unused Flag
#define FLAG_UNUSED_0x915                           (SYSTEM_FLAGS + 0xB5) // Unused Flag
#define FLAG_UNUSED_0x916                           (SYSTEM_FLAGS + 0xB6) // Unused Flag
#define FLAG_UNUSED_0x917                           (SYSTEM_FLAGS + 0xB7) // Unused Flag
#define FLAG_UNUSED_0x918                           (SYSTEM_FLAGS + 0xB8) // Unused Flag
#define FLAG_UNUSED_0x919                           (SYSTEM_FLAGS + 0xB9) // Unused Flag
#define FLAG_UNUSED_0x91A                           (SYSTEM_FLAGS + 0xBA) // Unused Flag
#define FLAG_UNUSED_0x91B                           (SYSTEM_FLAGS + 0xBB) // Unused Flag
#define FLAG_UNUSED_0x91C                           (SYSTEM_FLAGS + 0xBC) // Unused Flag
#define FLAG_UNUSED_0x91D                           (SYSTEM_FLAGS + 0xBD) // Unused Flag
#define FLAG_UNUSED_0x91E                           (SYSTEM_FLAGS + 0xBE) // Unused Flag
#define FLAG_UNUSED_0x91F                           (SYSTEM_FLAGS + 0xBF) // Unused Flag



// Daily Flags ====================================================================================
// These flags are cleared once per day
// The start and end are byte-aligned because the flags are cleared in byte increments
#define DAILY_FLAGS_START                           (FLAG_UNUSED_0x91F + (8 - FLAG_UNUSED_0x91F % 8))
#define FLAG_UNUSED_0x920                           (DAILY_FLAGS_START + 0x0)  // Unused Flag
#define FLAG_DAILY_CONTEST_LOBBY_RECEIVED_BERRY     (DAILY_FLAGS_START + 0x1)
#define FLAG_DAILY_SECRET_BASE                      (DAILY_FLAGS_START + 0x2)
#define FLAG_UNUSED_0x923                           (DAILY_FLAGS_START + 0x3)  // Unused Flag
#define FLAG_UNUSED_0x924                           (DAILY_FLAGS_START + 0x4)  // Unused Flag
#define FLAG_UNUSED_0x925                           (DAILY_FLAGS_START + 0x5)  // Unused Flag
#define FLAG_UNUSED_0x926                           (DAILY_FLAGS_START + 0x6)  // Unused Flag
#define FLAG_UNUSED_0x927                           (DAILY_FLAGS_START + 0x7)  // Unused Flag
#define FLAG_UNUSED_0x928                           (DAILY_FLAGS_START + 0x8)  // Unused Flag
#define FLAG_UNUSED_0x929                           (DAILY_FLAGS_START + 0x9)  // Unused Flag
#define FLAG_DAILY_PICKED_LOTO_TICKET               (DAILY_FLAGS_START + 0xA)
#define FLAG_DAILY_ROUTE_114_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xB)
#define FLAG_DAILY_ROUTE_111_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xC)
#define FLAG_DAILY_BERRY_MASTER_RECEIVED_BERRY      (DAILY_FLAGS_START + 0xD)
#define FLAG_DAILY_ROUTE_120_RECEIVED_BERRY         (DAILY_FLAGS_START + 0xE)
#define FLAG_DAILY_LILYCOVE_RECEIVED_BERRY          (DAILY_FLAGS_START + 0xF)
#define FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY       (DAILY_FLAGS_START + 0x10)
#define FLAG_DAILY_BERRY_MASTERS_WIFE               (DAILY_FLAGS_START + 0x11)
#define FLAG_DAILY_SOOTOPOLIS_RECEIVED_BERRY        (DAILY_FLAGS_START + 0x12)
#define FLAG_UNUSED_0x933                           (DAILY_FLAGS_START + 0x13) // Unused Flag
#define FLAG_DAILY_APPRENTICE_LEAVES                (DAILY_FLAGS_START + 0x14)

#define FLAG_UNUSED_0x935                           (DAILY_FLAGS_START + 0x15) // Unused Flag
#define FLAG_UNUSED_0x936                           (DAILY_FLAGS_START + 0x16) // Unused Flag
#define FLAG_UNUSED_0x937                           (DAILY_FLAGS_START + 0x17) // Unused Flag
#define FLAG_UNUSED_0x938                           (DAILY_FLAGS_START + 0x18) // Unused Flag
#define FLAG_UNUSED_0x939                           (DAILY_FLAGS_START + 0x19) // Unused Flag
#define FLAG_UNUSED_0x93A                           (DAILY_FLAGS_START + 0x1A) // Unused Flag
#define FLAG_UNUSED_0x93B                           (DAILY_FLAGS_START + 0x1B) // Unused Flag
#define FLAG_UNUSED_0x93C                           (DAILY_FLAGS_START + 0x1C) // Unused Flag
#define FLAG_UNUSED_0x93D                           (DAILY_FLAGS_START + 0x1D) // Unused Flag
#define FLAG_UNUSED_0x93E                           (DAILY_FLAGS_START + 0x1E) // Unused Flag
#define FLAG_UNUSED_0x93F                           (DAILY_FLAGS_START + 0x1F) // Unused Flag
#define FLAG_UNUSED_0x940                           (DAILY_FLAGS_START + 0x20) // Unused Flag
#define FLAG_UNUSED_0x941                           (DAILY_FLAGS_START + 0x21) // Unused Flag
#define FLAG_UNUSED_0x942                           (DAILY_FLAGS_START + 0x22) // Unused Flag
#define FLAG_UNUSED_0x943                           (DAILY_FLAGS_START + 0x23) // Unused Flag
#define FLAG_UNUSED_0x944                           (DAILY_FLAGS_START + 0x24) // Unused Flag
#define FLAG_UNUSED_0x945                           (DAILY_FLAGS_START + 0x25) // Unused Flag
#define FLAG_UNUSED_0x946                           (DAILY_FLAGS_START + 0x26) // Unused Flag
#define FLAG_UNUSED_0x947                           (DAILY_FLAGS_START + 0x27) // Unused Flag
#define FLAG_UNUSED_0x948                           (DAILY_FLAGS_START + 0x28) // Unused Flag
#define FLAG_UNUSED_0x949                           (DAILY_FLAGS_START + 0x29) // Unused Flag
#define FLAG_UNUSED_0x94A                           (DAILY_FLAGS_START + 0x2A) // Unused Flag
#define FLAG_UNUSED_0x94B                           (DAILY_FLAGS_START + 0x2B) // Unused Flag
#define FLAG_UNUSED_0x94C                           (DAILY_FLAGS_START + 0x2C) // Unused Flag
#define FLAG_UNUSED_0x94D                           (DAILY_FLAGS_START + 0x2D) // Unused Flag
#define FLAG_UNUSED_0x94E                           (DAILY_FLAGS_START + 0x2E) // Unused Flag
#define FLAG_UNUSED_0x94F                           (DAILY_FLAGS_START + 0x2F) // Unused Flag
#define FLAG_UNUSED_0x950                           (DAILY_FLAGS_START + 0x30) // Unused Flag
#define FLAG_UNUSED_0x951                           (DAILY_FLAGS_START + 0x31) // Unused Flag
#define FLAG_UNUSED_0x952                           (DAILY_FLAGS_START + 0x32) // Unused Flag
#define FLAG_UNUSED_0x953                           (DAILY_FLAGS_START + 0x33) // Unused Flag
#define FLAG_UNUSED_0x954                           (DAILY_FLAGS_START + 0x34) // Unused Flag
#define FLAG_UNUSED_0x955                           (DAILY_FLAGS_START + 0x35) // Unused Flag
#define FLAG_UNUSED_0x956                           (DAILY_FLAGS_START + 0x36) // Unused Flag
#define FLAG_UNUSED_0x957                           (DAILY_FLAGS_START + 0x37) // Unused Flag
#define FLAG_UNUSED_0x958                           (DAILY_FLAGS_START + 0x38) // Unused Flag
#define FLAG_UNUSED_0x959                           (DAILY_FLAGS_START + 0x39) // Unused Flag
#define FLAG_UNUSED_0x95A                           (DAILY_FLAGS_START + 0x3A) // Unused Flag
#define FLAG_UNUSED_0x95B                           (DAILY_FLAGS_START + 0x3B) // Unused Flag
#define FLAG_UNUSED_0x95C                           (DAILY_FLAGS_START + 0x3C) // Unused Flag
#define FLAG_UNUSED_0x95D                           (DAILY_FLAGS_START + 0x3D) // Unused Flag
#define FLAG_UNUSED_0x95E                           (DAILY_FLAGS_START + 0x3E) // Unused Flag
#define FLAG_UNUSED_0x95F                           (DAILY_FLAGS_START + 0x3F) // Unused Flag
#define DAILY_FLAGS_END                             (FLAG_UNUSED_0x95F + (7 - FLAG_UNUSED_0x95F % 8))

#define FLAGS_COUNT (DAILY_FLAGS_END + 1)



// Special Flags (Stored in EWRAM (sSpecialFlags), not in the SaveBlock) ==========================
#define SPECIAL_FLAGS_START                     0x4000
#define FLAG_HIDE_MAP_NAME_POPUP                (SPECIAL_FLAGS_START + 0x0)
#define FLAG_DONT_TRANSITION_MUSIC              (SPECIAL_FLAGS_START + 0x1)
#define FLAG_ENABLE_MULTI_CORRIDOR_DOOR         (SPECIAL_FLAGS_START + 0x2)
#define FLAG_SPECIAL_FLAG_UNUSED_0x4003         (SPECIAL_FLAGS_START + 0x3) // Unused Flag
#define FLAG_STORING_ITEMS_IN_PYRAMID_BAG       (SPECIAL_FLAGS_START + 0x4)
// FLAG_SPECIAL_FLAG_0x4005 - 0x407F also exist and are unused
#define SPECIAL_FLAGS_END                       (SPECIAL_FLAGS_START + 0x7F)

#endif // GUARD_CONSTANTS_FLAGS_H
