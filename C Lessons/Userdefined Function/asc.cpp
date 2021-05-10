#include<stdio.h>
int main()
{
	int  num[30],i,j,n,a;
	printf("Enter n:");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]<num[j])
			{
			a=num[i];
			num[i]=num[j];
			num[j]=a;	
			}
		}
	}
	printf("\n Ascending Orders are:\n");
	for(i=0;i<n;++i)
	{
		printf("%d\n",num[i]);
	}
}
