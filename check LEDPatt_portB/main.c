/*
 * main.c
 *
 *  CreateB on: Jun 16, 2010
 *      Author: Mukul Sharma/B-Tech IT_BHU_Tronix
 */

#include<avr/io.h>
#include<util/delay.h>
int main()
{
	int m;
	DDRB=255;
	while(1)
	{
PORTB=0b01010101;
_delay_ms(1000);
PORTB=0b10101010;


	}

 return 0;
}




