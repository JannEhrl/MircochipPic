//-----------------------------------PINS---------------------------------------
//
//---------------------------------Includes-------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "Pins.h"
#include "Clock.h"
//------------------------------------------------------------------------------
//
//---------------------------------Functions------------------------------------
void PINS_init()
{
    TRISA = 0xFF;                     // Input as Protection and defined state
    TRISB = 0xFF;                     // Input as Protection and defined state
   
    PORTA = 0xFF;                     // Not Reading Input                 
    PORTB = 0xFF;                     // Not Reading Input
}



void PinMapping_init()
{
    RPOR2bits.RP39R = 0b10000;  // Output Compare to Port RP39
    RPOR0bits.RP20R = 0b10001;  // Output Compare to RP20
}
//------------------------------------------------------------------------------

void LED_init()
{
    TRISBbits.TRISB13 = 0;
    //ANSELBbits.ANSB13 = 0;
}

void LED_On()
{
    LATBbits.LATB13 = 1;
}

void LED_Off()
{
    LATBbits.LATB13 = 0;
}

void LED_Blink()
{
   int i;
   
   LED_Off();
   for(i = 0; i < 1000;i++)
   {
       Delay_us(1000);
   }
   LED_On();
   for(i = 0; i < 1000;i++)
   {
       Delay_us(1000);
   }
}