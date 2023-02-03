/*
 * Led_Cfg.h
 *
 *  Created on: Jan 28, 2023
 *      Author: ahmad
 */

#ifndef INC_LED_CFG_H_
#define INC_LED_CFG_H_

#include "Dio.h"

/************************* USER CONFIGURATIONS *************************/
#define LED_ON_VOLTAGE  DIO_LEVEL_HIGH

#define LED1_PIN        DIO_PORTA,DIO_PIN0
#define LED2_PIN        DIO_PORTB,DIO_PIN5
/********************** END OF USER CONFIGURATIONS **********************/

#endif /* INC_LED_CFG_H_ */
