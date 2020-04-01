/*
 * uart.h
 *
 * Created: 29/03/2020 06:58:41 م
 *  Author: Amr_
 */ 


#ifndef UART_H_
#define UART_H_

#include <avr/io.h>
#include <stdint.h>



void usart_init(void);       //USART initialize
void usart_tx(int8_t data);       // USART byte transmission
int8_t usart_rx(void);         // USART byte reciving
void usart_msg(char *data);     // USART string transmission




#endif /* UART_H_ */