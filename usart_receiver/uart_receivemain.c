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
#include"uart_lib.h"

int main(){
	char A[20]="";
	USART_Init(9600);
	LCDinit();
	LCDclr();
	LCDcursorOFF();

	while(1)
	{
		sprintf(A,"%c",USART_Receive());
		LCDstring(A,1);
		_delay_ms(1100);

	}
return 0;
	}

