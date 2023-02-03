/*
 * Led.h
 *
 *  Created on: Jan 28, 2023
 *      Author: ahmad
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "Led_Cfg.h"

typedef enum {
    LED_OFF,
    LED_ON
} Led_StatusType;

void Led_Init(Dio_PortType port, Dio_PinType pin);
void Led_TurnOn (Dio_PortType port, Dio_PinType pin);
void Led_TurnOff (Dio_PortType port, Dio_PinType pin);
Led_StatusType Led_GetStatus (Dio_PortType port, Dio_PinType pin);
#define Led_Flip Dio_FlipPinLevel



#endif /* INC_LED_H_ */
