

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str1[99];
	char str2[99];
	printf("Enter the word you want to swip value of:\n");
	gets(str1);
	gets(str2);
	strcpy(str1,str2);
	printf("\n%s",str1);
	strcpy(str2,str1);
	printf("\n%s",str1);
	getch();
	return 0;
}
