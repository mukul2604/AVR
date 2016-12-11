/*
 * lcd_demo_main.c
 *
 *  Created on: Jun 25, 2010
 *      Author: Mukul
 */
#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>
#include"lcd_lib.h"
int main(){

//	char a[5];
	LCDinit();
	LCDclr();
	//LCDsendChar(65);
//	_delay_ms(300);
	//LCDsendCommand(31);
	//_delay_ms(300);
	LCDhome();
	_delay_ms(300);
	LCDGotoXY(5,0);
	_delay_ms(300);
	LCDstring("Mukul",5);
	//_delay_ms(300);
	//sprintf(a,"Sharma");
	//_delay_ms(300);
	//CopyStringtoLCD(a,3,0);
	_delay_ms(300);
	LCDshiftRight(3);
	_delay_ms(300);
	LCDshiftLeft(4);
	_delay_ms(300);
	LCDcursorOn();
	_delay_ms(300);
	LCDcursorOnBlink();
	_delay_ms(300);
	LCDcursorOFF();
	_delay_ms(300);
	LCDblank();
	_delay_ms(300);
	LCDvisible();
	_delay_ms(300);
	LCDcursorLeft(3);
	_delay_ms(300);
	LCDcursorRight(4);
	_delay_ms(300);
	LCDprogressBar(2,6,4);
	_delay_ms(300);
	return 0;
}
