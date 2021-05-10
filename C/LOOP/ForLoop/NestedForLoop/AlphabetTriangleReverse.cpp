// Alphabet Triangle Reverse.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	char input, value='A';
	printf("Enter a alphabet in capital letter you want to see at last:\n");
	scanf("%c",&input);
	for(a=10;a>=(input-'A'-1);a--)
	{
		for(b=1;b<=a;b++)
		{
			printf("%c  ",value);
		}
		value--;
		printf("\n");
	}
	
	getch();
	return 0;
}
