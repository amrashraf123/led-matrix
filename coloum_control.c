/*
 * coloum_control.c
 *
 * Created: 27/03/2020 08:36:35 م
 *  Author: Amr_
 */ 

#include "coloum_control.h"


void c1(int8_t data){
	PORTB =  0x01;
	PORTA = ~( data);
    
}

void c2(int8_t data){
	PORTB =  0x02;
	PORTA = ~( data);
	 
}

void c3(int8_t data){
	PORTB =  0x04;
	PORTA = ~( data);
 
}

void c4(int8_t data){
	PORTB =  0x08;
	PORTA = ~( data);
	 
}

void c5(int8_t data){
	PORTB =  0x10;
	PORTA = ~( data);
 
}

void c6(int8_t data){
	PORTB =  0x20;
	PORTA = ~( data);
	 
}

void c7(int8_t data){
	PORTB =  0x40;
	PORTA = ~( data);
	 
}

void c8(int8_t data){
	PORTB =  0x80;
	PORTA = ~( data);
	// needs to close the port if no coloum will shift to it
	 
}

void c9(int8_t data){
	PORTC =  0x01;
	PORTA = ~( data);
 
}

void c10(int8_t data){
	PORTC =  0x02;
	PORTA = ~( data);
 
}

void c11(int8_t data){
	PORTC =  0x04;
	PORTA = ~( data);
	 
}

void c12(int8_t data){
	PORTC =  0x08;
	PORTA = ~( data);
	 
}

void c13(int8_t data){
	PORTC =  0x10;
	PORTA = ~( data);
 
}

void c14(int8_t data){
	PORTC =  0x20;
	PORTA = ~( data);
	 
}

void c15(int8_t data){
	PORTC =  0x40;
	PORTA = ~( data);
 
}

void c16(int8_t data){
	PORTC =  0x80;
	PORTA = ~( data);
	// needs to close the port if no coloum will shift to it
	 
}