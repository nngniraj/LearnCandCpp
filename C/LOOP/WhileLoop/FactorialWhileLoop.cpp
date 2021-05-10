// While Loop for factorial (!).

#include<stdio.h>
#include<conio.h>
int main()
{
	int i, num, mul=1;
	printf("Enter Your number:\n");
	scanf("%d",&num);
	i=1;
	printf("\n..............................\n");
	while(i<=num)
	{
		mul*=i;
		i++;
		printf("\n\t%d\n",mul);
	}
	getch ();
	return 0;
}
