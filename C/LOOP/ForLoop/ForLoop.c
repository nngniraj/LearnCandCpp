// For Loop

#include<stdio.h>
#include<conio.h>
int main()
{
	int num, i;
	printf("Enter The Number:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("Number %d is %d.\t",i,i);
	}
	
	getch ();
	return 0;
}
