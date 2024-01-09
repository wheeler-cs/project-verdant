# 5 "data/maps/RustboroCity_House1/scripts.pory"

# 6 "data/maps/RustboroCity_House1/scripts.pory"
RustboroCity_House1_MapScripts::
# 7 "data/maps/RustboroCity_House1/scripts.pory"
    .byte 0

RustboroCity_House1_EventScript_Trader::
# 12 "data/maps/RustboroCity_House1/scripts.pory"
	lock
# 13 "data/maps/RustboroCity_House1/scripts.pory"
	faceplayer
# 14 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_set FLAG_RUSTBORO_NPC_TRADE_COMPLETED, RustboroCity_House1_EventScript_Trader_2
RustboroCity_House1_EventScript_Trader_1:
# 18 "data/maps/RustboroCity_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SEEDOT
# 19 "data/maps/RustboroCity_House1/scripts.pory"
	setvar VAR_0x8004, INGAME_TRADE_SEEDOT
# 20 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 21 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 22 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_IllTradeIfYouWant, MSGBOX_YESNO
# 23 "data/maps/RustboroCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_House1_EventScript_Trader_5
RustboroCity_House1_EventScript_Trader_4:
# 27 "data/maps/RustboroCity_House1/scripts.pory"
	special ChoosePartyMon
# 28 "data/maps/RustboroCity_House1/scripts.pory"
	waitstate
# 29 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 30 "data/maps/RustboroCity_House1/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq RustboroCity_House1_EventScript_Trader_8
RustboroCity_House1_EventScript_Trader_7:
# 34 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 35 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 36 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 37 "data/maps/RustboroCity_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, RustboroCity_House1_EventScript_NotRequestedMon
# 38 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 39 "data/maps/RustboroCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 40 "data/maps/RustboroCity_House1/scripts.pory"
	special CreateInGameTradePokemon
# 41 "data/maps/RustboroCity_House1/scripts.pory"
	special DoInGameTradeScene
# 42 "data/maps/RustboroCity_House1/scripts.pory"
	waitstate
# 43 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_PleaseBeGoodToMyPokemon, MSGBOX_DEFAULT
# 44 "data/maps/RustboroCity_House1/scripts.pory"
	setflag FLAG_RUSTBORO_NPC_TRADE_COMPLETED
# 45 "data/maps/RustboroCity_House1/scripts.pory"
	release
	end

RustboroCity_House1_EventScript_Trader_2:
# 16 "data/maps/RustboroCity_House1/scripts.pory"
	goto RustboroCity_House1_EventScript_TradeCompleted
	goto RustboroCity_House1_EventScript_Trader_1

RustboroCity_House1_EventScript_Trader_5:
# 25 "data/maps/RustboroCity_House1/scripts.pory"
	goto RustboroCity_House1_EventScript_DeclineTrade
	goto RustboroCity_House1_EventScript_Trader_4

RustboroCity_House1_EventScript_Trader_8:
# 32 "data/maps/RustboroCity_House1/scripts.pory"
	goto RustboroCity_House1_EventScript_DeclineTrade
	goto RustboroCity_House1_EventScript_Trader_7


RustboroCity_House1_EventScript_TradeCompleted::
# 51 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 52 "data/maps/RustboroCity_House1/scripts.pory"
	release
	end


RustboroCity_House1_EventScript_DeclineTrade::
# 58 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 60 "data/maps/RustboroCity_House1/scripts.pory"
	call RustboroCity_House1_EventScript_TryAddRequestToPokedex
# 62 "data/maps/RustboroCity_House1/scripts.pory"
	release
	end


RustboroCity_House1_EventScript_NotRequestedMon::
# 68 "data/maps/RustboroCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_RALTS
# 69 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_DoesntLookLikeMonToMe, MSGBOX_DEFAULT
# 71 "data/maps/RustboroCity_House1/scripts.pory"
	call RustboroCity_House1_EventScript_TryAddRequestToPokedex
# 73 "data/maps/RustboroCity_House1/scripts.pory"
	release
	end


RustboroCity_House1_EventScript_TryAddRequestToPokedex::
# 80 "data/maps/RustboroCity_House1/scripts.pory"
	setvar VAR_0x8004, SPECIES_RALTS
# 81 "data/maps/RustboroCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetSeenPokedexFlag
# 82 "data/maps/RustboroCity_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_House1_EventScript_TryAddRequestToPokedex_2
RustboroCity_House1_EventScript_TryAddRequestToPokedex_1:
	return

RustboroCity_House1_EventScript_TryAddRequestToPokedex_2:
# 84 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_EventScript_TryAddRequestToPokedex_Text_0, MSGBOX_DEFAULT
# 86 "data/maps/RustboroCity_House1/scripts.pory"
	showmonpic SPECIES_RALTS, 10, 3
# 87 "data/maps/RustboroCity_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_RALTS
# 88 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_EventScript_TryAddRequestToPokedex_Text_1, MSGBOX_DEFAULT
# 89 "data/maps/RustboroCity_House1/scripts.pory"
	special SetSeenPokedexFlag
# 90 "data/maps/RustboroCity_House1/scripts.pory"
	hidemonpic
	goto RustboroCity_House1_EventScript_TryAddRequestToPokedex_1


RustboroCity_House1_EventScript_Hiker::
# 97 "data/maps/RustboroCity_House1/scripts.pory"
	msgbox RustboroCity_House1_Text_AllSortsOfPlaces, MSGBOX_NPC
	return


RustboroCity_House1_EventScript_TryAddRequestToPokedex_Text_0:
# 84 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Maybe as an incentive I can show you\n"
	.string "what you're looking for.$"

RustboroCity_House1_EventScript_TryAddRequestToPokedex_Text_1:
# 88 "data/maps/RustboroCity_House1/scripts.pory"
	.string "This is {STR_VAR_1}. Pretty cool,\n"
	.string "huh?$"

RustboroCity_House1_Text_IllTradeIfYouWant::
# 100 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? My POKéMON is cute?\n"
	.string "Sure, I knew that.\p"
	.string "But if you really want, I'm willing\n"
	.string "to trade it to you.\p"
	.string "I'll trade you my {STR_VAR_2} for\n"
	.string "a {STR_VAR_1} if you want.$"

RustboroCity_House1_Text_PleaseBeGoodToMyPokemon::
# 110 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Eheheh…\n"
	.string "Please be good to my POKéMON.$"

RustboroCity_House1_Text_DoesntLookLikeMonToMe::
# 116 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Huh? That doesn't look anything like\n"
	.string "a {STR_VAR_1} to me.$"

RustboroCity_House1_Text_YouDontWantToThatsOkay::
# 122 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Oh, if you don't want to, that's okay.\n"
	.string "But my POKéMON is cute, you know…$"

RustboroCity_House1_Text_AnyPokemonCanBeCute::
# 128 "data/maps/RustboroCity_House1/scripts.pory"
	.string "Any POKéMON can be cute if you raise\n"
	.string "it with care and kindness.$"

RustboroCity_House1_Text_AllSortsOfPlaces::
# 134 "data/maps/RustboroCity_House1/scripts.pory"
	.string "In all sorts of places, there are all\n"
	.string "sorts of POKéMON and people.\p"
	.string "I find that fascinating, so I go to all\n"
	.string "sorts of places.$"
