PetalburgWoodsExtension_MapScripts::
# 2 "data/maps/PetalburgWoodsExtension/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgWoodsExtension_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PetalburgWoodsExtension_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/PetalburgWoodsExtension/scripts.pory"
	setvar VAR_0x8004, FALSE
# 5 "data/maps/PetalburgWoodsExtension/scripts.pory"
	special SetForceEnableEncounters
	return


PetalburgWoodsExtension_MansionSign::
# 10 "data/maps/PetalburgWoodsExtension/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionSign_Text_0, MSGBOX_SIGN
	end


PetalburgWoodsExtension_MansionSign_Text_0:
# 10 "data/maps/PetalburgWoodsExtension/scripts.pory"
	.string "PETALBURG MANSION\nNo trespassing!$"
