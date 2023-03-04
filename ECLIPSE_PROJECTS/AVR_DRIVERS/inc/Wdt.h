/*
 * Wdt.h
 *
 *  Created on: Mar 4, 2023
 *      Author: ahmad
 */

#ifndef INC_WDT_H_
#define INC_WDT_H_

typedef enum {
    WDT_TIME_16_3_MS,
    WDT_TIME_32_5_MS,
    WDT_TIME_65_MS,
    WDT_TIME_130_MS,
    WDT_TIME_260_MS,
    WDT_TIME_520_MS,
    WDT_TIME_1000_MS,
    WDT_TIME_2100_MS
} Wdt_SleepTimeType;

void Wdt_Enable(void);
void Wdt_Disable(void);
void Wdt_Sleep(Wdt_SleepTimeType time);

#endif /* INC_WDT_H_ */
