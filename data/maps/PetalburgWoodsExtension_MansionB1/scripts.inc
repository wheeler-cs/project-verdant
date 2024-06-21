PetalburgWoodsExtension_MansionB1_MapScripts::
# 5 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 22 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	setvar VAR_0x8004, TRUE
# 8 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	special SetForceEnableEncounters
# 9 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	gettime
# 14 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 14 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_gt PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 18 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	clearflag FLAG_PETALBURG_MANSION_B1_STATE
	return

PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 15 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	setflag FLAG_PETALBURG_MANSION_B1_STATE
	return

PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 14 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	goto PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2

PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	goto_if_unset FLAG_DEFEATED_HAUNTED_TV, PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	goto PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2

PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_LOAD:
# 24 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	goto_if_set FLAG_PETALBURG_MANSION_B1_STATE, PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 30 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	setmetatile 8, 2, METATILE_Building_TV_Off, TRUE
# 31 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	setweather WEATHER_NONE
	return

PetalburgWoodsExtension_MansionB1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 25 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	setmetatile 8, 2, METATILE_Building_TV_On, TRUE
# 26 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	setweather WEATHER_SHADE
	return


PetalburgWoodsExtension_MansionB1_HauntedTV::
# 39 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	lockall
# 40 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	waitse
# 41 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	goto_if_unset FLAG_PETALBURG_MANSION_B1_STATE, PetalburgWoodsExtension_MansionB1_HauntedTV_2
# 52 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	compare VAR_TEMP_0, TRUE
	goto_if_eq PetalburgWoodsExtension_MansionB1_HauntedTV_9
# 57 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionB1_HauntedTV_Text_3, MSGBOX_YESNO
PetalburgWoodsExtension_MansionB1_HauntedTV_8:
# 60 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgWoodsExtension_MansionB1_HauntedTV_12
# 86 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionB1_HauntedTV_Text_5, MSGBOX_DEFAULT
PetalburgWoodsExtension_MansionB1_HauntedTV_1:
# 89 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	releaseall
	end

PetalburgWoodsExtension_MansionB1_HauntedTV_2:
# 43 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	compare VAR_TEMP_0, TRUE
	goto_if_eq PetalburgWoodsExtension_MansionB1_HauntedTV_5
# 48 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionB1_HauntedTV_Text_1, MSGBOX_DEFAULT
	goto PetalburgWoodsExtension_MansionB1_HauntedTV_1

PetalburgWoodsExtension_MansionB1_HauntedTV_5:
# 44 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HAUNTER
# 45 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionB1_HauntedTV_Text_0, MSGBOX_DEFAULT
	goto PetalburgWoodsExtension_MansionB1_HauntedTV_1

PetalburgWoodsExtension_MansionB1_HauntedTV_9:
# 53 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HAUNTER
# 54 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionB1_HauntedTV_Text_2, MSGBOX_YESNO
	goto PetalburgWoodsExtension_MansionB1_HauntedTV_8

PetalburgWoodsExtension_MansionB1_HauntedTV_12:
# 63 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	playmoncry SPECIES_HAUNTER, CRY_MODE_ENCOUNTER
# 64 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	delay 40
# 65 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	waitmoncry
# 66 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	call PetalburgWoodsExtension_MansionB1_SetupBossEncounter
# 67 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 68 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	dowildbattle
# 69 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 71 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 72 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	case B_OUTCOME_WON, PetalburgWoodsExtension_MansionB1_HauntedTV_17
# 77 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	case B_OUTCOME_RAN, PetalburgWoodsExtension_MansionB1_HauntedTV_18
# 78 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, PetalburgWoodsExtension_MansionB1_HauntedTV_18
PetalburgWoodsExtension_MansionB1_HauntedTV_15:
# 82 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	setvar VAR_TEMP_0, TRUE
	goto PetalburgWoodsExtension_MansionB1_HauntedTV_1

PetalburgWoodsExtension_MansionB1_HauntedTV_17:
# 74 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	setflag FLAG_DEFEATED_HAUNTED_TV
# 75 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	clearflag FLAG_PETALBURG_MANSION_B1_STATE
	goto PetalburgWoodsExtension_MansionB1_HauntedTV_15

PetalburgWoodsExtension_MansionB1_HauntedTV_18:
# 79 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_HAUNTER
# 80 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionB1_HauntedTV_Text_4, MSGBOX_DEFAULT
	goto PetalburgWoodsExtension_MansionB1_HauntedTV_15


PetalburgWoodsExtension_MansionB1_SetupBossEncounter::
# 95 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	setshinybonus 35
# 96 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	createbossmon SPECIES_HAUNTER, 25, ITEM_SPELL_TAG
# 98 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	givemove MOVE_THUNDERBOLT, 0
# 99 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	givemove MOVE_SHADOW_BALL, 1
# 100 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	givemove MOVE_TORMENT, 2
# 101 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	givemove MOVE_ASTONISH, 3
	return


PetalburgWoodsExtension_MansionB1_HauntedTV_Text_0:
# 45 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	.string "{STR_VAR_1} seems to have left.$"

PetalburgWoodsExtension_MansionB1_HauntedTV_Text_1:
# 48 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	.string "It appears to be broken.$"

PetalburgWoodsExtension_MansionB1_HauntedTV_Text_2:
# 54 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	.string "{STR_VAR_1} eyes you from the TV.\nTry calling it?$"

PetalburgWoodsExtension_MansionB1_HauntedTV_Text_3:
# 57 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	.string "The TV feels like it's watching you.\nTry turning it off?$"

PetalburgWoodsExtension_MansionB1_HauntedTV_Text_4:
# 80 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	.string "{STR_VAR_1} returned to the TV.$"

PetalburgWoodsExtension_MansionB1_HauntedTV_Text_5:
# 86 "data/maps/PetalburgWoodsExtension_MansionB1/scripts.pory"
	.string "Decided to leave it alone.$"
