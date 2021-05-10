#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	if(n<0)
	{
		printf("%d is negative number\n",n);
	}
	if(n>0){
		printf("%d is postive number",n);
	}
//	printf("%d is postive number",n);
	return 0;
	
}
