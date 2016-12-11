#include<stdio.h>
#include<avr/io.h>
#include<util/delay.h>
//#include<avr/interrupt.h>
#include"lcd_lib.h"
#include"adc_lib.h"


int main(){
int s1,s2;
char A[20]="";
DDRD=255;
ADCinit();
LCDinit();
LCDclr();

while(1){
	MCUCR|=(1<<6);  // MCUCR=64;   SLEEP ENABLE
	MCUCR|=(1<<4);  //MCUCR=16;   ADC noise reduction mode
	s1=read_adc(0);
	s2=read_adc(2);
	MCUCR=0;
/*	sprintf(A,"s1=%d  s2=%d",s1,s2);
	LCDGotoXY(0,0);
    LCDstring(A,15);*/
    if(s1<950&&s2<950){
    	PORTD=0b01010000;
    	sprintf(A,"    FORWARD     ");
    	LCDGotoXY(0,0);
    	LCDstring(A,15);}
	if(s1>950&&s2<950){
		PORTD=0b10010000;
		sprintf(A,"    LEFT-TURN     ");
		    	LCDGotoXY(0,0);
		    	LCDstring(A,15);
		}
	if(s1<950&&s2>950){
		PORTD=0b01100000;
		sprintf(A,"   RIGHT-TURN      ");
		    	LCDGotoXY(0,0);
		    	LCDstring(A,15);
	}
	if(s1>950&&s2>950){
		PORTD=0b01010000;
		sprintf(A,"    FORWARD     ");
		    	LCDGotoXY(0,0);
		    	LCDstring(A,15);}


}
return 0;
}
