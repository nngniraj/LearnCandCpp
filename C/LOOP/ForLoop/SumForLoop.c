// To print sum of n natural numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num,sum=0,i;
	printf("Enter Your Number:\n");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		sum+=i;
		printf("Sum is %d.\n",sum);
	}
	getch ();
	return 0;
}
