// To add two numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
	int *p, *q, x, y, sum;;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	p=&x;
	q=&y;
	sum=*p+*q;
	printf("Sum is %d.",sum);
	getch();
	return 0;
}
