/*
 * Keypad.c
 *
 *  Created on: Feb 4, 2023
 *      Author: ahmad
 */

#include "Types.h"
#include "Dio.h"
#include "Delay.h"
#include "Keypad_Cfg.h"
#include "Keypad.h"

static void Keypad_SetColumnLevel(u8 column, Dio_LevelType level);

void Keypad_Init(void) {
    /* Configure all rows to be input pull up */
    Dio_SetPinMode(KEYPAD_PIN_R1,DIO_MODE_INPUT_PULLUP);
    Dio_SetPinMode(KEYPAD_PIN_R2,DIO_MODE_INPUT_PULLUP);
    Dio_SetPinMode(KEYPAD_PIN_R3,DIO_MODE_INPUT_PULLUP);
    Dio_SetPinMode(KEYPAD_PIN_R4,DIO_MODE_INPUT_PULLUP);
    /* Configure all columns to be output */
    Dio_SetPinMode(KEYPAD_PIN_C1,DIO_MODE_OUTPUT);
    Dio_SetPinMode(KEYPAD_PIN_C2,DIO_MODE_OUTPUT);
    Dio_SetPinMode(KEYPAD_PIN_C3,DIO_MODE_OUTPUT);
    Dio_SetPinMode(KEYPAD_PIN_C4,DIO_MODE_OUTPUT);
    /* Set all columns to low */
    Dio_SetPinLevel(KEYPAD_PIN_C1,DIO_LEVEL_HIGH);
    Dio_SetPinLevel(KEYPAD_PIN_C2,DIO_LEVEL_HIGH);
    Dio_SetPinLevel(KEYPAD_PIN_C3,DIO_LEVEL_HIGH);
    Dio_SetPinLevel(KEYPAD_PIN_C4,DIO_LEVEL_HIGH);
    
}
Keypad_ButtonStateType Keypad_GetButtonState(Keypad_ButtonType button) {
    Keypad_ButtonStateType state = KEYPAD_NOT_PRESSED;
    u8 row = button/4;
    u8 column = button%4;
    /* Set column to low */
    Keypad_SetColumnLevel(column, DIO_LEVEL_LOW);
    /* Read row and check if low */
    switch (row)
    {
    case 0:
        if (Dio_ReadPinLevel(KEYPAD_PIN_R1) == DIO_LEVEL_LOW) {
            _delay_ms(5);
            if (Dio_ReadPinLevel(KEYPAD_PIN_R1) == DIO_LEVEL_LOW) {
                state = KEYPAD_PRESSED;
            }
        }
        break;
    case 1:
        if (Dio_ReadPinLevel(KEYPAD_PIN_R2) == DIO_LEVEL_LOW) {
            _delay_ms(5);
            if (Dio_ReadPinLevel(KEYPAD_PIN_R2) == DIO_LEVEL_LOW) {
                state = KEYPAD_PRESSED;
            }
        }
        break;
    case 2:
        if (Dio_ReadPinLevel(KEYPAD_PIN_R3) == DIO_LEVEL_LOW) {
            _delay_ms(5);
            if (Dio_ReadPinLevel(KEYPAD_PIN_R3) == DIO_LEVEL_LOW) {
                state = KEYPAD_PRESSED;
            }
        }
        break;
    case 3:
        if (Dio_ReadPinLevel(KEYPAD_PIN_R4) == DIO_LEVEL_LOW) {
            _delay_ms(5);
            if (Dio_ReadPinLevel(KEYPAD_PIN_R4) == DIO_LEVEL_LOW) {
                state = KEYPAD_PRESSED;
            }
        }
        break;
    default:
        break;
    }
    /* Reset column level to high */
    Keypad_SetColumnLevel(column, DIO_LEVEL_HIGH);
    return state;
}

static void Keypad_SetColumnLevel(u8 column, Dio_LevelType level) {
    switch (column)
    {
    case 0:
        Dio_SetPinLevel(KEYPAD_PIN_C1, level);
        break;
    case 1:
        Dio_SetPinLevel(KEYPAD_PIN_C2, level);
        break;
    case 2:
        Dio_SetPinLevel(KEYPAD_PIN_C3, level);
        break;
    case 3:
        Dio_SetPinLevel(KEYPAD_PIN_C4, level);
        break;
    default:
        break;
    }
}
