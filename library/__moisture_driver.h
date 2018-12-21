/*
    __moisture_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __moisture_driver.h
@brief    Moisture Driver
@mainpage Moisture Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   MOISTURE
@brief      Moisture Click Driver
@{

| Global Library Prefix | **MOISTURE** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **maj 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _MOISTURE_H_
#define _MOISTURE_H_

/** 
 * @macro T_MOISTURE_P
 * @brief Driver Abstract type 
 */
#define T_MOISTURE_P    const uint8_t*

/** @defgroup MOISTURE_COMPILE Compilation Config */              /** @{ */

//  #define   __MOISTURE_DRV_SPI__                            /**<     @macro __MOISTURE_DRV_SPI__  @brief SPI driver selector */
   #define   __MOISTURE_DRV_I2C__                            /**<     @macro __MOISTURE_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __MOISTURE_DRV_UART__                           /**<     @macro __MOISTURE_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup MOISTURE_VAR Variables */                           /** @{ */

/* Register */
extern const uint8_t _MOISTURE_REG_DATA           ;
extern const uint8_t _MOISTURE_REG_RCOUNT         ;
extern const uint8_t _MOISTURE_REG_OFFSET         ;
extern const uint8_t _MOISTURE_REG_SETTLECOUNT    ;
extern const uint8_t _MOISTURE_REG_CLOCK_DIVIDERS ;
extern const uint8_t _MOISTURE_REG_STATUS         ;
extern const uint8_t _MOISTURE_REG_ERROR_CONFIG   ;
extern const uint8_t _MOISTURE_REG_CONFIG         ;
extern const uint8_t _MOISTURE_REG_MUX_CONFIG     ;
extern const uint8_t _MOISTURE_REG_RESET_DEVICE   ;
extern const uint8_t _MOISTURE_REG_DRIVE_CURRENT  ;
extern const uint8_t _MOISTURE_REG_DEVICE_ID      ;
extern const uint8_t _MOISTURE_REG_MANUFACTURER_ID;

/* Drive current */
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_016mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_018mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_021mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_025mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_028mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_033mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_038mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_044mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_052mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_060mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_069mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_081mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_093mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_108mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_126mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_146mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_169mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_196mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_228mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_264mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_307mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_356mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_413mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_479mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_555mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_644mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_747mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_0_867mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_1_006mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_1_167mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_1_354mA;
extern const uint16_t _MOISTURE_DRIVE_CURRENT_1_571mA;

/* Reset device */
extern const uint16_t _MOISTURE_RESET_DEVICE   ;
extern const uint16_t _MOISTURE_OUTPUT_GAIN_x1 ;
extern const uint16_t _MOISTURE_OUTPUT_GAIN_x4 ;
extern const uint16_t _MOISTURE_OUTPUT_GAIN_x8 ;
extern const uint16_t _MOISTURE_OUTPUT_GAIN_x16;

/* MUX config */
extern const uint16_t _MOISTURE_MUX_CFG_AUTOSCAN_MODE    ;
extern const uint16_t _MOISTURE_MUX_CFG_CONTINUOUS_MODE  ;
extern const uint16_t _MOISTURE_MUX_CFG_RR_SEQUENCE_CH_01;
extern const uint16_t _MOISTURE_MUX_CFG_DEGLITCH_1MHz    ;
extern const uint16_t _MOISTURE_MUX_CFG_DEGLITCH_3_3MHz  ;
extern const uint16_t _MOISTURE_MUX_CFG_DEGLITCH_10MHz   ;
extern const uint16_t _MOISTURE_MUX_CFG_DEGLITCH_33MHz   ;

/* Config */
extern const uint16_t _MOISTURE_CFG_ACTIVE_CHAN_CH0     ;
extern const uint16_t _MOISTURE_CFG_DEVICE_ACTIVE       ;
extern const uint16_t _MOISTURE_CFG_DEVICE_IN_SLEEP_MODE;
extern const uint16_t _MOISTURE_CFG_FULL_CURRENT_MODE   ;
extern const uint16_t _MOISTURE_CFG_LOW_POWER_MODE      ;
extern const uint16_t _MOISTURE_CFG_INT_PIN_ENABLE      ;
extern const uint16_t _MOISTURE_CFG_INT_PIN_DISABLE     ;

/* Error config */
extern const uint16_t _MOISTURE_ERR_CFG_WATCHDOG_TIMEOUT;
extern const uint16_t _MOISTURE_ERR_CFG_AMPLITUDE_HIGH  ;
extern const uint16_t _MOISTURE_ERR_CFG_AMPLITUDE_LOW   ;
extern const uint16_t _MOISTURE_ERR_CFG_DATA_RDY_IN_PIN ;
 
