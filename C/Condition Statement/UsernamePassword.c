#include<stdio.h>
#include<conio.h>
int main()
{
	char user;
	int pass;
	printf("\tEnter Your Username:\n");
	scanf("%c",&user);
	
	if(user=='a')
	{
		printf("\tYour Password Here:\n");
		scanf("%d",&pass);
		
		if(pass==1948)
		{
			printf("\tLogin Successfull.\n");
		}
		else
		{
			printf("\n\tPassword You Entered is Incorrect.\n");
		}
	}
	else
	{
		printf("\n\tUsername You Entered is Incorrect.\n");
	}
	getch();
	return 0;
}
