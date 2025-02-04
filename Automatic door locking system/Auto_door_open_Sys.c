#include <reg51.h>
sbit sensor=P1^0;
sbit relay=P1^1;
void delay();
sbit relay2=P1^2;
void main()
{
	relay=0;
	relay2=0;
	while(1){
	if(sensor==0)		//prototype button1 end connect to I/O other end with ground
	{
		relay=1;
		relay2=0;	//motor runs clockwise  - door will open
		delay();
		relay=0;
		relay2=1;	//motor start anti-clockwise
		delay();
		relay=relay2=0;
}
}
}
void delay()
{
unsigned  int i,j;
for(i=0;i<10;i++)
for(j=0;j<60000;j++);	
}