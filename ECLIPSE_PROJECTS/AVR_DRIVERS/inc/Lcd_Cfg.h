/*
 * Lcd_Cfg.h
 *
 *  Created on: Feb 3, 2023
 *      Author: ahmad
 */

#ifndef INC_LCD_CFG_H_
#define INC_LCD_CFG_H_

#include "Dio.h"

#define LCD_PIN_RS      DIO_PORTB,DIO_PIN0
#define LCD_PIN_RW      DIO_PORTB,DIO_PIN1
#define LCD_PIN_EN      DIO_PORTB,DIO_PIN2

#define LCD_PIN_D0      DIO_PORTC,DIO_PIN0
#define LCD_PIN_D1      DIO_PORTC,DIO_PIN1
#define LCD_PIN_D2      DIO_PORTC,DIO_PIN2
#define LCD_PIN_D3      DIO_PORTC,DIO_PIN3
#define LCD_PIN_D4      DIO_PORTC,DIO_PIN4
#define LCD_PIN_D5      DIO_PORTC,DIO_PIN5
#define LCD_PIN_D6      DIO_PORTC,DIO_PIN6
#define LCD_PIN_D7      DIO_PORTC,DIO_PIN7

#endif /* INC_LCD_CFG_H_ */
