// Basic Programming, 1. To add two numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c;
	printf("To add two numbers:\n\n");
	printf("Enter first number:\n");
	scanf("%d",&a);
	printf("Enter second number:\n");
	scanf("%d",&b);
	c=a+b;
	printf("Sum of your two number is %d.",c);
	
	getch();
	return 0;
}
