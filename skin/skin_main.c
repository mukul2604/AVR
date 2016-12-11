#include<stdio.h>
#include<avr/io.h>
#include<util/delay.h>
#include"lcd_lib.h"
#include"adc_lib.h"
int j;
int main(){
int s1,s2;
char A[16]="";
ADCinit();
LCDinit();
LCDclr();

while(1){
	s1=read_adc(0);
	s2=read_adc(2);
	 sprintf(A,"S1=%3d   S2=%3d",s1,s2);
	 LCDGotoXY(0,0);
	 LCDstring(A,15);
	 if(s1<700){
		 if(s2<700)sprintf(A,"s1,s2onwhite    ");
		if(s2>700&&s2<900)sprintf(A,"s1white,s2pale     ");
		 if(s2>900)sprintf(A,"s1white,s2black    ");
			 }
	 if(s1>700&&s1<900){
		 if(s2<700)sprintf(A,"s1pale,s2white     ");
		 		if(s2>700&&s2<900)sprintf(A,"s1,s2pale     ");
		 		 if(s2>900)sprintf(A,"s1pale,s2black    ");
		 }
	 if(s1>900){
	 		 if(s2<700)sprintf(A,"s1black,s2white     ");
	 		 		if(s2>700&&s2<900)sprintf(A,"s1black,s2pale     ");
	 		 		 if(s2>900)sprintf(A,"s1pale,s2black    ");
	 		 }
	 LCDGotoXY(0,1);
	 LCDstring(A,16);

	}
return 0;
}
