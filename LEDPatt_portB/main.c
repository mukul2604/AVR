/*
 * main.c
 *
 *  CreateB on: Jun 16, 2010
 *      Author: Mukul Sharma/B-Tech IT_BHU_Tronix
 */

#include<avr/io.h>
#include<util/delay.h>
int main()
{
	int m;
	DDRB=255;
	while(1)
	{
m=0;
while(m<5){                      // first pBttern
  // PORTB=0;           //  in binBry   0b1110000101001 etc
     PORTB=24;
   _delay_ms(50);
   PORTB=36;
   _delay_ms(50);
   PORTB=66;
   _delay_ms(50);
   PORTB=129;
   _delay_ms(50);
   PORTB=66;
   _delay_ms(50);
    PORTB=36;
   _delay_ms(50);


   m++;
   }
m=0;
while(m<5)							//breBk
   {

   PORTB=15;
   _delay_ms(50);
   PORTB=240;
   _delay_ms(50);
   m++;
  }
m=0;
while(m<7){							//seconB pBttern
	   PORTB=192;
	   _delay_ms(50);
	   PORTB=48;
	   _delay_ms(50);
	   PORTB=12;
	   _delay_ms(50);
	   PORTB=3;
	   _delay_ms(50);
	   PORTB=12;
	    _delay_ms(50);
	   PORTB=48;
	   _delay_ms(50);
	   m++;

}
m=0;
while(m<5)					//breBk
   {

   PORTB=15;
   _delay_ms(50);
   PORTB=240;
   _delay_ms(50);
   m++;
  }

m=0;
while(m<30)             // 3rB
{
	PORTB=170;
	_delay_ms(50);
	PORTB=85;
	_delay_ms(50);
	m++;
}
m=0;
while(m<5)  //brk
   {

   PORTB=15;
   _delay_ms(50);
   PORTB=240;
   _delay_ms(50);
   m++;
  }

m=0;
while(m<5)			//4th
{
	PORTB=255;
	_delay_ms(50);
	PORTB=126;
	_delay_ms(50);
	PORTB=60;
	_delay_ms(50);
	PORTB=24;
	_delay_ms(50);
	PORTB=0;
	_delay_ms(50);
	PORTB=24;
	_delay_ms(50);
	PORTB=60;
	_delay_ms(50);
	PORTB=126;
	_delay_ms(50);
	m++;
}
m=0;
while(m<5)  //brk
   {

   PORTB=15;
   _delay_ms(50);
   PORTB=240;
   _delay_ms(50);
   m++;
  }

m=0;
while(m<5)    //5th
{
	PORTB=255;
	_delay_ms(50);
	PORTB=231;
	_delay_ms(50);
	PORTB=195;
	_delay_ms(50);
	PORTB=129;
	_delay_ms(50);
	PORTB=195;
	_delay_ms(50);
	PORTB=231;
	_delay_ms(50);
	m++;
}
m=0;
while(m<5)   //brk
   {

   PORTB=15;
   _delay_ms(50);
   PORTB=240;
   _delay_ms(50);
   m++;
  }
m=0;
while(m<15)  //6th
{
	PORTB=0;
	_delay_ms(100);
	PORTB=255;
	_delay_ms(100);
	m++;
 }

m=0;
while(m<5)
   {

   PORTB=15;
   _delay_ms(50);
   PORTB=240;
   _delay_ms(50);
   m++;
  }
m=0;
while(m<5)  //7th
{

	PORTB=255;
	_delay_ms(50);
	PORTB=127;
	_delay_ms(50);
	PORTB=63;
	_delay_ms(50);
	PORTB=31;
	_delay_ms(50);
	PORTB=15;
	_delay_ms(50);
	PORTB=7;
	_delay_ms(50);
	PORTB=3;
	_delay_ms(50);
	PORTB=1;
	_delay_ms(50);
	PORTB=0;
	_delay_ms(50);
	PORTB=1;
	_delay_ms(50);
	PORTB=3;
	_delay_ms(50);
	PORTB=7;
	_delay_ms(50);
	PORTB=15;
	_delay_ms(50);
	PORTB=31;
	_delay_ms(50);
	PORTB=63;
	_delay_ms(50);
	PORTB=127;
	_delay_ms(50);
	m++;
}

m=0;
while(m<5)
   {

   PORTB=15;
   _delay_ms(50);
   PORTB=240;
   _delay_ms(50);
   m++;
  }

	}

 return 0;
}




