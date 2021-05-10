// Basic Programming, 2. All arithmetic operator

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	printf("Enter Your Numbers.\n\n");
	printf("Enter First Number:\n");
	scanf("%d",&a);
	printf("Enter Second Number:\n");
	scanf("%d",&b);
	
	printf("\n\nAll Arithmetic Operator are:\n\n\n");
	printf("Addition of %d and %d is %d\n\n",a,b,a+b);
	printf("Subtraction of %d and %d is %d\n\n",a,b,a-b);
	printf("Multiplication of %d and %d is %d\n\n",a,b,a*b);
	printf("Dividion of %d and %d is %d\n\n",a,b,a/b);
	
	getch();
	return 0;
}
