#line 1 "C:/Users/katarina.perendic/Desktop/Moisture_click/example/c/ARM/STM/STM_AppDemo/Click_Moisture_STM.c"
#line 1 "c:/users/katarina.perendic/desktop/moisture_click/example/c/arm/stm/stm_appdemo/click_moisture_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdbool.h"



 typedef char _Bool;
#line 1 "c:/users/katarina.perendic/desktop/moisture_click/example/c/arm/stm/stm_appdemo/click_moisture_config.h"
#line 1 "c:/users/katarina.perendic/desktop/moisture_click/example/c/arm/stm/stm_appdemo/click_moisture_types.h"
#line 19 "c:/users/katarina.perendic/desktop/moisture_click/example/c/arm/stm/stm_appdemo/click_moisture_config.h"
const uint32_t _MOISTURE_I2C_CFG[ 1 ] =
{
 100000
};
#line 1 "c:/users/katarina.perendic/desktop/moisture_click/library/__moisture_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 58 "c:/users/katarina.perendic/desktop/moisture_click/library/__moisture_driver.h"
extern const uint8_t _MOISTURE_REG_DATA ;
extern const uint8_t _MOISTURE_REG_RCOUNT ;
extern const uint8_t _MOISTURE_REG_OFFSET ;
extern const uint8_t _MOISTURE_REG_SETTLECOUNT ;
extern const uint8_t _MOISTURE_REG_CLOCK_DIVIDERS ;
extern const uint8_t _MOISTURE_REG_STATUS ;
extern const uint8_t _MOISTURE_REG_ERROR_CONFIG ;
extern const uint8_t _MOISTURE_REG_CONFIG ;
extern const uint8_t _MOISTURE_REG_MUX_CONFIG ;
extern const uint8_t _MOISTURE_REG_RESET_DEVICE ;
extern const uint8_t _MOISTURE_REG_DRIVE_CURRENT ;
extern const uint8_t _MOISTURE_REG_DEVICE_ID ;
extern const uint8_t _MOISTURE_REG_MANUFACTURER_ID;


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


extern const uint16_t _MOISTURE_RESET_DEVICE ;
extern const uint16_t _MOISTURE_OUTPUT_GAIN_x1 ;
extern const uint16_t _MOISTURE_OUTPUT_GAIN_x4 ;
extern const uint16_t _MOISTURE_OUTPUT_GAIN_x8 ;
extern const uint16_t _MOISTURE_OUTPUT_GAIN_x16;


extern const uint16_t _MOISTURE_MUX_CFG_AUTOSCAN_MODE ;
extern const uint16_t _MOISTURE_MUX_CFG_CONTINUOUS_MODE ;
extern const uint16_t _MOISTURE_MUX_CFG_RR_SEQUENCE_CH_01;
extern const uint16_t _MOISTURE_MUX_CFG_DEGLITCH_1MHz ;
extern const uint16_t _MOISTURE_MUX_CFG_DEGLITCH_3_3MHz ;
extern const uint16_t _MOISTURE_MUX_CFG_DEGLITCH_10MHz ;
extern const uint16_t _MOISTURE_MUX_CFG_DEGLITCH_33MHz ;


extern const uint16_t _MOISTURE_CFG_ACTIVE_CHAN_CH0 ;
extern const uint16_t _MOISTURE_CFG_DEVICE_ACTIVE ;
extern const uint16_t _MOISTURE_CFG_DEVICE_IN_SLEEP_MODE;
extern const uint16_t _MOISTURE_CFG_FULL_CURRENT_MODE ;
extern const uint16_t _MOISTURE_CFG_LOW_POWER_MODE ;
extern const uint16_t _MOISTURE_CFG_INT_PIN_ENABLE ;
extern const uint16_t _MOISTURE_CFG_INT_PIN_DISABLE ;


extern const uint16_t _MOISTURE_ERR_CFG_WATCHDOG_TIMEOUT;
extern const uint16_t _MOISTURE_ERR_CFG_AMPLITUDE_HIGH ;
extern const uint16_t _MOISTURE_ERR_CFG_AMPLITUDE_LOW ;
extern const uint16_t _MOISTURE_ERR_CFG_DATA_RDY_IN_PIN ;


extern const uint16_t _MOISTURE_STATUS_ERR_CHAN_0 ;
extern const uint16_t _MOISTURE_STATUS_ERR_WD ;
extern const uint16_t _MOISTURE_STATUS_ERR_AHW ;
extern const uint16_t _MOISTURE_STATUS_ERR_AHL ;
extern const uint16_t _MOISTURE_STATUS_DATA_RDY ;
extern const uint16_t _MOISTURE_STATUS_CH0_UNREADCONV;


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
#line 176 "c:/users/katarina.perendic/desktop/moisture_click/library/__moisture_driver.h"
void moisture_i2cDriverInit( const uint8_t*  gpioObj,  const uint8_t*  i2cObj, uint8_t slave);
#line 183 "c:/users/katarina.perendic/desktop/moisture_click/library/__moisture_driver.h"
void moisture_gpioDriverInit( const uint8_t*  gpioObj);
#line 193 "c:/users/katarina.perendic/desktop/moisture_click/library/__moisture_driver.h"
void moisture_writeData(uint8_t reg, uint16_t _data);
#line 201 "c:/users/katarina.perendic/desktop/moisture_click/library/__moisture_driver.h"
uint16_t moisture_readData(uint8_t reg);
#line 215 "c:/users/katarina.perendic/desktop/moisture_click/library/__moisture_driver.h"
uint8_t moisture_init(uint16_t gain, uint16_t offset, uint16_t clk_div);
#line 224 "c:/users/katarina.perendic/desktop/moisture_click/library/__moisture_driver.h"
uint8_t moisture_getData();
#line 231 "c:/users/katarina.perendic/desktop/moisture_click/library/__moisture_driver.h"
void moisture_calibration();
#line 236 "c:/users/katarina.perendic/desktop/moisture_click/library/__moisture_driver.h"
void moisture_softReset();
#line 32 "C:/Users/katarina.perendic/Desktop/Moisture_click/example/c/ARM/STM/STM_AppDemo/Click_Moisture_STM.c"
char demoText[ 50 ] = {0};
uint8_t moistureData;

void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
 mikrobus_i2cInit( _MIKROBUS1, &_MOISTURE_I2C_CFG[0] );
 mikrobus_logInit( _LOG_USBUART_A, 9600 );
 mikrobus_logWrite(" --- System init --- ", _LOG_LINE);
 Delay_ms( 100 );
}

void applicationInit()
{
 moisture_i2cDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_I2C, 0x2A );
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
