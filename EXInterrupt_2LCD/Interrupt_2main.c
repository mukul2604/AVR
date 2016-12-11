#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include<avr/interrupt.h>
#include "lcd_lib.h"
char i=0,j=0 ;
char A[20]="",counter=50;
 int main(){
PORTD=255;
sei();
GICR|=(1<<6)|(1<<7);// set corresponding bits
MCUCR=0b00000101; // from high to low
LCDinit();
LCDclr();
while(1){
}
}
ISR(INT0_vect){

sprintf(A,"  Mukul Sharma    ");

LCDGotoXY(0,0);
LCDstring(A,16);
_delay_ms(100);
}
ISR(INT1_vect){
sprintf(A," TRONIX_IT_BHU  ");

LCDGotoXY(0,1);

LCDstring(A,16);

_delay_ms(100);
return 0;

}
