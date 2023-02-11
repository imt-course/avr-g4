/*
 * ExtInt.c
 *
 *  Created on: Feb 11, 2023
 *      Author: ahmad
 */
#include "Types.h"
#include "Registers.h"
#include "Macros.h"
#include "ExtInt.h"



void ExtInt_SetTriggerEdge(ExtInt_ChannelType channel, ExtInt_TriggerEdgeType edge) {
    switch (channel)
    {
    case EXTINT_INT_CHANNEL_INT0:
        switch (edge)
        {
        case EXTINT_TRIGGER_EDGW_LOW_LEVEL:
            CLR_BIT(MCUCR, MCUCR_ISC00);
            CLR_BIT(MCUCR, MCUCR_ISC01);
            break;
        case EXTINT_TRIGGER_EDGW_ON_CHANGE:
            SET_BIT(MCUCR, MCUCR_ISC00);
            CLR_BIT(MCUCR, MCUCR_ISC01);
            break;
        case EXTINT_TRIGGER_EDGW_FALLING:
            CLR_BIT(MCUCR, MCUCR_ISC00);
            SET_BIT(MCUCR, MCUCR_ISC01);
            break;
        case EXTINT_TRIGGER_EDGW_RISING:
            SET_BIT(MCUCR, MCUCR_ISC00);
            SET_BIT(MCUCR, MCUCR_ISC01);
            break;
        default:
            break;
        }
        break;

    case EXTINT_INT_CHANNEL_INT1:
        switch (edge)
        {
        case EXTINT_TRIGGER_EDGW_LOW_LEVEL:
            CLR_BIT(MCUCR, MCUCR_ISC10);
            CLR_BIT(MCUCR, MCUCR_ISC11);
            break;
        case EXTINT_TRIGGER_EDGW_ON_CHANGE:
            SET_BIT(MCUCR, MCUCR_ISC10);
            CLR_BIT(MCUCR, MCUCR_ISC11);
            break;
        case EXTINT_TRIGGER_EDGW_FALLING:
            CLR_BIT(MCUCR, MCUCR_ISC10);
            SET_BIT(MCUCR, MCUCR_ISC11);
            break;
        case EXTINT_TRIGGER_EDGW_RISING:
            SET_BIT(MCUCR, MCUCR_ISC10);
            SET_BIT(MCUCR, MCUCR_ISC11);
            break;
        default:
            break;
        }
        break;

    case EXTINT_INT_CHANNEL_INT2:
        switch (edge)
        {
        case EXTINT_TRIGGER_EDGW_FALLING:
            CLR_BIT(MCUCSR, MCUCSR_ISC2);
            break;
        case EXTINT_TRIGGER_EDGW_RISING:
            SET_BIT(MCUCSR, MCUCSR_ISC2);
            break;
        default:
            break;
        }
        break;

    default:
        break;
    }
}
void ExtInt_EnableNotification(ExtInt_ChannelType channel) {
    switch (channel)
    {
    case EXTINT_INT_CHANNEL_INT0:
        SET_BIT(GICR, GICR_INT0);
        break;
    case EXTINT_INT_CHANNEL_INT1:
        SET_BIT(GICR, GICR_INT1);
        break;
    case EXTINT_INT_CHANNEL_INT2:
        SET_BIT(GICR, GICR_INT2);
        break;
    default:
        break;
    }
}

void ExtInt_DisableNotification(ExtInt_ChannelType channel) {
    switch (channel)
    {
    case EXTINT_INT_CHANNEL_INT0:
        CLR_BIT(GICR, GICR_INT0);
        break;
    case EXTINT_INT_CHANNEL_INT1:
        CLR_BIT(GICR, GICR_INT1);
        break;
    case EXTINT_INT_CHANNEL_INT2:
        CLR_BIT(GICR, GICR_INT2);
        break;
    default:
        break;
    }
}
