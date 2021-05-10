// To swip value any two numbersw using user define function. (Void)

#include<stdio.h>
#include<conio.h>
void swipnum(int a, int b);

int main()
{
	int x, y;
	printf("Enter 1st number:\n");
	scanf("%d",&x);
	printf("Enter 2nd number:\n");
	scanf("%d",&y);
	swipnum(x,y);
	return 0;
}
void swipnum(int a, int b)
{
	int result;
	result=a;
	a=b;
	b=result;
	printf("\nAfter swip value of 1st number is %d and 2nd number is %d.",a,b);
}
