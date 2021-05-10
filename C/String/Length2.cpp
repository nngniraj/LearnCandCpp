// To find out length.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char name[99999];
	int length,a,b,c;
	printf("Enter Words with just one space.\n");
	printf("Enter the word you want to find the length of:\n");
	gets(name);
	length=strlen(name);
	printf("length=%d",length);
	a=length-1;
	printf("\nYour Actual Length of given sentence without reading space is %d.",a);
	getch();
	return 0;
}
