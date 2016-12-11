#include<stdio.h>
#include<avr/io.h>
#include<util/delay.h>
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
	s1=read_adc(0);
	s2=read_adc(2);
	sprintf(A,"s1=%d  s2=%d",s1,s2);
	LCDGotoXY(0,0);
    LCDstring(A,15);
    if(s1<830&&s2<900){
		PORTD=0b01010000;
      }
    if(s1>830&&s2<900){
		PORTD=0b10010000;  //left turn
		}
	if(s1<830&&s2>900){
		PORTD=0b01100000; //right turn
	}
	if(s1>830&&s2>900){
		PORTD=0b01010000;
}


}
return 0;
}
