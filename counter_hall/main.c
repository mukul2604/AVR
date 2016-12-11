#include<stdio.h>
#include<avr/io.h>
#include<util/delay.h>
#include"lcd_lib.h"
#include"adc_lib.h"
int j;
int main(){
int s1;//,s2;
char A[20]="";
ADCinit();
LCDinit();
LCDclr();

while(1){
	s1=read_adc(0);
	if(s1<980){j++;_delay_ms(1000);
	}

	sprintf(A,"People=%d ",j);
		LCDGotoXY(0,0);
	    LCDstring(A,10);
	    sprintf(A,"Int.=%d        ",s1);
	    		LCDGotoXY(0,1);
	    	    LCDstring(A,10);
		LCDcursorOFF();
    _delay_ms(4000);
}
return 0;
}
