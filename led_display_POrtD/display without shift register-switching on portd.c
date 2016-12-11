#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
//#include<avr/pgmspace.h>
//------------------ local prototypes -----------------------------------------
 char C[552] = {
0x00 , 0x00 , 0x00 , 0x00 , 0x00,0, // space // 32 - 43
0x00 , 0x06 , 0x5F , 0x06 , 0x00,0, // !
0x07 , 0x03 , 0x00 , 0x07 , 0x03,0, // ''
0x24 , 0x7E , 0x24 , 0x7E , 0x24,0, // #
0x24 , 0x2B , 0x6A , 0x12 , 0x00,0, // $
0x63 , 0x13 , 0x08 , 0x64 , 0x63,0, // %
0x36 , 0x49 , 0x56 , 0x20 , 0x50,0, // &
0x00 , 0x07 , 0x03 , 0x00 , 0x00,0, // '
0x00 , 0x3E , 0x41 , 0x00 , 0x00,0, // (
0x00 , 0x41 , 0x3E , 0x00 , 0x00,0, // )
0x08 , 0x3E , 0x1C , 0x3E , 0x08,0, // *
0x08 , 0x08 , 0x3E , 0x08 , 0x08,0, // +
0x00 , 0xE0 , 0x60 , 0x00 , 0x00,0, // , // 44 - 55
0x08 , 0x08 , 0x08 , 0x08 , 0x08,0, // -
0x00 , 0x60 , 0x60 , 0x00 , 0x00,0, // .
0x20 , 0x10 , 0x08 , 0x04 , 0x02,0, // /
0x3E , 0x51 , 0x49 , 0x45 , 0x3E,0, // 0
0x00 , 0x42 , 0x7F , 0x40 , 0x00,0, // 1
0x62 , 0x51 , 0x49 , 0x49 , 0x46,0, // 2
0x22 , 0x49 , 0x49 , 0x49 , 0x36,0, // 3
0x18 , 0x14 , 0x12 , 0x7F , 0x10,0, // 4
0x2F , 0x49 , 0x49 , 0x49 , 0x31,0, // 5
0x3C , 0x4A , 0x49 , 0x49 , 0x30,0, // 6
0x01 , 0x71 , 0x09 , 0x05 , 0x03,0, // 7
0x36 , 0x49 , 0x49 , 0x49 , 0x36,0, // 8 // 56 - 67
0x06 , 0x49 , 0x49 , 0x29 , 0x1E,0, // 9
0x00 , 0x6C , 0x6C , 0x00 , 0x00,0, // :
0x00 , 0xEC , 0x6C , 0x00 , 0x00,0, // ;
0x08 , 0x14 , 0x22 , 0x41 , 0x00,0, // <
0x24 , 0x24 , 0x24 , 0x24 , 0x24,0, // =
0x00 , 0x41 , 0x22 , 0x14 , 0x08,0, // >
0x02 , 0x01 , 0x59 , 0x09 , 0x06,0, // ?
0x3E , 0x41 , 0x5D , 0x55 , 0x1E,0, // @
0x7E , 0x09 , 0x09 , 0x09 , 0x7E,0, // A
0x7F , 0x49 , 0x49 , 0x49 , 0x36,0, // B
0x3E , 0x41 , 0x41 , 0x41 , 0x22,0, // C
0x7F , 0x41 , 0x41 , 0x41 , 0x3E,0, // D // 68 - 79
0x7F , 0x49 , 0x49 , 0x49 , 0x41,0, // E
0x7F , 0x09 , 0x09 , 0x09 , 0x01,0, // F
0x3E , 0x41 , 0x49 , 0x49 , 0x7A,0, // G
0x7F , 0x08 , 0x08 , 0x08 , 0x7F,0, // H
0x00 , 0x41 , 0x7F , 0x41 , 0x00,0, // I
0x30 , 0x40 , 0x40 , 0x40 , 0x3F,0, // J
0x7F , 0x08 , 0x14 , 0x22 , 0x41,0, // K
0x7F , 0x40 , 0x40 , 0x40 , 0x40,0, // L
0x7F , 0x02 , 0x04 , 0x02 , 0x7F,0, // M
0x7F , 0x02 , 0x04 , 0x08 , 0x7F,0, // N
0x3E , 0x41 , 0x41 , 0x41 , 0x3E,0, // O
0x7F , 0x09 , 0x09 , 0x09 , 0x06,0, // P // 80 - 91
0x3E , 0x41 , 0x51 , 0x21 , 0x5E,0, // Q
0x7F , 0x09 , 0x09 , 0x19 , 0x66,0, // R
0x26 , 0x49 , 0x49 , 0x49 , 0x32,0, // S
0x01 , 0x01 , 0x7F , 0x01 , 0x01,0, // T
0x3F , 0x40 , 0x40 , 0x40 , 0x3F,0, // U
0x1F , 0x20 , 0x40 , 0x20 , 0x1F,0, // V
0x3F , 0x40 , 0x3C , 0x40 , 0x3F,0, // W
0x63 , 0x14 , 0x08 , 0x14 , 0x63,0, // X
0x07 , 0x08 , 0x70 , 0x08 , 0x07,0, // Y
0x71 , 0x49 , 0x45 , 0x43 , 0x00,0, // Z
0x00 , 0x7F , 0x41 , 0x41 , 0x00,0, // [
0x02 , 0x04 , 0x08 , 0x10 , 0x20,0, // \ // 92 - 103
0x00 , 0x41 , 0x41 , 0x7F , 0x00,0, // ]
0x04 , 0x02 , 0x01 , 0x02 , 0x04,0, // ^
0x80 , 0x80 , 0x80 , 0x80 , 0x80,0, // _
0x00 , 0x03 , 0x07 , 0x00 , 0x00,0, // `
0x20 , 0x54 , 0x54 , 0x54 , 0x78,0, // a
0x7F , 0x44 , 0x44 , 0x44 , 0x38,0, // b
0x38 , 0x44 , 0x44 , 0x44 , 0x28,0, // c
0x38 , 0x44 , 0x44 , 0x44 , 0x7F,0, // d
0x38 , 0x54 , 0x54 , 0x54 , 0x18,0, // e
0x08 , 0x7E , 0x09 , 0x09 , 0x00,0, // f
0x18 , 0xA4 , 0xA4 , 0xA4 , 0x7C,0, // g
0x7F , 0x04 , 0x04 , 0x78 , 0x00,0, // h // 104 - 115
0x00 , 0x00 , 0x7D , 0x00 , 0x00,0, // i
0x40 , 0x80 , 0x84 , 0x7D , 0x00,0, // j
0x7F , 0x10 , 0x28 , 0x44 , 0x00,0, // k
0x00 , 0x00 , 0x7F , 0x40 , 0x00,0, // l
0x7C , 0x04 , 0x18 , 0x04 , 0x78,0, // m
0x7C , 0x04 , 0x04 , 0x78 , 0x00,0, // n
0x38 , 0x44 , 0x44 , 0x44 , 0x38,0, // o
0xFC , 0x44 , 0x44 , 0x44 , 0x38,0, // p
0x38 , 0x44 , 0x44 , 0x44 , 0xFC,0, // q
0x44 , 0x78 , 0x44 , 0x04 , 0x08,0, // r
0x08 , 0x54 , 0x54 , 0x54 , 0x20,0, // s
0x04 , 0x3E , 0x44 , 0x24 , 0x00,0, // t // 116 - 126
0x3C , 0x40 , 0x20 , 0x7C , 0x00,0, // u
0x1C , 0x20 , 0x40 , 0x20 , 0x1C,0, // v
0x3C , 0x60 , 0x30 , 0x60 , 0x3C,0, // w
0x6C , 0x10 , 0x10 , 0x6C , 0x00,0, // x
0x9C , 0xA0 , 0x60 , 0x3C , 0x00,0, // y
0x64 , 0x54 , 0x54 , 0x4C , 0x00,0, // z
//0x08 , 0x3E , 0x41 , 0x41 , 0x00,0, // {
//0x00 , 0x00 , 0x7F , 0x00 , 0x00,0, // |
//0x00 , 0x41 , 0x41 , 0x3E , 0x08,0, // }
0x02 , 0x01 , 0x02 , 0x01 ,0, 0x00}; // ~

