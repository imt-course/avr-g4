/*
 * Adc.c
 *
 *  Created on: Feb 18, 2023
 *      Author: ahmad
 */
#include "Types.h"
#include "Registers.h"
#include "Macros.h"
#include "Interrupts.h"
#include "Adc.h"

void Adc_Init(void) {
    /* ADC Enable */
    SET_BIT(ADCSRA, 7);
    /* ADC Prescaler Select Bits */
    SET_BIT(ADCSRA, 2);
    SET_BIT(ADCSRA, 1);
    SET_BIT(ADCSRA, 0);
    /* Reference Selection Bits */
    SET_BIT(ADMUX, 6);
    CLR_BIT(ADMUX, 7);
    /* ADC Left Adjust Result */
    CLR_BIT(ADMUX, 5); // Right
}

void Adc_StartConversion(Adc_ChannelType channel) {
    /* Wait for current conversion */
    while(GET_BIT(ADCSRA, 6) == 1);
    /* Analog Channel and Gain Selection Bits */
    switch (channel)
    {
    case ADC_CHANNEL_ADC0:
        CLR_BIT(ADMUX, 4);
        CLR_BIT(ADMUX, 3);
        CLR_BIT(ADMUX, 2);
        CLR_BIT(ADMUX, 1);
        CLR_BIT(ADMUX, 0);
        break;
    
    default:
        break;
    }
    /* ADC Start Conversion */
    SET_BIT(ADCSRA, 6);
}

u16 Adc_GetResult(void) {
    /* Wait for flag*/
    while (GET_BIT(ADCSRA, 4) == 0);
    /* Clear Flag */
    SET_BIT(ADCSRA, 4);
    /* Return Result */
    return (((ADCH<<8) | ADCL) & 0x3FF);
}
