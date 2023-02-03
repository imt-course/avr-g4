/*
 * Button.h
 *
 *  Created on: Feb 3, 2023
 *      Author: ahmad
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "Dio.h"
#include "Button_Cfg.h"

typedef enum {
    BUTTON_NOT_PRESSED,
    BUTTON_PRESSED
} Button_StatusType;

void Button_Init(Dio_PortType port, Dio_PinType pin);
Button_StatusType Button_GetStatus (Dio_PortType port, Dio_PinType pin);

#endif /* INC_BUTTON_H_ */
