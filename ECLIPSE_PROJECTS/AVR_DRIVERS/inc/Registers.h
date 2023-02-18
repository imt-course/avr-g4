/*
 * Registers.h
 *
 *  Created on: Jan 27, 2023
 *      Author: ahmad
 */

#ifndef INC_REGISTERS_H_
#define INC_REGISTERS_H_


#include "Types.h"

/************* PORTA Registers *************/
#define DDRA		*((volatile u8*) 0x3A)
#define PORTA		*((volatile u8*) 0x3B)
#define PINA		*((const volatile u8*) 0x39)

/************* PORTB Registers *************/
#define DDRB		*((volatile u8*) 0x37)
#define PORTB		*((volatile u8*) 0x38)
#define PINB		*((const volatile u8*) 0x36)

/************* PORTC Registers *************/
#define DDRC		*((volatile u8*) 0x34)
#define PORTC		*((volatile u8*) 0x35)
#define PINC		*((const volatile u8*) 0x33)

/************* PORTD Registers *************/
#define DDRD		*((volatile u8*) 0x31)
#define PORTD		*((volatile u8*) 0x32)
#define PIND		*((const volatile u8*) 0x30)

/************* Status Register *************/
#define SREG		*((volatile u8*) 0x5F)
#define SREG_I      7

/************* External Interrupt *************/
#define MCUCR		*((volatile u8*) 0x55)
#define MCUCSR		*((volatile u8*) 0x54)
#define GICR		*((volatile u8*) 0x5B)
#define GIFR		*((volatile u8*) 0x5A)
#define MCUCR_ISC00 0
#define MCUCR_ISC01 1
#define MCUCR_ISC10 2
#define MCUCR_ISC11 3
#define MCUCSR_ISC2 6
#define GICR_INT2   5
#define GICR_INT0   6
#define GICR_INT1   7
#define GIFR_INTF2  5
#define GIFR_INTF0  6
#define GIFR_INTF1  7

/************* External Interrupt *************/
#define ADMUX		*((volatile u8*) 0x27)
#define ADCSRA		*((volatile u8*) 0x26)
#define ADCL		*((volatile u8*) 0x24)
#define ADCH		*((volatile u8*) 0x25)
#define SFIOR		*((volatile u8*) 0x50)


#endif /* INC_REGISTERS_H_ */
