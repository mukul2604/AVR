#include<stdio.h>
#include<avr/io.h>
#include<util/delay.h>
#include"lcd_lib.h"
#include"adc_lib.h"
int main(){
int s1;//,s2;
char A[20]="";
DDRD=255;
ADCinit(10);
LCDinit();
LCDclr();

while(1){
	s1=read_adc(0);
	//s2=read_adc(2);

	sprintf(A,"s1=%d ",s1);
	LCDGotoXY(0,0);
    LCDstring(A,8);
	LCDcursorOFF();



	//if(s1<950&&s2<950)PORTD=0b01010000;
	//if(s1>950&&s2<950)PORTD=0b10010000;
	if(s1<1000)PORTD=0b01100000;
	if(s1>1000)PORTD=0b01010000;

    _delay_ms(100);
}
return 0;
}
