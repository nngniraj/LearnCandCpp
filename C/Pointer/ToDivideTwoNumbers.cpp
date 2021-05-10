// To divide two numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
	int *p, *q, x, y, div;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	p=&x;
	q=&y;
	div=(*p)/(*q);
	printf("Division is %d.",div);
	getch();
	return 0;
}
