/*
 * Copyright (c) 2013-2015, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#if !defined(__BOARD_H__)
#define __BOARD_H__

#include <stdint.h>

#include "gpio_pins.h"
#include "pin_mux.h"

/******************************************************************************
 * Definitions
 ******************************************************************************/
/* The board name */
#define BOARD_NAME                      "FRDM-KL43Z"

#define CLOCK_VLPR 1U
#define CLOCK_RUN  2U
#define CLOCK_NUMBER_OF_CONFIGURATIONS 3U

#ifndef CLOCK_INIT_CONFIG
#define CLOCK_INIT_CONFIG CLOCK_RUN
#endif

/* OSC0 configuration. */
#define OSC0_XTAL_FREQ 32768U
#define OSC0_SC2P_ENABLE_CONFIG  false
#define OSC0_SC4P_ENABLE_CONFIG  false
#define OSC0_SC8P_ENABLE_CONFIG  false
#define OSC0_SC16P_ENABLE_CONFIG false
#define MCG_HGO0   kOscGainLow
#define MCG_RANGE0 kOscRangeLow
#define MCG_EREFS0 kOscSrcOsc
#define BOARD_XTAL0_CLK_FREQUENCY OSC0_XTAL_FREQ
/* NMI pin */
#define NMI_PORT   PORTA
#define NMI_PIN    4

/* EXTAL0 PTA18 */
#define EXTAL0_PORT   PORTA
#define EXTAL0_PIN    18
#define EXTAL0_PINMUX kPortPinDisabled

/* XTAL0 PTA19 */
#define XTAL0_PORT   PORTA
#define XTAL0_PIN    19
#define XTAL0_PINMUX kPortPinDisabled

/*! The LPUART to use for debug messages. */
#define BOARD_DEBUG_UART_INSTANCE   0
#define BOARD_DEBUG_UART_BASEADDR   LPUART0
#if !defined (BOARD_DEBUG_UART_BAUD)
#define BOARD_DEBUG_UART_BAUD       115200
#endif
#ifndef BOARD_LPUART_CLOCK_SOURCE
  #define BOARD_LPUART_CLOCK_SOURCE   kClockLpuartSrcIrc48M
#endif

#ifndef USB_UART_CLOCK_SOURCE
    #define USB_UART_CLOCK_SOURCE   BOARD_LPUART_CLOCK_SOURCE
#endif

/* This define to use for power manager demo */
#define BOARD_LOW_POWER_UART_BAUD       9600

#define BOARD_USE_LPUART
#define PM_DBG_UART_IRQ_HANDLER         MODULE_IRQ_HANDLER(LPUART0)
#define PM_DBG_UART_IRQn                LPUART0_IRQn

#define BOARD_DAC_DEMO_DAC_INSTANCE     0U
#define BOARD_DAC_DEMO_ADC_INSTANCE     0U
#define BOARD_DAC_DEMO_ADC_CHANNEL      23U

#define BOARD_TPM_INSTANCE              0
#define BOARD_TPM_CHANNEL               5

/* The bubble level demo information */
#define BOARD_BUBBLE_TPM_INSTANCE       0
#define BOARD_TPM_X_CHANNEL             4
#define BOARD_TPM_Y_CHANNEL             5
#define BOARD_MMA8451_ADDR              0x1D
#define BOARD_ACCEL_ADDR                BOARD_MMA8451_ADDR
#define BOARD_ACCEL_BAUDRATE            100
#define BOARD_ACCEL_I2C_INSTANCE        0

/* Define print statement to inform user which switch to press for
 * power_manager_hal_demo
 */
#define PRINT_INT_SW_NUM \
  PRINTF("SW2")
#define PRINT_LLWU_SW_NUM \
  PRINTF("SW3")

 /* Defines the llwu pin number for board switch which is used in power_manager_demo. */
#define BOARD_SW_HAS_LLWU_PIN        1
#define BOARD_SW_LLWU_EXT_PIN        7
/* Switch port base address and IRQ handler name. Used by power_manager_demo */
#define BOARD_SW_LLWU_PIN            3
#define BOARD_SW_LLWU_BASE           PORTC
#define BOARD_SW_LLWU_IRQ_HANDLER    PORTBCDE_IRQHandler
#define BOARD_SW_LLWU_IRQ_NUM        PORTBCDE_IRQn

