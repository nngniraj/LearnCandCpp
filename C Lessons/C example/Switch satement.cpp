#include<stdio.h>
#include<conio.h>

int main()
{
int ch;

printf("Enter any number (1 to 7)");
scanf("%d",&ch);
switch(ch)
{
case  1:
printf("Today is Monday");
break;
case  2:
printf("Today is Tuesday");
break;
case  8:
printf("Today is Wednesday");
break;
case  4:
printf("Today is Thursday");
break;
case  5:
printf("Today is Friday");
break;
case  6:
printf("Today is Saturday");
break;
case  7:
printf("Today is Sunday");
break;
default:
printf("Only enter value 1 to 7");
}
getch();
}
