#include<stdio.h>
int main()
{
int n,sum=0;
do
{
		printf("Enter any number:");
		scanf("%d",&n);
		sum+=n;
}
while(n!=0);

printf("Total Sum=%d",sum);
}
