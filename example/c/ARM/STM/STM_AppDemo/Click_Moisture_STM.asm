_systemInit:
;Click_Moisture_STM.c,35 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Moisture_STM.c,37 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
MOVS	R2, #1
MOVS	R1, #7
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Moisture_STM.c,38 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
MOVS	R2, #0
MOVS	R1, #1
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Moisture_STM.c,39 :: 		mikrobus_i2cInit( _MIKROBUS1, &_MOISTURE_I2C_CFG[0] );
MOVW	R0, #lo_addr(__MOISTURE_I2C_CFG+0)
MOVT	R0, #hi_addr(__MOISTURE_I2C_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_i2cInit+0
;Click_Moisture_STM.c,40 :: 		mikrobus_logInit( _LOG_USBUART_A, 9600 );
MOVW	R1, #9600
MOVS	R0, #32
BL	_mikrobus_logInit+0
;Click_Moisture_STM.c,41 :: 		mikrobus_logWrite(" --- System init --- ", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr1_Click_Moisture_STM+0)
MOVT	R0, #hi_addr(?lstr1_Click_Moisture_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Moisture_STM.c,42 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_Moisture_STM.c,43 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_Moisture_STM.c,45 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Moisture_STM.c,47 :: 		moisture_i2cDriverInit( (T_MOISTURE_P)&_MIKROBUS1_GPIO, (T_MOISTURE_P)&_MIKROBUS1_I2C, 0x2A );
MOVS	R2, #42
MOVW	R1, #lo_addr(__MIKROBUS1_I2C+0)
MOVT	R1, #hi_addr(__MIKROBUS1_I2C+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_moisture_i2cDriverInit+0
;Click_Moisture_STM.c,48 :: 		moisture_softReset();
BL	_moisture_softReset+0
;Click_Moisture_STM.c,49 :: 		moisture_init( _MOISTURE_OUTPUT_GAIN_x16, _MOISTURE_DEFAULT_OFFSET, _MOISTURE_CLOCK_DIVIDERS_x10);
MOVW	R2, __MOISTURE_CLOCK_DIVIDERS_x10
MOVW	R1, __MOISTURE_DEFAULT_OFFSET
MOVW	R0, __MOISTURE_OUTPUT_GAIN_x16
BL	_moisture_init+0
;Click_Moisture_STM.c,50 :: 		mikrobus_logWrite(" --- Calibration start --- ", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr2_Click_Moisture_STM+0)
MOVT	R0, #hi_addr(?lstr2_Click_Moisture_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Moisture_STM.c,51 :: 		moisture_calibration();
BL	_moisture_calibration+0
;Click_Moisture_STM.c,52 :: 		Delay_1sec();
BL	_Delay_1sec+0
;Click_Moisture_STM.c,53 :: 		mikrobus_logWrite(" --- Calibration finishing --- ", _LOG_LINE);
MOVW	R0, #lo_addr(?lstr3_Click_Moisture_STM+0)
MOVT	R0, #hi_addr(?lstr3_Click_Moisture_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Moisture_STM.c,54 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_Moisture_STM.c,56 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Moisture_STM.c,58 :: 		mikrobus_logWrite(" Moisture data : ", _LOG_TEXT);
MOVW	R0, #lo_addr(?lstr4_Click_Moisture_STM+0)
MOVT	R0, #hi_addr(?lstr4_Click_Moisture_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Moisture_STM.c,59 :: 		moistureData = moisture_getData();
BL	_moisture_getData+0
MOVW	R1, #lo_addr(_moistureData+0)
MOVT	R1, #hi_addr(_moistureData+0)
STRB	R0, [R1, #0]
;Click_Moisture_STM.c,60 :: 		IntToStr(moistureData, demoText);
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Moisture_STM.c,61 :: 		mikrobus_logWrite(demoText, _LOG_LINE);
MOVS	R1, #2
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Moisture_STM.c,62 :: 		Delay_ms( 500 );
MOVW	R7, #36223
MOVT	R7, #91
NOP
NOP
L_applicationTask2:
SUBS	R7, R7, #1
BNE	L_applicationTask2
NOP
NOP
NOP
;Click_Moisture_STM.c,63 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_Moisture_STM.c,65 :: 		void main()
;Click_Moisture_STM.c,67 :: 		systemInit();
BL	_systemInit+0
;Click_Moisture_STM.c,68 :: 		applicationInit();
BL	_applicationInit+0
;Click_Moisture_STM.c,70 :: 		while (1)
L_main4:
;Click_Moisture_STM.c,72 :: 		applicationTask();
BL	_applicationTask+0
;Click_Moisture_STM.c,73 :: 		}
IT	AL
BAL	L_main4
;Click_Moisture_STM.c,74 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
