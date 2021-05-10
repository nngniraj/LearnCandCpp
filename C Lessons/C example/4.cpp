#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("Enter the value of integer:");
	scanf("%d",&n);
	while(n>0)
	{
		fact*=n;
		--n;
	}
	printf("fact=%d",fact);
	return 0;
	
}
