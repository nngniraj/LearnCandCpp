// To print sum of n natural numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num,fac=1;
	printf("Enter Your Number:\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		fac*=i;
		printf("Multiplication is %d.\n",fac);
	}
	getch ();
	return 0;
}
