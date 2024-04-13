# Current Project Version: 3.2.6 #

## Version 1 - Mechanic Backporting ##
#### Updating game mechanics to more closely match modern games. ####

### 1.1 - Physical-Special Move Split ###
- [X] Physical-Special Split - `PHYS_SPEC_SPLIT`
    - Each move is considered either physical, special, or status.
    - Physical moves use ATK stat, special moves use SP. ATK stat, and status moves just perform
      whatever action they are intended to perform.
    - Move categories are indicated by text color in the summary screen: red are physical, blue are
      special, and white are status.

### 1.2 - Infinitly-Usable TMs ###
- [X] Infinite-Use TMs - `INFINITE_TMS`
  - TMs are no longer consumed upon usage and remain in the player's inventory permanently once
    obtained.
  - Overworld and NPC text pertaining to TMs has been modified to reflect this change as well.
  - Learnsets for each TM have not been modified in any way.
  - There are a few quirks with this mod, especially when going between vanilla and the modded
    version. These can be read about in [`config.h`](../include/config.h).

### 1.3 - Summary Screen Improvements ###
- [X] Nature Stat Effects in Summary - `NATURE_STAT_COLOR`
  - How stats are affected by natures is reflected in the summary screen.
  - Boosted stats are red and stunted stats are blue, while unaffected stats retain normal black
    text.
  - How natures affect stats has not be modified, and this is a purely visual mod.
- [X] EVs Viewable in Summary - `SUMMARY_EVS`
  - The total amount of EVs gained for a single Pokémon can be accessed through the summary screen.
  - Pressing the SELECT button on the stats menu page swaps current stats for the total number of
    EVs gained for each stat. Pressing SELECT again returns to the normal stats screen.
  - EVs are not modifiable, and this mod only reveals data normally hidden to the player.

### 1.4 - Fishing Improvements ###
- [X] Chain Fishing - `CHAIN_FISHING`
  - Consecutive successful reels when fishing increase the odds of a shiny Pokémon being
    encountered, with more reels leading to a greater chance.
  - Any fishing rod will work, and switching between them will not break the chain.
  - The following events will cause the chain to be broken:
    - Failing a reel, either due to no bites or failing the quick-time event.
    - Changing maps or reloading areas.
  - **1.4.1**: Nonlinear chance of shiny based off of streak number, with higher streaks being
               better. _Streak benefits cap at 50_.
  - **1.4.2**: Visible counter when landing a Pokémon to help keep track of streak.
  - **1.4.3**: `EASY_FISHING` allows for more consistent fishing when chain fishing. Catching is
               automatic, with the only way to lose a bite is reeling the rod in before an encounter
               is generated.


## Version 2 - Better Infrastructure ##
#### Improving the back-end and engine for more features. ####
### 2.1 - Increased Number of Trainers ###
- [X] Increase Trainer Battles - `TRAINER_EXPANSION`
  - Allows for more space to be allocated in the save data for trainer flags.
  - Set to whatever value `MAX_TRAINERS_COUNT` is in
    [`opponents.h`](../include/constants/opponents.h).

### 2.2 - Increased Time and Money Limits ###
- [X] Increase Money Limit - `BIG_WALLET`
  - The maximum amount of money a player can obtain is increased from 999,999 to 9,999,999.
- [X] Increase Tracked Play Time Limit - `BIG_PLAY_TIME`
  - The maximum play time displayed to the player is boosted from 999:59 to 9,999:59.
  - This should be vanilla-compatible as this simply takes advantage of the fact that the hours
    field in play time has an upper limit of 65,535 hours (16-bit limit). The game already tracks
    data to this high a number, but does not display it to the player.

### 2.3 - Custom Encounter Infrastructure ###
- [X] Custom Encounter Scripting
  - Doesn't use a `#define` macro because of the way scripts are compiled.
  - Introduces a number of scripting macros:
    - `createbossmon`: Creates a custom wild Pokémon battle.
    - `setshinybonus`: Sets the number of extra shiny tries attempted in Pokémon generation.
    - `givemove`: Allows for custom moves to be given in specific slots.
  - Scripting macros utilize new functions added to the code base to work properly.
  - Encounter scripting will be continually updated as new features are added.

