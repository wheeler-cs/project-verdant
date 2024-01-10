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
FortreeCity_House1_EventScript_Trader_1:
# 20 "data/maps/FortreeCity_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_PLUSLE
# 21 "data/maps/FortreeCity_House1/scripts.pory"
	setvar VAR_0x8004, INGAME_TRADE_PLUSLE
# 22 "data/maps/FortreeCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 23 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 25 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_YouWillTradeWontYou, MSGBOX_YESNO
# 26 "data/maps/FortreeCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FortreeCity_House1_EventScript_Trader_5
FortreeCity_House1_EventScript_Trader_4:
# 31 "data/maps/FortreeCity_House1/scripts.pory"
	special ChoosePartyMon
# 32 "data/maps/FortreeCity_House1/scripts.pory"
	waitstate
# 33 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 34 "data/maps/FortreeCity_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq FortreeCity_House1_EventScript_Trader_8
FortreeCity_House1_EventScript_Trader_7:
# 39 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 40 "data/maps/FortreeCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 41 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 42 "data/maps/FortreeCity_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, FortreeCity_House1_EventScript_NotRequestedMon
# 44 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 45 "data/maps/FortreeCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 46 "data/maps/FortreeCity_House1/scripts.pory"
	special CreateInGameTradePokemon
# 47 "data/maps/FortreeCity_House1/scripts.pory"
	special DoInGameTradeScene
# 48 "data/maps/FortreeCity_House1/scripts.pory"
	waitstate
# 50 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VOLBEAT
# 51 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_PLUSLE
# 52 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_MonYouTakeCare, MSGBOX_DEFAULT
# 54 "data/maps/FortreeCity_House1/scripts.pory"
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
# 55 "data/maps/FortreeCity_House1/scripts.pory"
	release
	end

FortreeCity_House1_EventScript_Trader_2:
# 17 "data/maps/FortreeCity_House1/scripts.pory"
	goto FortreeCity_House1_EventScript_TradeCompleted
	goto FortreeCity_House1_EventScript_Trader_1

FortreeCity_House1_EventScript_Trader_5:
# 28 "data/maps/FortreeCity_House1/scripts.pory"
	goto FortreeCity_House1_EventScript_DeclineTrade
	goto FortreeCity_House1_EventScript_Trader_4

FortreeCity_House1_EventScript_Trader_8:
# 36 "data/maps/FortreeCity_House1/scripts.pory"
	goto FortreeCity_House1_EventScript_DeclineTrade
	goto FortreeCity_House1_EventScript_Trader_7


FortreeCity_House1_EventScript_TradeCompleted::
# 62 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
# 63 "data/maps/FortreeCity_House1/scripts.pory"
	release
	end


FortreeCity_House1_EventScript_DeclineTrade::
# 69 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
# 71 "data/maps/FortreeCity_House1/scripts.pory"
	call FortreeCity_House1_EventScript_TryAddRequestToPokedex
# 73 "data/maps/FortreeCity_House1/scripts.pory"
	release
	end


FortreeCity_House1_EventScript_NotRequestedMon::
# 79 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VOLBEAT
# 80 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
# 82 "data/maps/FortreeCity_House1/scripts.pory"
	call FortreeCity_House1_EventScript_TryAddRequestToPokedex
# 84 "data/maps/FortreeCity_House1/scripts.pory"
	release
	end


FortreeCity_House1_EventScript_TryAddRequestToPokedex::
# 91 "data/maps/FortreeCity_House1/scripts.pory"
	setvar VAR_0x8004, SPECIES_VOLBEAT
# 92 "data/maps/FortreeCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetSeenPokedexFlag
# 93 "data/maps/FortreeCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FortreeCity_House1_EventScript_TryAddRequestToPokedex_2
FortreeCity_House1_EventScript_TryAddRequestToPokedex_1:
	return