char P[249]="";
int k=0, j=0,l=0,m=0;

int printP(void ){
	char A[41]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdef";
	for(m=0;m<40;m++){
		for(l=0;l<6;l++){
			P[7*m+l]=C[l+6*A[m]-192];
		}
	}
return 0;
}


int main(void)
{
int term =0,B,C;
DDRB=255;
DDRC=63;
DDRD=255;

printP();

while(1){
B=( B&0b01111111)|(((P[6+j]>>term)%2)<<7);
B=( B&0b10111111)|(((P[7+j]>>term)%2)<<6);
B=( B&0b11011111)|(((P[8+j]>>term)%2)<<5);
//B=( B&0b11101111)|(((P[9+j]>>term)%2)<<4);
B=( B&0b11110111)|(((P[10+j]>>term)%2)<<3);
B=( B&0b11111011)|(((P[11+j]>>term)%2)<<2);
B=( B&0b11111101)|(((P[12+j]>>term)%2)<<1);
B=( B&0b11111110)|(((P[13+j]>>term)%2)<<0);

C=( C&0b1011111)|(((P[0+j]>>term)%2)<<5);
C=( C&0b1101111)|(((P[1+j]>>term)%2)<<4);
C=( C&0b1110111)|(((P[2+j]>>term)%2)<<3);
C=( C&0b1111011)|(((P[3+j]>>term)%2)<<2);
C=( C&0b1111101)|(((P[4+j]>>term)%2)<<1);
C=( C&0b1111110)|(((P[5+j]>>term)%2)<<0);
PORTD=~(1<<term);
PORTB=B;
PORTC=C;
term++;
if(term>7)term=0;
k++;
if(k>254){k=0;j++;}
if(j>100)j=0;
//_delay_ms(10);
}
return 0;
}
