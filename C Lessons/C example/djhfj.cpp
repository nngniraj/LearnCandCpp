#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,r,c;
	int a[10][10],b[10][10];
	printf("Enter the no of rows:");
	scanf("%d",&r);
	printf("Enter the no of columns:");
	scanf("%d",&c);
		printf("Enter the elements of first matrix:\n");
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix A is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
			if (j == c-1)
                printf("\n\n");
		}
	
	}
	getch();
}
