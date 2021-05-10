// To find address of a number.

#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Enter any number you want to find address of:\n");
	scanf("%d",&x);
	printf("Address of %d is %u",x,&x);
	getch();
	return 0;
}
