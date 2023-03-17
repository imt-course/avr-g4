/*
 * main.c
 *
 *  Created on: Jan 27, 2023
 *      Author: ahmad
 */



#include "Types.h"
#include "Dio.h"
#include "Gie.h"
#include "Uart.h"
#include "Spi.h"
#include "Delay.h"

#define APP_MODE_MASTER	1
#define APP_MODE_SLAVE	2

#define APP_MODE		APP_MODE_MASTER

#if (APP_MODE == APP_MODE_MASTER)
int main (void) {
	u8 data;
	Uart_Init();
	Spi_Init();
	while (1)
	{
		data = Uart_Receive();
		Spi_Transfer(data);
	}
}
#endif

#if (APP_MODE == APP_MODE_SLAVE)

void Handler_Spi (u8 data) {
	Uart_Transmit(data);
}

int main (void) {
	Uart_Init();
	Spi_Init();
	Spi_SetCallback(Handler_Spi);
	Spi_EnableNotification();
	Gie_Enable();
	while (1)
	{
	}
}
#endif