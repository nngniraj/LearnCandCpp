// To generate the multiplication table. (upto 10).

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	
	printf("Enter the number you want multiplication of:\n\n");
	scanf("%d",&a);
	printf("\nYour multiplication of %d upto 10 are:\n",a);
	for(b=1;b<=10;++b)
	{
		printf("\n\t%d*%d=%d\n",a,b,a*b);
	}
	getch();
	return 0;
}
