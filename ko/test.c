#ifndef _STDIO_H_
#include <stdio.h>
#endif

#include "ko.h"




int main()
{
short bf [SZ]={0};

short beg=SZ-3; //start of array
short en =SZ-3; //end of array

short val;

printf("\n\nits a circular buffer\n\n");

unsigned char ch;

while(1)
{
system("clear");
printf("\nwhat do you want to do??\n");
printf("\n write a number of the action\n");
printf("\n1 is add element a new element\n");

printf("\n 2 is read the whole buffer\n");
printf("\n 3 is delete element\n");
printf("\n 4 is check if the buffer is empty\n");

printf("\n 0 for exit\n");


scanf("%ch",&ch);

bool br=0;
bool ho;
switch(ch)
{
case '1':
	system("clear");
	printf("\nwhat elemnt you want to add?\n");
	scanf("%d",&val);
	
	ad_bf(bf,&en,val);
	break;
case '2':
	system("clear");
	ar_bf(bf);
	break;
case '3':
	system("clear");
	printf("\ndeleting the frst element");
	del_bf(bf,&beg);
	
	break;
case '4':
	ho=empt(bf,beg,en);
	system("clear");
	printf("\nbuffer is:\t");
        ho==1?printf("empty\n"):printf("not empty\n");
	break;
case '0':
	br=1;
	break;
default:
	system("clear");
	printf("the action is not correct");
}



if(br)
{
printf("\n\nexiting\n");
break;

}
}





return 0;
}

