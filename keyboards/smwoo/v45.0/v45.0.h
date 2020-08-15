#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k0_0, k0_1, k0_2, k0_3, k0_4, k0_5, k0_6, k0_7, k0_8, k0_9, k0_10, k0_11, k0_12, k0_13, k0_14, k0_15, k0_16, \
    k1_0, k1_1, k1_2, k1_3, k1_4, k1_5, k1_6, k1_7, k1_8, k1_9, k1_10, k1_11, k1_12, k1_13, k1_14, k1_15, \
    k2_0, k2_1, k2_2, k2_3, k2_4, k2_5, k2_6, k2_7, k2_8, k2_9, k2_10, k2_11, k2_12, \
    k3_0, k3_1, k3_2, k3_3, k3_4, k3_5, k3_6, k3_7, k3_8, k3_9, k3_10, k3_11, k3_12, \
    k4_0, k4_1, k4_2, k4_3, k4_4, k4_5, k4_6, k4_7, k4_8, k4_9, k4_10, k4_11 \
) \
{ \
    { k0_0, k0_2, k0_3, k0_5, k0_7, k0_9,  k0_11, k0_13, k0_14 }, \
    { k1_0, k1_2, k1_3, k1_5, k1_7, k1_9,  k1_11, k2_12, k1_13 }, \
    { k2_0, k2_2, k2_3, k2_5, k2_7, k2_9,  k2_11, k3_11, k3_12 }, \
    { k3_0, k3_1, k3_2, k3_4, k3_6, k3_8,  k3_10, k4_7         }, \
    { k4_0, k4_1, k3_3, k3_5, k3_7, k3_9,  k4_5,  k4_8,  k1_15 }, \
    { k0_1, k4_3, k0_4, k0_6, k0_8, k0_10, k0_12, k4_9,  k0_15 }, \
    { k1_1, k4_2, k1_4, k1_6, k1_8, k1_10, k1_12, k1_14, k4_10 }, \
    { k2_1, k4_4, k2_4, k2_6, k2_8, k2_10, k4_6,  k4_11, k0_16 }, \
}
