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

	DDRB=255;
	while(1)
	{
		PORTB=1;
	}

 return 0;
}




