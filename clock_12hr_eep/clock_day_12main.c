#include <avr/io.h>
#include <util/delay.h>
#include "lcd_lib.h"
#include <stdio.h>
#include<avr/interrupt.h>
#include<avr/eeprom.h>
// Declare your global variables here
#define a_min 0
#define a_hr 1
#define a_day 2

char A[20]=" " ;
int ms=0,sec=0,min=0,hr=0,day=0;status=0;
ISR(INT0_vect){
if(status==0){}
else if(status==1){ sec++;if(sec>59)sec=0;}
else if(status==2){ min++;
if(min>59)min=0;
eeprom_write_byte(0,min);}
else if(status==3){ hr++;
if(hr>23)hr=0;
eeprom_write_byte(1,hr);}
else if(status==4){day++;
if(day>6)day=0;
eeprom_write_byte(2,day);}
}

ISR(INT1_vect){
status++;
if(status>4)
status=0;
}
ISR(TIMER0_OVF_vect){
TCNT0=10;
if(status==0){
	//sprintf(A,"                ");
	//LCDGotoXY(0,0);
	//LCDstring(A,16);
ms++;
if(ms>8){
ms=0;sec++;
if(sec>59){
sec=0;min++;
eeprom_write_byte(0,min);
if(min>59){
min=0;hr++;
eeprom_write_byte(1,hr);
if(hr>23){
hr=0;day++;
eeprom_write_byte(2,day);
if(day>6)day=0;
}
}
}
}

sprintf(A," <<CASIO__MUK>>    ");
LCDGotoXY(0,0);
LCDstring(A,16);
if((int)eeprom_read_byte(2)==0){
sprintf(A," %2d:%2d:%2d",(int)eeprom_read_byte(1),(int)eeprom_read_byte(0),sec);
LCDGotoXY(0,1);
LCDstring(A,9);
LCDGotoXY(12,1);
LCDstring("SUN",3);
}
if((int)eeprom_read_byte(2)==1){
sprintf(A," %2d:%2d:%2d",(int)eeprom_read_byte(1),(int)eeprom_read_byte(0),sec);
LCDGotoXY(0,1);
LCDstring(A,9);
LCDGotoXY(12,1);
LCDstring("MON",3);
}
if((int)eeprom_read_byte(2)==2){
sprintf(A," %2d:%2d:%2d",(int)eeprom_read_byte(1),(int)eeprom_read_byte(0),sec);
LCDGotoXY(0,1);
LCDstring(A,9);
LCDGotoXY(12,1);
LCDstring("TUE",3);
}
if((int)eeprom_read_byte(2)==3){
sprintf(A," %2d:%2d:%2d",(int)eeprom_read_byte(1),(int)eeprom_read_byte(0),sec);
LCDGotoXY(0,1);
LCDstring(A,9);
LCDGotoXY(12,1);
LCDstring("WED",3);
}
if((int)eeprom_read_byte(2)==4){
sprintf(A," %2d:%2d:%2d",(int)eeprom_read_byte(1),(int)eeprom_read_byte(0),sec);
LCDGotoXY(0,1);
LCDstring(A,9);
LCDGotoXY(12,1);
LCDstring("THU",3);
}
if((int)eeprom_read_byte(2)==5){
sprintf(A," %2d:%2d:%2d",(int)eeprom_read_byte(1),(int)eeprom_read_byte(0),sec);
LCDGotoXY(0,1);
LCDstring(A,9);
LCDGotoXY(12,1);
LCDstring("FRI",3);
}
if((int)eeprom_read_byte(2)==6){
sprintf(A," %2d:%2d:%2d",(int)eeprom_read_byte(1),(int)eeprom_read_byte(0),sec);
LCDGotoXY(0,1);
LCDstring(A,9);
LCDGotoXY(12,1);
LCDstring("SAT",3);
}
}

if(status==1){
sprintf(A,"Set second=%2d     ",sec);
LCDGotoXY(0,0);
LCDstring(A,16);
}
if(status==2){
sprintf(A,"Set minute=%2d      ",min);
LCDGotoXY(0,0);
LCDstring(A,16);
}
if(status==3){
sprintf(A,"Set hour=%2d        ",hr);
LCDGotoXY(0,0);
LCDstring(A,16);
}
if(status==4){
sprintf(A,"Set Day=%2d        ",day);
LCDGotoXY(0,0);
LCDstring(A,16);
}
}
int main(void){
PORTD=0b00001100;
MCUCR=0b00001010; //from high to low
GICR|=(1<<6)|(1<<7);// set corresponding bits
TCNT0 = 0;
TCCR0 =5;
TIMSK |= (_BV(OCIE0) | _BV(TOIE0));
LCDinit();// LCD module initialization
LCDclr();
sei();// enable interrupts
while (1){
}
}
