/*
 * lcdmain.c
 *
 *  Created on: Jun 25, 2010
 *      Author: Mukul
 */

#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>
#include"lcd_lib.h"
char A[20]="";
int main(){
	LCDinit();
	LCDclr();
    LCDGotoXY(4,1);
	sprintf(A,"MUKUL  ");
    LCDstring(A,9);
    return 0;
}

