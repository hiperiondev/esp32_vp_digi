/*
 * Copyright 2026 Emiliano Augusto Gonzalez (egonzalez . hiperion @ gmail . com))
 * * Project Site: https://github.com/hiperiondev/esp32_vp_digi *
 * This is based on other projects:
 *    vp-digi: Piotr Wilkon (https://github.com/sq8vps/vp-digi)
 *
 *    please contact their authors for more information.
 *
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef SYSTICK_H_
#define SYSTICK_H_

#include <stdint.h>

#include "vp_digi_options.h"

#define SYSTICK_FREQUENCY 100                        // systick frequency in Hz
#define SYSTICK_INTERVAL  (1000 / SYSTICK_FREQUENCY) // systick interval in milliseconds

/**
 * @brief Initialize SysTick
 */
void SysTickInit(void);

/**
 * @brief Get current SysTick counter value
 * @return Current SysTick counter value
 */
uint32_t SysTickGet(void);

/**
 * @brief Execute a blocking delay
 * @param ms Time in milliseconds
 */
void Delay(uint32_t ms);

#endif /* SYSTICK_H_ */
