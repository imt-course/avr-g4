/*
 * Lcd.h
 *
 *  Created on: Feb 3, 2023
 *      Author: ahmad
 */

#ifndef INC_LCD_H_
#define INC_LCD_H_

#include "Types.h"

typedef enum {
    LCD_STATE_OFF,
    LCD_STATE_ON
} Lcd_StateType;

typedef enum {
    LCD_LINES_1,
    LCD_LINES_2
} Lcd_LinesType;

typedef enum {
    LCD_FONT_5X7,
    LCD_FONT_5X10
} Lcd_FontType;

typedef struct  
{
    Lcd_StateType display;
    Lcd_StateType cursor;
    Lcd_StateType cursorBlink;
    Lcd_LinesType lines;
    Lcd_FontType font;
} Lcd_DisplayControlType;

void Lcd_Init(const Lcd_DisplayControlType* control);
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
void Lcd_ControlDisplay(const Lcd_DisplayControlType* control);

extern Lcd_DisplayControlType Lcd_Configuration;
#endif /* INC_LCD_H_ */
