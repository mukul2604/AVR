
#include <avr/io.h>
#include <util/delay.h>

#define FOSC 4000000// Clock Speed
/*#define BAUD 2400
#define MYUBRR FOSC/16/BAUD-1*/

void USART_Init( int );

void USART_Transmit( unsigned char  );

unsigned char USART_Receive( void );