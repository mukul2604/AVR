/*
 * adcdemo.c
 *
 *  Created on: Jun 25, 2010
 *      Author: Mukul
 */

#include <avr/io.h>
#include "adc_lib.h"
#include "lcd_lib.h"
#include<stdio.h>
#include<util/delay.h>
int  main()
{
int x;
char A[20]="";
ADCinit();		// initializes ADC in 10 bit mode
LCDinit();
LCDclr();
LCDcursorOFF();
while(1) {
x= read_adc(0);		// converts analog i/p at pin 0 to digital
sprintf(A,"Value = %d",x);
LCDstring(A,10);
LCDshiftLeft(1);
_delay_ms(1110);
LCDclr();

}

}
