/*
 * uart.c
 *
 * Created: 29/03/2020 07:02:36 م
 *  Author: Amr_
 */ 

#include "uart.h"



void usart_init()
{
	UBRRH = 0x00 ;          //setting baud rate high byte
	UBRRL = 0x33 ;          //setting baud rate low byte
	UCSRB = (1<<TXEN) | (1<<RXEN) ;  //enable reciving and transmission
	UCSRC = (1<<URSEL) | (1<<UCSZ0) | (1<<UCSZ1) ; //writing in UCSRC NOT UBRRH and set the width of data to 8 bit
}

void usart_tx(int8_t data)
{
	UDR = data ;                       //write x to UDR
	while (!(UCSRA & (1<<UDRE))) ;  //check if UDRE is empty
}

int8_t usart_rx()
{
	while (!(UCSRA & (1<<RXC)));   //check if reciving is complete
	return UDR ;                   // write the recived data on UDR as a return value
}

void usart_msg(char *data)
{
	while (*data != 0)            //check if the value of the address is not zero
	usart_tx(*data++);           // increment the pointer
}