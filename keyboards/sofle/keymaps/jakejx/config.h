#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#ifdef TAPPING_TERM
#undef TAPPING_TERM
#define TAPPING_TERM 160
#endif

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

#define SPLIT_WPM_ENABLE
