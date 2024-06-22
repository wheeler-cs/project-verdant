DebugMap_FlagToggleRoom_MapScripts::
	.byte 0


DebugMap_FlagToggleRoom_RustboroGym::
# 4 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	lockall
# 5 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, DebugMap_FlagToggleRoom_RustboroGym_2
# 11 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	setflag FLAG_DEFEATED_RUSTBORO_GYM
# 12 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_1, MSGBOX_DEFAULT
# 13 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
DebugMap_FlagToggleRoom_RustboroGym_1:
# 15 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	releaseall
	return

DebugMap_FlagToggleRoom_RustboroGym_2:
# 6 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	clearflag FLAG_DEFEATED_RUSTBORO_GYM
# 7 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
	goto DebugMap_FlagToggleRoom_RustboroGym_1


DebugMap_FlagToggleRoom_DewfordGym::
# 19 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	lockall
# 20 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DebugMap_FlagToggleRoom_DewfordGym_2
# 26 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 27 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_1, MSGBOX_DEFAULT
# 28 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
DebugMap_FlagToggleRoom_DewfordGym_1:
# 30 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	releaseall
	return

DebugMap_FlagToggleRoom_DewfordGym_2:
# 21 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	clearflag FLAG_DEFEATED_DEWFORD_GYM
# 22 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_0, MSGBOX_DEFAULT
# 23 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
	goto DebugMap_FlagToggleRoom_DewfordGym_1


DebugMap_FlagToggleRoom_MauvilleGym::
# 34 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	lockall
# 35 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, DebugMap_FlagToggleRoom_MauvilleGym_2
# 41 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	setflag FLAG_DEFEATED_MAUVILLE_GYM
# 42 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_1, MSGBOX_DEFAULT
# 43 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
DebugMap_FlagToggleRoom_MauvilleGym_1:
# 45 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	releaseall
	return

DebugMap_FlagToggleRoom_MauvilleGym_2:
# 36 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	clearflag FLAG_DEFEATED_MAUVILLE_GYM
# 37 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
	goto DebugMap_FlagToggleRoom_MauvilleGym_1


DebugMap_FlagToggleRoom_LavaridgeGym::
# 49 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	lockall
# 50 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, DebugMap_FlagToggleRoom_LavaridgeGym_2
# 56 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	setflag FLAG_DEFEATED_LAVARIDGE_GYM
# 57 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_1, MSGBOX_DEFAULT
# 58 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
DebugMap_FlagToggleRoom_LavaridgeGym_1:
# 60 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	releaseall
	return

DebugMap_FlagToggleRoom_LavaridgeGym_2:
# 51 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	clearflag FLAG_DEFEATED_LAVARIDGE_GYM
# 52 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_0, MSGBOX_DEFAULT
# 53 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
	goto DebugMap_FlagToggleRoom_LavaridgeGym_1


DebugMap_FlagToggleRoom_PetalburgGym::
# 64 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	lockall
# 65 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, DebugMap_FlagToggleRoom_PetalburgGym_2
# 71 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 72 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_1, MSGBOX_DEFAULT
# 73 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
DebugMap_FlagToggleRoom_PetalburgGym_1:
# 75 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	releaseall
	return

DebugMap_FlagToggleRoom_PetalburgGym_2:
# 66 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	clearflag FLAG_DEFEATED_PETALBURG_GYM
# 67 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_0, MSGBOX_DEFAULT
# 68 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
	goto DebugMap_FlagToggleRoom_PetalburgGym_1


DebugMap_FlagToggleRoom_FortreeGym::
# 79 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	lockall
# 80 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_FORTREE_GYM, DebugMap_FlagToggleRoom_FortreeGym_2
# 86 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	setflag FLAG_DEFEATED_FORTREE_GYM
# 87 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_1, MSGBOX_DEFAULT
# 88 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
DebugMap_FlagToggleRoom_FortreeGym_1:
# 90 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	releaseall
	return

DebugMap_FlagToggleRoom_FortreeGym_2:
# 81 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	clearflag FLAG_DEFEATED_FORTREE_GYM
# 82 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_0, MSGBOX_DEFAULT
# 83 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
	goto DebugMap_FlagToggleRoom_FortreeGym_1


DebugMap_FlagToggleRoom_MossdeepGym::
# 94 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	lockall
# 95 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_MOSSDEEP_GYM, DebugMap_FlagToggleRoom_MossdeepGym_2
# 101 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	setflag FLAG_DEFEATED_MOSSDEEP_GYM
# 102 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_1, MSGBOX_DEFAULT
# 103 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
DebugMap_FlagToggleRoom_MossdeepGym_1:
# 105 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	releaseall
	return

DebugMap_FlagToggleRoom_MossdeepGym_2:
# 96 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	clearflag FLAG_DEFEATED_MOSSDEEP_GYM
# 97 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
	goto DebugMap_FlagToggleRoom_MossdeepGym_1


DebugMap_FlagToggleRoom_SootopolisGym::
# 109 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	lockall
# 110 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_SOOTOPOLIS_GYM, DebugMap_FlagToggleRoom_SootopolisGym_2
# 116 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 117 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_1, MSGBOX_DEFAULT
# 118 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
DebugMap_FlagToggleRoom_SootopolisGym_1:
# 120 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	releaseall
	return

DebugMap_FlagToggleRoom_SootopolisGym_2:
# 111 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	clearflag FLAG_DEFEATED_SOOTOPOLIS_GYM
# 112 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	msgbox DebugMap_FlagToggleRoom_RustboroGym_Text_0, MSGBOX_DEFAULT
# 113 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	closemessage
	goto DebugMap_FlagToggleRoom_SootopolisGym_1


DebugMap_FlagToggleRoom_RustboroGym_Text_0:
# 7 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	.string "Gym flag cleared!$"

DebugMap_FlagToggleRoom_RustboroGym_Text_1:
# 12 "data/maps/DebugMap_FlagToggleRoom/scripts.pory"
	.string "Gym flag set!$"
