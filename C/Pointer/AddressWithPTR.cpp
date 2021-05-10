// To find address of a number using ptr.

#include<stdio.h>
#include<conio.h>
int main()
{
	int *ptr,a;
	a=5;
	printf("The value of a is %d.\n",a);
	printf("The address of a is %u.\n",&a);
	ptr=&a;
	printf("The value of ptr is %d.\n",*ptr);
	printf("The address of ptris %u.\n",ptr);
	*ptr=11;
	printf("The value of a is %d.\n",a);
	printf("The address of a is %u.\n",&a);
	a=12;
	printf("The value of ptr is %d.\n",*ptr);
	printf("The address of ptr is %u.\n",ptr);
	getch();
	return 0;
}
