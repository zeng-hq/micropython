MCU_SERIES = f7
CMSIS_MCU = STM32F767xx
MICROPY_FLOAT_IMPL = double
AF_FILE = boards/stm32f767_af.csv
LD_FILES = boards/MAGELLAN-F767/stm32f767.ld boards/MAGELLAN-F767/common_ifs.ld
TEXT0_ADDR = 0x08000000
TEXT1_ADDR = 0x08020000

#01studio
MICROPY_PY_PICLIB = 1
MICROPY_PY_MP3	  = 1
MICROPY_PY_VIDEO  = 1
MICROPY_PY_JPEG_UTILS = 1
# MicroPython settings
MICROPY_PY_LWIP = 1
MICROPY_PY_USSL = 1
MICROPY_SSL_MBEDTLS = 1
