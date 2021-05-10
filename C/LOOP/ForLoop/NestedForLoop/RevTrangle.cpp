

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("How namy line do you want ?\n");
	scanf("%d",&c);
	for(a=c;a>=1;a--)
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
