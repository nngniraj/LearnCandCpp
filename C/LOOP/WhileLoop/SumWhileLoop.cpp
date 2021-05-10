// While Loop for addition.

#include<stdio.h>
#include<conio.h>
int main()
{
	int i, num, sum=0;
	printf("Enter Your number:\n");
	scanf("%d",&num);
	i=1;
	printf("\n..............................\n");
	while(i<=num)
	{
		sum+=i;
		i++;
		printf("\n\t%d\n",sum);
	}
	getch ();
	return 0;
}
