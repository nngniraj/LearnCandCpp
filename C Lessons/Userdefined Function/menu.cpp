#include<stdio.h>

#include<conio.h>

int main ()

{

int ch,r,l,w,b,h;

float area;



printf("enter 1 for area of circle\n");

printf("enter 2 for area of rectangal\n");

printf("enter 3 for area of triagle\n");

printf("enter your choice\n");

scanf("%d",&ch);

switch(ch)

{

case 1:

printf("enter radious of circle\n");

scanf("%d",&r);

area=3.14*r*r;

break;

case 2:

printf("enter lanth and width\n");

scanf("%d%d",&l,&w);

area=l*w;

break;

case 3:

printf("enter the base and hight\n");

scanf("%d%d",&b,&h);

area=.5*b*h;

break;

}

printf("area is=%f",area);

getch();

}
