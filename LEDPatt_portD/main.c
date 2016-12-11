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
	DDRD=255;
	while(1)
	{
m=0;
while(m<5){                      // first pBttern
  // PORTD=0;           //  in binBry   0b1110000101001 etc
     PORTD=24;
   _delay_ms(50);
   PORTD=36;
   _delay_ms(50);
   PORTD=66;
   _delay_ms(50);
   PORTD=129;
   _delay_ms(50);
   PORTD=66;
   _delay_ms(50);
    PORTD=36;
   _delay_ms(50);


   m++;
   }
m=0;
while(m<5)							//breBk
   {

   PORTD=15;
   _delay_ms(50);
   PORTD=240;
   _delay_ms(50);
   m++;
  }
m=0;
while(m<7){							//seconB pBttern
	   PORTD=192;
	   _delay_ms(50);
	   PORTD=48;
	   _delay_ms(50);
	   PORTD=12;
	   _delay_ms(50);
	   PORTD=3;
	   _delay_ms(50);
	   PORTD=12;
	    _delay_ms(50);
	   PORTD=48;
	   _delay_ms(50);
	   m++;

}
m=0;
while(m<5)					//breBk
   {

   PORTD=15;
   _delay_ms(50);
   PORTD=240;
   _delay_ms(50);
   m++;
  }

m=0;
while(m<30)             // 3rB
{
	PORTD=170;
	_delay_ms(50);
	PORTD=85;
	_delay_ms(50);
	m++;
}
m=0;
while(m<5)  //brk
   {

   PORTD=15;
   _delay_ms(50);
   PORTD=240;
   _delay_ms(50);
   m++;
  }

m=0;
while(m<5)			//4th
{
	PORTD=255;
	_delay_ms(50);
	PORTD=126;
	_delay_ms(50);
	PORTD=60;
	_delay_ms(50);
	PORTD=24;
	_delay_ms(50);
	PORTD=0;
	_delay_ms(50);
	PORTD=24;
	_delay_ms(50);
	PORTD=60;
	_delay_ms(50);
	PORTD=126;
	_delay_ms(50);
	m++;
}
m=0;
while(m<5)  //brk
   {

   PORTD=15;
   _delay_ms(50);
   PORTD=240;
   _delay_ms(50);
   m++;
  }

m=0;
while(m<5)    //5th
{
	PORTD=255;
	_delay_ms(50);
	PORTD=231;
	_delay_ms(50);
	PORTD=195;
	_delay_ms(50);
	PORTD=129;
	_delay_ms(50);
	PORTD=195;
	_delay_ms(50);
	PORTD=231;
	_delay_ms(50);
	m++;
}
m=0;
while(m<5)   //brk
   {

   PORTD=15;
   _delay_ms(50);
   PORTD=240;
   _delay_ms(50);
   m++;
  }
m=0;
while(m<15)  //6th
{
	PORTD=0;
	_delay_ms(100);
	PORTD=255;
	_delay_ms(100);
	m++;
 }

m=0;
while(m<5)
   {

   PORTD=15;
   _delay_ms(50);
   PORTD=240;
   _delay_ms(50);
   m++;
  }
m=0;
while(m<5)  //7th
{

	PORTD=255;
	_delay_ms(50);
	PORTD=127;
	_delay_ms(50);
	PORTD=63;
	_delay_ms(50);
	PORTD=31;
	_delay_ms(50);
	PORTD=15;
	_delay_ms(50);
	PORTD=7;
	_delay_ms(50);
	PORTD=3;
	_delay_ms(50);
	PORTD=1;
	_delay_ms(50);
	PORTD=0;
	_delay_ms(50);
	PORTD=1;
	_delay_ms(50);
	PORTD=3;
	_delay_ms(50);
	PORTD=7;
	_delay_ms(50);
	PORTD=15;
	_delay_ms(50);
	PORTD=31;
	_delay_ms(50);
	PORTD=63;
	_delay_ms(50);
	PORTD=127;
	_delay_ms(50);
	m++;
}

m=0;
while(m<5)
   {

   PORTD=15;
   _delay_ms(50);
   PORTD=240;
   _delay_ms(50);
   m++;
  }

	}

 return 0;
}




