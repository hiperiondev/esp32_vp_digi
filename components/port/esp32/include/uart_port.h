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

/*
 * This file is kind of HAL for UART
 */

#ifndef DRIVERS_UART_LL_H_
#define DRIVERS_UART_LL_H_

#define UART_LL_ENABLE(port) ;
#define UART_LL_DISABLE(port) ;

#define UART_LL_CHECK_RX_NOT_EMPTY(port) 1
#define UART_LL_CLEAR_RX_NOT_EMPTY(port) ;

#define UART_LL_CHECK_TX_EMPTY(port) 1
#define UART_LL_ENABLE_TX_EMPTY_INTERRUPT(port) ;
#define UART_LL_DISABLE_TX_EMPTY_INTERRUPT(port) ;
#define UART_LL_CHECK_ENABLED_TX_EMPTY_INTERRUPT(port) 1

#define UART_LL_CHECK_RX_IDLE(port) 1

#define UART_LL_GET_DATA(port) ;
#define UART_LL_PUT_DATA(port, data) ;

#define UART_LL_UART1_INTERUPT_HANDLER USART1_IRQHandler
#define UART_LL_UART2_INTERUPT_HANDLER USART2_IRQHandler

#define UART_LL_UART1_STRUCTURE 1
#define UART_LL_UART2_STRUCTURE 1

#define UART_LL_UART1_IRQ USART1_IRQn
#define UART_LL_UART2_IRQ USART2_IRQn

#define UART_LL_UART1_INITIALIZE_PERIPHERAL(baudrate) ;
#define UART_LL_UART2_INITIALIZE_PERIPHERAL(baudrate) ;

#endif /* INC_DRIVERS_UART_LL_H_ */
