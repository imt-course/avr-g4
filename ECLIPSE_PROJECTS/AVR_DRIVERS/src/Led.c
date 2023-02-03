/*
 * Led.c
 *
 *  Created on: Jan 28, 2023
 *      Author: ahmad
 */

#include "Types.h"
#include "Dio.h"
#include "Led_Cfg.h"
#include "Led.h"


void Led_Init(Dio_PortType port, Dio_PinType pin) {
    Dio_SetPinMode(port, pin, DIO_MODE_OUTPUT);
}

void Led_TurnOn (Dio_PortType port, Dio_PinType pin) {
    Dio_SetPinLevel(port, pin, LED_ON_VOLTAGE);
}

void Led_TurnOff (Dio_PortType port, Dio_PinType pin) {
    if (LED_ON_VOLTAGE == DIO_LEVEL_HIGH) {
        Dio_SetPinLevel(port, pin, DIO_LEVEL_LOW);
    }
    else {
        Dio_SetPinLevel(port, pin, DIO_LEVEL_HIGH);
    }
}

Led_StatusType Led_GetStatus (Dio_PortType port, Dio_PinType pin) {
    Led_StatusType state = LED_OFF;
    if (Dio_ReadPinLevel(port, pin) == LED_ON_VOLTAGE) 
    {
        state = LED_ON;
    }
    return state;
}
