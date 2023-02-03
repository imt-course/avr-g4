/*
 * Button.c
 *
 *  Created on: Feb 3, 2023
 *      Author: ahmad
 */
#include "Types.h"
#include "Dio.h"
#include "Button_Cfg.h"
#include "Button.h"


void Button_Init(Dio_PortType port, Dio_PinType pin) {
#if BUTTON_CONNECTION == BUTTON_CONNECTION_PULLUP
    Dio_SetPinMode(port, pin, DIO_MODE_INPUT_PULLUP);
#elif BUTTON_CONNECTION == BUTTON_CONNECTION_PULLDOWN
#warning "Pull Down Connection is not supported"
    Dio_SetPinMode(port, pin, DIO_MODE_INPUT_FLOATING);
#else
#error "Invalid BUTTON_CONNECTION"
#endif
}

Button_StatusType Button_GetStatus (Dio_PortType port, Dio_PinType pin) {
	Button_StatusType state = BUTTON_NOT_PRESSED;
#if BUTTON_CONNECTION == BUTTON_CONNECTION_PULLUP
    if (Dio_ReadPinLevel(port, pin) == DIO_LEVEL_LOW)
#elif BUTTON_CONNECTION == BUTTON_CONNECTION_PULLDOWN
    if (Dio_ReadPinLevel(port, pin) == DIO_LEVEL_HIGH)
#endif
    {
        state = BUTTON_PRESSED;
    }
    return state;
}

