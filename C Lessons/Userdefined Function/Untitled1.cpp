#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter no of iteration:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i; //sum=sum +i;
	
	}
		printf("Sum=%d\n",sum);
}
