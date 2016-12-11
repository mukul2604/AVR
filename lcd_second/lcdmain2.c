/*
 * lcdmain.c
 *
 *  Created on: Jun 25, 2010
 *      Author: Mukul
 */

#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>
#include"lcd_lib.h"
void main()
{
	LCDinit();
	LCDclr();
	while(1)
	{
		LCDGotoXY(0,0);

		LCDstring("BRICS",5);

		LCDshiftLeft(1);
		_delay_ms(500);
		LCDcursorOFF();
	//	_delay_ms(1000);
		//LCDGotoXY(0,1);
		//LCDstring("A step towards Future",21);*/
     }
	//return 0;

}

