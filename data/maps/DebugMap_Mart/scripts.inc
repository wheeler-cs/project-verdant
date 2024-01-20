DebugMap_Mart_MapScripts::
	.byte 0


DebugMap_Mart_PokeballClerk::
# 5 "data/maps/DebugMap_Mart/scripts.pory"
	lock
# 6 "data/maps/DebugMap_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 7 "data/maps/DebugMap_Mart/scripts.pory"
	waitmessage
# 8 "data/maps/DebugMap_Mart/scripts.pory"
	pokemart DebugMap_Mart_PokeballShop
# 9 "data/maps/DebugMap_Mart/scripts.pory"
	release
	end


	.align 2
# 13 "data/maps/DebugMap_Mart/scripts.pory"
DebugMap_Mart_PokeballShop:
# 15 "data/maps/DebugMap_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 16 "data/maps/DebugMap_Mart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 17 "data/maps/DebugMap_Mart/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 18 "data/maps/DebugMap_Mart/scripts.pory"
	.2byte ITEM_CHERISH_BALL
# 19 "data/maps/DebugMap_Mart/scripts.pory"
	.2byte ITEM_FAST_BALL
# 20 "data/maps/DebugMap_Mart/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 21 "data/maps/DebugMap_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 22 "data/maps/DebugMap_Mart/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 23 "data/maps/DebugMap_Mart/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 24 "data/maps/DebugMap_Mart/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 25 "data/maps/DebugMap_Mart/scripts.pory"
	.2byte ITEM_MOON_BALL
	.2byte ITEM_NONE
