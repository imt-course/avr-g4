/*
 * main.c
 *
 *  Created on: Jan 27, 2023
 *      Author: ahmad
 */



#include "Types.h"
#include "Macros.h"
#include "Dio.h"
#include "Led.h"
#include "Button.h"
#include "Ssd.h"
#include "Lcd.h"
#include "Keypad.h"
#include "Gie.h"
#include "ExtInt.h"
#include "Adc.h"
#include "Delay.h"

void Handler_Int0 (void) {
	Led_Flip(LED1_PIN);
}

int main (void) {
	u16 result = 0;
	u8 i;
	Adc_Init();
	Lcd_Init(&Lcd_Configuration);
	while (1)	
	{
		result = 0;
		for (i=0; i<10; i++) {
			Adc_StartConversion(ADC_CHANNEL_ADC0);
			result += Adc_GetResult();
			_delay_ms(10);
		}
		result /= 10;
		Lcd_ClearDisplay();
		Lcd_DisplayString("Adc = ");
		Lcd_DisplayNumber(((u32)result*5000/1024));
		_delay_ms(500);
	}
	

#if 0
	Button_Init(EXTINT_PIN_INT0);
	Led_Init(LED1_PIN);
	ExtInt_SetTriggerEdge(EXTINT_INT_CHANNEL_INT0, EXTINT_TRIGGER_EDGW_FALLING);
	ExtInt_SetCallback(EXTINT_INT_CHANNEL_INT0, Handler_Int0);
	ExtInt_EnableNotification(EXTINT_INT_CHANNEL_INT0);
	Gie_Enable();

	while (1)
	{
		
	}
#endif


#if 0
	u8 pattern[] = {
		0b00110,
		0b01100,
		0b00000,
		0b00100,
		0b00100,
		0b00100,
		0b00100,
		0b00000
	};
	Lcd_Init(&Lcd_Configuration);
	Lcd_SaveSpecialCharacter(0, pattern);
	Lcd_SetCursorPosition(1,0);
	Lcd_DisplayCharcter(0);
#endif

#if 0
	u8 flag[16] = {0};
	Keypad_ButtonType i;
	Keypad_Init();
	Lcd_Init();
	Lcd_DisplayCharcter('*');
	while (1)
	{
		for (i=KEYPAD_BUTTON_00; i<=KEYPAD_BUTTON_15; i++) {
			if (Keypad_GetButtonState(i) == KEYPAD_PRESSED) {
				if (flag[i] == 0) {
					flag[i] = 1;
					Lcd_DisplayNumber(i);
				}
			}
			else {
				flag[i] = 0;
			}
		}
	}

#endif
#if 0
	Lcd_Init();
	Lcd_DisplayString("My name is Hassan");
	Lcd_DisplayCharcter('A');
	Lcd_DisplayCharcter('h');
	Lcd_DisplayCharcter('m');
	Lcd_DisplayCharcter('e');
	Lcd_DisplayCharcter('d');
	Lcd_DisplayNumber(2147483645);
#endif

/************************** DIO **************************/
#if 0
	/* Toggle LED every 500 ms */
	/* Set pin direction to output */
	SET_BIT(DDRA,3);
	while (1) {
		/* Set pin level to high (LED ON) */
		SET_BIT(PORTA,3);
		_delay_ms(500);
		/* Set pin level to low (LED OFF) */
		CLR_BIT(PORTA,3);
		_delay_ms(500);
	}
#endif

#if 0
	/*
	 *  LED:    PIN A0
	 *  SWITCH: PIN A1
	 */

	/* Set LED pin as output */
	SET_BIT(DDRA,0);
	/* Set SWITCH pin as input */
	CLR_BIT(DDRA,1);
	/* Activate Pull Up Resistor */
	SET_BIT(PORTA, 1);

	/* Check if switch is pressed */
	for (;;) {
		if (GET_BIT(PINA, 1) == 0) {
			/* Turn LED on */
			SET_BIT(PORTA,0);
		}
		else {
			/* Turn LED off */
			CLR_BIT(PORTA,0);
		}
	}
#endif

#if 0
	Led_Init(LED1_PIN);
	Button_Init(BUTTON_PIN);

	while (1)
	{
		if (Button_GetStatus(BUTTON_PIN) == BUTTON_PRESSED) {
			Led_TurnOn(LED1_PIN);
		}
		else {
			Led_TurnOff(LED1_PIN);
		}
	}
#endif

#if 0
	u8 i;
	Ssd_Init();
	while (1)
	{
		for (i=0; i<9; i++) {
			Ssd_DisplayNumber(i);
			_delay_ms(1000);
		}
		for (i=9; i>0; i--) {
			Ssd_DisplayNumber(i);
			_delay_ms(1000);
		}
	}

#endif

}
