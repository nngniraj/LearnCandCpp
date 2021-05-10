// To subtract two numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
	int *p, *q, x, y, sub;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	p=&x;
	q=&y;
	sub=*p-*q;
	printf("Subtraction is %d.",sub);
	getch();
	return 0;
}
