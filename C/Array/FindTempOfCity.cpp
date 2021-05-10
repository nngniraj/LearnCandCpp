// To findout day and temperature.

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,temp[2][7];
	for(i=0;i<2;i++)
	{
		for(j=0;j<7;j++)
		{
			printf("city %d, Day %d: ",i+1,j+1);
			scanf("%d",&temp[i][j]);
		}
	}
	printf("\n-----Digital Value-----\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<7;j++)
		{
			printf("\nCity %d, Day %d is %d.\n",i+1,j+1,temp[i][j]);
		}
	}
}
