/*
 * Spi.h
 *
 *  Created on: Mar 17, 2023
 *      Author: ahmad
 */

#ifndef INC_SPI_H_
#define INC_SPI_H_

#include "Types.h"

void Spi_Init(void);
u8 Spi_Transfer(u8 data);
void Spi_WriteDataRegister(u8 data);
void Spi_EnableNotification(void);
void Spi_DisableNotification(void);
void Spi_SetCallback(void (*funcPtr)(u8 data));

#endif /* INC_SPI_H_ */
