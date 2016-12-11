/*
 * exam.c
 *
 *  Created on: Jun 18, 2010
 *      Author: Mukul
 */
/*
 * main.c
 *
 *  Created on: Jun 16, 2010
 *      Author: Mukul
 */

#include<avr/io.h>
#include<util/delay.h>
int main()
{
	while(1){
	DDRA=255;
 PORTA=0;           //  in binary   0b1110000101001 etc


 PORTA=24;
 _delay_ms(50);
 PORTA=36;
 _delay_ms(50);
 PORTA=66;
 _delay_ms(50);
 PORTA=129;
 _delay_ms(50);
 PORTA=66;
 _delay_ms(50);
  PORTA=36;
 _delay_ms(50);
  PORTA=24;
 _delay_ms(50);






	}

 return 0;
}

