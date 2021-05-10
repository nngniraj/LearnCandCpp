#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter n:");  //for iteration
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("Sum=%d",sum);
	return 0;
}
