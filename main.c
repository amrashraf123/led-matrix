#define F_CPU 8000000UL
#include "letters.h"
#include "coloum_control.h"
#include "scrolling.h"
#include "linking_letters.h"
#include "uart.h"
 
#include <avr/io.h>
#include <util/delay.h>

   
   
 
 
int main(void)
{
	usart_init();
	usart_msg("Enter the data consists of 11 letters : ");
	DDRA = 0xFF; DDRB = 0xFF; DDRC = 0xFF;
   
    int8_t letters_count = 11;  
	
	 
	
 
 int8_t j = usart_rx(); int8_t k = usart_rx();  int8_t l = usart_rx();int8_t m = usart_rx(); int8_t n = usart_rx();  int8_t o = usart_rx();  int8_t p = usart_rx();  int8_t q = usart_rx();  int8_t r = usart_rx();   int8_t s = usart_rx(); int8_t t = usart_rx();
	  
 int8_t *content_1[]={pring(j),pring(k),pring(l),pring(m),pring(n),pring(o),pring(p),pring(q),pring(r),pring(s),pring(t)};
   
	
	
	 
	 int8_t *letter_1= collect(content_1,letters_count);  
	 
	 
    while (1) 
    {
		
		   display(letter_1 , letters_count);
		   
		   
		   
		    
    }
}






 int8_t* pring(int8_t recived_data){
	 if (recived_data == 'A')
	 {
		 return A;
	 }
	 if (recived_data == 'B')
	 {
		 return B;
	 }
	 if (recived_data == 'C')
	 {
		 return C;
	 }
	 if (recived_data == 'D')
	 {
		 return D;
	 }
	 if (recived_data == 'E')
	 {
		 return E;
	 }
	 if (recived_data == 'F')
	 {
		 return F;
	 }
	 if (recived_data == 'G')
	 {
		 return G;
	 }
	 if (recived_data == 'H')
	 {
		 return H;
	 }
	 if (recived_data == 'I')
	 {
		 return I;
	 }
	 if (recived_data == 'J')
	 {
		 return J;
	 }
	 if (recived_data == 'K')
	 {
		 return K;
	 }
	 if (recived_data == 'L')
	 {
		 return L;
	 }
	 if (recived_data == 'M')
	 {
		 return M;
	 }
	 if (recived_data == 'N')
	 {
		 return N;
	 }
	 if (recived_data == 'O')
	 {
		 return O;
	 }
	 if (recived_data == 'P')
	 {
		 return P;
	 }
	 if (recived_data == 'Q')
	 {
		 return Q;
	 }
	 if (recived_data == 'R')
	 {
		 return R;
	 }
	 if (recived_data == 'S')
	 {
		 return S;
	 }
	 if (recived_data == 'T')
	 {
		 return T;
	 }
	 if (recived_data == 'U')
	 {
		 return U;
	 }
	 if (recived_data == 'V')
	 {
		 return V;
	 }
	 if (recived_data == 'W')
	 {
		 return W;
	 }
	 if (recived_data == 'X')
	 {
		 return X;
	 }
	 if (recived_data == 'Y')
	 {
		 return Y;
	 }
	 if (recived_data == 'Z')
	 {
		 return Z;
	 }
	 if (recived_data == ' ')
	 {
		 return _;
	 }
	 
	 return _;
 }