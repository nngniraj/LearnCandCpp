// To print name with gets and puts.(SIngle Name)

#include<stdio.h>
#include<conio.h>
int main()
{
	char name[25], cast[25];
	printf("Enter Your Full Name:\n");
	gets(name);
	printf("The name is ");
	puts(name);
	getch();
	return 0;
}
