#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

char j,k;
char P[100]={
		0b00000000,
		0b00000000,
		0b00000000,
		0b00011000,
		0b00011000,
		0b00000000,
		0b00000000,
		0b00000000,


		0b00000000,
		0b00000000,
		0b00011000,
		0b00100100,
		0b00100100,
		0b00011000,
		0b00000000,
		0b00000000,

		0b00000000,
		0b00011000,
		0b00100100,
		0b01000010,
		0b01000010,
		0b00100100,
		0b00011000,
		0b00000000,

		0b00011000,
		0b00100100,
		0b01000010,
		0b10000001,
		0b10000001,
		0b01000010,
		0b00100100,
		0b00011000,

		0b00000000


};
int main(void)
{

int term=0;
DDRB=255;
DDRC=63;
DDRD=255;

while(1){

PORTD=~P[8*j+term];

if(term<8){
PORTB=1<<term;
PORTC=0;
}
else{
	PORTB=0;
	PORTC=1<<(term-8);
}
term++;
if(term>7)term=0;
_delay_us(70);

k++;
if(k>254){k=0;j++;}
if(j>4)j=0;

}
return 0;
}
