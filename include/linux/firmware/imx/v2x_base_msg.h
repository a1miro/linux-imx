/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2021-2023 NXP
 *
 * Header file for the ELE Base API(s).
 */

#ifndef V2X_BASE_MSG_H
#define V2X_BASE_MSG_H

#include <linux/types.h>

#define WORD_SZ				4

#define V2X_START_RNG_REQ		0x0E
#define V2X_START_RNG_REQ_MSG_SZ	0x04
#define V2X_START_RNG_RSP_MSG_SZ	0x0C

int v2x_start_rng(struct device *dev);
#endif
