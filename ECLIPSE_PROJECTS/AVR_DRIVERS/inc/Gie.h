/*
 * Gie.h
 *
 *  Created on: Feb 11, 2023
 *      Author: ahmad
 */

#ifndef INC_GIE_H_
#define INC_GIE_H_

#include "Types.h"
#include "Macros.h"
#include "Registers.h"

inline void Gie_Enable(void) {
    SET_BIT(SREG, SREG_I);
}

inline void Gie_Disable(void) {
    CLR_BIT(SREG, SREG_I);
}

#endif /* INC_GIE_H_ */
