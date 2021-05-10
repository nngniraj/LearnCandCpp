// To multiplication two numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
	int *p, *q, x, y, mul;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	p=&x;
	q=&y;
	mul=*p**q;
	printf("Multiplication is %d.",mul);
	getch();
	return 0;
}
