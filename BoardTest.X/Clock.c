//----------------------------------Clock---------------------------------------
//
//---------------------------------Includes-------------------------------------
#include <p33EP32MC202.h>
#include <stdio.h>
#include <stdlib.h>
#include <xc.h>
#include "Clock.h"
//------------------------------------------------------------------------------
//
//---------------------------------Functions------------------------------------
void Clock_init(void)
{  
    OSCCONbits.COSC = 0b001;      // Primary Oscillator
    CLKDIVbits.ROI = 0;           //  0 = Interrupts have no effect on the DOZEN bit    
    CLKDIVbits.DOZE = 0b000;      // 000 = FCY divided by 1
    CLKDIVbits.DOZEN = 0;         // 0 = Processor clock and peripheral clock ratio is forced to 1:1
    CLKDIVbits.FRCDIV = 0b000;    // 000 = FRC divided by 1 (default)
    CLKDIVbits.PLLPOST = 0b00;    // 10 = Reserved (alle anderen optionen sind divisionen)
    CLKDIVbits.PLLPRE = 0b00000;
    PLLFBDbits.PLLDIV = 0b001000111; // Feedback divisor bits = 511 + 2
    //Frequenz = 62.125 MHz
}

void Delay_us(unsigned int delay)
{
char i = 0;
for (i = 0; i < delay; i++)
{
__asm__ volatile ("repeat #39");
__asm__ volatile ("nop");
}
}
//------------------------------------------------------------------------------
