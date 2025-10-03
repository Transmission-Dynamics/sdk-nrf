#ifndef UART_NRF_SW_LPUART_H_
#define UART_NRF_SW_LPUART_H_

#include <zephyr/device.h>

int uart_nrf_sw_lpuart_init(const struct device *dev);

/* Resets internal state and hardware configuration, preparing LPUART for
   reinitialization. Requires a prior successful uart_nrf_sw_lpuart_init(),
   as this routine relies on initialized driver context. Call only after the
   LPUART instance has been disabled. */
int uart_nrf_sw_lpuart_deinit(const struct device *dev);

#endif // UART_NRF_SW_LPUART_H_
