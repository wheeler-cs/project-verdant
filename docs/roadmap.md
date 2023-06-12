# Current Project Version: 1.4.3 #

## Version 1 - Mechanic Backporting ##
#### Updating game mechanics to more closely match modern games. ####

### 1.1 ###
- [X] Physical-Special Split - `PHYS_SPEC_SPLIT`
    - Each move is considered either physical, special, or status.
    - Physical moves use ATK stat, special moves use SP. ATK stat, and status moves just perform
      whatever action they are intended to perform.
    - Move categories are indicated by text color in the summary screen: red are physical, blue are
      special, and white are status.

### 1.2 ###
- [X] Infinite-Use TMs - `INFINITE_TMS`
  - TMs are no longer consumed upon usage and remain in the player's inventory permanently once
    obtained.
  - Overworld and NPC text pertaining to TMs has been modified to reflect this change as well.
  - Learnsets for each TM have not been modified in any way.
  - There are a few quirks with this mod, especially when going between vanilla and the modded
    version. These can be read about in [`config.h`](../include/config.h).

### 1.3 ###
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

### 1.4 ###
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
### 2.1 ###
- [ ] Increase Trainer Battles - `TRAINER_EXPANSION`
  - Allows for more space to be allocated in the save data for trainer flags.
  - Set to whatever value `MAX_TRAINERS_COUNT` is in
    [`opponents.h`](../include/constants/opponents.h).

### 2.2 ###
- [ ] Increase Money Limit
- [ ] Increase Tracked Play Time Limit

### 2.3 ###
- [ ] Custom Encounter Scripting

### 2.4 ###
- [ ] Get Info on IVs

### 2.5 ###
- [ ] Date Tracking


## Version 3 - Improved Vanilla ##
#### Changes that keep the spirit of the base game. ####
### 3.1 ###
- [ ] Evolution Stone Shop

### 3.2 ###
- [ ] Portraits for In-Game Trades

### 3.3 ###
- [ ] Type Reveal for Hidden Power


## Version 4 - New Content ##
#### Changes that add variety to gameplay and customization. ####
### 4.1 ###
- [ ] Additional Player Outfits
- [ ] New Encounter Tiles

### 4.2 ###
- [ ] Generation II Poké Balls

### 4.3 ###
- [ ] Generation IV Poké Balls

### 4.4 ###
- [ ] Wild Boss Encounters


## Version 5 - Dex Completion* ##
#### Allowing completion of the National Dex without trading. ####
### 5.1 ###
- [ ] Hoenn Dex

### 5.2 ###
- [ ] Dex No. 001 - 100

### 5.3 ###
- [ ] Dex No. 101 - 200

### 5.4 ###
- [ ] Dex No. 201 - 251

### * New areas will be added as needed ###
