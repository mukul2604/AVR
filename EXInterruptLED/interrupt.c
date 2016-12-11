#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include<avr/interrupt.h>
char ms=0;
int main(){
	DDRC=255;
	PORTC=0;
	PORTD=0b00001100;
	sei();
	GICR|=(1<<6)|(1<<7);// set corresponding bits
	MCUCR=0b00001010; // from high to low
	TCNT0=0;
TIMSK=1;
TCCR0=5;
	while(1){
}
	return 0;
}
ISR(INT0_vect){

	PORTC=0b10100000;
}
ISR(INT1_vect){

	PORTC=0b10010000;
}
/*
//ISR(INT2_vect){
	//PORTD=0b01100000;
//}*/
ISR(TIMER0_OVF_vect){
TCNT0=10;
ms++;
if(ms>15)PORTC=255;
ms=0;


}
 /*
 *
ISR(TIMER0_COMP_vect){
	TCNT0=0;
	PORTD=0b01000010;
}*/
