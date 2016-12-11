/*
 * main.c
 *
 *  Created on: Jul 9, 2010
 *      Author: Mukul
 */
#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>

int main(){
	DDRB=255;
	DDRC=63;
	DDRD=255;
	while(1){
PORTB=(1<<6);PORTD=0;_delay_us(200);
PORTB=(1<<5);PORTD=~2;_delay_us(200);
PORTB=(1<<4);PORTD=~4;_delay_us(200);
PORTB=(1<<3);PORTD=~8;_delay_us(200);
PORTB=(1<<2);PORTD=~4;_delay_us(200);
PORTB=(1<<1);PORTD=~2;_delay_us(200);
PORTB=(1<<0);PORTD=0;_delay_us(200);
//_delay_ms(1000);
PORTB=(1<<7);PORTD=0;_delay_us(200);
PORTB=(1<<6);PORTD=~2;_delay_us(200);
PORTB=(1<<5);PORTD=~4;_delay_us(200);
PORTB=(1<<4);PORTD=~8;_delay_us(200);
PORTB=(1<<3);PORTD=~4;_delay_us(200);
PORTB=(1<<2);PORTD=~2;_delay_us(200);
PORTB=(1<<1);PORTD=0;_delay_us(200);
//PORTD=255;
//_delay_ms(100);
	}
	return 0;
}
