#include <avr/io.h>
#include <util/delay.h>
#include "lcd_lib.h"
#include <stdio.h>
#include<avr/interrupt.h>
// Declare your global variables here
char A[20]=" " ;
int h=0,m=0,a=0,status=0;

ISR(INT0_vect){
if(status==0){}
else if(status==1){h++;
if(h>2)h=0;}
else if(status==2){m++;
if(m>150)m=0;}
}

ISR(INT1_vect){
status++;

	if(status>3)status=0;
}


	//sprintf(A,"                ");
	//LCDGotoXY(0,0);
	//LCDstring(A,16);






ISR(TIMER0_OVF_vect){
	TCNT0=5;
	if(status==0){

	}
	if(status==1){
		sprintf(A,"Set ht=%2d m     ",h);
		LCDGotoXY(0,0);
		LCDstring(A,16);
		}
		if(status==2){
		sprintf(A,"Set mass=%2d  kg    ",m);
		LCDGotoXY(0,0);
		LCDstring(A,16);
		}
		if(status==3){
		LCDclr();
		sprintf(A,"Wait.........");
		LCDGotoXY(0,0);
		LCDstring(A,9);
		_delay_ms(1000);
		a=m/(h*h);
		LCDclr();
		sprintf(A,"Your BMI:%2d       ",a);
		LCDstring(A,16);

		if(a<20)sprintf(A,"  Malnutrition!    ");
		if(a>=20&&a<24)sprintf(A,"Keep it Up!      ");
		if(a>=24)sprintf(A," Burn your Fat!          ");
		LCDGotoXY(0,1);
		LCDstring(A,15);
		LCDcursorOFF();
		}
	}



int main(){
PORTD=255;
MCUCR=0b00001010;
//from high to low
GICR|=(1<<6)|(1<<7);// set corresponding bits
TCNT0=10;
TCCR0=5;
TIMSK=1;
LCDinit();// LCD module initialization
LCDclr();
sei();// enable interrupts
while (1){

	}
return 0;
}
