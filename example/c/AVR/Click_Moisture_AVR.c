/*
Example for Moisture Click

    Date          : maj 2018.
    Author        : Katarina Perendic

Test configuration AVR :
    
    MCU              : ATMEGA32
    Dev. Board       : EasyAVR v7 
    AVR Compiler ver : v7.0.1.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes I2C module
- Application Initialization - Initializes Driver init and sets moisture gain, offset data and clock divider.
                               Calibration chip for measurement - don't touch the sensor while calibrating.
- Application Task - (code snippet) - Measure moisture data in percentage every 500ms.
  To make the measurement successful, touch the sensor and wait until values are stabilized.

*/

#include "Click_Moisture_types.h"
#include "Click_Moisture_config.h"

char demoText[ 50 ] = {0};
uint8_t moistureData;

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
    mikrobus_i2cInit( _MIKROBUS1, &_MOISTURE_I2C_CFG[0] );
    mikrobus_logInit( _LOG_USBUART, 9600 );
    mikrobus_logWrite(" --- System init --- ", _LOG_LINE);
    Delay_ms( 100 );
}

void applicationInit()
{
    moisture_i2cDriverInit( (T_MOISTURE_P)&_MIKROBUS1_GPIO, (T_MOISTURE_P)&_MIKROBUS1_I2C, 0x2A );
    moisture_softReset();
    moisture_init( _MOISTURE_OUTPUT_GAIN_x16, _MOISTURE_DEFAULT_OFFSET, _MOISTURE_CLOCK_DIVIDERS_x10);
    mikrobus_logWrite(" --- Calibration start --- ", _LOG_LINE);
    moisture_calibration();
    Delay_1sec();
    mikrobus_logWrite(" --- Calibration finishing --- ", _LOG_LINE);
}

void applicationTask()
{
    mikrobus_logWrite(" Moisture data : ", _LOG_TEXT);
    moistureData = moisture_getData();
    IntToStr(moistureData, demoText);
    mikrobus_logWrite(demoText, _LOG_LINE);
    Delay_ms( 500 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}