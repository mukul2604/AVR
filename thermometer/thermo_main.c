/*
 * thermo_main.c
 *
 *  Created on: Jun 25, 2010
 *      Author: Mukul
 */

#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>
#include"adc_lib.h"
#include"lcd_lib.h"
int main(){
	int x;
	int vref=7.9;  /// suppose this is the value corresponding to 100deg centigrade
	float temp;
	char a[20];
	       ADCinit(10);
	LCDinit();
	LCDclr();
	while(1){
		x=read_adc(0);
		temp=x*vref/1024;
		sprintf(a,"Temprature=%f'C",temp);
		LCDclr();
		LCDGotoXY(0,0);
		LCDstring(a,14);
		_delay_ms(300);
	}
	return 0;
}
