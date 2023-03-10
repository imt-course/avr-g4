/*
 * Uart.c
 *
 *  Created on: Mar 10, 2023
 *      Author: ahmad
 */

#include "Types.h"
#include "Registers.h"
#include "Macros.h"
#include "Dio.h"
#include "Interrupts.h"
#include "Uart_Cfg.h"
#include "Uart.h"

void Uart_Init(void) {
    u8 temp = 0;
    u16 baud_reg = 0;
    /* Receiver Enable */
    SET_BIT(UCSRB, 4);
    Dio_SetPinMode(DIO_PORTD, DIO_PIN0, DIO_MODE_INPUT_FLOATING);
    /* Transmitter Enable */
    SET_BIT(UCSRB, 3);
    Dio_SetPinMode(DIO_PORTD, DIO_PIN1, DIO_MODE_OUTPUT);
    /* UCSRC Register Select */
    SET_BIT(temp, 7);
    /* Character Size : 8bit */
    SET_BIT(temp, 1);
    SET_BIT(temp, 2);
    CLR_BIT(UCSRB, 2);
    UCSRC = temp;
    /* Baud Rate Registers */
    baud_reg = (UART_FREQUENCY/(16*UART_BAUD_RATE)) - 1;
    UBRRL = (u8) baud_reg;
    UBRRH = (u8) ((baud_reg >> 8) & 0xF);
}

void Uart_Transmit(u8 data) {
    /* Wait for Data Register Empty */
    while (GET_BIT(UCSRA, 5) == 0);
    /* Writing Data to Transmit Buffer */
    UDR = data;
    /* Wait for Transmit Complete */
    while (GET_BIT(UCSRA, 6) == 0);
    /* Clear Transmit Complete Flag */
    SET_BIT(UCSRA, 6);   
}

u8 Uart_Receive(void) {
    /* Wait for Receive Complete */
    while (GET_BIT(UCSRA, 7) == 0);
    return UDR;
}
