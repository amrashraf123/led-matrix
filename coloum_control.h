/*
 * coloum_control.h
 *
 * Created: 27/03/2020 08:32:54 م
 *  Author: AMR_
 */ 


#ifndef COLOUM_CONTROL_H_
#define COLOUM_CONTROL_H_
#define F_CPU 8000000UL

#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>


#define display_delay  2500     //this delay controls display speed

/**************************************
* each function controls related coloum
* by taking a 8 bit data and lighting  
* leds which have 1
* then waits a display delay.
*
**************************************/
void c1(int8_t data);
void c2(int8_t data);
void c3(int8_t data);
void c4(int8_t data);
void c5(int8_t data);
void c6(int8_t data);
void c7(int8_t data);
void c8(int8_t data);
void c9(int8_t data);
void c10(int8_t data);
void c11(int8_t data);
void c12(int8_t data);
void c13(int8_t data);
void c14(int8_t data);
void c15(int8_t data);
void c16(int8_t data);






#endif /* COLOUM_CONTROL_H_ */