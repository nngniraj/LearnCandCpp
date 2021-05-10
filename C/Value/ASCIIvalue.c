//To Find ASCII Value of Character.

#include<stdio.h>
#include<conio.h>
int main()
{
	char alpha;
	int x;
	printf("Enter any character:");
	scanf("%c",&alpha);
	x=alpha;
	printf("The ASCII Value of %c is %d",alpha,x);
	getch();
}
