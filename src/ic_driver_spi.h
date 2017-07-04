/**
 * @file    ic_driver_spi.h
 * @Author  Paweł Kaźmierzewski <p.kazmierzewski@inteliclinic.com>
 * @date    June, 2017
 * @brief   Brief description
 *
 * Description
 */

#ifndef IC_DRIVER_SPI_H
#define IC_DRIVER_SPI_H

#include "nrf_drv_spi.h"

#define REGISTER_TO_SPI(name, SS_PIN, code)\
  static const nrf_drv_spi_t spi_instance_##name = NRF_DRV_SPI_INSTANCE(0);\
  void name##_spi_IRQ_handle(nrf_drv_spi_evt_t const * p_event){UNUSED_PARAMETER(p_event); code;};\
  ic_spi_init(&spi_instance_##name, SS_PIN, name##_spi_IRQ_handle);

#define SPI_SEND_DATA(name, in_buffer, out_buffer, len)\
  nrf_drv_spi_transfer(&spi_instance_##name,\
      (uint8_t *)in_buffer, (uint8_t)len, (uint8_t *)out_buffer, (uint8_t)len);

void ic_spi_init(const nrf_drv_spi_t *const instance, uint8_t pin, void(*func)());

#endif /* !IC_DRIVER_SPI_H */