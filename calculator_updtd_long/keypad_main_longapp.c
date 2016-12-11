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
#include<string.h>
#include"lcd_lib.h"
#include<stdlib.h>
long n1,n2,res;
char len1,len2,i;
unsigned char status;

int keypad(){
	for(DDRB=1;DDRB>0;DDRB*=2){
		PORTB=~DDRB;
		_delay_us(20);
		if(PINB!=PORTB)return PINB;
	}
	return 0;
}
char A[20]="";
char B[10]="";
int main(){
	//DDRD=255;
	LCDinit();
	LCDclr();
unsigned char k=0,yes=1,n=0;
	while(1){
		k=keypad();
		if(k!=0){
			if(yes){
				yes=0;
				if(k==111){A[n]='7';n++;}
				if(k==175){A[n]='8';n++;}
				if(k==207){A[n]='9';n++;}
				if(k==215){A[n]='6';n++;}
				if(k==183){A[n]='5';n++;}
				if(k==119){A[n]='4';n++;}
				if(k==222){A[n]='3';n++;}
				if(k==190){A[n]='2';n++;}
				if(k==126){A[n]='1';n++;}
				if(k==187){A[n]='0';n++;}
				//if(k==252){n--;if(n<0)n=0;A[n]=' ';}

				if(k==250){status=250;
                 char *str=A; n1=atol(str);
                  A[n]='x';n++;len1=n;			    } //multiplication

			    if(k==235){status=235;
			    char *str=A; n1=atol(str);
			    A[n]='+';n++;len1=n;} //addition

			    if(k==243){status=243;
				char *str=A; n1=atol(str);
				A[n]='-';n++;len1=n;}//subtraction

				if(k==249){status=249;
				char *str=A; n1=atol(str);
				A[n]='/';n++;len1=n;}//division

				if(k==219){ len2=n;
                            for(i=0;i<(len2-len1);i++)B[i]=A[len1+i];
							char *str1=B;n2=atol(str1);char c[20]="";char d[20]="";
                    if(status==250)res=n1*n2;
					if(status==235)res=n1+n2;
					if(status==243)res=n1-n2;
					if(status==249)res=n1/n2;
					ltoa(res,d,10);
					sprintf(c,"Ans=%s",d);
					LCDGotoXY(0,1);
					LCDstring(c,16);}

				if(k==123){n=0;n1=0;n2=0;res=0;len1=0;len2=0;
                char s[20]="";
                for(i=0;i<len2;i++)	{A[i]=s[i];

                B[i]=s[i];
                }
                LCDclr();}



				}

			}
		else yes=1;
		LCDGotoXY(0,0);
		LCDstring(A,n);

	}
}
