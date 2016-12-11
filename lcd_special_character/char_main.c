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
		                    0b00000100,
		                    0b00000100,
		                    0b00000000
};

const char bll[] PROGMEM={
							0b11111111,
							0b11111111,
							0b11111111,
							0b11111111,
							0b11111111,
							0b11111111,
							0b00000000,
							0b11111111,
};
const uint8_t blj[] PROGMEM={0,0,0,0,0,0,0,255};

int main()
{
	LCDinit();
	LCDclr();
	LCDdefinechar(Ka,0);
	_delay_ms(10);
	LCDdefinechar(bll,2);
		_delay_ms(10);
		LCDdefinechar(blj,4);
			//_delay_ms(10);
		LCDGotoXY(0,0);
		LCDsendChar(0);
		LCDsendChar(0);
		LCDsendChar(2);
		LCDsendChar(0);
		LCDsendChar(4);
		LCDsendChar(0);
}






