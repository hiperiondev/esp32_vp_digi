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

#ifndef DRIVERS_WATCHDOG_H_
#define DRIVERS_WATCHDOG_H_

/**
 * @brief Initialize watchdog
 */
void WdogInit(void) {
	//IWDG->KR = 0x5555; // configuration mode
	//IWDG->PR = 0b101;  // prescaler
	//IWDG->RLR = 0xFFF; // timeout register
	//IWDG->KR = 0xCCCC; // start
}

/**
 * @brief Restart watchdog
 * @attention Must be called continuously in main loop
 */
void WdogReset(void) {
	//IWDG->KR = 0xAAAA; // reset
}


#endif /* DRIVERS_WATCHDOG_H_ */
