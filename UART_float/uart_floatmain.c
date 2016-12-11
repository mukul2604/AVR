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
	float i=1.46;
	int r[3],n,k;
	char A[10]="";
//LCDinit();
	//LCDclr();
	//LCDcursorOFF();
	USART_Init(9600);
	while(1)
	{
		while(i<2.00){
			n=(int)(i*100);
			for(k=0;k<3;k++)
			{
				r[k]=n%10;
				n=n/10;
			}

		USART_Transmit(r[2]+65);
		USART_Transmit(".");
		USART_Transmit(r[1]+65);
		USART_Transmit(r[0]+65);
		//sprintf(A,"%4d ",i);
		//LCDstring(A,5);
	_delay_ms(1100);
	i=i+.1;
	}

	}
return 0;
	}

