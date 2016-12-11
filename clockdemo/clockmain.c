#include <avr/io.h>
#include <util/delay.h>
#include "lcd_lib.h"
#include <stdio.h>
#include<avr/interrupt.h>
// Declare your global variables here
char A[20]="",ms=0,sec=0,min=0,hr=0;
ISR(TIMER0_OVF_vect){
TCNT0=10;
ms++;
if(ms>15){
ms=0;sec++;
if(sec>59){
sec=0;min++;
if(min>59){
min=0;hr++;
if(hr>23){
hr=0;
}
}
}
sprintf(A," CLOCK:%2d:%2d:%2d ",hr,min,sec);
LCDGotoXY(0,0);
LCDstring(A,15);
LCDcursorOFF();
}
}
int main(void){
TCNT0 = 0;
TCCR0 =5;
TIMSK|= _BV(TOIE0);
sei();// enable interrupts
LCDinit();// LCD module initialization
LCDclr();
while (1){
}
}
