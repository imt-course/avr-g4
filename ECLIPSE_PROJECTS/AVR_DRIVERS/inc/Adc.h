/*
 * Adc.h
 *
 *  Created on: Feb 18, 2023
 *      Author: ahmad
 */

#ifndef INC_ADC_H_
#define INC_ADC_H_

#include "Types.h"

typedef enum
{
    ADC_CHANNEL_ADC0,
    ADC_CHANNEL_ADC1,
    ADC_CHANNEL_ADC2,
    ADC_CHANNEL_ADC3,
    ADC_CHANNEL_ADC4,
    ADC_CHANNEL_ADC5,
    ADC_CHANNEL_ADC6,
    ADC_CHANNEL_ADC7,
    ADC_CHANNEL_ADC0_ADC0_10X,
    ADC_CHANNEL_ADC1_ADC0_10X,
    ADC_CHANNEL_ADC0_ADC0_200X,
    ADC_CHANNEL_ADC1_ADC0_200X,
    ADC_CHANNEL_ADC2_ADC2_10X,
    ADC_CHANNEL_ADC3_ADC2_10X,
    ADC_CHANNEL_ADC2_ADC2_200X,
    ADC_CHANNEL_ADC3_ADC2_200X,
    ADC_CHANNEL_ADC0_ADC1_1X,
    ADC_CHANNEL_ADC1_ADC1_1X,
    ADC_CHANNEL_ADC2_ADC1_1X,
    ADC_CHANNEL_ADC3_ADC1_1X,
    ADC_CHANNEL_ADC4_ADC1_1X,
    ADC_CHANNEL_ADC5_ADC1_1X,
    ADC_CHANNEL_ADC6_ADC1_1X,
    ADC_CHANNEL_ADC7_ADC1_1X,
    ADC_CHANNEL_ADC0_ADC2_1X,
    ADC_CHANNEL_ADC1_ADC2_1X,
    ADC_CHANNEL_ADC2_ADC2_1X,
    ADC_CHANNEL_ADC3_ADC2_1X,
    ADC_CHANNEL_ADC4_ADC2_1X,
    ADC_CHANNEL_ADC5_ADC2_1X,
    ADC_CHANNEL_1_22_V,
    ADC_CHANNEL_GND
} Adc_ChannelType;


void Adc_Init(void);
void Adc_StartConversion(Adc_ChannelType channel);
u16 Adc_GetResult(void);
void Adc_EnableNotification(void);
void Adc_DisableNotification(void);
void Adc_SetCallback(void (*funcPtr) (u16 data));


#endif /* INC_ADC_H_ */
