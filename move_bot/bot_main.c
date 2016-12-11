/*
 * bot_main.c
 *
 *  Created on: Jun 25, 2010
 *      Author: Mukul
 */

#include<avr/io.h>
#include<util/delay.h>
int main()
{
	DDRD=255;


	while(1){
        PORTD=0b01000000;   //forward move
		}


return 0;

	}

