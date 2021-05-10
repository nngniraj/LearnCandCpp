#include<stdio.h>
int main()
{
	char c;
	printf("Enter a sentence:");
	scanf("%c",&c);
	if(c!='\n')
	{
		printf("%c",c);
	}
}
