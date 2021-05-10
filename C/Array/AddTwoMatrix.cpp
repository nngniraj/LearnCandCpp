// To add two matrices.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][2], b[2][2], c[2][2],i,j;
	printf("\n----------A Matrix----------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a %d%d:\n",i+1,j+1);
			scanf("%d",&a[i][j]);
			if(j==1)
			{
				printf("\n");
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[j][i]=a[i][j];
		}
	}
	printf("\n----------B Matrix----------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a %d%d:\n",i+1,j+1);
			scanf("%d",&b[i][j]);
			if(j==1)
			{
				printf("\n");
			}
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[j][i]=a[i][j];
		}
	}
	printf("\n----------Displaying Sum----------\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][i]);
			if(j==1)
			{
				printf("\n");
			}
		}
	}
	getch();
	return 0;
}
