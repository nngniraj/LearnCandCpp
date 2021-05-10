#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("Enter the value of a:");
	gets(a);
	printf("Enter the value of b:");
	gets(b);
	if(strcmp(a,b)==0)
	{
		printf("both are same");
	}
	else
	{
		printf("both are not same");
	}
	return 0;
}
