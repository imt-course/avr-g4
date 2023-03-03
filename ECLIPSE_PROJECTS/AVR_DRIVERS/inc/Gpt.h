/*
 * Gpt.h
 *
 *  Created on: Feb 25, 2023
 *      Author: ahmad
 */

#ifndef INC_GPT_H_
#define INC_GPT_H_

#include "Types.h"

typedef enum {
    GPT_CHANNEL_TIM0,
    GPT_CHANNEL_TIM1,
    GPT_CHANNEL_TIM2
} Gpt_ChannelType;

typedef enum {
    GPT_COMP_REG_TIM0,
    GPT_COMP_REG_TIM1A,
    GPT_COMP_REG_TIM1B,
    GPT_COMP_REG_TIM2
} Gpt_CompareRegType;

typedef enum {
    GPT_PRESCALER_1,
    GPT_PRESCALER_8,
    GPT_PRESCALER_64,
    GPT_PRESCALER_256,
    GPT_PRESCALER_1024,
    GPT_PRESCALER_EXT_FALLING,
    GPT_PRESCALER_EXT_RISING,
} Gpt_PrescalerType;

typedef enum {
    GPT_INT_SOURCE_TIM0_COMP,
    GPT_INT_SOURCE_TIM0_OVF,
    GPT_INT_SOURCE_TIM1_CAPT,
    GPT_INT_SOURCE_TIM1A_COMP,
    GPT_INT_SOURCE_TIM1B_COMP,
    GPT_INT_SOURCE_TIM1_OVF,
    GPT_INT_SOURCE_TIM2_COMP,
    GPT_INT_SOURCE_TIM2_OVF,
} Gpt_InterruptSourceType;

typedef enum {
    GPT_MODE_NORMAL,
    GPT_MODE_CTC
} GptModeType;

typedef enum {
    GPT_COMP_OUT_DISCONNECTED,
    GPT_COMP_OUT_TOGGLE,
    GPT_COMP_OUT_CLEAR,
    GPT_COMP_OUT_SET
} Gpt_CompareOutModeType;

typedef struct 
{
    GptModeType mode;
    Gpt_CompareOutModeType compareOutMode;
} Gpt_ConfigType;

extern Gpt_ConfigType Gpt_Configuration[3];

void Gpt_Init(Gpt_ChannelType channel, const Gpt_ConfigType* config);
void Gpt_SetCompareReg(Gpt_CompareRegType reg, u16 value);
void Gpt_Start(Gpt_ChannelType channel, Gpt_PrescalerType prescaler);
void Gpt_Stop(Gpt_ChannelType channel);
void Gpt_SetCounterValue(Gpt_ChannelType channel, u16 value);
u16 Gpt_GetCounterValue(Gpt_ChannelType channel);
void Gpt_EnableNotification(Gpt_InterruptSourceType source);
void Gpt_DisbleNotification(Gpt_InterruptSourceType source);
void Gpt_SetCallback(Gpt_InterruptSourceType source, void (*funcPtr) (void));


#endif /* INC_GPT_H_ */
