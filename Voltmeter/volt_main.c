/*
 * volt_main.c
 *
 *  Created on: Jun 25, 2010
 *      Author: Mukul
 */
#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>
#include"adc_lib.h"
#include"lcd_lib.h"
int main()
{
	int x;
	int vref=5; //// measured from multimeter assumed
	float v;
	char a[15];
	ADCinit(10);
	LCDinit();
	LCDclr();
	while(1)
	{
		x=read_adc(0);
		v=x*vref/1024;
		sprintf(a,"Voltage=%2.3f",v);
		LCDclr();
		LCDstring(a,15);
		_delay_ms(300);
		}
	return 0;
}
