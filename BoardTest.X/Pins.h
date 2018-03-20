/* 
 * File:   Pins.h
 * Author: je
 *
 * Created on 19. Februar 2018, 13:47
 */

#ifndef PINS_H
#define	PINS_H

#ifdef	__cplusplus
extern "C" {
#endif

//----------------------------Function Prototype--------------------------------
void PINS_init();
void PinMapping_init();
void LED_init();
void LED_On();
void LED_Off();
void LED_Blink();
//------------------------------------------------------------------------------

#ifdef	__cplusplus
}
#endif

#endif	/* PINS_H */

