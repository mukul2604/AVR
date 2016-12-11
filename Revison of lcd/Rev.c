#include <avr/io.h>
#include <util/delay.h>
#include "lcd_lib.h"
#include <stdio.h>

// Declare your global variables here
char A[20]=" " ;
int i;
int main(){
PORTD=255;
LCDinit();// LCD module initialization
LCDclr();
while(1){
	sprintf(A,"IIT-BHU   ");
	LCDstring(A,9);
	LCDshiftRight(1);
	_delay_ms(100);
	}
for(i=0;i<100;i++){
 _delay_ms(1000);
}
sprintf(A,"Sharma        ");
LCDGotoXY(7,0);
LCDstring(A,7);


return 0;
}
