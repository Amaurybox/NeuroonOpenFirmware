/**
 * @file    ic_config.h
 * @Author  Paweł Kaźmierzewski <p.kazmierzewski@inteliclinic.com>
 * @date    June, 2017
 * @brief   Brief description
 *
 * Description
 */

#ifndef IC_CONFIG_H
#define IC_CONFIG_H

#include "nrf.h"

#define OSTIMER_WAIT_FOR_QUEUE  2 /**< Number of ticks to wait for the timer queue to be ready */

/*
 *
 * UART
 *
 */
/** @defgroup IC_UART
 *  @{
 */

#define IC_UART_BUFFER        10
#define IC_UART_RX_BUF_SIZE   256
#define IC_UART_TX_BUF_SIZE   16

#define IC_UART_IRQ_PRIORITY  APP_IRQ_PRIORITY_LOWEST

#define IC_UART_RX_PIN        19
#define IC_UART_TX_PIN        20
#define IC_UART_RTS_PIN       0
#define IC_UART_CTS_PIN       0
#define IC_UART_FLOW_CONTROL  APP_UART_FLOW_CONTROL_DISABLED
#define IC_UART_BAUD_RATE     UART_BAUDRATE_BAUDRATE_Baud921600

/** @} */

/*
 *
 * UART
 *
 */
/** @defgroup IC_BUTTON
 *  @{
 */

#define IC_BUTTON_LONG_PRESS_OFFSET 1000

#define IC_BUTTON_PWR_BUTTON_PIN    12
#define IC_BUTTON_USB_CONNECT_PIN   11
#define IC_BUTTON_ACC_EXTI_PIN      17

/** @} */
#endif /* !IC_CONFIG_H */