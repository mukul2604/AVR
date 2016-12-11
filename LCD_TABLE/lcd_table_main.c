/*
 * lcdmain.c
 *
 *  Created on: Jun 25, 2010
 *      Author: Mukul
 /////prints variables on LCD*/

#include<avr/io.h>
#include<util/delay.h>
#include"lcd_lib.h"
#include<stdio.h>
///#include<avr/interrupt.h>
char A[20]="";
int i=1;
int j=2;
int main(){
	//PORTD=255;
	//sei();
	//GICR|=(1<<6)|(1<<7);
	//MCUCR=0b00000100;
	//int r=0;
	LCDinit();
	LCDclr();
	while(1){
		i=1;
		while(i<=10){
		LCDGotoXY(0,0);
        sprintf(A,"%dX%d=%d         ",j,i,(i*j));
        LCDstring(A,16);
		LCDcursorOFF();
		_delay_ms(1500);

		i++;
		}LCDclr();_delay_ms(2000);j++;
		};
	return 0;
}
/*ISR(INT1_vect){
	DDRD=255;
	PORTD=0b10100000;
	//LCDstring("Mukul",5);
}
ISR(INT0_vect){
	DDRD=255;
	PORTD=0b10101010;
	//LCDstring("Mukul",5);
}*/
