// Nested For Loop

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("How many lines do you want ?\n");
	scanf("%d",&c);
	for(a=1;a<=c;a++)
	{
		for(b=1; b<=a; b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
