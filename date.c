
#include<stdio.h>
#include<conio.h>
void main()
{
int d,m,y;
clrscr();
printf("Enter the date:");
scanf("%d-%d-%d",&d,&m,&y);
switch(m)
{
case 1:
printf("\nJanuary");
break;
case 2:
printf("\nfebrary");
break;
case 3:
printf("\nmarch");
break;
case 4:
printf("\nApril");
break;
case 5:
printf("\n May");
break;
case 6:
printf("\n june");
break;
case 7:
printf("\n July");
break;
case 8:
printf("\n Augest");
break;
}
getch();
}
