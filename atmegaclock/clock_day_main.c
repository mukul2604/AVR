#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <util/delay.h>
#include “lcd_lib.h”        //header lcd
volatile unsigned char menit,jam;    //variabel penampung adc
//deklarasi lcd ke stdio
static int lcd_putchar(char c, FILE *stream); //prototype
static FILE mystdout = FDEV_SETUP_STREAM(lcd_putchar, NULL,_FDEV_SETUP_WRITE);
static int lcd_putchar(char c, FILE *stream)
{    if (c == ‘\n’)    lcd_putchar(‘\r’, stream);
LCD_send_char(c);
return(0);
}
void delay_ms(int ms) //fungsi delay mili sekon
{int i;
	for(i=0;i<=ms;i++){_delay_ms(1);};
}
void timer1_ctc_init(void)
{    TCCR1A    |=(0<<WGM11)|(0<<WGM10);
TCCR1B    |=(0<<WGM13)|(1<<WGM12);
TIMSK        =1<<OCIE1A;
OCR1A        =1000000/64; // F_CPU=1MHz
TCCR1B    |=(0<<CS12)|(1<<CS11)|(1<<CS10);//1:64
sei ();
}
ISR(TIMER1_COMPA_vect)
{static unsigned char detik;    //var detik
if(detik<60) {detik++;}
else if(menit<60){menit++;detik=0;}
else if(jam<24){jam++;menit=0;detik=0;}
else {jam=0;menit=0;detik=0;};
LCD_send_command(0xc0); //baris 2 lcd
printf(“%2d:%2d:%2d detik”,jam,menit,detik);
//%2d–>siapkan dua digit desimal
}
#define PINPAD PINB
#define PORTPAD PORTB
#define DDRPAD DDRB
#define MENIT    1
#define JAM    2
#define START    0
int main (void)
{    DDRPAD=0X00;PORTPAD=0X0F;
timer1_ctc_init();
delay_ms(200);
LCD_init();
stdout = &mystdout;
LCD_send_command(LCD_CLR);
LCD_send_command(LCD_HOME);
LCD_send_command(0×80); //cursor line1
printf(“jam chip ATmega”);
LCD_send_command(0xc0); //cursor line2
printf(“00:00:00 detik”);
//addr lcd =jam addr 0xc0,menit addr 0xc3, detik addr 0xc6
while(1){
if(bit_is_clear(PINPAD,MENIT)){delay_ms(200);
if(menit<60) {menit++;} else {menit=0;};
LCD_send_command(0xc3); //menit lcd
printf(“%2d”,menit);    //cetak menit
cli ();                //off timer
};
if(bit_is_clear(PINPAD,JAM)){delay_ms(200);
if(jam<24) {jam++;} else {jam=0;};
LCD_send_command(0xc0);     //jam lcd
printf(“%2d”,jam);        //cetak
cli ();                //off timer
};
if(bit_is_clear(PINPAD,START)){delay_ms(200);
sei ();                //on timer
};
};return(0);}
