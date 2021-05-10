// To find the sum of n numbers using array.

#include<stdio.h>
#include<conio.h>
int main()
{
	int marks[5],i,sum=0,num;
	printf("Enter the  number:\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter number %d:\n",i+1);
		scanf("%d",&marks[i]);
		sum+=marks[i];
	}
	printf("\n\nSum of all given number is %d.",sum);
	getch();
	return 0;
}
