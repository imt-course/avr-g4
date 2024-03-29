/*
 * Lcd.c
 *
 *  Created on: Feb 3, 2023
 *      Author: ahmad
 */

#include "Types.h"
#include "Macros.h"
#include "Dio.h"
#include "Delay.h"
#include "Lcd_Cfg.h"
#include "Lcd.h"

static void Lcd_SendCommand(u8 command);
static void Lcd_SendData(u8 data);

void Lcd_Init(const Lcd_DisplayControlType* control) {
    Dio_SetPinMode(LCD_PIN_RS, DIO_MODE_OUTPUT);
    Dio_SetPinMode(LCD_PIN_RW, DIO_MODE_OUTPUT);
    Dio_SetPinMode(LCD_PIN_D0, DIO_MODE_OUTPUT);
    Dio_SetPinMode(LCD_PIN_D1, DIO_MODE_OUTPUT);
    Dio_SetPinMode(LCD_PIN_D2, DIO_MODE_OUTPUT);
    Dio_SetPinMode(LCD_PIN_D3, DIO_MODE_OUTPUT);
    Dio_SetPinMode(LCD_PIN_D4, DIO_MODE_OUTPUT);
    Dio_SetPinMode(LCD_PIN_D5, DIO_MODE_OUTPUT);
    Dio_SetPinMode(LCD_PIN_D6, DIO_MODE_OUTPUT);
    Dio_SetPinMode(LCD_PIN_D7, DIO_MODE_OUTPUT);
    Dio_SetPinMode(LCD_PIN_EN, DIO_MODE_OUTPUT);
    Lcd_ControlDisplay(control);
    /* Display Clear*/
    Lcd_SendCommand(0b00000001);
}

void Lcd_DisplayCharcter(char data) {
    Lcd_SendData(data);
}

void Lcd_DisplayString(const char* str) {
    while (*str != '\0') {
        Lcd_SendData(*str);
        str++;
    }    
}

void Lcd_DisplayNumber(s32 number) {
    u32 reversed = 0;
    if (number == 0) {
        Lcd_SendData('0');
    }
    else if (number < 0) {
        Lcd_SendData('-');
        number *= -1;
    }
    while (number != 0) 
    {
        reversed = (reversed*10) + (number%10);
        number /= 10;
    }
    while (reversed != 0)
    {
        Lcd_SendData(reversed%10 + '0');
        reversed /= 10;
    }    
}


void Lcd_SetCursorPosition(u8 row, u8 column) {
    u8 address = row*0x40 + column;
    SET_BIT(address, 7);
    Lcd_SendCommand(address);
}

void Lcd_ClearDisplay(void) {
    Lcd_SendCommand(0b00000001);
}

void Lcd_ShiftDisplayLeft(u8 count) {
    while (count > 0) {
        Lcd_SendCommand(0b00011000);
        count--;
    }
}

void Lcd_ShiftDisplayRight(u8 count) {
    while (count > 0) {
        Lcd_SendCommand(0b00011100);
        count--;
    }
}

void Lcd_ShiftCursorLeft(u8 count) {
    while (count > 0) {
        Lcd_SendCommand(0b00010000);
        count--;
    }
}

void Lcd_ShiftCursorRight(u8 count) {
    while (count > 0) {
        Lcd_SendCommand(0b00010100);
        count--;
    }
}

void Lcd_ReturnHome(void) {
    Lcd_SendCommand(0b00000010);
}

void Lcd_SaveSpecialCharacter(u8 location, u8* pattern) {
    u8 i;
    location *= 8;
    if (location < 64) {
        SET_BIT(location, 6);
        Lcd_SendCommand(location);
        for (i=0; i<8; i++) {
            Lcd_SendData(pattern[i]);
        }
    }
}

void Lcd_ControlDisplay(const Lcd_DisplayControlType* control) {
    u8 command;
    /* Display ON/OFF Control */
    command = 0b00001000;
    if (control->display == LCD_STATE_ON) {
        SET_BIT(command, 2);
    }
    if (control->cursor == LCD_STATE_ON) {
        SET_BIT(command, 1);
    }
    if (control->cursorBlink == LCD_STATE_ON) {
        SET_BIT(command, 0);
    }
    Lcd_SendCommand(command);
    /* Function Set */
#if LCD_MODE == LCD_MODE_8_BIT
    command = 0b00110000;
#elif LCD_MODE == LCD_MODE_4_BIT
    command = 0b00010000;
#endif
    if (control->lines == LCD_LINES_2) {
        SET_BIT(command, 3);
    }
    if (control->font == LCD_FONT_5X10) {
        SET_BIT(command, 2);
    }
    Lcd_SendCommand(command);
}


static void Lcd_SendCommand(u8 command) {
    Dio_SetPinLevel(LCD_PIN_RS, DIO_LEVEL_LOW);
    Dio_SetPinLevel(LCD_PIN_RW, DIO_LEVEL_LOW);
    Dio_SetPinLevel(LCD_PIN_D0, GET_BIT(command, 0));
    Dio_SetPinLevel(LCD_PIN_D1, GET_BIT(command, 1));
    Dio_SetPinLevel(LCD_PIN_D2, GET_BIT(command, 2));
    Dio_SetPinLevel(LCD_PIN_D3, GET_BIT(command, 3));
    Dio_SetPinLevel(LCD_PIN_D4, GET_BIT(command, 4));
    Dio_SetPinLevel(LCD_PIN_D5, GET_BIT(command, 5));
    Dio_SetPinLevel(LCD_PIN_D6, GET_BIT(command, 6));
    Dio_SetPinLevel(LCD_PIN_D7, GET_BIT(command, 7));
    Dio_SetPinLevel(LCD_PIN_EN, DIO_LEVEL_HIGH);
    _delay_ms(2);
    Dio_SetPinLevel(LCD_PIN_EN, DIO_LEVEL_LOW);
}

static void Lcd_SendData(u8 data) {
    Dio_SetPinLevel(LCD_PIN_RS, DIO_LEVEL_HIGH);
    Dio_SetPinLevel(LCD_PIN_RW, DIO_LEVEL_LOW);
    Dio_SetPinLevel(LCD_PIN_D0, GET_BIT(data, 0));
    Dio_SetPinLevel(LCD_PIN_D1, GET_BIT(data, 1));
    Dio_SetPinLevel(LCD_PIN_D2, GET_BIT(data, 2));
    Dio_SetPinLevel(LCD_PIN_D3, GET_BIT(data, 3));
    Dio_SetPinLevel(LCD_PIN_D4, GET_BIT(data, 4));
    Dio_SetPinLevel(LCD_PIN_D5, GET_BIT(data, 5));
    Dio_SetPinLevel(LCD_PIN_D6, GET_BIT(data, 6));
    Dio_SetPinLevel(LCD_PIN_D7, GET_BIT(data, 7));
    Dio_SetPinLevel(LCD_PIN_EN, DIO_LEVEL_HIGH);
    _delay_ms(2);
    Dio_SetPinLevel(LCD_PIN_EN, DIO_LEVEL_LOW);
}
