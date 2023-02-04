/*
 * Keypad.h
 *
 *  Created on: Feb 4, 2023
 *      Author: ahmad
 */

#ifndef INC_KEYPAD_H_
#define INC_KEYPAD_H_

typedef enum {
    KEYPAD_BUTTON_00,
    KEYPAD_BUTTON_01,
    KEYPAD_BUTTON_02,
    KEYPAD_BUTTON_03,
    KEYPAD_BUTTON_04,
    KEYPAD_BUTTON_05,
    KEYPAD_BUTTON_06,
    KEYPAD_BUTTON_07,
    KEYPAD_BUTTON_08,
    KEYPAD_BUTTON_09,
    KEYPAD_BUTTON_10,
    KEYPAD_BUTTON_11,
    KEYPAD_BUTTON_12,
    KEYPAD_BUTTON_13,
    KEYPAD_BUTTON_14,
    KEYPAD_BUTTON_15,
} Keypad_ButtonType;

typedef enum {
    KEYPAD_NOT_PRESSED,
    KEYPAD_PRESSED
} Keypad_ButtonStateType;

void Keypad_Init(void);
Keypad_ButtonStateType Keypad_GetButtonState(Keypad_ButtonType button);


#endif /* INC_KEYPAD_H_ */
