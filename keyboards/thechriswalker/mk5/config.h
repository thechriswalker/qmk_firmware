// Copyright 2023 Chris Walker (@Chris Walker)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


// My additions
// - The Rotary Encoder
#define ENCODERS_PAD_A { D2 }
#define ENCODERS_PAD_B { D3 }