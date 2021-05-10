// To swip any two values in Char. "No-Can-Do"

#include<stdio.h>
#include<conio.h>
int main()
{
	char a, b;
	printf("Enter Value Of a & b\n");
	scanf("%c%c",&a,&b);
	a=a-b;
	b=a+b;
	a=b-a;
	
	printf("Value Of a & b after swip is a is %c & b is %c.",a,b);
	getch();
}
