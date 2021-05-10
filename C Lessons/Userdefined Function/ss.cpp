#include<stdio.h>
int main()
{
	int i,n,sum=0,a;
	printf("Enter the n:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		a=n%10;
		sum+=a;
		n/=10;
	}
	printf("sum=%d",sum);
}
