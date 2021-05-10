// To make a sipmle login form.

#include<stdio.h>
#include<conio.h>
int main()
{
	char user;
	int pass;
	printf("Enter User name\n");
	scanf("%c",&user);
	
	if(user=='a')
	{
		printf("Enter Password\n");
		scanf("%d",&pass);
		
		if(pass==1234)
		{
			printf("Login Successfull.\n");
		}
		else
		{
			printf("Password Incorrect.\n");
		}
	}
	else
	{
		printf("Username is Incorrect.\n");
	}
	getch ();
	return 0;
}
