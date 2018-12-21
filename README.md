![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# Moisture Click

- **CIC Prefix**  : MOISTURE
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : maj 2018.

---

### Software Support

We provide a library for the Moisture Click on our [LibStock](https://libstock.mikroe.com/projects/view/2433/moisture-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library initializes and defines the I2C bus driver and drivers that offer a choice for writing data in register.
The library includes function for calibration chip for measurement, function for read moisture data.
The user also has the function for initializes chip, set offset, gain and clock divider and software reset.

Key functions :

- ``` uint8_t moisture_init(uint16_t gain, uint16_t offset, uint16_t clk_div) ``` - Functions for initialize the chip
- ``` uint8_t moisture_getData() ``` - Functions for measurement data in percent.
- ``` void moisture_calibration() ``` - Functions for calibration chip for measurement

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes I2C module
- Application Initialization - Initializes Driver init and sets moisture gain, offset data and clock divider.
                               Calibration chip for measurement - don't touch the sensor while calibrating.
- Application Task - (code snippet) - Measure moisture data in percentage every 500ms.
  To make the measurement successful, touch the sensor and wait until values are stabilized.


```.c
void applicationTask()
{
    mikrobus_logWrite(" Moisture data : ", _LOG_TEXT);
    moistureData = moisture_getData();
    IntToStr(moistureData, demoText);
    mikrobus_logWrite(demoText, _LOG_LINE);
    Delay_ms( 500 );
}
```


The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2433/moisture-click) page.

Other mikroE Libraries used in the example:

- I2C
- UART

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
### Architectures Supported

#### mikroC

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroBasic

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroPascal

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

---
---
