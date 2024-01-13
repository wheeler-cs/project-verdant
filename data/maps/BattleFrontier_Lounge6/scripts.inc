# 6 "data/maps/BattleFrontier_Lounge6/scripts.pory"

# 7 "data/maps/BattleFrontier_Lounge6/scripts.pory"
BattleFrontier_Lounge6_MapScripts::
# 8 "data/maps/BattleFrontier_Lounge6/scripts.pory"
    .byte 0

BattleFrontier_Lounge6_EventScript_Trader::
# 13 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	lock
# 14 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	faceplayer
# 16 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_set FLAG_BATTLE_FRONTIER_TRADE_DONE, BattleFrontier_Lounge6_EventScript_Trader_2
BattleFrontier_Lounge6_EventScript_Trader_1:
# 21 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_MEOWTH
# 22 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setvar VAR_0x8004, INGAME_TRADE_MEOWTH
# 23 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 24 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 26 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SKITTY
# 27 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MEOWTH
# 28 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_WouldYouLikeToTrade, MSGBOX_YESNO
# 29 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge6_EventScript_Trader_5
BattleFrontier_Lounge6_EventScript_Trader_4:
# 34 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	special ChoosePartyMon
# 35 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	waitstate
# 36 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 37 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq BattleFrontier_Lounge6_EventScript_Trader_8
BattleFrontier_Lounge6_EventScript_Trader_7:
# 42 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 43 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 44 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 45 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, BattleFrontier_Lounge6_EventScript_NotRequestedMon
# 47 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 48 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 49 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	special CreateInGameTradePokemon
# 50 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	special DoInGameTradeScene
# 51 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	waitstate
# 53 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MEOWTH
# 54 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt, MSGBOX_DEFAULT
# 56 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setflag FLAG_BATTLE_FRONTIER_TRADE_DONE
# 57 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
	end

BattleFrontier_Lounge6_EventScript_Trader_2:
# 18 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto BattleFrontier_Lounge6_EventScript_TradeCompleted
	goto BattleFrontier_Lounge6_EventScript_Trader_1

BattleFrontier_Lounge6_EventScript_Trader_5:
# 31 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto BattleFrontier_Lounge6_EventScript_DeclineTrade
	goto BattleFrontier_Lounge6_EventScript_Trader_4

BattleFrontier_Lounge6_EventScript_Trader_8:
# 39 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	goto BattleFrontier_Lounge6_EventScript_DeclineTrade
	goto BattleFrontier_Lounge6_EventScript_Trader_7


BattleFrontier_Lounge6_EventScript_DeclineTrade::
# 63 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_WellThatsFineToo, MSGBOX_DEFAULT
# 65 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	call BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex
# 67 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
	end


BattleFrontier_Lounge6_EventScript_NotRequestedMon::
# 73 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SKITTY
# 74 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon, MSGBOX_DEFAULT
# 76 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	call BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex
# 78 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
	end


BattleFrontier_Lounge6_EventScript_TradeCompleted::
# 84 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined, MSGBOX_DEFAULT
# 85 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	release
	end


BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex::
# 92 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	setvar VAR_0x8004, SPECIES_SKITTY
# 93 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	specialvar VAR_RESULT, GetSeenPokedexFlag
# 94 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex_2
BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex_1:
	return

BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex_2:
# 96 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SKITTY
# 97 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex_Text_0, MSGBOX_DEFAULT
# 99 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	showmonpic SPECIES_SKITTY, 10, 3
# 100 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex_Text_1, MSGBOX_DEFAULT
# 101 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	special SetSeenPokedexFlag
# 102 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	hidemonpic
# 103 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	msgbox BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex_Text_2
	goto BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex_1


BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex_Text_0:
# 97 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, let me at least point out what a\n"
	.string "{STR_VAR_1} is.$"

BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex_Text_1:
# 100 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "This is what a {STR_VAR_1} looks like\n"
	.string "if I remember correctly.$"

BattleFrontier_Loung6_EventScript_TryAddRequestToPokedex_Text_2:
# 103 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Good luck dearie!$"

BattleFrontier_Lounge6_Text_WouldYouLikeToTrade::
# 108 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "My POKéMON is a {STR_VAR_2}.\n"
	.string "Do you know it?\l"
	.string "It's quite cute and rather nice.\p"
	.string "This little one, I could trade with\n"
	.string "pride!\p"
	.string "Would you like to trade me a {STR_VAR_1}\n"
	.string "for my {STR_VAR_2}?$"

BattleFrontier_Lounge6_Text_PromiseIllBeGoodToIt::
# 119 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, it's adorable!\n"
	.string "Thank you!\l"
	.string "I promise I'll be good to it!\p"
	.string "Oh! I hope you'll be good to\n"
	.string "my {STR_VAR_2}, too!$"

BattleFrontier_Lounge6_Text_DontTradeForAnythingButMon::
# 128 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, I'm sorry!\n"
	.string "I don't intend to trade for anything\l"
	.string "but a {STR_VAR_1}.$"

BattleFrontier_Lounge6_Text_WellThatsFineToo::
# 135 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Oh, you won't?\n"
	.string "Well, that's fine, too.\l"
	.string "Please come visit us again.$"

BattleFrontier_Lounge6_Text_SkittySoMuchCuterThanImagined::
# 142 "data/maps/BattleFrontier_Lounge6/scripts.pory"
	.string "Giggle!\n"
	.string "A SKITTY is so much cuter than I had\l"
	.string "imagined. I'm delighted!$"
