/*
    __moisture_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__moisture_driver.h"
#include "__moisture_hal.c"

/* ------------------------------------------------------------------- MACROS */

const uint8_t _MOISTURE_DEFAULT_OFFSET = 0x00AA;

/* Register */
const uint8_t _MOISTURE_REG_DATA            = 0x00;
const uint8_t _MOISTURE_REG_RCOUNT          = 0x08;
const uint8_t _MOISTURE_REG_OFFSET          = 0x0C;
const uint8_t _MOISTURE_REG_SETTLECOUNT     = 0x10;
const uint8_t _MOISTURE_REG_CLOCK_DIVIDERS  = 0x14;
const uint8_t _MOISTURE_REG_STATUS          = 0x18;
const uint8_t _MOISTURE_REG_ERROR_CONFIG    = 0x19;
const uint8_t _MOISTURE_REG_CONFIG          = 0x1A;
const uint8_t _MOISTURE_REG_MUX_CONFIG      = 0x1B;
const uint8_t _MOISTURE_REG_RESET_DEVICE    = 0x1C;
const uint8_t _MOISTURE_REG_DRIVE_CURRENT   = 0x1E;
const uint8_t _MOISTURE_REG_DEVICE_ID       = 0x7F;
const uint8_t _MOISTURE_REG_MANUFACTURER_ID = 0x7E;

/* Drive current */
const uint16_t _MOISTURE_DRIVE_CURRENT_0_016mA = 0x0000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_018mA = 0x0800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_021mA = 0x1000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_025mA = 0x1800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_028mA = 0x2000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_033mA = 0x2800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_038mA = 0x3000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_044mA = 0x3800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_052mA = 0x4000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_060mA = 0x4800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_069mA = 0x5000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_081mA = 0x5800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_093mA = 0x6000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_108mA = 0x6800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_126mA = 0x7000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_146mA = 0x7800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_169mA = 0x8000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_196mA = 0x8800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_228mA = 0x9000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_264mA = 0x9800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_307mA = 0xA000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_356mA = 0xA800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_413mA = 0xB000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_479mA = 0xB800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_555mA = 0xC000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_644mA = 0xC800;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_747mA = 0xD000;
const uint16_t _MOISTURE_DRIVE_CURRENT_0_867mA = 0xD800;
const uint16_t _MOISTURE_DRIVE_CURRENT_1_006mA = 0xE000;
const uint16_t _MOISTURE_DRIVE_CURRENT_1_167mA = 0xE800;
const uint16_t _MOISTURE_DRIVE_CURRENT_1_354mA = 0xF000;
const uint16_t _MOISTURE_DRIVE_CURRENT_1_571mA = 0xF800;

/* Reset device */
const uint16_t _MOISTURE_RESET_DEVICE    = 0x8000;
const uint16_t _MOISTURE_OUTPUT_GAIN_x1  = 0x0000;
const uint16_t _MOISTURE_OUTPUT_GAIN_x4  = 0x0200;
const uint16_t _MOISTURE_OUTPUT_GAIN_x8  = 0x0400;
const uint16_t _MOISTURE_OUTPUT_GAIN_x16 = 0x0600;

/* MUX config */
const uint16_t _MOISTURE_MUX_CFG_AUTOSCAN_MODE       = 0x8000;
const uint16_t _MOISTURE_MUX_CFG_CONTINUOUS_MODE     = 0x0000;
const uint16_t _MOISTURE_MUX_CFG_RR_SEQUENCE_CH_01   = 0x0000;
const uint16_t _MOISTURE_MUX_CFG_DEGLITCH_1MHz       = 0x0001;
const uint16_t _MOISTURE_MUX_CFG_DEGLITCH_3_3MHz     = 0x0004;
const uint16_t _MOISTURE_MUX_CFG_DEGLITCH_10MHz      = 0x0005;
const uint16_t _MOISTURE_MUX_CFG_DEGLITCH_33MHz      = 0x0007;

/* Config */
const uint16_t _MOISTURE_CFG_ACTIVE_CHAN_CH0        = 0x0000;
const uint16_t _MOISTURE_CFG_DEVICE_ACTIVE          = 0x0000;
const uint16_t _MOISTURE_CFG_DEVICE_IN_SLEEP_MODE   = 0x2000;
const uint16_t _MOISTURE_CFG_FULL_CURRENT_MODE      = 0x0000;
const uint16_t _MOISTURE_CFG_LOW_POWER_MODE         = 0x0800;
const uint16_t _MOISTURE_CFG_INT_PIN_ENABLE         = 0x0000;
const uint16_t _MOISTURE_CFG_INT_PIN_DISABLE        = 0x0080;

/* Error config */
const uint16_t _MOISTURE_ERR_CFG_WATCHDOG_TIMEOUT  = 0x2000;
const uint16_t _MOISTURE_ERR_CFG_AMPLITUDE_HIGH    = 0x1000;
const uint16_t _MOISTURE_ERR_CFG_AMPLITUDE_LOW     = 0x0800;
const uint16_t _MOISTURE_ERR_CFG_DATA_RDY_IN_PIN   = 0x0001;

