// To swip any two values.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, temp;
	printf("Enter Value Of a & b\n");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("Value Of a & b after swip is a=%d & b=%d.",a,b);
	getch();
}
