// Basic Programming, 3. Find a perimeter of rectangle.

#include<stdio.h>
#include<conio.h>
int main()
{
	int l, b, p;
	printf("To find perimeter of rectangle:\n\n");
	printf("Entert length:\n");
	scanf("%d",&p);
	printf("\n\nEntert Breadth:\n");
	scanf("%d",&b);
	p=2*(l+b);
	printf("\n\nPerimeter of rectangle is %d.",p);
	
	getch();
	return 0;
}
