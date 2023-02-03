/*
 * Ssd.c
 *
 *  Created on: Feb 3, 2023
 *      Author: ahmad
 */

#include "Types.h"
#include "Dio.h"
#include "Ssd_Cfg.h"
#include "Ssd.h"

#if   SSD_TYPE == SSD_COMM_CATHODE
    #define SSD_LED_ON      DIO_LEVEL_HIGH
    #define SSD_LED_OFF     DIO_LEVEL_LOW
#elif SSD_TYPE == SSD_COMM_ANODE
    #define SSD_LED_ON      DIO_LEVEL_LOW
    #define SSD_LED_OFF     DIO_LEVEL_HIGH
#else
    #error "Invalid SSD Type"
#endif


void Ssd_Init(void) {
    Dio_SetPinMode(SSD_PIN_A  ,DIO_MODE_OUTPUT);
    Dio_SetPinMode(SSD_PIN_B  ,DIO_MODE_OUTPUT);
    Dio_SetPinMode(SSD_PIN_C  ,DIO_MODE_OUTPUT);
    Dio_SetPinMode(SSD_PIN_D  ,DIO_MODE_OUTPUT);
    Dio_SetPinMode(SSD_PIN_E  ,DIO_MODE_OUTPUT);
    Dio_SetPinMode(SSD_PIN_F  ,DIO_MODE_OUTPUT);
    Dio_SetPinMode(SSD_PIN_G  ,DIO_MODE_OUTPUT);
    Dio_SetPinMode(SSD_PIN_DOT,DIO_MODE_OUTPUT);
}

void Ssd_SetDotOn(void) {
    Dio_SetPinLevel(SSD_PIN_DOT, SSD_LED_ON);
}

void Ssd_SetDotOff(void) {
    Dio_SetPinLevel(SSD_PIN_DOT, SSD_LED_OFF);
}

void Ssd_DisplayNumber(u8 number) {
    switch (number)
    {
    case 0:
        Dio_SetPinLevel(SSD_PIN_A  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_B  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_C  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_D  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_E  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_F  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_G  ,SSD_LED_OFF);
        break;
    case 1:
        Dio_SetPinLevel(SSD_PIN_A  ,SSD_LED_OFF);
        Dio_SetPinLevel(SSD_PIN_B  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_C  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_D  ,SSD_LED_OFF);
        Dio_SetPinLevel(SSD_PIN_E  ,SSD_LED_OFF);
        Dio_SetPinLevel(SSD_PIN_F  ,SSD_LED_OFF);
        Dio_SetPinLevel(SSD_PIN_G  ,SSD_LED_OFF);
        break;
    /** TODO: Complete all other number cases */
    case 2:
        Dio_SetPinLevel(SSD_PIN_A  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_B  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_C  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_D  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_E  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_F  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_G  ,SSD_LED_ON);
        break;
    case 3:
        Dio_SetPinLevel(SSD_PIN_A  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_B  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_C  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_D  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_E  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_F  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_G  ,SSD_LED_ON);
        break;
    case 4:
        Dio_SetPinLevel(SSD_PIN_A  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_B  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_C  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_D  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_E  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_F  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_G  ,SSD_LED_ON);
        break;
    case 5:
        Dio_SetPinLevel(SSD_PIN_A  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_B  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_C  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_D  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_E  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_F  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_G  ,SSD_LED_ON);
        break;
    case 6:
        Dio_SetPinLevel(SSD_PIN_A  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_B  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_C  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_D  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_E  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_F  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_G  ,SSD_LED_ON);
        break;
    case 7:
        Dio_SetPinLevel(SSD_PIN_A  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_B  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_C  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_D  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_E  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_F  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_G  ,SSD_LED_ON);
        break;
    case 8:
        Dio_SetPinLevel(SSD_PIN_A  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_B  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_C  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_D  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_E  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_F  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_G  ,SSD_LED_ON);
        break;
    case 9:
        Dio_SetPinLevel(SSD_PIN_A  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_B  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_C  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_D  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_E  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_F  ,SSD_LED_ON);
        Dio_SetPinLevel(SSD_PIN_G  ,SSD_LED_ON);
        break;
    default:
        Dio_SetPinLevel(SSD_PIN_A  ,SSD_LED_OFF);
        Dio_SetPinLevel(SSD_PIN_B  ,SSD_LED_OFF);
        Dio_SetPinLevel(SSD_PIN_C  ,SSD_LED_OFF);
        Dio_SetPinLevel(SSD_PIN_D  ,SSD_LED_OFF);
        Dio_SetPinLevel(SSD_PIN_E  ,SSD_LED_OFF);
        Dio_SetPinLevel(SSD_PIN_F  ,SSD_LED_OFF);
        Dio_SetPinLevel(SSD_PIN_G  ,SSD_LED_OFF);
        Dio_SetPinLevel(SSD_PIN_DOT,SSD_LED_OFF);
        break;
    }
}