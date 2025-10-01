#ifndef UART_NRF_SW_LPUART_H_
#define UART_NRF_SW_LPUART_H_

#include <zephyr/device.h>

int uart_nrf_sw_lpuart_init(const struct device *dev);

/*  Allows to reset RX buffer pointer and prepare to reinitialize lpuart.
    Should be called only when lpuart instance is disabled */
void uart_nrf_sw_lpuart_rx_buf_reset(const struct device *dev);

#endif // UART_NRF_SW_LPUART_H_
