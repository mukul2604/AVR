/*
 * main.c
 *
 *  Created on: Jul 9, 2010
 *      Author: Mukul
 */
#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>
int m=0;
int main(){
	DDRB=255;
	DDRC=63;
	DDRD=255;
	while(1){
m=0;
		while(m<17){

			PORTB=128;PORTD=0;_delay_us(200);
            PORTB=64;PORTD=129;_delay_us(200);
            PORTB=32;PORTD=195;_delay_us(200);
            PORTB=16;PORTD=231;_delay_us(200);

            m++;
		}
		//_delay_ms(100);
		m=0;
		while(m<17){

			PORTB=1;PORTD=~1;_delay_us(200);
			PORTB=2;PORTD=~3;_delay_us(200);
            PORTB=4;PORTD=~7;_delay_us(200);
            PORTB=8;PORTD=~15;_delay_us(200);
			PORTB=16;PORTD=~15;_delay_us(200);
			            PORTB=32;PORTD=~7;_delay_us(200);
			            PORTB=64;PORTD=~3;_delay_us(200);
			            PORTB=128;PORTD=~1;_delay_us(200);
			          	           m++;
		}
		//_delay_ms(100);
				m=0;
				while(m<17){

			            PORTB=8;PORTD=231;_delay_us(200);
			           PORTB=4;PORTD=195;_delay_us(200);
			            PORTB=2;PORTD=129;_delay_us(200);
			            PORTB=1;PORTD=0;_delay_us(200);
					          	           m++;
				}
			//	_delay_ms(100);
					m=0;
					while(m<17){

						PORTB=1;PORTD=127;_delay_us(200);
						PORTB=2;PORTD=63;_delay_us(200);
			            PORTB=4;PORTD=31;_delay_us(200);
			            PORTB=8;PORTD=15;_delay_us(200);
						PORTB=16;PORTD=15;_delay_us(200);
						            PORTB=31;PORTD=~7;_delay_us(200);
						            PORTB=63;PORTD=~3;_delay_us(200);
						            PORTB=127;PORTD=~1;_delay_us(200);
						          	           m++;
					}
	//				_delay_ms(100);
//

	}
	return 0;
}
