// To find out length.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char name[99999];
	int length;
	printf("Enter the word you want to find the length of:\n");
	gets(name);
	length=strlen(name);
	printf("length=%d",length);
	getch();
	return 0;
}
