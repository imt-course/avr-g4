/*
 * Interrupts.h
 *
 *  Created on: Feb 17, 2023
 *      Author: ahmad
 */

#ifndef INC_INTERRUPTS_H_
#define INC_INTERRUPTS_H_

#define VECTOR_INT0 __vetor_1
#define VECTOR_INT1 __vetor_2
#define VECTOR_INT2 __vetor_3


#define ISR(vector) void vector (void) __attribute__((signal));\
void vector (void)


#endif /* INC_INTERRUPTS_H_ */
