/*
 * char_main.c
 *
 *  Created on: Jul 8, 2010
 *      Author: Mukul
 */
#include<avr/io.h>
#include<util/delay.h>
#include<avr/pgmspace.h>


const char Ka[] PROGMEM ={
		                    0b00011111,
		                    0b00000100,
		                    0b00001110,
		                    0b00010101,
		                    0b00001101,
		                    0b00010100,
		                    0b00001001,
		                    0b00000110
};

const char mu[] PROGMEM={
							0b00011111,
							0b00001010,
							0b00001010,
							0b00011110,
							0b00011010,
							0b00001010,
							0b00010011,
							0b00001110
};
const char la[] PROGMEM={
		0b00011111,
		0b00000001,
		0b00001101,
		0b00010011,
		0b00010001,
		0b00001001,
		0b00000000,
		0b00000000

};

int main()
{
	LCDinit();
	LCDclr();
	LCDdefinechar(mu,0);
	_delay_ms(10);
	LCDdefinechar(Ka,2);
		_delay_ms(10);
		LCDdefinechar(la,4);
			//_delay_ms(10);
		LCDGotoXY(0,0);
		LCDsendChar(0);
		//LCDsendChar(0);
		LCDsendChar(2);
		//LCDsendChar(0);
		LCDsendChar(4);
		//LCDsendChar(0);
}






