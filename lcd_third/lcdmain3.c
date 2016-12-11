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
#include<avr/interrupt.h>
char A[20]="";
int main(){
	PORTD=255;
	sei();
	GICR|=(1<<6)|(1<<7);
	MCUCR=0b00000100;
	int r=0;
	LCDinit();
	LCDclr();
	while(1){
		LCDGotoXY(0,0);
		if(r<100)sprintf(A,"Waiting %d       ",r);
		if(r>100&&r<200)sprintf(A,"----------------");
		if(r>200&&r<300)sprintf(A,"Initializing..   ");
		if(r>300&&r<400)sprintf(A,"Reading....        ");
		if(r>400&&r<500)sprintf(A,"Quaranting..     ");
		if(r>600&&r<750)sprintf(A,"Now writing..     ");
		if(r>750&&r<800)sprintf(A,"Uploading Done...     ");
		if(r>800&&r<950)sprintf(A," ||THANK YOU||     ");
		if(r>950&&r<1000)sprintf(A,"Press Reset......     ");
		//if(r>1000)LCDprogressBar(0,4,10);
		LCDstring(A,16);
		LCDGotoXY(2,1);
		LCDstring("BRiCS_MUKUL",11);
		LCDcursorOFF();
		_delay_ms(100);
		r++;
		};
	return 0;
}
ISR(INT1_vect){
	DDRD=255;
	PORTD=0b10100000;
	//LCDstring("Mukul",5);
}
ISR(INT0_vect){
	DDRD=255;
	PORTD=0b10101010;
	//LCDstring("Mukul",5);
}
