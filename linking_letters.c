/*
 * linking_letters.c
 *
 * Created: 28/03/2020 08:03:35 م
 *  Author: Amr_
 */ 

#include "linking_letters.h"
#include "scrolling.h"
#include "uart.h"

int8_t* collect(int8_t *arr[],int8_t letters_num)
{
	int8_t k=0;

	int8_t* arr1 = (int8_t*)malloc(((letters_num*8)-7)*sizeof(int8_t));
	for(int8_t i=0 ; i<(letters_num) ; i++)
	{
		for(int8_t j=0 ; j<8 ; j++)
		arr1[k++] = arr[i][j];
	}
	return arr1;
}



 

