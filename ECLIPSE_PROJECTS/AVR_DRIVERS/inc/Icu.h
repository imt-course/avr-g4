/*
 * Icu.h
 *
 *  Created on: Mar 4, 2023
 *      Author: ahmad
 */

#ifndef INC_ICU_H_
#define INC_ICU_H_

#include "Types.h"
#include "Dio.h"

#define ICU_PIN     DIO_PORTD,DIO_PIN6

typedef enum {
    ICU_EDGE_FALLING,
    ICU_EDGE_RISING
} Icu_EdgeType;

void Icu_SetTriggerEdge(Icu_EdgeType edge);
void Icu_EnableNoiseCanceller(void);
void Icu_DisableNoiseCanceller(void);
void Icu_EnableNotification(void);
void Icu_DisableNotification(void);
void Icu_SetCallback(void (*funcPtr) (u16 data));

#endif /* INC_ICU_H_ */
