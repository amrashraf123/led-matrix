/*
 * scrolling.c
 *
 * Created: 27/03/2020 11:57:32 م
 *  Author: Amr_
 */ 

#include "coloum_control.h"
#include "scrolling.h"



void display(int8_t *arr , int8_t text_letters){
	int8_t index;
	int8_t text_length = ((text_letters*8));
	for(  index = 0 ; index < text_length ;  index++){
		
		c1(*(arr+15+index));
		_delay_us(display_delay);
		c2(*(arr+14+index));
		_delay_us(display_delay);
		c3(*(arr+13+index));
		_delay_us(display_delay);
		c4(*(arr+12+index));
		_delay_us(display_delay);
		c5(*(arr+11+index));
		_delay_us(display_delay);
		c6(*(arr+10+index));
		_delay_us(display_delay);
		c7(*(arr+9+index));
		_delay_us(display_delay);
		c8(*(arr+8+index));
		_delay_us(display_delay);
		PORTB = 0x00;
		c9(*(arr+7+index));
		_delay_us(display_delay);
		c10(*(arr+6+index));
		_delay_us(display_delay);
		c11(*(arr+5+index));
		_delay_us(display_delay);
		c12(*(arr+4+index));
		_delay_us(display_delay);
		c13(*(arr+3+index));
		_delay_us(display_delay);
		c14(*(arr+2+index));
		_delay_us(display_delay);
		c15(*(arr+1+index));
		_delay_us(display_delay);
		c16(*(arr+index));
		_delay_us(display_delay);
		PORTC = 0x00 ;
		
	}
	
	
}