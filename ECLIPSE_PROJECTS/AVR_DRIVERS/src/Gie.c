/*
 * Gie.c
 *
 *  Created on: Feb 11, 2023
 *      Author: ahmad
 */
#include "Types.h"
#include "Macros.h"
#include "Registers.h"
#include "Gie.h"


inline void Gie_Enable(void) {
    SET_BIT(SREG, SREG_I);
}

inline void Gie_Disable(void) {
    CLR_BIT(SREG, SREG_I);
}
