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
i++;
if(i>4)i=0;
if(i==0)sprintf(A," Rajiv Shankar ");
if(i==1)sprintf(A," BRiCS world ");
if(i==2)sprintf(A,"Summer workshop ");
if(i==3)sprintf(A,"Embedded System ");
if(i==4)sprintf(A," I.I.T.Kanpur ");
LCDGotoXY(0,0);
LCDstring(A,16);
_delay_ms(100);
}
ISR(INT1_vect){
j++;
if(j>4)j=0;
if(j==0)sprintf(A,"External Interrupt");
if(j==1)sprintf(A," bricsworld.com ");
if(j==2)sprintf(A,"www.simplifix.in");
if(j==3)sprintf(A,"Embedded System ");
if(j==4)sprintf(A," I.I.T.Kanpur ");
LCDGotoXY(0,1);

LCDstring(A,16);

_delay_ms(100);
return 0;

}
