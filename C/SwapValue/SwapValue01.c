// To swip any two values.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	printf("Enter Value Of a & b\n");
	scanf("%d%d",&a,&b);
	a=a-b;
	b=a+b;
	a=b-a;
	
	printf("Value Of a & b after swip is a is %d & b is %d.",a,b);
	getch();
}
