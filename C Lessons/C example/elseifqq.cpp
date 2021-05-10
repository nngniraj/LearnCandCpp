#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("\n\t[1] ADD");
	printf("\n\t[2] EDIT");
	printf("\n\t[3] DELETE");
	printf("\n\t[4] EXIT");
	printf("\nEnter your choice:");
	scanf("%d",&n);
	if(n==1)
	{
		printf("ADD Option Selected");
	}
	else if(n==2)
	{
		printf("Edit Option Selected");
		
	}
	else if(n==3)
	{
		printf("Delete Option Selected");	
	}
	else if(n==4)
	{
		printf("Exit option Selected");
	}
	else
	{
		printf("Enter choice between 1-4");
	}
	getch();
}
