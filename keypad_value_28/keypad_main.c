/*
 * keypad_main.c
 *
 *  Created on: Jul 13, 2010
 *      Author: Mukul
 **************************************************
 Simple Keypad:
 Please notedown number for each key
 ************************************************/
#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>
#include"lcd_lib.h"
int keypad(){
	for(DDRB=1;DDRB>0;DDRB*=2){
		PORTB=~DDRB;
		_delay_us(20);
		if(PINB!=PORTB)return PINB;
	}
	return 0;
}

int main(){
	char A[20]="";
	LCDinit();
	LCDclr();
	while(1){
	sprintf(A,"%4d%4d%4d%4d",keypad(),PORTB,DDRB,PINB);
	LCDGotoXY(0,0);
	LCDstring(A,16);
	}
}
