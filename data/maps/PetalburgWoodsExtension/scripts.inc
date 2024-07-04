PetalburgWoodsExtension_MapScripts::
# 7 "data/maps/PetalburgWoodsExtension/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgWoodsExtension_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PetalburgWoodsExtension_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/PetalburgWoodsExtension/scripts.pory"
	setvar VAR_0x8004, FALSE
# 10 "data/maps/PetalburgWoodsExtension/scripts.pory"
	special SetForceEnableEncounters
# 11 "data/maps/PetalburgWoodsExtension/scripts.pory"
	goto_if_unset FLAG_STARTED_PETALBURG_MANSION_QUEST, PetalburgWoodsExtension_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 15 "data/maps/PetalburgWoodsExtension/scripts.pory"
	setvar VAR_TEMP_0, 1
PetalburgWoodsExtension_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 17 "data/maps/PetalburgWoodsExtension/scripts.pory"
	setflag FLAG_HIDE_MANSION_PANICKED_BOY
	return

PetalburgWoodsExtension_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 12 "data/maps/PetalburgWoodsExtension/scripts.pory"
	setvar VAR_TEMP_0, 0
	goto PetalburgWoodsExtension_MapScripts_MAP_SCRIPT_ON_LOAD_1


PetalburgWoodsExtension_MansionSign::
# 24 "data/maps/PetalburgWoodsExtension/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionSignMessage, MSGBOX_SIGN
	end


PetalburgWoodsExtension_ChildFromMansion::
# 29 "data/maps/PetalburgWoodsExtension/scripts.pory"
	setobjectxy 2, 11, 9
# 30 "data/maps/PetalburgWoodsExtension/scripts.pory"
	lock
# 31 "data/maps/PetalburgWoodsExtension/scripts.pory"
	delay 20
# 33 "data/maps/PetalburgWoodsExtension/scripts.pory"
	opendoor 11, 9
# 34 "data/maps/PetalburgWoodsExtension/scripts.pory"
	waitdooranim
# 36 "data/maps/PetalburgWoodsExtension/scripts.pory"
	clearflag FLAG_HIDE_MANSION_PANICKED_BOY
# 37 "data/maps/PetalburgWoodsExtension/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoodsExtension_WalkDownTurnAround
# 38 "data/maps/PetalburgWoodsExtension/scripts.pory"
	waitmovement 0
# 39 "data/maps/PetalburgWoodsExtension/scripts.pory"
	applymovement 2, PetalburgWoodsExtension_ChildFromMansionWalkDown
# 40 "data/maps/PetalburgWoodsExtension/scripts.pory"
	waitmovement 0
# 41 "data/maps/PetalburgWoodsExtension/scripts.pory"
	closedoor 11, 9
# 42 "data/maps/PetalburgWoodsExtension/scripts.pory"
	waitdooranim
# 44 "data/maps/PetalburgWoodsExtension/scripts.pory"
	msgbox PetalburgWoodsExtension_PanickedChildText01, MSGBOX_DEFAULT
# 45 "data/maps/PetalburgWoodsExtension/scripts.pory"
	closemessage
# 46 "data/maps/PetalburgWoodsExtension/scripts.pory"
	applymovement 2, PetalburgWoodsExtension_ChildFaceUp
# 47 "data/maps/PetalburgWoodsExtension/scripts.pory"
	waitmovement 0
# 48 "data/maps/PetalburgWoodsExtension/scripts.pory"
	delay 40
# 49 "data/maps/PetalburgWoodsExtension/scripts.pory"
	applymovement 2, PetalburgWoodsExtension_ChildFaceDown
# 50 "data/maps/PetalburgWoodsExtension/scripts.pory"
	waitmovement 0
# 51 "data/maps/PetalburgWoodsExtension/scripts.pory"
	msgbox PetalburgWoodsExtension_PanickedChildText02, MSGBOX_DEFAULT
# 52 "data/maps/PetalburgWoodsExtension/scripts.pory"
	closemessage
# 53 "data/maps/PetalburgWoodsExtension/scripts.pory"
	applymovement 2, PetalburgWoodsExtension_ChildMoveRightLookLeft
# 54 "data/maps/PetalburgWoodsExtension/scripts.pory"
	waitmovement 0
# 56 "data/maps/PetalburgWoodsExtension/scripts.pory"
	setflag FLAG_STARTED_PETALBURG_MANSION_QUEST
# 57 "data/maps/PetalburgWoodsExtension/scripts.pory"
	setvar VAR_TEMP_0, 1
# 58 "data/maps/PetalburgWoodsExtension/scripts.pory"
	release
	end


# 64 "data/maps/PetalburgWoodsExtension/scripts.pory"
PetalburgWoodsExtension_ChildFromMansionWalkDown:
# 65 "data/maps/PetalburgWoodsExtension/scripts.pory"
	delay_16
# 66 "data/maps/PetalburgWoodsExtension/scripts.pory"
	delay_8
# 67 "data/maps/PetalburgWoodsExtension/scripts.pory"
	walk_fast_down
	step_end

# 70 "data/maps/PetalburgWoodsExtension/scripts.pory"
PetalburgWoodsExtension_ChildFaceUp:
# 71 "data/maps/PetalburgWoodsExtension/scripts.pory"
	face_up
	step_end

# 74 "data/maps/PetalburgWoodsExtension/scripts.pory"
PetalburgWoodsExtension_ChildFaceDown:
# 75 "data/maps/PetalburgWoodsExtension/scripts.pory"
	face_down
	step_end

# 78 "data/maps/PetalburgWoodsExtension/scripts.pory"
PetalburgWoodsExtension_ChildMoveRightLookLeft:
# 79 "data/maps/PetalburgWoodsExtension/scripts.pory"
	walk_right
# 80 "data/maps/PetalburgWoodsExtension/scripts.pory"
	face_left
	step_end

# 83 "data/maps/PetalburgWoodsExtension/scripts.pory"
PetalburgWoodsExtension_WalkDownTurnAround:
# 84 "data/maps/PetalburgWoodsExtension/scripts.pory"
	walk_down
# 85 "data/maps/PetalburgWoodsExtension/scripts.pory"
	face_up
	step_end

PetalburgWoodsExtension_MansionSignMessage::
# 90 "data/maps/PetalburgWoodsExtension/scripts.pory"
	.string "PETALBURG MANSION\n"
	.string "No trespassing!$"

PetalburgWoodsExtension_PanickedChildText01::
# 95 "data/maps/PetalburgWoodsExtension/scripts.pory"
	.string "Oh, I'm sorry!\n"
	.string "I didn't mean to run into you like that.\p"
	.string "My friend and I were dared by the older\n"
	.string "kids at school to come here to the old\l"
	.string "mansion.\p"
	.string "If we can get something to prove we\n"
	.string "actually went, they said they'd stop\l"
	.string "picking on everyone.$"

PetalburgWoodsExtension_PanickedChildText02::
# 106 "data/maps/PetalburgWoodsExtension/scripts.pory"
	.string "The problem is we split up and I was\n"
	.string "never able to find him after that.\p"
	.string "I was gonna go look for him…\n"
	.string "But then I heard a strange noise and\l"
	.string "ran out as fast as I could!\p"
	.string "Please, you have to go in and find him.\p"
	.string "If our parents knew we came here\n"
	.string "instead of going to school, we'd be in\l"
	.string "big trouble!$"
