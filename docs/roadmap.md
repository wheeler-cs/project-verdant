# Current Project Version: 1.2 #

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
- [x] Infinite-Use TMs - `INFINITE_TMS`
  - TMs are no longer consumed upon usage and remain in the player's inventory permanently once
    obtained.
  - Overworld and NPC text pertaining to TMs has been modified to reflect this change as well.
  - Learnsets for each TM have not been modified in any way.
  - There are a few quirks with this mod, especially when going between vanilla and the modded
    version. These can be read about in [`config.h`](../include/config.h).

### 1.3 ###
- [ ] Nature Stat Effects in Summary
- [ ] EVs Viewable in Summary

### 1.4 ###
- [ ] Chain Fishing


## Version 2 - Better Infrastructure ##
#### Improving the back-end and engine for more features. ####
### 2.1 ###
- [ ] Increase Max Trainer Battles

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
