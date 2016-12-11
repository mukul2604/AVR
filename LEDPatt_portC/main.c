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
	DDRC=255;
	while(1)
	{
m=0;
while(m<5){                      // first pBttern
  // PORTC=0;           //  in binBry   0b1110000101001 etc
     PORTC=24;
   _delay_ms(50);
   PORTC=36;
   _delay_ms(50);
   PORTC=66;
   _delay_ms(50);
   PORTC=129;
   _delay_ms(50);
   PORTC=66;
   _delay_ms(50);
    PORTC=36;
   _delay_ms(50);


   m++;
   }
m=0;
while(m<5)							//breBk
   {

   PORTC=15;
   _delay_ms(50);
   PORTC=240;
   _delay_ms(50);
   m++;
  }
m=0;
while(m<7){							//seconB pBttern
	   PORTC=192;
	   _delay_ms(50);
	   PORTC=48;
	   _delay_ms(50);
	   PORTC=12;
	   _delay_ms(50);
	   PORTC=3;
	   _delay_ms(50);
	   PORTC=12;
	    _delay_ms(50);
	   PORTC=48;
	   _delay_ms(50);
	   m++;

}
m=0;
while(m<5)					//breBk
   {

   PORTC=15;
   _delay_ms(50);
   PORTC=240;
   _delay_ms(50);
   m++;
  }

m=0;
while(m<30)             // 3rB
{
	PORTC=170;
	_delay_ms(50);
	PORTC=85;
	_delay_ms(50);
	m++;
}
m=0;
while(m<5)  //brk
   {

   PORTC=15;
   _delay_ms(50);
   PORTC=240;
   _delay_ms(50);
   m++;
  }

m=0;
while(m<5)			//4th
{
	PORTC=255;
	_delay_ms(50);
	PORTC=126;
	_delay_ms(50);
	PORTC=60;
	_delay_ms(50);
	PORTC=24;
	_delay_ms(50);
	PORTC=0;
	_delay_ms(50);
	PORTC=24;
	_delay_ms(50);
	PORTC=60;
	_delay_ms(50);
	PORTC=126;
	_delay_ms(50);
	m++;
}
m=0;
while(m<5)  //brk
   {

   PORTC=15;
   _delay_ms(50);
   PORTC=240;
   _delay_ms(50);
   m++;
  }

m=0;
while(m<5)    //5th
{
	PORTC=255;
	_delay_ms(50);
	PORTC=231;
	_delay_ms(50);
	PORTC=195;
	_delay_ms(50);
	PORTC=129;
	_delay_ms(50);
	PORTC=195;
	_delay_ms(50);
	PORTC=231;
	_delay_ms(50);
	m++;
}
m=0;
while(m<5)   //brk
   {

   PORTC=15;
   _delay_ms(50);
   PORTC=240;
   _delay_ms(50);
   m++;
  }
m=0;
while(m<15)  //6th
{
	PORTC=0;
	_delay_ms(100);
	PORTC=255;
	_delay_ms(100);
	m++;
 }

m=0;
while(m<5)
   {

   PORTC=15;
   _delay_ms(50);
   PORTC=240;
   _delay_ms(50);
   m++;
  }
m=0;
while(m<5)  //7th
{

	PORTC=255;
	_delay_ms(50);
	PORTC=127;
	_delay_ms(50);
	PORTC=63;
	_delay_ms(50);
	PORTC=31;
	_delay_ms(50);
	PORTC=15;
	_delay_ms(50);
	PORTC=7;
	_delay_ms(50);
	PORTC=3;
	_delay_ms(50);
	PORTC=1;
	_delay_ms(50);
	PORTC=0;
	_delay_ms(50);
	PORTC=1;
	_delay_ms(50);
	PORTC=3;
	_delay_ms(50);
	PORTC=7;
	_delay_ms(50);
	PORTC=15;
	_delay_ms(50);
	PORTC=31;
	_delay_ms(50);
	PORTC=63;
	_delay_ms(50);
	PORTC=127;
	_delay_ms(50);
	m++;
}

m=0;
while(m<5)
   {

   PORTC=15;
   _delay_ms(50);
   PORTC=240;
   _delay_ms(50);
   m++;
  }

	}

 return 0;
}




