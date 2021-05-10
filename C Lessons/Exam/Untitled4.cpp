#include<stdio.h>
int main()
{
	int i,j,k;
	char ch='A';
	printf("Enter the alphabet:");
	scanf("%c",&k);
	for(i=1;i<='A';i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",ch);
			ch++;
		}
		ch='A';
		printf("\n\n");
	}
	return 0;
}
