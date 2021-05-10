#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("Enter the value of a:");
	gets(a);
	strcpy(b,a);
	printf("Value of b:");
	puts(b);
	return 0;
}
