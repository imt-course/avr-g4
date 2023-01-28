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
    Dio_SetPinLevel(port, pin, DIO_LEVEL_HIGH);
}

void Led_TurnOff (Dio_PortType port, Dio_PinType pin) {
    Dio_SetPinLevel(port, pin, DIO_LEVEL_LOW);
}

void Led_Flip (Dio_PortType port, Dio_PinType pin) {
    Dio_FlipPinLevel(port, pin);
}

Led_StatusType Led_GetStatus (Dio_PortType port, Dio_PinType pin) {
    return Dio_ReadPinLevel(port, pin);
}
