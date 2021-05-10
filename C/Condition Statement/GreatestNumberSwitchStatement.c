// Greater number with switch statement.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	
	printf("Enter Your Numbers\n\n");
	printf("First Number:\n");
	scanf("%d",&a);
	printf("Second Number:\n");
	scanf("%d",&b);
	
	switch(a>b)
	{
	case 0:
		printf("%d is greater then %d",b,a);
		break;
		
	case 1:
	printf("%d is greater then %d",a,b);
	break;
	
	default:
		printf("\nBoth Number are equal.\n");
	}
	getch();
	return 0;
}
