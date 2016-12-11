#include <avr/io.h>
#include "lcd_lib.h"
#include <util/delay.h>
#include <stdio.h>
int main ( )
{
int x;
char a[10];
DDRA = 0x00; // All pins of Port A configured as input
LCDinit();
LCDclr( );
while (1) {
x = (PINA & 0b00000001); // Bitwise ANDing with 0b00000001 gives only bit 0 of PINA
sprintf(a," Value = %d ",x);
LCDclr();
LCDstring(a,8);
_delay_ms(300);
}
return 0;
}
