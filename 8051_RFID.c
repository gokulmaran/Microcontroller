#include<reg51.h>
sbit rs=P3^7;
sbit rw=P3^6;
sbit en=P3^5;
char count=0;
char input[12];
char ch;

void delay(unsigned int);
void cmdwrt(unsigned char);
void datawrt(unsigned char);
char rxdata(void);

void main(void)
{
unsigned char cmd[]={0x38,0x01,0x06,0x0c,0x80};
unsigned char msg[]={"RFID card number"};
unsigned char i;
TMOD=0x20;
SCON=0x50;
TH1=0xfd;
TR1=1;
for(i=0;i<5;i++){
  cmdwrt(cmd[i]);
  delay(1);
  }
  while(1){
   count=0;
   cmdwrt(0xC2);
   while(count<12){
      input[count]=rxdata();
	  count++;
	  }
	  for(i=0;i<12;i++){
	   datawrt(input[i]);
	   delay(1);
	   }
	   delay(100);
	   }
	   }
void cmdwrt(unsigned char x){
	     P1=x;
		 rs=0;
		 rw=0;
		 en=1;
		 delay(1);
		 en=0;
		 }
char rxdata(){
		  while(RI==0);
		  RI=0;
		  ch=SBUF;
		  return ch;
		  }
void delay(unsigned int z){
		   unsigned int p,q;
		   for(p=0;p<z;p++)
		   {
		   for(q=0;q<1375;q++);
		   }}
