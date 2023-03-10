/*
 * Uart.h
 *
 *  Created on: Mar 10, 2023
 *      Author: ahmad
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "Types.h"

void Uart_Init(void);
void Uart_Transmit(u8 data);
u8 Uart_Receive(void);

#endif /* INC_UART_H_ */
