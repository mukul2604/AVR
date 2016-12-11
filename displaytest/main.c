/*
 * main.c
 *
 *  Created on: Jul 9, 2010
 *      Author: Mukul
 */
#include<avr/io.h>
#include<util/delay.h>
int main()
{
	while(1){
		DDRB=255;
		PORTB=0b10111111;
	}
	return 0;
}
