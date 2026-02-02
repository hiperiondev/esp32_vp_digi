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

#ifndef KISS_H_
#define KISS_H_

#include <stdint.h>

#include "uart.h"
#include "vp_digi_options.h"

/**
 * @brief Convert AX.25 frame to KISS and send
 * @param *port UART structure
 * @param *buf Frame buffer
 * @param size Frame size
 */
void KissSend(Uart *port, uint8_t *buf, uint16_t size);

/**
 * @brief Parse bytes received from UART to form a KISS frame (possibly) and
 * send this frame
 * @param *port UART structure
 * @param data Received byte
 */
void KissParse(Uart *port, uint8_t data);

void KissProcess(Uart *port);
#endif /* KISS_H_ */
