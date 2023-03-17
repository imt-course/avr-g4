/*
 * Spi.c
 *
 *  Created on: Mar 17, 2023
 *      Author: ahmad
 */

#include "Types.h"
#include "Registers.h"
#include "Macros.h"
#include "Dio.h"
#include "Interrupts.h"
#include "Spi_Cfg.h"
#include "Spi.h"

void (*Spi_Callback) (u8 data) = NULL_PTR;

ISR(VECTOR_SPI) {
    if (NULL_PTR != Spi_Callback) {
        Spi_Callback(SPDR);
    }
}


void Spi_Init(void) {

    /* Master/Slave Select */
#if   (SPI_MOPDE == SPI_MASTER)
    SET_BIT(SPCR, 4);
    Dio_SetPinMode(DIO_PORTB, DIO_PIN5, DIO_MODE_OUTPUT); // MOSI
    Dio_SetPinMode(DIO_PORTB, DIO_PIN6, DIO_MODE_INPUT_FLOATING); // MISO
    Dio_SetPinMode(DIO_PORTB, DIO_PIN7, DIO_MODE_OUTPUT); // SCK
    Dio_SetPinMode(DIO_PORTB, DIO_PIN4, DIO_MODE_OUTPUT); // SS
#elif (SPI_MOPDE == SPI_SLAVE)
    CLR_BIT(SPCR, 4);
    Dio_SetPinMode(DIO_PORTB, DIO_PIN5, DIO_MODE_INPUT_FLOATING); // MOSI
    Dio_SetPinMode(DIO_PORTB, DIO_PIN6, DIO_MODE_OUTPUT); // MISO
    Dio_SetPinMode(DIO_PORTB, DIO_PIN7, DIO_MODE_INPUT_FLOATING); // SCK
    Dio_SetPinMode(DIO_PORTB, DIO_PIN4, DIO_MODE_INPUT_FLOATING); // SS
#else
    #error "Invalid SPI_MOPDE"
#endif

    /* Data Order */
#if   (SPI_DATA_ORDER == SPI_MSB_FIRST)
    CLR_BIT(SPCR, 5);
#elif (SPI_DATA_ORDER == SPI_LSB_FIRST)
    SET_BIT(SPCR, 5);
#else
    #error "Invalid SPI_DATA_ORDER"
#endif


    /* Clock Polarity */
#if   (SPI_CLK_POLARITY == SPI_IDLE_HIGH)
    SET_BIT(SPCR, 3);
#elif (SPI_CLK_POLARITY == SPI_IDLE_LOW)
    CLR_BIT(SPCR, 3);
#else
    #error "Invalid SPI_CLK_POLARITY"
#endif

    /* Clock Phase */
#if   (SPI_CLK_PHASE == SPI_SAMPLE_SETUP)
    CLR_BIT(SPCR, 2);
#elif (SPI_CLK_PHASE == SPI_SETUP_SAMPLE)
    SET_BIT(SPCR, 2);
#else
    #error "Invalid SPI_CLK_PHASE"
#endif


    /* SPI Clock Rate Select */
#if   (SPI_PRESCALER == 2)
    CLR_BIT(SPCR, 0); // SPR0
    CLR_BIT(SPCR, 1); // SPR1
    SET_BIT(SPSR, 0); // SPI2X
#elif (SPI_PRESCALER == 4)
    CLR_BIT(SPCR, 0); // SPR0
    CLR_BIT(SPCR, 1); // SPR1
    CLR_BIT(SPSR, 0); // SPI2X
#elif (SPI_PRESCALER == 8)
    SET_BIT(SPCR, 0); // SPR0
    CLR_BIT(SPCR, 1); // SPR1
    SET_BIT(SPSR, 0); // SPI2X
#elif (SPI_PRESCALER == 16)
    SET_BIT(SPCR, 0); // SPR0
    CLR_BIT(SPCR, 1); // SPR1
    CLR_BIT(SPSR, 0); // SPI2X
#elif (SPI_PRESCALER == 32)
    CLR_BIT(SPCR, 0); // SPR0
    SET_BIT(SPCR, 1); // SPR1
    SET_BIT(SPSR, 0); // SPI2X
#elif (SPI_PRESCALER == 64)
    CLR_BIT(SPCR, 0); // SPR0
    SET_BIT(SPCR, 1); // SPR1
    CLR_BIT(SPSR, 0); // SPI2X
#elif (SPI_PRESCALER == 128)
    SET_BIT(SPCR, 0); // SPR0
    SET_BIT(SPCR, 1); // SPR1
    CLR_BIT(SPSR, 0); // SPI2X
#else
    #error "Invalid SPI_PRESCALER"
#endif


    /* SPI Enable */
    SET_BIT(SPCR, 6);
}


u8 Spi_Transfer(u8 data) {
    SPDR = data;
    while (GET_BIT(SPSR, 7) == 0);
    return SPDR;
}

void Spi_WriteDataRegister(u8 data) {
    SPDR = data;
}

void Spi_EnableNotification(void) {
    SET_BIT(SPCR, 7);
}

void Spi_DisableNotification(void) {
    CLR_BIT(SPCR, 7);
}

void Spi_SetCallback(void (*funcPtr)(u8 data)) {
    Spi_Callback = funcPtr;
}