/* The rtc instance used for rtc_func */
#define BOARD_RTC_FUNC_INSTANCE         0

#define HWADC_INSTANCE               0
#define ADC_IRQ_N                    ADC0_IRQn
#if (defined FSL_RTOS_MQX)
#define MQX_ADC_IRQHandler           MQX_ADC0_IRQHandler
#endif

/* Isn't supported now to use DAC as sine generator in adc_hw_trigger demo */
//#define USE_DAC_OUT_AS_SOURCE

#define BOARD_CMP_INSTANCE             0
#define BOARD_CMP_CHANNEL              0

#define BOARD_I2C_INSTANCE     1

#define BOARD_I2C_GPIO_SCL          GPIO_MAKE_PIN(GPIOE_IDX, 24)
#define BOARD_I2C_GPIO_SDA          GPIO_MAKE_PIN(GPIOE_IDX, 25)

/* The spi instance used for spi example */
#define BOARD_SPI_INSTANCE              1

/* board led color mapping */
#define BOARD_GPIO_LED_RED              kGpioLED2
#define BOARD_GPIO_LED_GREEN            kGpioLED1

/* board button mapping */
#define BOARD_SW_GPIO                   kGpioSW1
#define BOARD_SW_IRQ_HANDLER            PORTA_IRQHandler
#define BOARD_SW_NAME                   "SW1"
#define BOARD_GPIO_BUTTON               kGpioSW1
#define BOARD_GPIO_BUTTON_IRQ           PORTA_IRQn

#define LED1_EN (GPIO_DRV_OutputPinInit(&ledPins[0])) /*!< Enable target LED0 */
#define LED2_EN (GPIO_DRV_OutputPinInit(&ledPins[1])) /*!< Enable target LED1 */

#define LED1_DIS (PORT_HAL_SetMuxMode(PORTE,31, kPortPinDisabled)) /*!< Enable target LED0 */
#define LED2_DIS (PORT_HAL_SetMuxMode(PORTD, 5, kPortPinDisabled)) /*!< Enable target LED1 */

#define LED1_OFF (GPIO_DRV_WritePinOutput(ledPins[0].pinName, 1))  /*!< Turn off target LED0 */
#define LED2_OFF (GPIO_DRV_WritePinOutput(ledPins[1].pinName, 1))  /*!< Turn off target LED1 */

#define LED1_ON (GPIO_DRV_WritePinOutput(ledPins[0].pinName, 0))   /*!< Turn on target LED0 */
#define LED2_ON (GPIO_DRV_WritePinOutput(ledPins[1].pinName, 0))   /*!< Turn on target LED1 */

#define LED1_TOGGLE (GPIO_DRV_TogglePinOutput(ledPins[0].pinName)) /*!< Toggle on target LED1 */
#define LED2_TOGGLE (GPIO_DRV_TogglePinOutput(ledPins[1].pinName)) /*!< Toggle on target LED2 */

#define LED_RTOS_EN        LED1_EN
#define LED_RTOS_TOGGLE    LED1_TOGGLE
#define LED_CLOCK_EN       LED2_EN
#define LED_CLOCK_TOGGLE   LED2_TOGGLE

/******************************************************************************
 * Externs
 ******************************************************************************/

/******************************************************************************
 * Prototypes
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus */

void hardware_init(void);
void dbg_uart_init(void);
/*This function to used for power manager demo*/
void disable_unused_pins(void);
void enable_unused_pins(void);
/* Function to initialize clock base on board configuration. */
void BOARD_ClockInit(void);

/* Function to initialize OSC0 base on board configuration. */
void BOARD_InitOsc0(void);

/* Function to initialize OSC0 using the RTC override feature */
void BOARD_InitRtcOsc(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus */

#endif /* __BOARD_H__ */
/******************************************************************************
 * EOF
 ******************************************************************************/
