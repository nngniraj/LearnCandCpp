// To print div of n natural numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num,div=1;
	printf("Enter Your Number:\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	{
		div/=i;
		printf("Division is %d.\n",div);
	}
	getch ();
	return 0;
}
