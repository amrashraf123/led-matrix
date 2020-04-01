/*
 * scrolling.h
 *
 * Created: 27/03/2020 11:59:06 م
 *  Author: Amr_
 */ 


#ifndef SCROLLING_H_
#define SCROLLING_H_


#include "coloum_control.h"

/****************************
* text_length = ((text leters*8))
*
* if you want to start scrolling from the first 
* coloum insert two (_) in the start 
* else it will start from the half
*****************************/
 
void display(int8_t *arr , int8_t text_letters);


#endif /* SCROLLING_H_ */