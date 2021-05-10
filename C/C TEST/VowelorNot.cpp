// Condition Programming, 

#include<stdio.h>
#include<conio.h>
int main()
{
	char vo,co;
	printf("Enter Your Alphabet:\n");
	vo=getche();
	if(vo=='a','e','i','o','u'||vo=='A','E','I','I','O','U')
	{
		printf("\nIt is vowel.");
	}
	else
	{
		printf("\nIt is consonant.");
	}
	getch();
	return 0;
}
