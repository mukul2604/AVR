/*
 * lcdrun.c
 *
 *  Created on: Jun 20, 2010
 *      Author: Mukul
 */


#include <avr/io.h>
#include <util/delay.h>
#include "lcd_lib.h"
#include <stdio.h>

// Declare your global variables here
char A[20]="    ";
int  main(void){

// Declare your local variables here
int r=0;

// LCD module initialization
LCDinit( );
LCDclr(  );
while (1){
      LCDGotoXY(0,0);
      sprintf(A,"value= %d     ",r);
      LCDstring(A,12);
	  _delay_ms(1000);
	  r++;
            };
			return 0;
}





