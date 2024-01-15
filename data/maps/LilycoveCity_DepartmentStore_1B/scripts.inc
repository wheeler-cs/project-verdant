# 8 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"

# 9 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
LilycoveCity_DepartmentStore_1B_MapScripts::
# 10 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	.byte 0

LilycoveCity_DepartmentStore_1B_EventScript_Skitty::
# 15 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	lock
# 16 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	faceplayer
# 17 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	playmoncry SPECIES_SKITTY, CRY_MODE_ENCOUNTER
# 18 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1B_EventScript_Skitty_Text_0, MSGBOX_NPC
# 19 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	applymovement 1, LilycoveCity_DepartmentStore_1B_Movement_FaceRight
# 20 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	waitmovement 0
# 21 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_1B_EventScript_SkittyOwner::
# 27 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	lock
# 28 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	faceplayer
# 29 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1B_EventScript_SkittyOwner_Text_0, MSGBOX_DEFAULT
# 30 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	applymovement 2, LilycoveCity_DepartmentStore_1B_Movement_FaceOriginal
# 31 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	waitmovement 0
# 32 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_1B_EventScript_ConsultationClerk::
# 38 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	lock
# 39 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	faceplayer
# 40 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1B_EventScript_ConsultationClerk_Text_0, MSGBOX_DEFAULT
# 41 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	applymovement 3, LilycoveCity_DepartmentStore_1B_Movement_FaceLeft
# 42 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	waitmovement 0
# 43 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_1B_EventScript_CounterClerk::
# 49 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	lock
# 50 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1B_EventScript_CounterClerk_Text_0, MSGBOX_DEFAULT
# 51 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_1B_EventScript_StoneShopClerk::
# 57 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	lock
# 58 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	message gText_HowMayIServeYou
# 59 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	waitmessage
# 60 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	pokemart EvolutionShop
# 61 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	release
	end


LilycoveCity_DepartmentStore_1B_EventScript_IndecisiveSailor::
# 67 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	lock
# 68 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	faceplayer
# 69 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	msgbox LilycoveCity_DepartmentStore_1B_EventScript_IndecisiveSailor_Text_0, MSGBOX_DEFAULT
# 70 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	release
	end


	.align 2
# 74 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
EvolutionShop:
# 76 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	.2byte ITEM_SUN_STONE
# 77 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	.2byte ITEM_MOON_STONE
# 78 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 79 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 80 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	.2byte ITEM_WATER_STONE
# 81 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_NONE

# 84 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
LilycoveCity_DepartmentStore_1B_Movement_FaceLeft:
# 86 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	face_left
	step_end

# 89 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
LilycoveCity_DepartmentStore_1B_Movement_FaceRight:
# 91 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	face_right
	step_end

# 94 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
LilycoveCity_DepartmentStore_1B_Movement_FaceOriginal:
# 96 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	face_original_direction
	step_end

LilycoveCity_DepartmentStore_1B_EventScript_Skitty_Text_0:
# 18 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	.string "SKITTY: Myah myah!$"

LilycoveCity_DepartmentStore_1B_EventScript_SkittyOwner_Text_0:
# 29 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	.string "I've had SKITTY since it was young.\n"
	.string "Now I think it's time I evolve it!$"

LilycoveCity_DepartmentStore_1B_EventScript_ConsultationClerk_Text_0:
# 40 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	.string "Making sure a POKéMON is ready to\n"
	.string "evolve is important, because once a\l"
	.string "POKéMON evolves it can't go back.$"

LilycoveCity_DepartmentStore_1B_EventScript_CounterClerk_Text_0:
# 50 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	.string "We sell all sorts of evolution items for\n"
	.string "POKéMON!$"

LilycoveCity_DepartmentStore_1B_EventScript_IndecisiveSailor_Text_0:
# 69 "data/maps/LilycoveCity_DepartmentStore_1B/scripts.pory"
	.string "I can't decide if I want a THUNDER\n"
	.string "STONE or a WATER STONE for my EEVEE…\l"
	.string "Or maybe even a FIRE STONE.\p"
	.string "Gaah! Such a hard decision!$"
