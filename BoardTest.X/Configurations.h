/* 
 * File:   Configurations.h
 * Author: je
 *
 * Created on 19. Februar 2018, 10:58
 */

#ifndef CONFIGURATIONS_H
#define	CONFIGURATIONS_H

#ifdef	__cplusplus
extern "C" {
#endif

//-----------------------------Configurations-----------------------------------
#pragma config GCP = 1            /* (General Segment Code Pretect)             1 = User program memory is not code-protected 
                                                                                0 = Code protection is enabled for the entire program memory space */
    
#pragma config GWRP = 1           /* (General Segment Write Protect)            1 = User program memory is not write-protected 
                                                                                0 = User program memory is write-protected */
    
#pragma config IESO = 0           /* (Two-Speed Oscillator Start-up Enable bit) 1 = Start up device with FRC, then automatically switch to the user-selected oscillator source when ready 
                                                                                0 = Start up device with user-selected oscillator source */
    
#pragma config PWMLOCK = 0        /* (PWM Lock Enable bit)                      1 = Certain PWM registers may only be written after a key sequence 
                                                                                0 = PWM registers may be written without a key sequence */
    
#pragma config FNOSC = 0b001      /* (Oscillator Selection bits)                111 = Fast RC Oscillator with Divide-by-N (FRCDIVN)
                                                                                110 = Fast RC Oscillator with Divide-by-16 (FRCDIV16)
                                                                                101 = Low-Power RC Oscillator (LPRC)
                                                                                100 = Reserved; do not use
                                                                                011 = Primary Oscillator with PLL module (XT + PLL, HS + PLL, EC + PLL)
                                                                                010 = Primary Oscillator (XT, HS, EC)
                                                                                001 = Fast RC Oscillator with Divide-by-N with PLL module (FRCPLL)
                                                                                000 = Fast RC Oscillator (FRC) */
    
#pragma config FCKSM = 0b00       /* (Clock Switching Mode bits)                1x = Clock switching is disabled, Fail-Safe Clock Monitor is disabled
                                                                                01 = Clock switching is enabled, Fail-Safe Clock Monitor is disabled
                                                                                00 = Clock switching is enabled, Fail-Safe Clock Monitor is enabled */
    
#pragma config IOL1WAY = 0        /* (Peripheral Pin Select Configuration bit)  1 = Allow only one reconfiguration
                                                                                0 = Allow multiple reconfigurations */
    
#pragma config OSCIOFNC = 0       /* (OSC2 Pin Function bit(except in XT and HS modes) 
                                                                                1 = OSC2 is the clock output
                                                                                0 = OSC2 is a general purpose digital I/O pin */
    
//#pragma config POSCMD = 0b11    /* (Primary Oscillator Mode Select bits)      11 = Primary Oscillator is disabled  //REINGENOMMEN WEIL WICHTIG AUSSAH UND NOCH NICHT DRIN WAR ABER ZUR SICHERHEIT AUSKOMMENTIERT
                                                                                // 10 = HS Crystal Oscillator mode
                                                                                //  01 = XT Crystal Oscillator mode
                                                                                //   00 = EC (External Clock) mode */
#pragma config FWDTEN = 1         /* (Watchdog Timer Enable bit)                1 = Watchdog Timer is always enabled (LPRC oscillator cannot be disabled. Clearing the SWDTEN bit in the RCON register will have no effect.)
                                                                                0 = Watchdog Timer is enabled/disabled by user software (LPRC can be disabled by clearing the SWDTEN bit in the RCON register) */

#pragma config WINDIS = 0         /* (Watchdog Timer Window Enable bit)         1 = Watchdog Timer in Non-Window mode
                                                                                0 = Watchdog Timer in Window mode */
    
#pragma config PLLKEN = 0         /* (PLL Lock Enable bit)                      1 = PLL lock is enabled
                                                                                0 = PLL lock is disabled */
    
#pragma config WDTPRE = 1         /* (Watchdog Timer Prescaler bit)             1 = 1:128
                                                                                0 = 1:32 */
    
#pragma config WDTPOST = 0b1111   /* (Watchdog Timer Postscaler bits)           1111 = 1:32,768
                                                                                1110 = 1:16,384
                                                                                ?
                                                                                ?
                                                                                ?
                                                                                0001 = 1:2
                                                                                0000 = 1:1 */
    
#pragma config WDTWIN = 0b11      /* (Watchdog Window Select bits)              11 = WDT window is 25% of WDT period
                                                                                10 = WDT window is 37.5% of WDT period
                                                                                01 = WDT window is 50% of WDT period
                                                                                00 = WDT window is 75% of WDT period */

#pragma config JTAGEN = 0         /* (JTAG Enable bit )                         1 = JTAG is enabled
                                                                                0 = JTAG is disabled */
    
#pragma config ICS = PGD2         /* (ICD Communication Channel Select bits)    11 = Communicate on PGEC1 and PGED1
                                                                                10 = Communicate on PGEC2 and PGED2
                                                                                01 = Communicate on PGEC3 and PGED3
                                                                                00 = Reserved, do not use */
//------------------------------------------------------------------------------


#ifdef	__cplusplus
}
#endif

#endif	/* CONFIGURATIONS_H */




