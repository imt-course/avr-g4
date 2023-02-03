/*
 * Ssd_Cfg.h
 *
 *  Created on: Feb 3, 2023
 *      Author: ahmad
 */

#ifndef INC_SSD_CFG_H_
#define INC_SSD_CFG_H_

#include "Dio.h"

#define SSD_COMM_CATHODE    1
#define SSD_COMM_ANODE      2

/************************* USER CONFIGURATIONS *************************/
#define SSD_TYPE        SSD_COMM_CATHODE
#define SSD_PIN_A       DIO_PORTA,DIO_PIN0
#define SSD_PIN_B       DIO_PORTA,DIO_PIN1
#define SSD_PIN_C       DIO_PORTA,DIO_PIN2
#define SSD_PIN_D       DIO_PORTA,DIO_PIN3
#define SSD_PIN_E       DIO_PORTA,DIO_PIN4
#define SSD_PIN_F       DIO_PORTA,DIO_PIN5
#define SSD_PIN_G       DIO_PORTA,DIO_PIN6
#define SSD_PIN_DOT     DIO_PORTA,DIO_PIN7
/********************** END OF USER CONFIGURATIONS **********************/

#endif /* INC_SSD_CFG_H_ */
