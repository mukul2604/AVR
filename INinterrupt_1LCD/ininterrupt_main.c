/*
 * ininterrupt_main.c
 *
 *  Created on: Jul 2, 2010
 *      Author: Mukul
 */

 #include <avr/io.h>
 #include <util/delay.h>
 #include <stdio.h>
 #include<avr/interrupt.h>
 #include "lcd_lib.h"
char i=0;
char A[20]=" ";

ISR(TIMER0_OVF_vect){
	TCNT0=10;
	i++;
	if(i>10&&i<40)sprintf(A,"    Hey Baby!       ");
	if(i>40&&i<70)sprintf(A,"     Wat's up?     ");
	if(i>70&&i<100)sprintf(A,"  Are you bored?   ");
	if(i>100&&i<150)sprintf(A,"  Let's have Fun...    ");
	if(i>150&&i<200)sprintf(A,"HAHAHAHAHA....     ");
    LCDGotoXY(0,0);
	LCDstring(A,16);


}
/*ISR(TIMER0_COMP_vect){
	TCNT0=10;
	i++;
	if(i>10&&i<50)sprintf(A,"Hello!");

	LCDGotoXY(0,1);
	LCDstring(A,6);
}*/
int main(){

TCNT0=0;
TCCR0=5;//OCR0=43;
TIMSK=1;
LCDinit();
LCDclr();
sei();
while(1){
}
return 0;
}
