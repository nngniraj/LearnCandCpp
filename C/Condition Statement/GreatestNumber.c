// To check the greatest number among two numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	
	printf("Enter Your Numbers.\n\n");
	printf("Enter Your First number:\n");
	scanf("%d",&a);
	printf("Enter Your Second number:\n");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("%d is greater %d",a,b);
	}
	else{
		printf("%d is  greater than %d",b,a);
	}
	
	getch();
	return 0;
	
}
