//If Statement.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	
	printf("Enter Your Number To Check if it's less than 50:");
	scanf("%d",&a);
	if(a<50)
	{
		printf("%d is less than 50.",a);
		
	}
	if(a>50)
	{
		printf("%d is not less than 50.",a);
	}
	getche();
}
