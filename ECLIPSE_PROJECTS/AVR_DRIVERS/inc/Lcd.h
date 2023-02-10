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
void Lcd_DisplayNumber(s32 number);
void Lcd_SetCursorPosition(u8 row, u8 column);
void Lcd_ClearDisplay(void);
void Lcd_ShiftDisplayLeft(u8 count);
void Lcd_ShiftDisplayRight(u8 count);
void Lcd_ShiftCursorLeft(u8 count);
void Lcd_ShiftCursorRight(u8 count);
void Lcd_ReturnHome(void);
void Lcd_SaveSpecialCharacter(u8 location, u8* pattern);
#endif /* INC_LCD_H_ */
