// Copyright 2022 jack (@waffle87)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once
#include_next <mcuconf.h>
#undef RP_I2C_USE_I2C1
#define RP_I2C_USE_I2C1 TRUE
#undef RP_I2C_USE_I2C0
#define RP_I2C_USE_I2C0 TRUE