### 2.4 - IV Checking in Scripts ###
- [X] Get Info on IVs
  - Functions added to codebase to be used as "specials" in scripting.
  - Doesn't use `#define` macro for the same reason custom encounter scripting does.
  - Each special returns the IV of one stat of the lead party member:
    - `GetHPIV`: Returns IV of HP.
    - `GetAtkIV`: Returns IV of attack.
    - `GetDefIV`: Returns IV of defense.
    - `GetSpeedIV`: Returns IV of speed.
    - `GetSpAtkIV`: Returns IV of special attack.
    - `GetSpDefIV`: Returns IV of special defense.


## Version 3 - Improved Vanilla ##
#### Changes that keep the spirit of the base game. ####
### 3.0 - In-Game Trade Portraits ###
- [X] In-Game Trade Portraits `TRADE_PORTRAITS`
  - Applies to all four trades originally in the game.
  - If the player has never encountered the requested Pokémon, then a one-time text prompt shows what's been requested.
  - The Pokémon is also marked as "seen" in the player's Pokédex for future reference.
  - Scripts for eachof the maps the trades take place on have been converted to Poryscript for easier modification.

#### 3.0.2 - Modifiable Shiny Odds ####
- [X] Custom Shiny Value `INCREASED_SHINY_ODDS`
  - Added a preprocessor macro that allows for a custom shiny value to be set by the developer.
  - Increased the default odds using this macro to match gen VI (1/4096).

### 3.1 - Evolution Stone Shop ###
- [X] Evolution Stone Shop
  - No new `#define` macro because it is the creation of a new map, which doesn't use macros in a normal way.
  - Added a shop where evolution stones can be bought.
  - The shop is located in Lilycove City Department Store on a newly-created floor.
  - Changed the price of all stones to be 3,000 instead of 2,100 to make more even prices.
  - Fixed an odd quirk of gen 3 where moon stones couldn't be bought or sold.

### 3.2 - Reveal Hidden Power ###
- [X] Type Reveal for Hidden Power `REVEAL_HIDDEN_POWER`
  - The type of the move Hidden Power is revealed in both the summary screen and the move selection screen in battle.
  - Created a generic function `GetHiddenPowerType` within the code that automaically "calculates" the type of a
    Pokemon's Hidden Power so it can be used elsewhere.
  - The functionality of the move itself remains unchanged.

#### 3.2.1 - Debug Item ####
- [X] Item for Debugging Program
  - Added an item to allow for debugging the program.
  - Key item given to player that triggers a warp to a special map on a specific tile in Oldale Town.
  - Obtained using the easy chat system in any mart with the phrase `RUBY` `SAPPHIRE` `EMERALD` `I CHOOSE YOU`.


## Version 4 - Feature Porting ##
#### Porting of mechanics and items from other generations. ####
- [X] Generation II Pokeballs
- [X] Generation IV Pokeballs
- [~] Generation VI Shiny Charm


## Version 5 - New Content ##
#### Changes that add variety to gameplay and customization. ####
- [ ] Additional Player Outfits
- [ ] New Encounter Tiles
- [ ] Wild Boss Encounters


## Dex Completion ##
#### Allowing completion of the National Dex without trading. ####
Each of the region dexes will be added over the course of the entire project, with no specific version set for any one
of them to be complete by.
- [ ] Kanto Dex
- [ ] Johto Dex
- [ ] Hoenn Dex

Refer to [`dex_completion.md`](./dex_completion.md) for a checklist of what is missing and what has been implemented.


## Backlog ##
#### Undetermined time for implementation ####
- [ ] Evolution Held Items in Evolution Stone Shop
- [ ] Evolution Stone Taking Place of Trade Evolutions
- [ ] Date & Time Support
