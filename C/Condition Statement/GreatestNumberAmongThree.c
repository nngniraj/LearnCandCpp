// To check the greatest number among three numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c;
	
	printf("Enter Your Numbers.\n\n");
	printf("Enter Your First number:\n");
	scanf("%d",&a);
	printf("Enter Your Second number:\n");
	scanf("%d",&b);
	printf("Enter Your Third number:\n");
	scanf("%d",&c);
	
	if(a>b&a>c)
	{
		printf("\n\n%d is greater %d and %d",a,b,c);
	}
	if(b>a&b>c)
	{
		printf("\n\n%d is  greater than %d and %d",b,a,c);
	}
	if(c>a&c>b)
	{
		printf("\n\n%d is  greater than %d and %d",c,a,b);
	}
	
	getch();
	return 0;
	
}
