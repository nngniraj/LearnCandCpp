// All calculation in one.

#include<stdio.h>
#include<conio.h>
int main()
{
	int *p, *q, x, y, sum,sub,mul,div;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter y: ");
	scanf("%d",&y);
	p=&x;
	q=&y;
	sum=(*p)+(*q);
	sub=(*p)-(*q);
	mul=(*p)*(*q);
	div=(*p)/(*q);
	printf("\n\nAddition is %d.\n\n",sum);
	printf("Subtraction is %d.\n\n",sub);
	printf("Multiplication is %d.\n\n",mul);
	printf("Division is %d.\n\n",div);
	getch();
	return 0;
}
