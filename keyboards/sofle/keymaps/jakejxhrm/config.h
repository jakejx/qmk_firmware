#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#undef TAPPING_TERM
#define TAPPING_TERM 150
#define TAPPING_TERM_PER_KEY

#define IGNORE_MOD_TAP_INTERRUPT
// This prevents accidental repeats of the tap-hold keys when typing quickly.
#define TAPPING_FORCE_HOLD_PER_KEY

// Disable PERMISSIVE_HOLD
#undef PERMISSIVE_HOLD

#ifdef ENCODER_RESOLUTION
#undef ENCODER_RESOLUTION
#define ENCODER_RESOLUTION 4
#endif

// double shifts enable caps word
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define SPLIT_WPM_ENABLE
