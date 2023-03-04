/*
 * Wdt.c
 *
 *  Created on: Mar 4, 2023
 *      Author: ahmad
 */
#include "Types.h"
#include "Macros.h"
#include "Registers.h"
#include "Wdt.h"

void Wdt_Enable(void) {
    SET_BIT(WDTCR, 3);
}

void Wdt_Disable(void) {
    /* In the same operation, write a logic one to WDTOE and WDE. */
    WDTCR |= (1<<3) | (1<<4);
    /* Within the next four clock cycles, write a logic 0 to WDE */
    WDTCR &= 0b11110111;
}   

void Wdt_Sleep(Wdt_SleepTimeType time) {
    if (time <= WDT_TIME_2100_MS) {
        WDTCR &= 0b11111000;
        WDTCR |= time;
    }
}
