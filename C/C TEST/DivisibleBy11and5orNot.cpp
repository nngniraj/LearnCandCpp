// Condition Programming, 2. To check if number is divisible by 5 & 11.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter the number to check if it's divisible by 11 and 5:\n");
	scanf("%d",&a);
	
	if(a%5==0 && a%11==0)
	{
		printf("\n\n%d is divisible by both 5 & 11.",a);
	}
	else
	{
		printf("\n\n%d is not divisible by both 5 & 11.",a);
	}
	getch();
	return 0;
}
