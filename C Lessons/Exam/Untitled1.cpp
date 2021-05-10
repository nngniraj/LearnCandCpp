#include<stdio.h>
int main()
{
	int marks[5],i,num;
	printf("Enter no of iteration:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter number%d: ",i+1);
		scanf("%d",&marks[i]);
	}
	printf("\n----Displaying Marks:----\n");
	
	for(i=0;i<num;i++)
	{
		printf("Marks are : %d\n ",marks[i]);
		
	}
	return 0;
}
