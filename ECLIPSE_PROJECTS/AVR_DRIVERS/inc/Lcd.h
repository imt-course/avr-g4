/*
 * Lcd.h
 *
 *  Created on: Feb 3, 2023
 *      Author: ahmad
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_

#include "Types.h"

void Lcd_Init(void);
void Lcd_DisplayCharcter(char data);
void Lcd_DisplayString(const char* str);

#endif /* INC_LCD_H_ */
