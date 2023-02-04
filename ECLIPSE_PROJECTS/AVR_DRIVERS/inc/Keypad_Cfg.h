/*
 * Keypad_Cfg.h
 *
 *  Created on: Feb 4, 2023
 *      Author: ahmad
 */

#ifndef INC_KEYPAD_CFG_H_
#define INC_KEYPAD_CFG_H_

#include "Dio.h"

/***********************************************
*   B00   *   B01   *   B02   *   B03   *  ROW0*
*   B04   *   B05   *   B06   *   B07   *  ROW1*
*   B08   *   B09   *   B10   *   B11   *  ROW2*
*   B12   *   B13   *   B14   *   B15   *  ROW3*
* COLOMN0   COLUMN1   COLUMN2   COLUMN3 *      *
***********************************************/

#define KEYPAD_PIN_R1   DIO_PORTA,DIO_PIN0
#define KEYPAD_PIN_R2   DIO_PORTA,DIO_PIN1
#define KEYPAD_PIN_R3   DIO_PORTA,DIO_PIN2
#define KEYPAD_PIN_R4   DIO_PORTA,DIO_PIN3
#define KEYPAD_PIN_C1   DIO_PORTA,DIO_PIN4
#define KEYPAD_PIN_C2   DIO_PORTA,DIO_PIN5
#define KEYPAD_PIN_C3   DIO_PORTA,DIO_PIN6
#define KEYPAD_PIN_C4   DIO_PORTA,DIO_PIN7

#endif /* INC_KEYPAD_CFG_H_ */
