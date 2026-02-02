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
 * This file is kind of HAL for modem
 */

#ifndef DRIVERS_MODEM_LL_H_
#define DRIVERS_MODEM_LL_H_

// Oversampling factor
// This is a helper value, not a setting that can be changed without further
// code modification!
#define MODEM_LL_OVERSAMPLING_FACTOR 4

/**
 * TIM1 is used for pushing samples to DAC (R2R or PWM) (clocked at 18 MHz)
 * TIM3 is the baudrate generator for TX (clocked at 18 MHz)
 * TIM4 is the PWM generator with no software interrupt
 * TIM2 is the RX sampling timer with no software interrupt, but it directly
 * calls DMA
 */

 #define MODEM_LL_DMA_INTERRUPT_HANDLER DMA1_Channel2_IRQHandler
 #define MODEM_LL_DAC_INTERRUPT_HANDLER TIM1_UP_IRQHandler
 #define MODEM_LL_BAUDRATE_TIMER_INTERRUPT_HANDLER TIM3_IRQHandler

 #define MODEM_LL_DMA_IRQ DMA1_Channel2_IRQn
 #define MODEM_LL_DAC_IRQ TIM1_UP_IRQn
 #define MODEM_LL_BAUDRATE_TIMER_IRQ TIM3_IRQn

#define MODEM_LL_DMA_TRANSFER_COMPLETE_FLAG 1
#define MODEM_LL_DMA_CLEAR_TRANSFER_COMPLETE_FLAG() ;

#define MODEM_LL_BAUDRATE_TIMER_CLEAR_INTERRUPT_FLAG() ;
#define MODEM_LL_BAUDRATE_TIMER_ENABLE() ;
#define MODEM_LL_BAUDRATE_TIMER_DISABLE() ;
#define MODEM_LL_BAUDRATE_TIMER_SET_RELOAD_VALUE(val) ;

#define MODEM_LL_DAC_TIMER_CLEAR_INTERRUPT_FLAG ;
#define MODEM_LL_DAC_TIMER_SET_RELOAD_VALUE(val) ;
#define MODEM_LL_DAC_TIMER_SET_CURRENT_VALUE(val) ;
#define MODEM_LL_DAC_TIMER_ENABLE() ;
#define MODEM_LL_DAC_TIMER_DISABLE() ;

#define MODEM_LL_ADC_TIMER_ENABLE() ;
#define MODEM_LL_ADC_TIMER_DISABLE() ;

#define MODEM_LL_PWM_PUT_VALUE(value) ;

#define MODEM_LL_R2R_PUT_VALUE(value) ;

#define MODEM_LL_DCD_LED_ON() ;
#define MODEM_LL_DCD_LED_OFF() ;

#define MODEM_LL_PTT_ON() ;
#define MODEM_LL_PTT_OFF() ;

#define MODEM_LL_INITIALIZE_RCC() ;
#define MODEM_LL_INITIALIZE_OUTPUTS() ;
#define MODEM_LL_INITIALIZE_ADC() ;
#define MODEM_LL_INITIALIZE_DMA(buffer) ;
#define MODEM_LL_ADC_TIMER_INITIALIZE() ;
#define MODEM_LL_DAC_TIMER_INITIALIZE() ;
#define MODEM_LL_BAUDRATE_TIMER_INITIALIZE() ;
#define MODEM_LL_PWM_INITIALIZE() ;

#define MODEM_LL_ADC_SET_SAMPLE_RATE(rate) ;
#define MODEM_LL_DAC_TIMER_CALCULATE_STEP(frequency) 1
#define MODEM_LL_BAUDRATE_TIMER_CALCULATE_STEP(frequency) 1

#endif /* DRIVERS_MODEM_LL_H_ */
