// To print name with gets and puts.

#include<stdio.h>
#include<conio.h>
int main()
{
	char name[25], cast[25];
	printf("Enter Your Full Name:\n");
	gets(name);
	printf("Enter Your Firends Full Name:\n");
	gets(cast);
	printf("Your name is ");
	puts(name);
	printf("Your Friends name is ");
	puts(cast);
	//printf(".");
	getch();
	return 0;
}
