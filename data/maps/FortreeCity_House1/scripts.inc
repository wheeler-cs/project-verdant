# 5 "data/maps/FortreeCity_House1/scripts.pory"

# 6 "data/maps/FortreeCity_House1/scripts.pory"
FortreeCity_House1_MapScripts::
# 7 "data/maps/FortreeCity_House1/scripts.pory"
    .byte 0

FortreeCity_House1_EventScript_Trader::
# 12 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 13 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 15 "data/maps/FortreeCity_House1/scripts.pory"
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, FortreeCity_House1_EventScript_Trader_2
# 21 "data/maps/FortreeCity_House1/scripts.pory"
	call FortreeCity_House1_EventScript_BufferTradeData
# 22 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_YouWillTradeWontYou, MSGBOX_YESNO
# 23 "data/maps/FortreeCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_House1_EventScript_Trader_5
# 29 "data/maps/FortreeCity_House1/scripts.pory"
	special ChoosePartyMon
# 30 "data/maps/FortreeCity_House1/scripts.pory"
	waitstate
# 31 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 32 "data/maps/FortreeCity_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq FortreeCity_House1_EventScript_Trader_8
# 38 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 39 "data/maps/FortreeCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 40 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 41 "data/maps/FortreeCity_House1/scripts.pory"
	compare VAR_0x8008, VAR_0x8009
# 42 "data/maps/FortreeCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FortreeCity_House1_EventScript_Trader_11
# 48 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 49 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 50 "data/maps/FortreeCity_House1/scripts.pory"
	special CreateInGameTradePokemon
# 51 "data/maps/FortreeCity_House1/scripts.pory"
	special DoInGameTradeScene
# 52 "data/maps/FortreeCity_House1/scripts.pory"
	waitstate
# 53 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 54 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_MonYouTakeCare, MSGBOX_DEFAULT
# 55 "data/maps/FortreeCity_House1/scripts.pory"
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
FortreeCity_House1_EventScript_Trader_1:
# 60 "data/maps/FortreeCity_House1/scripts.pory"
	release
	end

FortreeCity_House1_EventScript_Trader_2:
# 17 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
	goto FortreeCity_House1_EventScript_Trader_1

FortreeCity_House1_EventScript_Trader_5:
# 25 "data/maps/FortreeCity_House1/scripts.pory"
	call FortreeCity_House1_EventScript_DeclineTrade
	goto FortreeCity_House1_EventScript_Trader_1

FortreeCity_House1_EventScript_Trader_8:
# 34 "data/maps/FortreeCity_House1/scripts.pory"
	call FortreeCity_House1_EventScript_DeclineTrade
	goto FortreeCity_House1_EventScript_Trader_1

FortreeCity_House1_EventScript_Trader_11:
# 44 "data/maps/FortreeCity_House1/scripts.pory"
	call FortreeCity_House1_EventScript_NotRequestedMon
	goto FortreeCity_House1_EventScript_Trader_1


FortreeCity_House1_EventScript_BufferTradeData::
# 66 "data/maps/FortreeCity_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_PLUSLE
# 67 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 68 "data/maps/FortreeCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 69 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
	return


FortreeCity_House1_EventScript_DeclineTrade::
# 75 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
# 78 "data/maps/FortreeCity_House1/scripts.pory"
	setvar VAR_0x8004, SPECIES_VOLBEAT
# 79 "data/maps/FortreeCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetSeenPokedexFlag
# 80 "data/maps/FortreeCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FortreeCity_House1_EventScript_DeclineTrade_2
FortreeCity_House1_EventScript_DeclineTrade_1:
	return

FortreeCity_House1_EventScript_DeclineTrade_2:
# 82 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_EventScript_DeclineTrade_Text_0, MSGBOX_DEFAULT
# 83 "data/maps/FortreeCity_House1/scripts.pory"
	showmonpic SPECIES_VOLBEAT, 10, 3
# 84 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VOLBEAT
# 85 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_EventScript_DeclineTrade_Text_1, MSGBOX_DEFAULT
# 86 "data/maps/FortreeCity_House1/scripts.pory"
	special SetSeenPokedexFlag
# 87 "data/maps/FortreeCity_House1/scripts.pory"
	hidemonpic
	goto FortreeCity_House1_EventScript_DeclineTrade_1


FortreeCity_House1_EventScript_NotRequestedMon::
# 95 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 96 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
	return


FortreeCity_House1_EventScript_ExpertF::
# 102 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_TradingMemoriesWithOthers, MSGBOX_NPC
	end


FortreeCity_House1_EventScript_Zigzagoon::
# 108 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 109 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 110 "data/maps/FortreeCity_House1/scripts.pory"
	waitse
# 111 "data/maps/FortreeCity_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 112 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 113 "data/maps/FortreeCity_House1/scripts.pory"
	waitmoncry
# 114 "data/maps/FortreeCity_House1/scripts.pory"
	release
	end


FortreeCity_House1_EventScript_DeclineTrade_Text_0:
# 82 "data/maps/FortreeCity_House1/scripts.pory"
	.string "At least let me show you what one looks\n"
	.string "like before you go!$"

FortreeCity_House1_EventScript_DeclineTrade_Text_1:
# 85 "data/maps/FortreeCity_House1/scripts.pory"
	.string "This is what {STR_VAR_1} looks like.\p"
	.string "You can always check your POKéDEX if\n"
	.string "you need a refresher.$"

FortreeCity_House1_Text_YouWillTradeWontYou::
# 118 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Wrooooaaar! I need it!\n"
	.string "I have to get me a {STR_VAR_1}!\l"
	.string "I'll do anything for it!\p"
	.string "…Uh… Did you hear that?\n"
	.string "My shout from the bottom of my heart?\p"
	.string "Having heard that, you will trade\n"
	.string "your {STR_VAR_1} for my {STR_VAR_2},\l"
	.string "won't you?$"

FortreeCity_House1_Text_MonYouTakeCare::
# 130 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Oh, yeah, right on!\p"
	.string "{STR_VAR_1}, welcome!\n"
	.string "{STR_VAR_2}, you take care!$"

FortreeCity_House1_Text_ThisIsntAMon::
# 137 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Uh, no, I don't think so.\n"
	.string "That isn't a {STR_VAR_1}.$"

FortreeCity_House1_Text_YouWontTradeMe::
# 143 "data/maps/FortreeCity_House1/scripts.pory"
	.string "No? You won't trade me?\n"
	.string "Even after I bared my heart to you?$"

FortreeCity_House1_Text_GoingToMakeVolbeatStrong::
# 149 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I'm going to make VOLBEAT super\n"
	.string "strong from this moment on!\p"
	.string "I hope you do the same with PLUSLE!$"

FortreeCity_House1_Text_TradingMemoriesWithOthers::
# 156 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Trading POKéMON with others…\p"
	.string "It's as if you're trading your own\n"
	.string "memories with other people.$"

FortreeCity_House1_Text_Zigzagoon::
# 163 "data/maps/FortreeCity_House1/scripts.pory"
	.string "ZIGZAGOON: Gumomoh?$"
