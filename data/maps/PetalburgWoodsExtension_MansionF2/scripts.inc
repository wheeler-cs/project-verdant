PetalburgWoodsExtension_MansionF2_MapScripts::
# 7 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgWoodsExtension_MansionF2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PetalburgWoodsExtension_MansionF2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 9 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	setvar VAR_0x8004, TRUE
# 10 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	special SetForceEnableEncounters
	return


PetalburgWoodsExtension_MansionF2_OpenBook::
# 17 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	lockall
# 18 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionF2_BookText, MSGBOX_DEFAULT
# 19 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	releaseall
	end


PetalburgWoodsExtension_MansionF2_LostBoy::
# 24 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	lock
# 26 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	faceplayer
# 27 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionF2_LostBoyText01, MSGBOX_DEFAULT
# 28 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	waitmessage
# 29 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	closemessage
# 30 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 31 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	waitmovement 0
# 32 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 33 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	waitmovement 0
# 35 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionF2_LostBoyText02, MSGBOX_DEFAULT
# 36 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionF2_LostBoyText03, MSGBOX_DEFAULT
# 37 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionF2_LostBoyText04, MSGBOX_DEFAULT
# 38 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	waitmessage
# 39 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 41 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PetalburgWoodsExtension_MansionF2_LostBoy_2
PetalburgWoodsExtension_MansionF2_LostBoy_1:
# 45 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionF2_LostBoyText05, MSGBOX_DEFAULT
# 46 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	waitmessage
# 47 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	closemessage
# 48 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	getplayerxy VAR_0x8007, VAR_0x8008
# 49 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	compare VAR_0x8008, 5
	goto_if_eq PetalburgWoodsExtension_MansionF2_LostBoy_5
PetalburgWoodsExtension_MansionF2_LostBoy_4:
# 54 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	applymovement 2, PetalburgWoodsExtension_MansionF2_ChildLeavesMap
# 55 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	waitmovement 0
# 56 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	removeobject 2
# 58 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	setflag FLAG_COMPLETED_PETALBURG_MANSION_QUEST
# 59 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	release
	end

PetalburgWoodsExtension_MansionF2_LostBoy_2:
# 42 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	msgbox PetalburgWoodsExtension_MansionF2_LostBoyTextBagFull, MSGBOX_DEFAULT
	goto PetalburgWoodsExtension_MansionF2_LostBoy_1

PetalburgWoodsExtension_MansionF2_LostBoy_5:
# 50 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoodsExtension_MansionF2_PlayerMovesOutOfWay
# 51 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	waitmovement 0
	goto PetalburgWoodsExtension_MansionF2_LostBoy_4


# 65 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
PetalburgWoodsExtension_MansionF2_PlayerMovesOutOfWay:
# 66 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_up
# 67 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	face_down
	step_end

# 70 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
PetalburgWoodsExtension_MansionF2_ChildLeavesMap:
# 71 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_left
# 71 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_left
# 71 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_left
# 72 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_down
# 72 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_down
# 72 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_down
# 72 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_down
# 73 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_right
# 74 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_down
# 74 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_down
# 74 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_down
# 74 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	walk_down
	step_end

PetalburgWoodsExtension_MansionF2_BookText::
# 79 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	.string "It a journal."
	.string "\p… … … … … …"
	.string "\pStrange things have been happening"
	.string "\never since I brought home that TV."
	.string "\pThings go missing and eerie sounds can"
	.string "\nbe heard all throughout the night."
	.string "\pNow I often see apparitions in the"
	.string "\ncorner of my eye!"
	.string "\pI fear my family will have to flee if"
	.string "\nsomething can't be done.$"

PetalburgWoodsExtension_MansionF2_LostBoyText01::
# 97 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	.string "Waaah! Go away you creepy GHOST!$"

PetalburgWoodsExtension_MansionF2_LostBoyText02::
# 101 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	.string "Wait a minute…"
	.string "\nYou're not a GHOST Pokémon!"
	.string "\pThank goodness too."
	.string "\nMy Pokémon are pretty tired from"
	.string "\lgetting me here to the mansion.$"

PetalburgWoodsExtension_MansionF2_LostBoyText03::
# 110 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	.string "I came with my friend to look around"
	.string "\nthis dusty old house and find"
	.string "\lsomething we could show at school."
	.string "\pI was up here rummaging around in an old"
	.string "\ndresser when I got spooked by one of"
	.string "\lthe GHOST Pokémon."
	.string "\pThe only thing I could think to do was"
	.string "\nduck behind this table and wait until"
	.string "\lsomebody came looking for me.$"

PetalburgWoodsExtension_MansionF2_LostBoyText04::
# 124 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	.string "I'm glad you came around. I was"
	.string "\nbeginning to worry nobody was coming."
	.string "\pI think I can make it out on my own now"
	.string "\nthat I've had a chance to rest."
	.string "\pOh! Before I go…"
	.string "\nTake this as thanks for saving me.$"
	.string "\pI found it under the table while I was"
	.string "\nhiding.$"

PetalburgWoodsExtension_MansionF2_LostBoyText05::
# 138 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	.string "I found it while I was hiding."
	.string "\nIt should be worth quite a bit.$"

PetalburgWoodsExtension_MansionF2_LostBoyTextBagFull::
# 143 "data/maps/PetalburgWoodsExtension_MansionF2/scripts.pory"
	.string "Oh? It won't fit in your bag?"
	.string "\pI'll hold on to it then."
	.string "\nMaybe it'll bring me good luck!$"
