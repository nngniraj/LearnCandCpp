#include<stdio.h>
int main()
{
	int n,i,x;
	printf("enter the value of n and x:");
	scanf("%d%d",&n,&x);
	for(i=1;i<=x;++i)
	{
		printf("%d * %d=%d\n \n",n,i,n*i);
		
	}
	return 0;
}
