/*
 * keypad_main.c
 *
 *  Created on: Jul 13, 2010
 *      Author: Mukul
 **************************************************
 Simple Keypad:
 Please notedown number for each key
 ************************************************/
#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>
#include"lcd_lib.h"
int keypad(){
	for(DDRD=1;DDRD>0;DDRD*=2){
		PORTD=~DDRD;
		_delay_us(20);
		if(PIND!=PORTD)return PIND;
	}
	return 0;
}
char A[20]="";
char B[20]="";
int main(){
	//DDRD=255;
	LCDinit();
	LCDclr();
	char k=0,yes=1,n=0;
	while(1){
		k=keypad();
		if(k!=0){
			if(yes){
				yes=0;
				if(k==111){A[n]='A';n++;}
				if(k==175){A[n]='B';n++;}
				if(k==207){A[n]='C';n++;}
				if(k==235){A[n]='D';n++;}
				if(k==119){A[n]='E';n++;}
				if(k==183){A[n]='F';n++;}
				if(k==215){A[n]='G';n++;}
				if(k==243){A[n]='H';n++;}
				if(k==126){A[n]='I';n++;}
				if(k==190){A[n]='J';n++;}
				if(k==222){A[n]='K';n++;}
				if(k==250){A[n]='L';n++;}
				if(k==123){A[n]='M';n++;}
				if(k==187){A[n]='N';n++;}
				if(k==219){A[n]='O';n++;}
				if(k==249){A[n]='P';n++;}
				if(k==95){A[n]='Q';n++;}
				if(k==159){A[n]='R';n++;}
				if(k==221){A[n]='S';n++;}
				if(k==238){A[n]='T';n++;}
				if(k==63){A[n]='U';n++;}
				if(k==189){A[n]='V';n++;}
				if(k==231){A[n]='W';n++;}
				if(k==246){A[n]='X';n++;}
				if(k==125){A[n]='Y';n++;}
				if(k==237){A[n]='Z';n++;}
				if(k==245){LCDclr();}
			}
		}
		else yes=1;
		LCDGotoXY(0,0);
		LCDstring(A,n);
	//sprintf(B,"%4d%4d%4d%4d",keypad(),PORTD,DDRD,PIND);
	//LCDGotoXY(0,1);
	//LCDstring(B,16);
	}
}
