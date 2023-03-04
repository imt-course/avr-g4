/*
 * Icu.c
 *
 *  Created on: Mar 4, 2023
 *      Author: ahmad
 */

#include "Types.h"
#include "Registers.h"
#include "Macros.h"
#include "Interrupts.h"
#include "Icu.h"

void (*Icu_Callback) (u16 data) = NULL_PTR;

ISR(VECTOR_TIM1_CAPT) {
    if (NULL_PTR != Icu_Callback) {
        Icu_Callback(ICR1);
    }
}

void Icu_SetTriggerEdge(Icu_EdgeType edge) {
    switch (edge)
    {
    case ICU_EDGE_FALLING:
        CLR_BIT(TCCR1B, 6);
        break;
    case ICU_EDGE_RISING:
        SET_BIT(TCCR1B, 6);
        break;
    default:
        break;
    }
}

void Icu_EnableNoiseCanceller(void) {
    SET_BIT(TCCR1B, 7);
}

void Icu_DisableNoiseCanceller(void) {
    CLR_BIT(TCCR1B, 7);
}

void Icu_EnableNotification(void) {
    SET_BIT(TIMSK, 5);
}

void Icu_DisableNotification(void) {
    CLR_BIT(TIMSK, 5);
}

void Icu_SetCallback(void (*funcPtr) (u16 data)) {
    Icu_Callback = funcPtr;
}
