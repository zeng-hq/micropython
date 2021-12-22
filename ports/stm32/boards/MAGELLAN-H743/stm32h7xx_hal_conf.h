/* This file is part of the MicroPython project, http://micropython.org/
 * The MIT License (MIT)
 * Copyright (c) 2019 Damien P. George
 */
#ifndef MICROPY_INCLUDED_STM32H7XX_HAL_CONF_H
#define MICROPY_INCLUDED_STM32H7XX_HAL_CONF_H

#include "boards/stm32h7xx_hal_conf_base.h"

#define HAL_SRAM_MODULE_ENABLED
#define HAL_JPEG_MODULE_ENABLED
#define HAL_DMA2D_MODULE_ENABLED
#define HAL_LTDC_MODULE_ENABLED

#include "stm32h7xx_hal_jpeg.h"
#include "stm32h7xx_hal_dma2d.h"
#include "stm32h7xx_hal_ltdc.h"

// Oscillator values in Hz
#define HSE_VALUE (12000000)
#define LSE_VALUE (32768)
#define EXTERNAL_CLOCK_VALUE (12288000)

// Oscillator timeouts in ms
#define HSE_STARTUP_TIMEOUT (5000)
#define LSE_STARTUP_TIMEOUT (5000)

#endif // MICROPY_INCLUDED_STM32H7XX_HAL_CONF_H
