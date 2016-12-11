

#include<uart_lib.h>
#include<avr/io.h>
#define FOSC 4000000


void USART_Init(int BAUD)
{

UBRRH = (unsigned char)((FOSC/16/BAUD-1)>>8);
UBRRL = (unsigned char)(FOSC/16/BAUD-1);

UCSRA=0x00;
UCSRB=0x98;
UCSRC=0x86;
/*UBRRH=0x00;
UBRRL=0x19;*/
}


void USART_Transmit( unsigned char data )
{
/* Wait for empty transmit buffer */
while ( !( UCSRA & (1<<UDRE)) )
;
/* Put data into buffer, sends the data */
UDR = data;
}




/*char USART_Receive( void )
{
   while(!(UCSRA & (1<<7)))
   {
    USART_Transmit('n');
	_delay_ms(500);
   }

   //Now USART has got data from host
   //and is available is buffer

   return UDR;
}

*/


uint8_t USART_Receive()

{

// Wait until a byte has been received

while((UCSRA&(1<<RXC)) == 0);

// Return received data

return UDR;

}
