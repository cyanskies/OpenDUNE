/* $Id$ */

/** @file src/table/landscapeinfo.c LandscapeInfo file table. */

#include <stdio.h>
#include "types.h"

#include "../map.h"

LandscapeInfo g_table_landscapeInfo[LST_MAX] = {
	{ /* 0 / LST_NORMAL_SAND */
		/* notused_00           */ 0xA8,
		/* notused_01           */ 0x6B,
		/* movementSpeed        */ { 112, 112, 112, 160, 255, 192 },
		/* variable_05          */ false,
		/* isValidForStructure  */ false,
		/* variable_07          */ true,
		/* isValidForStructure2 */ false,
		/* variable_09          */ true,
		/* variable_10          */ 1,
		/* radarColour          */ 88,
		/* spriteID             */ 37,
		/* notused_13           */ 0x15
	},

	{ /* 1 / LST_PARTIAL_ROCK */
		/* notused_00           */ 0xA9,
		/* notused_01           */ 0x6D,
		/* movementSpeed        */ { 160, 112, 112, 64, 255, 0 },
		/* variable_05          */ true,
		/* isValidForStructure  */ false,
		/* variable_07          */ false,
		/* isValidForStructure2 */ false,
		/* variable_09          */ false,
		/* variable_10          */ 1,
		/* radarColour          */ 28,
		/* spriteID             */ 39,
		/* notused_13           */ 0x17
	},

	{ /* 2 / LST_ENTIRELY_DUNE */
		/* notused_00           */ 0xAA,
		/* notused_01           */ 0x6C,
		/* movementSpeed        */ { 112, 160, 160, 160, 255, 192 },
		/* variable_05          */ false,
		/* isValidForStructure  */ false,
		/* variable_07          */ true,
		/* isValidForStructure2 */ false,
		/* variable_09          */ true,
		/* variable_10          */ 1,
		/* radarColour          */ 92,
		/* spriteID             */ 41,
		/* notused_13           */ 0x16
	},

	{ /* 3 / LST_PARTIAL_DUNE */
		/* notused_00           */ 0xAA,
		/* notused_01           */ 0x6C,
		/* movementSpeed        */ { 112, 160, 160, 160, 255, 192 },
		/* variable_05          */ false,
		/* isValidForStructure  */ false,
		/* variable_07          */ true,
		/* isValidForStructure2 */ false,
		/* variable_09          */ true,
		/* variable_10          */ 1,
		/* radarColour          */ 89,
		/* spriteID             */ 43,
		/* notused_13           */ 0x16
	},

	{ /* 4 / LST_ENTIRELY_ROCK */
		/* notused_00           */ 0xA9,
		/* notused_01           */ 0x6D,
		/* movementSpeed        */ { 112, 160, 160, 112, 255, 0 },
		/* variable_05          */ true,
		/* isValidForStructure  */ true,
		/* variable_07          */ false,
		/* isValidForStructure2 */ true,
		/* variable_09          */ false,
		/* variable_10          */ 2,
		/* radarColour          */ 30,
		/* spriteID             */ 45,
		/* notused_13           */ 0x17
	},

	{ /* 5 / LST_MOSTLY_ROCK */
		/* notused_00           */ 0xA9,
		/* notused_01           */ 0x6D,
		/* movementSpeed        */ { 160, 160, 160, 160, 255, 0 },
		/* variable_05          */ true,
		/* isValidForStructure  */ true,
		/* variable_07          */ false,
		/* isValidForStructure2 */ true,
		/* variable_09          */ false,
		/* variable_10          */ 2,
		/* radarColour          */ 29,
		/* spriteID             */ 47,
		/* notused_13           */ 0x17
	},

	{ /* 6 / LST_ENTIRELY_MOUNTAIN */
		/* notused_00           */ 0xAB,
		/* notused_01           */ 0x6E,
		/* movementSpeed        */ { 64, 0, 0, 0, 255, 0 },
		/* variable_05          */ true,
		/* isValidForStructure  */ false,
		/* variable_07          */ false,
		/* isValidForStructure2 */ false,
		/* variable_09          */ false,
		/* variable_10          */ 0,
		/* radarColour          */ 12,
		/* spriteID             */ 49,
		/* notused_13           */ 0x18
	},

	{ /* 7 / LST_PARTIAL_MOUNTAIN */
		/* notused_00           */ 0xAB,
		/* notused_01           */ 0x6E,
		/* movementSpeed        */ { 64, 0, 0, 0, 255, 0 },
		/* variable_05          */ true,
		/* isValidForStructure  */ false,
		/* variable_07          */ false,
		/* isValidForStructure2 */ false,
		/* variable_09          */ false,
		/* variable_10          */ 0,
		/* radarColour          */ 133,
		/* spriteID             */ 51,
		/* notused_13           */ 0x18
	},

	{ /* 8 / LST_SPICE */
		/* notused_00           */ 0xAC,
		/* notused_01           */ 0x6A,
		/* movementSpeed        */ { 112, 160, 160, 160, 255, 192 },
		/* variable_05          */ false,
		/* isValidForStructure  */ false,
		/* variable_07          */ true,
		/* isValidForStructure2 */ false,
		/* variable_09          */ true,
		/* variable_10          */ 1,
		/* radarColour          */ 88,
		/* spriteID             */ 37,
		/* notused_13           */ 0x19
	},

	{ /* 9 / LST_THICK_SPICE */
		/* notused_00           */ 0xAD,
		/* notused_01           */ 0x6A,
		/* movementSpeed        */ { 112, 160, 160, 160, 255, 192 },
		/* variable_05          */ true,
		/* isValidForStructure  */ false,
		/* variable_07          */ true,
		/* isValidForStructure2 */ false,
		/* variable_09          */ true,
		/* variable_10          */ 1,
		/* radarColour          */ 88,
		/* spriteID             */ 37,
		/* notused_13           */ 0x19
	},

	{ /* 10 / LST_CONCRETE_SLAB */
		/* notused_00           */ 0xE8,
		/* notused_01           */ 0x41,
		/* movementSpeed        */ { 255, 255, 255, 255, 255, 0 },
		/* variable_05          */ false,
		/* isValidForStructure  */ true,
		/* variable_07          */ false,
		/* isValidForStructure2 */ false,
		/* variable_09          */ false,
		/* variable_10          */ 2,
		/* radarColour          */ 133,
		/* spriteID             */ 51,
		/* notused_13           */ 0x2
	},

	{ /* 11 / LST_WALL */
		/* notused_00           */ 0x104,
		/* notused_01           */ 0x4E,
		/* movementSpeed        */ { 0, 0, 0, 0, 255, 0 },
		/* variable_05          */ false,
		/* isValidForStructure  */ false,
		/* variable_07          */ false,
		/* isValidForStructure2 */ false,
		/* variable_09          */ false,
		/* variable_10          */ 0,
		/* radarColour          */ 65535,
		/* spriteID             */ 31,
		/* notused_13           */ 0xF
	},

	{ /* 12 / LST_STRUCTURE */
		/* notused_00           */ 0xAE,
		/* notused_01           */ 0xFFFF,
		/* movementSpeed        */ { 0, 0, 0, 0, 255, 0 },
		/* variable_05          */ false,
		/* isValidForStructure  */ false,
		/* variable_07          */ false,
		/* isValidForStructure2 */ false,
		/* variable_09          */ false,
		/* variable_10          */ 0,
		/* radarColour          */ 65535,
		/* spriteID             */ 31,
		/* notused_13           */ 0x0
	},

	{ /* 13 / LST_DESTROYED_WALL */
		/* notused_00           */ 0xA9,
		/* notused_01           */ 0x6D,
		/* movementSpeed        */ { 160, 160, 160, 160, 255, 0 },
		/* variable_05          */ true,
		/* isValidForStructure  */ true,
		/* variable_07          */ false,
		/* isValidForStructure2 */ true,
		/* variable_09          */ false,
		/* variable_10          */ 2,
		/* radarColour          */ 29,
		/* spriteID             */ 47,
		/* notused_13           */ 0x17
	},

	{ /* 14 / LST_BLOOM_FIELD */
		/* notused_00           */ 0x2D,
		/* notused_01           */ 0x6B,
		/* movementSpeed        */ { 112, 112, 112, 160, 255, 192 },
		/* variable_05          */ false,
		/* isValidForStructure  */ false,
		/* variable_07          */ true,
		/* isValidForStructure2 */ false,
		/* variable_09          */ true,
		/* variable_10          */ 1,
		/* radarColour          */ 50,
		/* spriteID             */ 57,
		/* notused_13           */ 0x15
	}
};
