/*
 * Button_Cfg.h
 *
 *  Created on: Feb 3, 2023
 *      Author: ahmad
 */

#ifndef INC_BUTTON_CFG_H_
#define INC_BUTTON_CFG_H_

#define BUTTON_CONNECTION_PULLUP    1
#define BUTTON_CONNECTION_PULLDOWN  2

/************************* USER CONFIGURATIONS *************************/
#define BUTTON_CONNECTION           BUTTON_CONNECTION_PULLUP

#define BUTTON_PIN                  DIO_PORTA,DIO_PIN1
#define BUTTON2_PIN                 DIO_PORTB,DIO_PIN1
/********************** END OF USER CONFIGURATIONS **********************/

#endif /* INC_BUTTON_CFG_H_ */
