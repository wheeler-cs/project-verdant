# 5 "data/maps/PacifidlogTown_House3/scripts.pory"

# 6 "data/maps/PacifidlogTown_House3/scripts.pory"
PacifidlogTown_House3_MapScripts::
# 7 "data/maps/PacifidlogTown_House3/scripts.pory"
	.byte 0

PacifidlogTown_House3_EventScript_Trader::
# 12 "data/maps/PacifidlogTown_House3/scripts.pory"
	lock
# 13 "data/maps/PacifidlogTown_House3/scripts.pory"
	faceplayer
# 15 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_set FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED, PacifidlogTown_House3_EventScript_Trader_2
PacifidlogTown_House3_EventScript_Trader_1:
# 20 "data/maps/PacifidlogTown_House3/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HORSEA
# 21 "data/maps/PacifidlogTown_House3/scripts.pory"
	setvar VAR_0x8004, INGAME_TRADE_HORSEA
# 22 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 23 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 25 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BAGON
# 26 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_HORSEA
# 27 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WillingToTradeIt, MSGBOX_YESNO
# 28 "data/maps/PacifidlogTown_House3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq PacifidlogTown_House3_EventScript_Trader_5
PacifidlogTown_House3_EventScript_Trader_4:
# 33 "data/maps/PacifidlogTown_House3/scripts.pory"
	special ChoosePartyMon
# 34 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitstate
# 35 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 36 "data/maps/PacifidlogTown_House3/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq PacifidlogTown_House3_EventScript_Trader_8
PacifidlogTown_House3_EventScript_Trader_7:
# 41 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 42 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 43 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 44 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, PacifidlogTown_House3_EventScript_NotRequestedMon
# 46 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 47 "data/maps/PacifidlogTown_House3/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 48 "data/maps/PacifidlogTown_House3/scripts.pory"
	special CreateInGameTradePokemon
# 49 "data/maps/PacifidlogTown_House3/scripts.pory"
	special DoInGameTradeScene
# 50 "data/maps/PacifidlogTown_House3/scripts.pory"
	waitstate
# 52 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BAGON
# 53 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_HORSEA
# 54 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou, MSGBOX_DEFAULT
# 56 "data/maps/PacifidlogTown_House3/scripts.pory"
	setflag FLAG_PACIFIDLOG_NPC_TRADE_COMPLETED
# 57 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
	end

PacifidlogTown_House3_EventScript_Trader_2:
# 17 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto PacifidlogTown_House3_EventScript_TradeCompleted
	goto PacifidlogTown_House3_EventScript_Trader_1

PacifidlogTown_House3_EventScript_Trader_5:
# 30 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto PacifidlogTown_House3_EventScript_DeclineTrade
	goto PacifidlogTown_House3_EventScript_Trader_4

PacifidlogTown_House3_EventScript_Trader_8:
# 38 "data/maps/PacifidlogTown_House3/scripts.pory"
	goto PacifidlogTown_House3_EventScript_DeclineTrade
	goto PacifidlogTown_House3_EventScript_Trader_7


PacifidlogTown_House3_EventScript_TradeCompleted::
# 63 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
# 64 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
	end


PacifidlogTown_House3_EventScript_DeclineTrade::
# 70 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_NotDesperateOrAnything, MSGBOX_DEFAULT
# 72 "data/maps/PacifidlogTown_House3/scripts.pory"
	call PacifidlogTown_House3_EventScript_TryAddRequestToPokedex
# 74 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
	end


PacifidlogTown_House3_EventScript_NotRequestedMon::
# 80 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BAGON
# 81 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon, MSGBOX_DEFAULT
# 83 "data/maps/PacifidlogTown_House3/scripts.pory"
	call PacifidlogTown_House3_EventScript_TryAddRequestToPokedex
# 85 "data/maps/PacifidlogTown_House3/scripts.pory"
	release
	end


PacifidlogTown_House3_EventScript_TryAddRequestToPokedex::
# 92 "data/maps/PacifidlogTown_House3/scripts.pory"
	setvar VAR_0x8004, SPECIES_BAGON
# 93 "data/maps/PacifidlogTown_House3/scripts.pory"
	specialvar VAR_RESULT, GetSeenPokedexFlag
# 94 "data/maps/PacifidlogTown_House3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PacifidlogTown_House3_EventScript_TryAddRequestToPokedex_2
PacifidlogTown_House3_EventScript_TryAddRequestToPokedex_1:
	return

PacifidlogTown_House3_EventScript_TryAddRequestToPokedex_2:
# 96 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_EventScript_TryAddRequestToPokedex_Text_0, MSGBOX_DEFAULT
# 98 "data/maps/PacifidlogTown_House3/scripts.pory"
	showmonpic SPECIES_BAGON, 10, 3
# 99 "data/maps/PacifidlogTown_House3/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_BAGON
# 100 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_EventScript_TryAddRequestToPokedex_Text_1, MSGBOX_DEFAULT
# 101 "data/maps/PacifidlogTown_House3/scripts.pory"
	special SetSeenPokedexFlag
# 102 "data/maps/PacifidlogTown_House3/scripts.pory"
	hidemonpic
	goto PacifidlogTown_House3_EventScript_TryAddRequestToPokedex_1


PacifidlogTown_House3_EventScript_Girl::
# 109 "data/maps/PacifidlogTown_House3/scripts.pory"
	msgbox PacifidlogTown_House3_Text_IsThatAPokedex, MSGBOX_NPC
	end


PacifidlogTown_House3_EventScript_TryAddRequestToPokedex_Text_0:
# 96 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Maybe as an incentive I can show you\n"
	.string "what you're looking for.$"

PacifidlogTown_House3_EventScript_TryAddRequestToPokedex_Text_1:
# 100 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "This is {STR_VAR_1}. Pretty cool,\n"
	.string "huh?$"

PacifidlogTown_House3_Text_WillingToTradeIt::
# 113 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Check out this {STR_VAR_2}!\p"
	.string "It's the {STR_VAR_2} that I caught\n"
	.string "yesterday to celebrate my birthday!\p"
	.string "Oh, I can see that you want it!\n"
	.string "After all, it's priceless!\p"
	.string "I'll tell you what. I might be willing\n"
	.string "to trade it for a {STR_VAR_1}.$"

PacifidlogTown_House3_Text_ItsSubtlyDifferentThankYou::
# 124 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so this is a {STR_VAR_1}?\p"
	.string "It's sort of like a {STR_VAR_2},\n"
	.string "and yet it's subtly different.\p"
	.string "Thank you!$"

PacifidlogTown_House3_Text_WontAcceptAnyLessThanRealMon::
# 132 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "No, no, no! I won't accept any\n"
	.string "less than a real {STR_VAR_1}!$"

PacifidlogTown_House3_Text_NotDesperateOrAnything::
# 138 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Oh, so you're not going to go through\n"
	.string "with this?\p"
	.string "That's cool. I'm not desperate to make\n"
	.string "a trade or anything.$"

PacifidlogTown_House3_Text_ReallyWantedToGetBagon::
# 146 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "I know I could go looking for one\n"
	.string "on my own, but…\p"
	.string "But I really wanted to get a BAGON\n"
	.string "that another TRAINER caught…$"

PacifidlogTown_House3_Text_IsThatAPokedex::
# 154 "data/maps/PacifidlogTown_House3/scripts.pory"
	.string "Is that a POKéDEX?\p"
	.string "Did you get to meet a lot of different\n"
	.string "POKéMON?\p"
	.string "I wish I was like you.$"
