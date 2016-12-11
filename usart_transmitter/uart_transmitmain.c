/*
 * lcdmain.c
 *
 *  Created on: Jun 25, 2010
 *      Author: Mukul
 */

#include<avr/io.h>
#include<util/delay.h>


#include"uart_lib.h"
#include<avr/interrupt.h>

int main(){
	char i=0;
	char A[31]="Simplifix Solutions & Pvt. Ltd.";
//LCDinit();
	//LCDclr();
	//LCDcursorOFF();
	USART_Init(9600);
	while(1)
	{
		i=0;
		while(i<31){
		USART_Transmit(A[i]);
		//sprintf(A,"%4d ",i);
		//LCDstring(A,5);
	_delay_ms(1100);
	i++;
	}

	}
return 0;
	}

