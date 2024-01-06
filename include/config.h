#ifndef GUARD_CONFIG_H
#define GUARD_CONFIG_H

// In the Generation 3 games, Asserts were used in various debug builds.
// Ruby/Sapphire and Emerald do not have these asserts while Fire Red
// still has them in the ROM. This is because the developers forgot
// to define NDEBUG before release, however this has been changed as
// Ruby's actual debug build does not use the AGBPrint features.
#define NDEBUG

// To enable printf debugging, comment out "#define NDEBUG". This allows
// the various AGBPrint functions to be used. (See include/gba/isagbprint.h).
// See below for enabling different pretty printing versions.

#ifndef NDEBUG

#define PRETTY_PRINT_MINI_PRINTF (0)
#define PRETTY_PRINT_LIBC (1)

#define LOG_HANDLER_AGB_PRINT (0)
#define LOG_HANDLER_NOCASH_PRINT (1)
#define LOG_HANDLER_MGBA_PRINT (2)

// Use this switch to choose a handler for pretty printing.
// NOTE: mini_printf supports a custom pretty printing formatter to display preproc encoded strings. (%S)
//       some libc distributions (especially dkp arm-libc) will fail to link pretty printing.
#define PRETTY_PRINT_HANDLER (PRETTY_PRINT_MINI_PRINTF)

// Use this switch to choose a handler for printf output.
// NOTE: These will only work on the respective emulators and should not be used in a productive environment.
//       Some emulators or real hardware might (and is allowed to) crash if they are used.
//       AGB_PRINT is supported on respective debug units.

#define LOG_HANDLER (LOG_HANDLER_MGBA_PRINT)
#endif

#define ENGLISH

#ifdef ENGLISH
#define UNITS_IMPERIAL
#define CHAR_DEC_SEPARATOR CHAR_PERIOD // Period is used as a decimal separator only in the UK and the US.
#else
#define UNITS_METRIC
#define CHAR_DEC_SEPARATOR CHAR_COMMA
#endif

// Uncomment to fix some identified minor bugs
#define BUGFIX

// Various undefined behavior bugs may or may not prevent compilation with
// newer compilers. So always fix them when using a modern compiler.
#if MODERN || defined(BUGFIX)
#ifndef UBFIX
#define UBFIX
#endif
#endif



/**
 * Vanilla-Compatible Changes
 *
 * The changes below are compatible with saves that originate from the vanilla ROM. In theory, they
 * should just affect how the game runs, but not how it stores save data.
 */
// Uncomment to remove unneeded functions, data, and variables
#define EMER_REDUCED

// Uncomment to implement quality of life improvements for more convient gameplay
#define EMER_QOL

// Uncomment to implement the phys-special split for moves
// Implementation of https://github.com/pret/pokeemerald/wiki/add-physical-special-split
#define PHYS_SPEC_SPLIT

// Uncomment to allow TMs to be re-used infintely
// Implementation of https://github.com/pret/pokeemerald/wiki/Infinite-TM-usage
#define INFINITE_TMS
/**
 * NOTE: This mod is pretty much entirely compatible with the vanilla base game. There are a few
 *       things to be aware of when going between vanilla and the modded version.
 *          - Any TMs in the player's PC will remain there until withdrawn. However, they should
 *            still be usable without issue.
 *          - It is possible to buy multiple of the same TM at a store (e.g. Lilycove Department
 *            Store), but this will not provided any additional benefit and will just waste money if
 *            doing so with the mod.
 *          - If multiple of the same type of TM were obtained in the modded version, this would
 *            not be indicated in any way. However, if one were to switch back to vanilla after
 *            doing so, they would have the expected quantity of TMs as if they had been obtained in
 *            the base game.
 *          - The TLDR is that the obtained quantities of TMs between vanilla and modded are
 *            presevered simply because this mod affects how the TMs are obtained, but not how they
 *            are stored in the game's save (i.e. the fields that store the currently-owned quantity
 *            of each TM remain in the codebase and are still technically usable).
 */



// Uncomment to allow the effect natures have on stats to be viewable in the summary screen
// Implementation of https://github.com/pret/pokeemerald/wiki/Colored-stats-by-nature-in-summary-screen
#define NATURE_STAT_COLOR

// Uncomment to allow EVs to be viewable in the summary screen by pressing SELECT
// Implementation of https://www.pokecommunity.com/showpost.php?p=10161688&postcount=77
#define SUMMARY_EVS

// Uncomment to enable chain fishing
// Implementaiton of https://github.com/pret/pokeemerald/wiki/Chain-Fishing
#define CHAIN_FISHING

// Uncomment to enable easier, more consistent fishing
#define EASY_FISHING

// Uncomment to increase the limit on displayed play time from 999:59 to 9,999:59
#define BIG_PLAY_TIME



/* Non-Vanilla Changes
 * 
 * Changes below ARE NOT comptabile with the base ROM. Trying to import/export a save between
 * vanilla and this mod will almost certainly result in an error message upon loading.
 */

// This allows for ALL non-vanilla changes to be enabled, forcing the new ROM to fully depart from
// vanilla standards
#define PROJECT_VERDANT

#ifdef PROJECT_VERDANT  // Begin Project Verdant
    // Allow for more trainer battles in the game
    #define TRAINER_EXPANSION

    // Increased money cap from 999,999 to 9,999,999
    #define BIG_WALLET

    // Show portraits for in-game trades
    #define TRADE_PORTRAITS

#endif  // End Project Verdant




// Enable debugging options in code
//#define VERDANT_DEBUG



#endif // GUARD_CONFIG_H
