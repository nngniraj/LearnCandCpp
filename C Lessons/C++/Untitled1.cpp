#include<stdio.h>
int main()
{
	
	printf("------MENU-------\n");
	printf("1.ADD\n");
	printf("2.SUBTRACT\n");
	int week;
	printf("Enter any number to choose:");
	scanf("%d",&week);
	if(week==1)
	{
		int x,y=6,sum;
		sum=x+y;
		
		printf("Sum=%d",sum);
	}
	else if(week==2)
	{
		printf("Today is Monday!!!!!");
	}
	else if(week==3)
	{
		printf("Today is Tuesday!!!");
	}
	else
	{
		printf("Enter only 1-7!!!");
	}
	return 0;
	
}