/* Status */
extern const uint16_t _MOISTURE_STATUS_ERR_CHAN_0    ;
extern const uint16_t _MOISTURE_STATUS_ERR_WD        ;
extern const uint16_t _MOISTURE_STATUS_ERR_AHW       ;
extern const uint16_t _MOISTURE_STATUS_ERR_AHL       ;
extern const uint16_t _MOISTURE_STATUS_DATA_RDY      ;
extern const uint16_t _MOISTURE_STATUS_CH0_UNREADCONV;

/* Clock divider */
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x1 ;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x2 ;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x3 ;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x4 ;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x5 ;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x6 ;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x7 ;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x8 ;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x9 ;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x10;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x11;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x12;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x13;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x14;
extern const uint16_t _MOISTURE_CLOCK_DIVIDERS_x15;

extern const uint8_t _MOISTURE_DEFAULT_OFFSET;

                                                                       /** @} */

#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup MOISTURE_INIT Driver Initialization */              /** @{ */

#ifdef   __MOISTURE_DRV_SPI__
void moisture_spiDriverInit(T_MOISTURE_P gpioObj, T_MOISTURE_P spiObj);
#endif
#ifdef   __MOISTURE_DRV_I2C__
void moisture_i2cDriverInit(T_MOISTURE_P gpioObj, T_MOISTURE_P i2cObj, uint8_t slave);
#endif
#ifdef   __MOISTURE_DRV_UART__
void moisture_uartDriverInit(T_MOISTURE_P gpioObj, T_MOISTURE_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void moisture_gpioDriverInit(T_MOISTURE_P gpioObj);
                                                                       /** @} */
/** @defgroup MOISTURE_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Functions for write data in register
 *
 * @param[in] reg    Register in which the data will be written
 * @param[in] _data  Data which be written in the register
 */
void moisture_writeData(uint8_t reg, uint16_t _data);

/**
 * @brief Functions for read data from register
 *
 * @param[in] reg     Register which will be read
 * @retval two byte data which is read from the register
 */
uint16_t moisture_readData(uint8_t reg);

/**
 * @brief Functions for initialize the chip
 *
 * @param[ in ] gain            Select moisture gain data
 * @param[ in ] offset          Select offset data
 * @param[ in ] clk_div         Select clock divider
 *
 * @retval Information whether the chip is successfully initialized or not.
 *
 * Functions initializes Moisture gain, offset and clock divider.
   Initialization contains and enable data and sets chip in normal operation mode.
 */
uint8_t moisture_init(uint16_t gain, uint16_t offset, uint16_t clk_div);

/**
 * @brief Functions for measurement data
 *
 * @retval moisture data in percent.
 *
 * Moisture data depends on the set gain, offset and clock divider.
 */
uint8_t moisture_getData();

/**
 * @brief Functions for calibration chip
 *
 * Don't touch the sensor while calibrating.
 */
void moisture_calibration();

/**
 * @brief Functions for software reset
 */
void moisture_softReset();

                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Moisture_STM.c
    @example Click_Moisture_TIVA.c
    @example Click_Moisture_CEC.c
    @example Click_Moisture_KINETIS.c
    @example Click_Moisture_MSP.c
    @example Click_Moisture_PIC.c
    @example Click_Moisture_PIC32.c
    @example Click_Moisture_DSPIC.c
    @example Click_Moisture_AVR.c
    @example Click_Moisture_FT90x.c
    @example Click_Moisture_STM.mbas
    @example Click_Moisture_TIVA.mbas
    @example Click_Moisture_CEC.mbas
    @example Click_Moisture_KINETIS.mbas
    @example Click_Moisture_MSP.mbas
    @example Click_Moisture_PIC.mbas
    @example Click_Moisture_PIC32.mbas
    @example Click_Moisture_DSPIC.mbas
    @example Click_Moisture_AVR.mbas
    @example Click_Moisture_FT90x.mbas
    @example Click_Moisture_STM.mpas
    @example Click_Moisture_TIVA.mpas
    @example Click_Moisture_CEC.mpas
    @example Click_Moisture_KINETIS.mpas
    @example Click_Moisture_MSP.mpas
    @example Click_Moisture_PIC.mpas
    @example Click_Moisture_PIC32.mpas
    @example Click_Moisture_DSPIC.mpas
    @example Click_Moisture_AVR.mpas
    @example Click_Moisture_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __moisture_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */