// Nested For Loop to print numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c;
	printf("How namy line do you want ?\n");
	scanf("%d",&c);
	for(a=1;a<=c;a++)
	{
		for(b=1; b<=a; b++)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
	
	getch();
	return 0;
}
