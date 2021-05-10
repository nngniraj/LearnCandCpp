// To display char from A to Z.

#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
	
	printf("\tAll Alphabet Are:\n\n");

    for(a='A';a<='Z';++a)
       printf("\t%c\n", a);
       getch();
	   return 0;
}
