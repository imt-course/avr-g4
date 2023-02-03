/*
 * Ssd.h
 *
 *  Created on: Feb 3, 2023
 *      Author: ahmad
 */

#ifndef INC_SSD_H_
#define INC_SSD_H_

#include "Types.h"
#include "Ssd_Cfg.h"

void Ssd_Init(void);
void Ssd_DisplayNumber(u8 number);
void Ssd_SetDotOn(void);
void Ssd_SetDotOff(void);

#endif /* INC_SSD_H_ */
