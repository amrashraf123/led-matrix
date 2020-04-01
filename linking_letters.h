/*
 * linking_letters.h
 *
 * Created: 28/03/2020 08:03:16 م
 *  Author: Amr_
 */ 


#ifndef LINKING_LETTERS_H_
#define LINKING_LETTERS_H_

 #include <stdint.h>
 #include <stdlib.h>
 
 /**********************************
 * this function takes an array have
 * the arrays of needded letters  and 
 * their count then return them in a one
 * array to be passed to display function
 *  (maximum 15 )
 ***********************************/
  
 
int8_t* collect(int8_t *arr[],int8_t letters_num);
int8_t* pring(int8_t recived_data);
 

#endif /* LINKING_LETTERS_H_ */