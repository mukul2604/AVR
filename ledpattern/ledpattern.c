/*
 * ledpattern.c
 *
 *  Created on: Jun 20, 2010
 *      Author: Mukul
 *      FOR PORTA
 */

#include<avr/io.h>
#include<util/delay.h>
int  main()
{
	DDRA=255;

	while(1){

	PORTA=255;
	_delay_ms(50);
	PORTA=127;
	_delay_ms(50);
	PORTA=63;
	_delay_ms(50);
	PORTA=31;
	_delay_ms(50);
	PORTA=15;
	_delay_ms(50);
	PORTA=7;
	_delay_ms(50);
	PORTA=3;
	_delay_ms(50);
	PORTA=1;
	_delay_ms(50);
	PORTA=0;
	_delay_ms(50);
	PORTA=1;
	_delay_ms(50);
	PORTA=3;
	_delay_ms(50);
	PORTA=7;
	_delay_ms(50);
	PORTA=15;
	_delay_ms(50);
	PORTA=31;
	_delay_ms(50);
	PORTA=63;
	_delay_ms(50);
	PORTA=127;
	_delay_ms(50);

		}
return 0;
}

