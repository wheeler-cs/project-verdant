PetalburgWoodsExtension_Mansion_MapScripts::
# 2 "data/maps/PetalburgWoodsExtension_Mansion/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgWoodsExtension_Mansion_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PetalburgWoodsExtension_Mansion_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/PetalburgWoodsExtension_Mansion/scripts.pory"
	setvar VAR_0x8004, TRUE
# 5 "data/maps/PetalburgWoodsExtension_Mansion/scripts.pory"
	special SetForceEnableEncounters
	return