FortreeCity_House1_EventScript_TryAddRequestToPokedex_2:
# 95 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_EventScript_TryAddRequestToPokedex_Text_0, MSGBOX_DEFAULT
# 97 "data/maps/FortreeCity_House1/scripts.pory"
	showmonpic SPECIES_VOLBEAT, 10, 3
# 98 "data/maps/FortreeCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_VOLBEAT
# 99 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_EventScript_TryAddRequestToPokedex_Text_1, MSGBOX_DEFAULT
# 101 "data/maps/FortreeCity_House1/scripts.pory"
	special SetSeenPokedexFlag
# 102 "data/maps/FortreeCity_House1/scripts.pory"
	hidemonpic
	goto FortreeCity_House1_EventScript_TryAddRequestToPokedex_1


FortreeCity_House1_EventScript_ExpertF::
# 109 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_TradingMemoriesWithOthers, MSGBOX_NPC
	end


FortreeCity_House1_EventScript_Zigzagoon::
# 115 "data/maps/FortreeCity_House1/scripts.pory"
	lock
# 116 "data/maps/FortreeCity_House1/scripts.pory"
	faceplayer
# 117 "data/maps/FortreeCity_House1/scripts.pory"
	waitse
# 118 "data/maps/FortreeCity_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 119 "data/maps/FortreeCity_House1/scripts.pory"
	msgbox FortreeCity_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 120 "data/maps/FortreeCity_House1/scripts.pory"
	waitmoncry
# 121 "data/maps/FortreeCity_House1/scripts.pory"
	release
	end


FortreeCity_House1_EventScript_TryAddRequestToPokedex_Text_0:
# 95 "data/maps/FortreeCity_House1/scripts.pory"
	.string "At least let me show you what one looks\n"
	.string "like before you go!$"

FortreeCity_House1_EventScript_TryAddRequestToPokedex_Text_1:
# 99 "data/maps/FortreeCity_House1/scripts.pory"
	.string "This is what {STR_VAR_1} looks like.\p"
	.string "You can always check your POKéDEX if\n"
	.string "you need a refresher.$"

FortreeCity_House1_Text_YouWillTradeWontYou::
# 125 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Wrooooaaar! I need it!\n"
	.string "I have to get me a {STR_VAR_1}!\l"
	.string "I'll do anything for it!\p"
	.string "…Uh… Did you hear that?\n"
	.string "My shout from the bottom of my heart?\p"
	.string "Having heard that, you will trade\n"
	.string "your {STR_VAR_1} for my {STR_VAR_2},\l"
	.string "won't you?$"

FortreeCity_House1_Text_MonYouTakeCare::
# 137 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Oh, yeah, right on!\p"
	.string "{STR_VAR_1}, welcome!\n"
	.string "{STR_VAR_2}, you take care!$"

FortreeCity_House1_Text_ThisIsntAMon::
# 144 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Uh, no, I don't think so.\n"
	.string "That isn't a {STR_VAR_1}.$"

FortreeCity_House1_Text_YouWontTradeMe::
# 150 "data/maps/FortreeCity_House1/scripts.pory"
	.string "No? You won't trade me?\n"
	.string "Even after I bared my heart to you?$"

FortreeCity_House1_Text_GoingToMakeVolbeatStrong::
# 156 "data/maps/FortreeCity_House1/scripts.pory"
	.string "I'm going to make VOLBEAT super\n"
	.string "strong from this moment on!\p"
	.string "I hope you do the same with PLUSLE!$"

FortreeCity_House1_Text_TradingMemoriesWithOthers::
# 163 "data/maps/FortreeCity_House1/scripts.pory"
	.string "Trading POKéMON with others…\p"
	.string "It's as if you're trading your own\n"
	.string "memories with other people.$"

FortreeCity_House1_Text_Zigzagoon::
# 170 "data/maps/FortreeCity_House1/scripts.pory"
	.string "ZIGZAGOON: Gumomoh?$"
