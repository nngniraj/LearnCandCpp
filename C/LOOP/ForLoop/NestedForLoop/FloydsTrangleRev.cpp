// To draw a pattern of rev. floyd's trangle.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c;
	printf("From which number you want it to start ?\n");
	scanf("%d",&c);
	for(a=10;a>=1;a--)
	{
		for(b=1;b<=a;b++)
		{
			printf("%d ",c);
			c--;
		}
		printf("\n");
	}
	getch();
	return 0;
}