/* Status */
const uint16_t _MOISTURE_STATUS_ERR_CHAN_0       = 0x0000;
const uint16_t _MOISTURE_STATUS_ERR_WD           = 0x0800;
const uint16_t _MOISTURE_STATUS_ERR_AHW          = 0x0400;
const uint16_t _MOISTURE_STATUS_ERR_AHL          = 0x0200;
const uint16_t _MOISTURE_STATUS_DATA_RDY         = 0x0040;
const uint16_t _MOISTURE_STATUS_CH0_UNREADCONV   = 0x0008;

/* clock divider */
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x1     = 0x00001;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x2     = 0x00002;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x3     = 0x00003;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x4     = 0x00004;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x5     = 0x00005;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x6     = 0x00006;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x7     = 0x00007;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x8     = 0x00008;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x9     = 0x00009;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x10    = 0x0000A;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x11    = 0x0000B;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x12    = 0x0000C;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x13    = 0x0000D;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x14    = 0x0000E;
const uint16_t _MOISTURE_CLOCK_DIVIDERS_x15    = 0x0000F;

/* Device */
static uint8_t DEVICE_ERROR = 0x01;
static uint8_t DEVICE_OK    = 0x02;


/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __MOISTURE_DRV_I2C__
static uint8_t _slaveAddress;
#endif

static uint16_t _airData = 572;

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __MOISTURE_DRV_SPI__

void moisture_spiDriverInit(T_MOISTURE_P gpioObj, T_MOISTURE_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __MOISTURE_DRV_I2C__

void moisture_i2cDriverInit(T_MOISTURE_P gpioObj, T_MOISTURE_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
    
    hal_gpio_rstSet( 0 );
}

#endif
#ifdef   __MOISTURE_DRV_UART__

void moisture_uartDriverInit(T_MOISTURE_P gpioObj, T_MOISTURE_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif

/* ----------------------------------------------------------- IMPLEMENTATION */

void moisture_writeData(uint8_t reg, uint16_t _data)
{
    uint8_t writeReg[ 3 ];
    
    writeReg[ 0 ] = reg;
    writeReg[ 1 ] = (_data >> 8) & 0x00FF;
    writeReg[ 2 ] = _data & 0x00FF;
    
    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 3, END_MODE_STOP);
}

uint16_t moisture_readData(uint8_t reg)
{
    uint8_t writeReg[ 1 ];
    uint8_t readReg[ 2 ] = {0};
    uint16_t dataValue = 0;
    
    writeReg[ 0 ] = reg;
    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 1, END_MODE_RESTART);
    hal_i2cRead(_slaveAddress, readReg, 2, END_MODE_STOP);

    dataValue = readReg[ 0 ];
    dataValue = dataValue << 8;
    dataValue = dataValue | readreg[ 1 ];
    
    return dataValue;
}

uint8_t  moisture_init(uint16_t gain, uint16_t offset, uint16_t clk_div)
{
    uint16_t deviceID;
    
    clk_div = clk_div & 0x000F;
    
    deviceID = moisture_readData( _MOISTURE_REG_DEVICE_ID );
    
    if ((deviceID != 0x3054) && (deviceID != 0x3055))
    {
        return DEVICE_ERROR;
    }
    
    moisture_writeData(_MOISTURE_REG_RESET_DEVICE, gain);
    moisture_writeData(_MOISTURE_REG_SETTLECOUNT, 0x0064);
    moisture_writeData(_MOISTURE_REG_RCOUNT, 0x010F);
    moisture_writeData(_MOISTURE_REG_OFFSET, offset);
    moisture_writeData(_MOISTURE_REG_CLOCK_DIVIDERS, 0x2001 | clk_div);
    moisture_writeData(_MOISTURE_REG_DRIVE_CURRENT, 0x7C00);
    moisture_writeData(_MOISTURE_REG_ERROR_CONFIG, 0xFFFF);
    moisture_writeData(_MOISTURE_REG_CONFIG, 0x0000);
    moisture_writeData(_MOISTURE_REG_MUX_CONFIG, 0x0007);
    
    return DEVICE_OK;
}

void moisture_softReset()
{
    moisture_writeData(_MOISTURE_REG_RESET_DEVICE, 0x8000);
}

uint8_t moisture_getData()
{
    uint8_t  cnt;
    uint32_t readData;
    volatile uint16_t moistureData;
    volatile uint32_t clcData;
    uint16_t tmp;
    uint8_t pData;

    readData = 0;
    for (cnt = 0; cnt < 16; cnt++)
    {
         tmp = moisture_readData( _MOISTURE_REG_DATA );
         readData += (tmp & 0x0FFF);
         Delay_1ms();
    }
    readData = readData / 16;
    moistureData = (uint16_t)(readData);
    
    if (moistureData > _airData) 
    {
        moistureData = _airData;
    }
    moistureData = _airData - moistureData;
    
    clcData = (uint32_t)(moistureData * 100);
    clcData = clcData / _airData;
    Delay_1ms();
    
    pData = (uint8_t)clcData;

    return pData;
}

void moisture_calibration()
{
    uint8_t  cnt;
    volatile uint32_t readData;
    volatile uint16_t tmp;

    readData = 0;
    for (cnt = 0; cnt < 16; cnt++)
    {
         tmp = moisture_readData( _MOISTURE_REG_DATA );
         readData += (tmp & 0x0FFF);
         Delay_10ms();
    }
    _airData = (uint16_t)(readData / 16);
}




/* -------------------------------------------------------------------------- */
/*
  __moisture_driver.c

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